/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INGetUserCurrentRestaurantReservationBookingsIntent : INIntent <NSCopying> {
    NSDate * _earliestBookingDateForResults;
    NSNumber * _maximumNumberOfResults;
    NSString * _reservationIdentifier;
    INRestaurant * _restaurant;
}

@property (nonatomic, copy) NSDate *earliestBookingDateForResults;
@property (nonatomic, copy) NSNumber *maximumNumberOfResults;
@property (nonatomic, copy) NSString *reservationIdentifier;
@property (nonatomic, copy) INRestaurant *restaurant;

+ (id)intentDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)earliestBookingDateForResults;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maximumNumberOfResults;
- (id)reservationIdentifier;
- (id)restaurant;
- (void)setEarliestBookingDateForResults:(id)arg1;
- (void)setMaximumNumberOfResults:(id)arg1;
- (void)setReservationIdentifier:(id)arg1;
- (void)setRestaurant:(id)arg1;

@end
