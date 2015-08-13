//
//  StartUI.h
//  MazeJump
//
//
//

#ifndef __MazeJump__StartUI__
#define __MazeJump__StartUI__

#include "cocos2d.h"
#include "BasePopUpUI.h"

class StarPopUpUI : public BasePopUpUI
{
protected:
    StarPopUpUI();
    virtual ~StarPopUpUI();
    virtual bool init() ;
public:
    virtual void onEnter() override;
    virtual void onExit() override;
    static StarPopUpUI* create();
    void onPlayGame(Ref* ref);
    void onResumeGame(Ref* ref);
    void onHidePop();
    
private:
    void onGoldChange(cocos2d::EventCustom* sender);
    void onHeartChange(cocos2d::EventCustom* sender);
    cocos2d::ui::Text* heartTv;
    cocos2d::ui::Text* goldTv;
    cocos2d::ui::Text* lastScoreView;
    cocos2d::ui::Text* bestscoreView;
    bool isContinue;
};

#endif /* defined(__MazeJump__StartUI__) */