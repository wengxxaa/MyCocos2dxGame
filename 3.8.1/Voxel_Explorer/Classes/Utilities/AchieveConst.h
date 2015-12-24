//
//  AchieveConst.h
//  Voxel_Explorer
//
//  Created by 创李 on 15/12/14.
//
//

#ifndef AchieveConst_h
#define AchieveConst_h

#include "cocos2d.h"

const std::vector<std::string> STATIST_TYPE_NAME = {
    "ST_MONSTER_RAT",             ///老鼠
    "ST_MONSTER_BAT",             ///蝙蝠
    "ST_MONSTER_SNAKE",           ///蛇
    "ST_MONSTER_SPIDER",          ///蜘蛛
    "ST_MONSTER_SLIME",           ///史莱姆
    "ST_MONSTER_ALLIP",           ///怨魂
    "ST_MONSTER_PRISONER",        ///囚犯
    "ST_MONSTER_PRISONGUARD",     ///监狱守卫
    "ST_MONSTER_TORTURE",         ///拷问者
    "ST_MONSTER_MOB",             ///暴徒
    "ST_MONSTER_BELIEVER",        ///信徒
    "ST_MONSTER_GATEKEEPER",      ///看门人
    "ST_MONSTER_APOLOGIST",       ///辩护者
    "ST_MONSTER_ADJUDICATOR",     ///审判者
    "ST_MONSTER_PRIEST",          ///牧师
    "ST_MONSTER_DEATHMINER",      ///死亡矿工
    "ST_MONSTER_KOBOLD",          ///狗头人
    "ST_MONSTER_OOZE",            ///软泥怪
    "ST_MONSTER_SHADOW",          ///阴影怪
    "ST_MONSTER_ANKHEG",          ///掘地虫
    "ST_MONSTER_WOLF",            ///狼
    "ST_MONSTER_BEAR",            ///熊
    "ST_MONSTER_GOBLIN",          ///地精
    "ST_MONSTER_DINOSAUR",        ///恐龙
    "ST_MONSTER_GNOLL",           ///豺狼人
    "ST_MONSTER_SKELETON",        ///骷髅
    "ST_MONSTER_ZOMBIE",          ///僵尸
    "ST_MONSTER_GARGOYLE",        ///石像鬼
    "ST_MONSTER_GHOST",           ///幽灵
    "ST_MONSTER_GHOUL",           ///食尸鬼
    
    "ST_ITEM_KEY_COPPER",       ///铜宝箱钥匙
    "ST_ITEM_KEY_SILVER",             ///银宝箱钥匙
    "ST_ITEM_KEY_GOLD",               ///金宝箱钥匙
    "ST_ITEM_KEY_BOSS",               ///BOSS房间钥匙
    "ST_ITEM_KEY_ROOM",               ///普通房间钥匙
    "ST_ITEM_SCROLL_INDENTIFY",                    ////辨识卷轴 Scroll of Identify
    "ST_ITEM_SCROLL_TELEPORT",                     ////传送卷轴 Scroll of Random Teleport
    "ST_ITEM_SCROLL_SPEED",                        ////速度卷轴 Scroll of Speed
    "ST_ITEM_SCROLL_STEALTH",                      ////隐身卷轴 Scroll of Stealth
    "ST_ITEM_SCROLL_STRONGER",                     ////强壮卷轴 Scroll of Stronger
    "ST_ITEM_SCROLL_DESTINY",                      ////命运卷轴 Scroll of Destiny
    "ST_ITEM_POTION_MINORHEALTH",                  ///小治疗药水 Minor Health Potion
    "ST_ITEM_POTION_LESSERHEALTH",                 ///轻微治疗药水 Lesser Health Potion
    "ST_ITEM_POTION_HEALTH",                       ///治疗药水 Health Potion
    "ST_ITEM_POTION_MINORMANA",                    ///小魔法药水 Minor Mana Potion
    "ST_ITEM_POTION_LESSERMANA",                   ///轻微魔法药水 Lesser Mana Potion
    "ST_ITEM_POTION_MANA",                         ///魔法药水 Mana Potion
    "ST_ITEM_POTION_MINORRECOVERY",                ///小恢复药水 Minor Recovery Potion
    "ST_ITEM_POTION_LESSERRECOVERY",               ///轻微恢复药水 Lesser Recovery Potion
    "ST_ITEM_POTION_RECOVERY",                     ///恢复药水 Recovery Potion
    "ST_ITEM_POTION_DETOXIFICATION",               ///解毒药水 Detoxification Potion
    "ST_ITEM_POTION_SPECIFIC",                     ///特效药水 Specific Potion
    "ST_ITEM_POTION_HEALING",                      ///治愈药水 Healing Potion
    "ST_ITEM_POTION_UNIVERSAL",                    ///万能药水 Universal Potion
    
    "ST_TRIGGER_TOXIC_TRAP",                       ///中毒陷阱
    "ST_TRIGGER_FIRE_TRAP",                        ///火焰陷阱
    "ST_TRIGGER_PARALYTIC_TRAP",                   ///麻痹陷阱
    "ST_TRIGGER_GRIPPING_TRAP",                    ///夹子陷阱
    "ST_TRIGGER_SUMMONING_TRAP",                   ///召唤陷阱
    "ST_TRIGGER_WEAK_TRAP",                        ///虚弱陷阱
    
    "ST_DEAD_MONSTER_ATTACK",
    "ST_DEAD_TRIGGER_GRIPPING_TRAP",
    "ST_DEAD_BUFFER_FIRE",
    "ST_DEAD_BUFFER_POISONING",
    
    
    "ST_TOTAL_COPPER",
    "ST_TOTAL_COST_COPPER",
    "ST_TOTAL_STEP",
    "ST_TOTAL_MONSTER_KILL",
    "ST_TOTAL_SEARCH_HIDE_INFO",
    "ST_TOTAL_USE_KEY",
    "ST_TOTAL_USE_SCROLL",
    "ST_TOTAL_USE_POTION",
    "ST_TOTAL_CRITICAL",
    "ST_TOTAL_DODGE",
    "ST_TOTAL_BLOCK",
    "ST_TOTAL_TRIGGER",
    "ST_TOTAL_ROLE_DEAD",
    "ST_TOTAL_CHEST_COPPER",
    "ST_TOTAL_CHEST_SILVER",
    "ST_TOTAL_CHEST_GOLD",
    "ST_TOTAL_JAR",

};

