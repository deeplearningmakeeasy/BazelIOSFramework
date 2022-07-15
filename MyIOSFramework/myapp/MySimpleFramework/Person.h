//  Created by Deep Learning Make Easy.


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class Person;
@protocol PersonDelegate
-(void)setAgeDone:(Person *)person age:(int)value;
@end


@interface Person : NSObject{
    int age;
}

@property (weak, nonatomic) id<PersonDelegate> delegate;
-(void)setAge:(int)value;
-(int)getAge;
@end

NS_ASSUME_NONNULL_END
