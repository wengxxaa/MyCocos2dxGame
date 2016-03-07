//
//  RoleLayer.hpp
//  Voxel_Explorer
//
//  Created by 创李 on 15/11/27.
//
//

#ifndef RoleLayer_hpp
#define RoleLayer_hpp

#include "WrapperUILayer.h"
#include "PickableItemProperty.hpp"
class BagMangerLayerUI;

class RoleLayer :public WrapperUILayer {
    RoleLayer();
    
public:
    virtual ~RoleLayer();
    CREATE_FUNC(RoleLayer);
    virtual bool initUi() override;
    virtual bool addEvents() override;
    virtual void refreshUIView()override;
private:
    void updateRoleProp();
    void updateEquipQuality(cocos2d::ui::ImageView* icon,PICKABLEITEM_QUALITY quality);
    void updateEquipProp();
    void onClickShop(Ref*);
    void onClickClose(Ref*);
    void onClickEquipWeapon(Ref* ref);
    void onClickEquipArmor(Ref* ref);
    void onClickEquipOrnament(Ref* ref);
    void onClickEquipSecondWeapon(Ref* ref);
    void showEquipItemPopup(int itemId);
    int  getIntegerDigit(int source);
private:
    BagMangerLayerUI* m_pEquipFrame;
    cocos2d::ui::Button* m_pBtnClose;
    cocos2d::ui::ImageView* m_pWeaponUi;
    cocos2d::ui::ImageView* m_pArmorUi;
    cocos2d::ui::ImageView* m_pOrnamentUi;
    cocos2d::ui::ImageView* m_pSecondWeaponUi;
    cocos2d::ui::ImageView* m_pShopBtn;
    
    cocos2d::ui::TextBMFont*  m_pRoleLevel;
    cocos2d::ui::TextBMFont*  m_pRoleHp;
    cocos2d::ui::TextBMFont*  m_pRoleMp;
    cocos2d::ui::TextBMFont*  m_pRoleAttack;
    cocos2d::ui::TextBMFont*  m_pRoleDefense;
    cocos2d::ui::TextBMFont*  m_pRoleExp;
    cocos2d::ui::TextBMFont*  m_pRoleMargicFind;
    cocos2d::ui::TextBMFont*  m_pRoleCriticalStrike;
    cocos2d::ui::TextBMFont*  m_pRoleDodge;
    cocos2d::ui::TextBMFont*  m_pRoleBlock;
    cocos2d::ui::TextBMFont*  m_pRoleLightDis;
    cocos2d::ui::TextBMFont*  m_pRoleSearchDis;
    

};
#endif /* RoleLayer_hpp */