enum eStatistType{
    ST_MONSTER_RAT=0,             ///老鼠
    ST_MONSTER_BAT,             ///蝙蝠
    ST_MONSTER_SNAKE,           ///蛇
    ST_MONSTER_SPIDER,          ///蜘蛛
    ST_MONSTER_SLIME,           ///史莱姆
    ST_MONSTER_ALLIP,           ///怨魂
    ST_MONSTER_PRISONER,        ///囚犯
    ST_MONSTER_PRISONGUARD,     ///监狱守卫
    ST_MONSTER_TORTURE,         ///拷问者
    ST_MONSTER_MOB,             ///暴徒
    ST_MONSTER_BELIEVER,        ///信徒
    ST_MONSTER_GATEKEEPER,      ///看门人
    ST_MONSTER_APOLOGIST,       ///辩护者
    ST_MONSTER_ADJUDICATOR,     ///审判者
    ST_MONSTER_PRIEST,          ///牧师
    ST_MONSTER_DEATHMINER,      ///死亡矿工
    ST_MONSTER_KOBOLD,          ///狗头人
    ST_MONSTER_OOZE,            ///软泥怪
    ST_MONSTER_SHADOW,          ///阴影怪
    ST_MONSTER_ANKHEG,          ///掘地虫
    ST_MONSTER_WOLF,            ///狼
    ST_MONSTER_BEAR,            ///熊
    ST_MONSTER_GOBLIN,          ///地精
    ST_MONSTER_DINOSAUR,        ///恐龙
    ST_MONSTER_GNOLL,           ///豺狼人
    ST_MONSTER_SKELETON,        ///骷髅
    ST_MONSTER_ZOMBIE,          ///僵尸
    ST_MONSTER_GARGOYLE,        ///石像鬼
    ST_MONSTER_GHOST,           ///幽灵
    ST_MONSTER_GHOUL,           ///食尸鬼
    
