//  Created by Deep Learning Make Easy.

#import "Person.h"

@implementation Person

-(void)setAge:(int)value{
    age = value;
    [self.delegate setAgeDone:self age:value];
}
-(int)getAge{
    return age;
}

@end
