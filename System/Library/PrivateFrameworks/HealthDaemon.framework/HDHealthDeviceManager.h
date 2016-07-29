/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBCentralManagerPrivateDelegate.h>
#import <libobjc.A.dylib/HDDaemonDeviceManager.h>

@protocol OS_dispatch_queue, HDHealthDataCollectionManager, HDHealthDaemon;
@class CBCentralManager, NSObject, NSLock, HDIdentifierTable, NSMutableDictionary, NSSet, CBUUID, NSMutableArray, NSString;

@interface HDHealthDeviceManager : NSObject <CBCentralManagerPrivateDelegate, HDDaemonDeviceManager> {

	CBCentralManager* _central;
	NSObject*<OS_dispatch_queue> _queue;
	id<HDHealthDataCollectionManager> _dataCollectionManager;
	id<HDHealthDaemon> _daemon;
	NSLock* _discoveryLock;
	HDIdentifierTable* _discoveryInfosTable;
	NSMutableDictionary* _discoveryInfosByServiceUUID;
	NSSet* _scanServiceUUIDs;
	CBUUID* _allServicesUUID;
	NSMutableArray* _allServicesArray;
	NSLock* _connectionLock;
	HDIdentifierTable* _connectionInfosTable;
	NSMutableDictionary* _connectionInfosByPeripheralUUID;
	NSMutableDictionary* _healthServicesByPeripheralUUID;
	NSMutableDictionary* _connectedPeripheralsByPeripheralUUID;
	NSMutableDictionary* _propertyManagerByPeripheralUUID;
	NSMutableDictionary* _bluetoothUpdateHandlers;

}

