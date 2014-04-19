//
//  RadioButton.h
//  RadioButton
//
//  Created by ohkawa on 11/03/23.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol RadioButtonDelegate <NSObject>
-(void)radioButtonSelectedAtIndex:(NSUInteger)index inGroup:(NSString*)groupId;
@end

@interface RadioButton : UIView {
    NSString *_groupId;
    NSUInteger _index;
    UIImage * _customButtonImage;
}
@property(nonatomic,retain)NSString *groupId;
@property(nonatomic,assign)NSUInteger index;
@property(nonatomic,assign)UIButton * button;
@property(nonatomic,retain)UIImage * customButtonImage;

-(id)initWithGroupId:(NSString*)groupId index:(NSUInteger)index;
- (id)initWithImage:(UIImage *) image andGroupId:(NSString*)groupId index:(NSUInteger)index;

+(void)addObserverForGroupId:(NSString*)groupId observer:(id)observer;

+(void)buttonSelected:(RadioButton*)radioButton;

@end