    ST_ITEM_KEY_COPPER,       ///铜宝箱钥匙
    ST_ITEM_KEY_SILVER,             ///银宝箱钥匙
    ST_ITEM_KEY_GOLD,               ///金宝箱钥匙
    ST_ITEM_KEY_BOSS,               ///BOSS房间钥匙
    ST_ITEM_KEY_ROOM,               ///普通房间钥匙
    ST_ITEM_SCROLL_INDENTIFY,                    ////辨识卷轴 Scroll of Identify
    ST_ITEM_SCROLL_TELEPORT,                     ////传送卷轴 Scroll of Random Teleport
    ST_ITEM_SCROLL_SPEED,                        ////速度卷轴 Scroll of Speed
    ST_ITEM_SCROLL_STEALTH,                      ////隐身卷轴 Scroll of Stealth
    ST_ITEM_SCROLL_STRONGER,                     ////强壮卷轴 Scroll of Stronger
    ST_ITEM_SCROLL_DESTINY,                      ////命运卷轴 Scroll of Destiny
    ST_ITEM_POTION_MINORHEALTH,                  ///小治疗药水 Minor Health Potion
    ST_ITEM_POTION_LESSERHEALTH,                 ///轻微治疗药水 Lesser Health Potion
    ST_ITEM_POTION_HEALTH,                       ///治疗药水 Health Potion
    ST_ITEM_POTION_MINORMANA,                    ///小魔法药水 Minor Mana Potion
    ST_ITEM_POTION_LESSERMANA,                   ///轻微魔法药水 Lesser Mana Potion
    ST_ITEM_POTION_MANA,                         ///魔法药水 Mana Potion
    ST_ITEM_POTION_MINORRECOVERY,                ///小恢复药水 Minor Recovery Potion
    ST_ITEM_POTION_LESSERRECOVERY,               ///轻微恢复药水 Lesser Recovery Potion
    ST_ITEM_POTION_RECOVERY,                     ///恢复药水 Recovery Potion
    ST_ITEM_POTION_DETOXIFICATION,               ///解毒药水 Detoxification Potion
    ST_ITEM_POTION_SPECIFIC,                     ///特效药水 Specific Potion
    ST_ITEM_POTION_HEALING,                      ///治愈药水 Healing Potion
    ST_ITEM_POTION_UNIVERSAL,                    ///万能药水 Universal Potion
    
    ST_TRIGGER_TOXIC_TRAP,                       ///中毒陷阱
    ST_TRIGGER_FIRE_TRAP,                        ///火焰陷阱
    ST_TRIGGER_PARALYTIC_TRAP,                   ///麻痹陷阱
    ST_TRIGGER_GRIPPING_TRAP,                    ///夹子陷阱
    ST_TRIGGER_SUMMONING_TRAP,                   ///召唤陷阱
    ST_TRIGGER_WEAK_TRAP,                        ///虚弱陷阱
    
    ST_DEAD_MONSTER_ATTACK,
    ST_DEAD_TRIGGER_GRIPPING_TRAP,
    ST_DEAD_BUFFER_FIRE,
    ST_DEAD_BUFFER_POISONING,
    
    
    ST_TOTAL_COPPER,
    ST_TOTAL_COST_COPPER,
    ST_TOTAL_STEP,
    ST_TOTAL_MONSTER_KILL,
    ST_TOTAL_SEARCH_HIDE_INFO,
    ST_TOTAL_USE_KEY,
    ST_TOTAL_USE_SCROLL,
    ST_TOTAL_USE_POTION,
    ST_TOTAL_CRITICAL,
    ST_TOTAL_DODGE,
    ST_TOTAL_BLOCK,
    ST_TOTAL_TRIGGER,
    ST_TOTAL_ROLE_DEAD,
    ST_TOTAL_CHEST_COPPER,
    ST_TOTAL_CHEST_SILVER,
    ST_TOTAL_CHEST_GOLD,
    ST_TOTAL_JAR,
    ST_TOTAL_ROLE_LEVEL,
    
    ST_MAX
    
};
const std::vector<std::string> ACHIEVEMENT_DATAIL_TYPE_NAME = {
    "ADT_KILL_FIRST",
    "ADT_PEROPLE_CUT_HUNDRED",
    "ADT_BLOOD_SUPPRESS",
    "ADT_KILLER",
    "ADT_PAST_HOPE",
    "ADT_INCENDIES",
    "ADT_DIE_UNNATURAL",
    "ADT_MARATHON",
    "ADT_WALKING_DEAD",
    "ADT_FINAL_DESTINATION",
    "ADT_WEALTHY_MEN",
    "ADT_UPSTART"                
    
};
enum eAchievementDetailType
{
    ADT_UNKOWN=-1,
    ADT_KILL_FIRST,           //第一滴血
    ADT_PEROPLE_CUT_HUNDRED,  //百人斩
    ADT_BLOOD_SUPPRESS,       //血腥镇压
    ADT_KILLER,               //杀手
    ADT_PAST_HOPE,            //无可救药
    ADT_INCENDIES,            //烈火焚身
    ADT_DIE_UNNATURAL,        //死于非命
    ADT_MARATHON,             //马拉松
    ADT_WALKING_DEAD,         //行尸走肉
    ADT_FINAL_DESTINATION,    //死神来了
    ADT_WEALTHY_MEN,          //有钱人
    ADT_UPSTART,               //暴发户
    ADT_COUNT
};

#endif /* AchieveConst_h */