@property (nonatomic,retain) CBCentralManager * central;                                              //@synthesize central=_central - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<HDHealthDataCollectionManager> dataCollectionManager;                 //@synthesize dataCollectionManager=_dataCollectionManager - In the implementation block
@property (assign,nonatomic,__weak) id<HDHealthDaemon> daemon;                                        //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,retain) NSLock * discoveryLock;                                                  //@synthesize discoveryLock=_discoveryLock - In the implementation block
@property (nonatomic,retain) HDIdentifierTable * discoveryInfosTable;                                 //@synthesize discoveryInfosTable=_discoveryInfosTable - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * discoveryInfosByServiceUUID;                       //@synthesize discoveryInfosByServiceUUID=_discoveryInfosByServiceUUID - In the implementation block
@property (nonatomic,retain) NSSet * scanServiceUUIDs;                                                //@synthesize scanServiceUUIDs=_scanServiceUUIDs - In the implementation block
@property (nonatomic,retain) CBUUID * allServicesUUID;                                                //@synthesize allServicesUUID=_allServicesUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * allServicesArray;                                       //@synthesize allServicesArray=_allServicesArray - In the implementation block
@property (nonatomic,retain) NSLock * connectionLock;                                                 //@synthesize connectionLock=_connectionLock - In the implementation block
@property (nonatomic,retain) HDIdentifierTable * connectionInfosTable;                                //@synthesize connectionInfosTable=_connectionInfosTable - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionInfosByPeripheralUUID;                   //@synthesize connectionInfosByPeripheralUUID=_connectionInfosByPeripheralUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * healthServicesByPeripheralUUID;                    //@synthesize healthServicesByPeripheralUUID=_healthServicesByPeripheralUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectedPeripheralsByPeripheralUUID;              //@synthesize connectedPeripheralsByPeripheralUUID=_connectedPeripheralsByPeripheralUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * propertyManagerByPeripheralUUID;                   //@synthesize propertyManagerByPeripheralUUID=_propertyManagerByPeripheralUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bluetoothUpdateHandlers;                           //@synthesize bluetoothUpdateHandlers=_bluetoothUpdateHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceClassesByUUIDKeys;
+(long long)_isBTLESupportedWithCentral:(id)arg1 error:(id*)arg2 ;
+(Class)_serviceClassWithServiceType:(long long)arg1 ;
+(Class)_serviceClassWithServiceUUID:(id)arg1 ;
-(id)shortDescription;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<HDHealthDaemon>)daemon;
-(void)setDaemon:(id<HDHealthDaemon>)arg1 ;
-(id)initWithHealthDaemon:(id)arg1 ;
-(void)sendBluetoothStatusUpdatesForServer:(id)arg1 withHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)reviewSavedHealthServiceSessions:(id)arg1 withError:(id*)arg2 ;
-(unsigned long long)connectHealthDevice:(id)arg1 healthDatabase:(id)arg2 sessionHandler:(/*^block*/id)arg3 transitoryHandler:(/*^block*/id)arg4 characteristicsHandler:(/*^block*/id)arg5 error:(id*)arg6 ;
-(void)disconnectHealthDevice:(unsigned long long)arg1 ;
-(void)dataReceived:(id)arg1 deviceEntity:(id)arg2 ;
-(void)reportTransitoryData:(id)arg1 fromDevice:(id)arg2 withError:(id)arg3 ;
-(void)servicesInvalidatedForDevice:(id)arg1 withError:(id)arg2 ;
-(void)discoveredServices:(id)arg1 forPeripheral:(id)arg2 ;
-(void)discoveredCharacteristics:(id)arg1 forDevice:(id)arg2 service:(id)arg3 ;
-(unsigned long long)discoverHealthServicesWithType:(long long)arg1 timeout:(unsigned long long)arg2 handler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)stopDiscoveryWithIdentifier:(unsigned long long)arg1 ;
-(BOOL)healthUpdatesEnabledFromDevice:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(BOOL)setHealthUpdatesEnabled:(BOOL)arg1 fromDevice:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
-(void)getProperty:(id)arg1 forSession:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)performOperation:(id)arg1 onSession:(unsigned long long)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithCentralManager:(id)arg1 healthDaemon:(id)arg2 queue:(id)arg3 ;
-(id)_createDiscoveryTimeout:(unsigned long long)arg1 forIdentifier:(unsigned long long)arg2 ;
-(void)_reportExistingDiscoveriesForService:(id)arg1 ;
-(void)_queue_updateScan;
-(id)_copyDiscoveryInfosForServiceUUID:(id)arg1 ;
-(id)_serviceFromUUID:(id)arg1 peripheral:(id)arg2 ;
-(unsigned long long)_addConnectedPeripheral:(id)arg1 forService:(id)arg2 withSessionHandler:(/*^block*/id)arg3 withTransitoryHandler:(/*^block*/id)arg4 withCharacteristicsHandler:(/*^block*/id)arg5 ;
-(void)_removeConnectedPeripheral:(unsigned long long)arg1 withError:(id)arg2 ;
-(id)_copyConnectionInfosForPeripheralUUID:(id)arg1 ;
-(void)_queue_stopScan;
-(void)_notifyBluetoothStatusUpdates:(long long)arg1 error:(id)arg2 ;
-(id)_reportPeripheral:(id)arg1 serviceUUID:(id)arg2 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 willRestoreState:(id)arg2 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(unsigned long long)connectHealthDevice:(id)arg1 healthDatabase:(id)arg2 sessionHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)healthServiceForUUID:(id)arg1 ;
-(CBCentralManager *)central;
-(void)setCentral:(CBCentralManager *)arg1 ;
-(id<HDHealthDataCollectionManager>)dataCollectionManager;
-(void)setDataCollectionManager:(id<HDHealthDataCollectionManager>)arg1 ;
-(NSLock *)discoveryLock;
-(void)setDiscoveryLock:(NSLock *)arg1 ;
-(HDIdentifierTable *)discoveryInfosTable;
-(void)setDiscoveryInfosTable:(HDIdentifierTable *)arg1 ;
-(NSMutableDictionary *)discoveryInfosByServiceUUID;
-(void)setDiscoveryInfosByServiceUUID:(NSMutableDictionary *)arg1 ;
-(NSSet *)scanServiceUUIDs;
-(void)setScanServiceUUIDs:(NSSet *)arg1 ;
-(CBUUID *)allServicesUUID;
-(void)setAllServicesUUID:(CBUUID *)arg1 ;
-(NSMutableArray *)allServicesArray;
-(void)setAllServicesArray:(NSMutableArray *)arg1 ;
-(NSLock *)connectionLock;
-(void)setConnectionLock:(NSLock *)arg1 ;
-(HDIdentifierTable *)connectionInfosTable;
-(void)setConnectionInfosTable:(HDIdentifierTable *)arg1 ;
-(NSMutableDictionary *)connectionInfosByPeripheralUUID;
-(void)setConnectionInfosByPeripheralUUID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)healthServicesByPeripheralUUID;
-(void)setHealthServicesByPeripheralUUID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)connectedPeripheralsByPeripheralUUID;
-(void)setConnectedPeripheralsByPeripheralUUID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)propertyManagerByPeripheralUUID;
-(void)setPropertyManagerByPeripheralUUID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)bluetoothUpdateHandlers;
-(void)setBluetoothUpdateHandlers:(NSMutableDictionary *)arg1 ;
@end

