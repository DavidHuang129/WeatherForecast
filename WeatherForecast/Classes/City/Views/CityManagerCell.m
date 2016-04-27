//
//  CityManagerCell.m
//  天气
//
//  Created by qianfeng on 15/10/9.
//  Copyright © 2015年 qianfeng. All rights reserved.
//

#import "CityManagerCell.h"
#import "CityModel.h"

@interface CityManagerCell ()
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;

@end

@implementation CityManagerCell

- (void)awakeFromNib {
    // Initialization code
}

static NSString *ID = @"id";
+ (instancetype)cellWithTableView:(UITableView *)tableView
{
    CityManagerCell *cell = [tableView dequeueReusableCellWithIdentifier:[CityManagerCell identifier]];
    return cell;
}
#pragma mark 重写setModel方法
- (void)setModel:(CityModel *)model
{
    _model = model;
    
    _nameLabel.text = model.name;
}

#pragma mark cell的ID
+ (NSString *)identifier
{
    return @"managerCellID";
}
@end
