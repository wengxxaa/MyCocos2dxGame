//
//  ActorFactory.h
//  Tone_Skipper
//
//  Created by wang haibo on 15/9/7.
//
//

#ifndef __Tone_Skipper__ActorFactory__
#define __Tone_Skipper__ActorFactory__

#include "Player.h"
#include "UsableItem.h"
#include "SceneItem.h"
class ActorFactory : public cocos2d::Ref
{
    ActorFactory();
    virtual ~ActorFactory();
public:
    static ActorFactory* getInstance();
    
    Player* createPlayer(Player::PlayerType type);
    UsableItem* createUsableItem(UsableItem::USABLE_ITEM_TYPE type);
    SceneItem* createSceneItem(SceneItem::SCENE_ITEM_TYPE type);
};

#endif /* defined(__Tone_Skipper__ActorFactory__) */