/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */




@protocol CLLocationManagerDelegate <NSObject>
@optional
- (void)locationManager:(id)manager didStartMonitoringForRegion:(id)region;
- (void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
- (void)locationManager:(id)manager monitoringDidFailForRegion:(id)monitoring withError:(id)error;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (void)locationManager:(id)manager didExitRegion:(id)region;
- (void)locationManager:(id)manager didEnterRegion:(id)region;
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(id)locationManager;
- (void)locationManager:(id)manager didUpdateHeading:(id)heading;
- (void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;
@end
