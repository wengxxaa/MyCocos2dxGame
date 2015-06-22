//
//  MenuUI.h
//  TinyFlare
//
//  Created by wang haibo on 15/4/15.
//
//

#ifndef __TinyFlare__MenuUI__
#define __TinyFlare__MenuUI__

#include "cocos2d.h"
#include "ui/CocosGUI.h"
class MenuUI : public cocos2d::ui::Layout
{
protected:
    MenuUI();
    virtual ~MenuUI();
    virtual bool init() override;
public:
    static MenuUI* create();
private:
    void pressPlayGameBtn(Ref* p,TouchEventType eventType);
    void pressRemoveADSBtn(Ref* p,TouchEventType eventType);
    //void pressRankBtn(Ref* p,TouchEventType eventType);
    //void pressShareBtn(Ref* p,TouchEventType eventType);
    void pressRestoreBtn(Ref* p,TouchEventType eventType);
    void pressHelpBtn(Ref* p,TouchEventType eventType);
    
    void onKeyReleased(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event *unused_event);
    
    virtual void updateGoodBalance(cocos2d::EventCustom *event);
private:
    cocos2d::ui::Button*     m_pPlayGameBtn;
    cocos2d::ui::Button*     m_pRemoveADSBtn;
//    cocos2d::ui::Button*     m_pRankBtn;
//    cocos2d::ui::Button*     m_pShareBtn;
    cocos2d::ui::Button*     m_pHelpBtn;
    cocos2d::ui::Button*     m_pRestoreBtn;
    
    cocos2d::ui::ImageView*     m_pMenuBg;
    cocos2d::ui::TextBMFont*    m_pGameTitle;
    cocos2d::ui::Text*          m_pPlayText;
    
    cocos2d::EventListener *goodBalanceChangedHandler;
};

#endif /* defined(__TinyFlare__MenuUI__) */
