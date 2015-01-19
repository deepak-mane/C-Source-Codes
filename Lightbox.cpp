#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add your codes below...

    _bgLayer = LayerColor::create(Color4B::WHITE, visibleSize.width, visibleSize.height);
    _bgLayer->setTag(1);
    _bgLayer->setTouchEnabled(true);
    _bgLayer->setSwallowsTouches(true);
    this->addChild(_bgLayer, 1);

    _popUp = Sprite::create("HelloWorld.png");
    _popUp->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2));
    _bgLayer->addChild(_popUp, 1);

    _close = MenuItemImage::create("close.png", "close.png", CC_CALLBACK_1(HelloWorld::closeButton, this));
    _close->setAnchorPoint(Vec2::ANCHOR_TOP_RIGHT);
    _close->setPosition(Vec2(visibleSize.width/2 + _popUp->getContentSize().width/2,
    		visibleSize.height/2 + _popUp->getContentSize().height/2));

    auto menu = Menu::create(_close, nullptr);
    menu->setPosition(Vec2::ZERO);
    _bgLayer->addChild(menu, 2);

    auto testSprite = Sprite::create("CloseNormal.png");
    testSprite->setPosition(Vec2(visibleSize.width/4, visibleSize.height/4));
    this->addChild(testSprite, 4);

    auto listener = EventListenerTouchOneByOne::create();

    listener->onTouchBegan = CC_CALLBACK_2(HelloWorld::onTouchBegan, this);
    listener->onTouchMoved = CC_CALLBACK_2(HelloWorld::onTouchMoved, this);
    listener->onTouchEnded = CC_CALLBACK_2(HelloWorld::onTouchEnded, this);

    _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);

    this->setKeypadEnabled(true);
    return true;
}

void HelloWorld::closeButton(cocos2d::Ref *pSender)
{
	if(_flag == true) // for one time checking
	{
		auto menuItem = dynamic_cast <MenuItem *> (pSender);

		auto parent = menuItem->getParent();
		auto grandParent = parent->getParent();

		this->removeChild(grandParent, true);
		_flag = false;
	}
}

bool HelloWorld::onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event)
{
	CCLOG("Touch Began");

	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	if(_flag == true)
	{
		auto touchX = touch->getLocation().x;
		auto touchY = touch->getLocation().y;

		auto exp1 = visibleSize.width/2 - _popUp->getContentSize().width/2;
		auto exp2 = visibleSize.width/2 + _popUp->getContentSize().width/2;

		auto exp3 = visibleSize.height/2 - _popUp->getContentSize().height/2;
		auto exp4 = visibleSize.height/2 + _popUp->getContentSize().height/2;

		if( (touchX > exp1 && touchX < exp2) && (touchY > exp3 && touchY < exp4) )
		{
			CCLOG("INTERNALLY TOUCHED");
			return false;
		}
		else
		{
			CCLOG("EXTERNALLY TOUCHED");
			return true;
		}
	}
	else
		return true;
}

void HelloWorld::onTouchMoved(cocos2d::Touch *touch, cocos2d::Event *event)
{
	CCLOG("Touch Moved");
}

void HelloWorld::onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event)
{
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	if(_flag) // for one time checking
	{
		this->removeChildByTag(1, true);
		CCLOG("removed child");
		_flag = false;
	}

	CCLOG("Touch Ended");
}

void HelloWorld::onKeyReleased(cocos2d::EventKeyboard::KeyCode keycode, cocos2d::Event *event)
{
	Director::getInstance()->end();
}
