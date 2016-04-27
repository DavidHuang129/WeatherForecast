//
//  RealTimeModel.h
//  WeatherForecast
//
//  Created by qianfeng on 15/10/13.
//  Copyright © 2015年 qianfeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RealTimeModel : NSObject

/**
 *  天气图标
 */
@property (nonatomic, strong) NSString *img;
/**
 *  温度
 */
@property (nonatomic, strong) NSString *temp;
/**
 *  实用温度
 */
@property (nonatomic, strong) NSString *sendibleTemp;
/**
 *  天气
 */
@property (nonatomic, strong) NSString *weather;
/**
 *  时间
 */
@property (nonatomic, strong) NSString *time;

@property (nonatomic, strong) NSString *wD;

@property (nonatomic, strong) NSString *wS;

@property (nonatomic, strong) NSString *sD;

@end

/*
 "img": "0",
 "sD": "23",
 "sendibleTemp": "15",
 "temp": "15",
 "time": "2015-10-10 15:20:01",
 "wD": "西北风",
 "wS": "4级",
 "weather": "晴",
 "ziwaixian": "N/A"
 */
