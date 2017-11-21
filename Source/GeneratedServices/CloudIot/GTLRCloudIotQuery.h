// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud IoT API (cloudiot/v1)
// Description:
//   Registers and manages IoT (Internet of Things) devices that connect to the
//   Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/iot

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudIot_Device;
@class GTLRCloudIot_DeviceRegistry;
@class GTLRCloudIot_GetIamPolicyRequest;
@class GTLRCloudIot_ModifyCloudToDeviceConfigRequest;
@class GTLRCloudIot_SetIamPolicyRequest;
@class GTLRCloudIot_TestIamPermissionsRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud Iot query classes.
 */
@interface GTLRCloudIotQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates a device registry that contains devices.
 *
 *  Method: cloudiot.projects.locations.registries.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesCreate : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesCreateWithObject:parent:]

/**
 *  The project and cloud region where this device registry must be created.
 *  For example, `projects/example-project/locations/us-central1`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudIot_DeviceRegistry.
 *
 *  Creates a device registry that contains devices.
 *
 *  @param object The @c GTLRCloudIot_DeviceRegistry to include in the query.
 *  @param parent The project and cloud region where this device registry must
 *    be created.
 *    For example, `projects/example-project/locations/us-central1`.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudIot_DeviceRegistry *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a device registry configuration.
 *
 *  Method: cloudiot.projects.locations.registries.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesDelete : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesDeleteWithname:]

/**
 *  The name of the device registry. For example,
 *  `projects/example-project/locations/us-central1/registries/my-registry`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudIot_Empty.
 *
 *  Deletes a device registry configuration.
 *
 *  @param name The name of the device registry. For example,
 *    `projects/example-project/locations/us-central1/registries/my-registry`.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists the last few versions of the device configuration in descending
 *  order (i.e.: newest first).
 *
 *  Method: cloudiot.projects.locations.registries.devices.configVersions.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesConfigVersionsList : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesDevicesConfigVersionsListWithname:]

/**
 *  The name of the device. For example,
 *  `projects/p0/locations/us-central1/registries/registry0/devices/device0` or
 *  `projects/p0/locations/us-central1/registries/registry0/devices/{num_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The number of versions to list. Versions are listed in decreasing order of
 *  the version number. The maximum number of versions retained is 10. If this
 *  value is zero, it will return all the versions available.
 */
@property(nonatomic, assign) NSInteger numVersions;

/**
 *  Fetches a @c GTLRCloudIot_ListDeviceConfigVersionsResponse.
 *
 *  Lists the last few versions of the device configuration in descending
 *  order (i.e.: newest first).
 *
 *  @param name The name of the device. For example,
 *    `projects/p0/locations/us-central1/registries/registry0/devices/device0`
 *    or
 *    `projects/p0/locations/us-central1/registries/registry0/devices/{num_id}`.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesConfigVersionsList
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Creates a device in a device registry.
 *
 *  Method: cloudiot.projects.locations.registries.devices.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesCreate : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesDevicesCreateWithObject:parent:]

/**
 *  The name of the device registry where this device should be created.
 *  For example,
 *  `projects/example-project/locations/us-central1/registries/my-registry`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudIot_Device.
 *
 *  Creates a device in a device registry.
 *
 *  @param object The @c GTLRCloudIot_Device to include in the query.
 *  @param parent The name of the device registry where this device should be
 *    created.
 *    For example,
 *    `projects/example-project/locations/us-central1/registries/my-registry`.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudIot_Device *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a device.
 *
 *  Method: cloudiot.projects.locations.registries.devices.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesDelete : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesDevicesDeleteWithname:]

/**
 *  The name of the device. For example,
 *  `projects/p0/locations/us-central1/registries/registry0/devices/device0` or
 *  `projects/p0/locations/us-central1/registries/registry0/devices/{num_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudIot_Empty.
 *
 *  Deletes a device.
 *
 *  @param name The name of the device. For example,
 *    `projects/p0/locations/us-central1/registries/registry0/devices/device0`
 *    or
 *    `projects/p0/locations/us-central1/registries/registry0/devices/{num_id}`.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets details about a device.
 *
 *  Method: cloudiot.projects.locations.registries.devices.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesGet : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesDevicesGetWithname:]

/**
 *  The fields of the `Device` resource to be returned in the response. If the
 *  field mask is unset or empty, all fields are returned.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *fieldMask;

/**
 *  The name of the device. For example,
 *  `projects/p0/locations/us-central1/registries/registry0/devices/device0` or
 *  `projects/p0/locations/us-central1/registries/registry0/devices/{num_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudIot_Device.
 *
 *  Gets details about a device.
 *
 *  @param name The name of the device. For example,
 *    `projects/p0/locations/us-central1/registries/registry0/devices/device0`
 *    or
 *    `projects/p0/locations/us-central1/registries/registry0/devices/{num_id}`.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List devices in a device registry.
 *
 *  Method: cloudiot.projects.locations.registries.devices.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesList : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesDevicesListWithparent:]

/**
 *  A list of device string identifiers. If empty, it will ignore this field.
 *  For example, `['device0', 'device12']`. This field cannot hold more than
 *  10,000 entries.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *deviceIds;

/**
 *  A list of device numerical ids. If empty, it will ignore this field. This
 *  field cannot hold more than 10,000 entries.
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSArray<NSNumber *> *deviceNumIds;

/**
 *  The fields of the `Device` resource to be returned in the response. The
 *  fields `id`, and `num_id` are always returned by default, along with any
 *  other fields specified.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *fieldMask;

/**
 *  The maximum number of devices to return in the response. If this value
 *  is zero, the service will select a default size. A call may return fewer
 *  objects than requested, but if there is a non-empty `page_token`, it
 *  indicates that more entries are available.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The value returned by the last `ListDevicesResponse`; indicates
 *  that this is a continuation of a prior `ListDevices` call, and
 *  that the system should return the next page of data.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The device registry path. Required. For example,
 *  `projects/my-project/locations/us-central1/registries/my-registry`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudIot_ListDevicesResponse.
 *
 *  List devices in a device registry.
 *
 *  @param parent The device registry path. Required. For example,
 *    `projects/my-project/locations/us-central1/registries/my-registry`.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Modifies the configuration for the device, which is eventually sent from
 *  the Cloud IoT Core servers. Returns the modified configuration version and
 *  its metadata.
 *
 *  Method: cloudiot.projects.locations.registries.devices.modifyCloudToDeviceConfig
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesModifyCloudToDeviceConfig : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesDevicesModifyCloudToDeviceConfigWithObject:name:]

/**
 *  The name of the device. For example,
 *  `projects/p0/locations/us-central1/registries/registry0/devices/device0` or
 *  `projects/p0/locations/us-central1/registries/registry0/devices/{num_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudIot_DeviceConfig.
 *
 *  Modifies the configuration for the device, which is eventually sent from
 *  the Cloud IoT Core servers. Returns the modified configuration version and
 *  its metadata.
 *
 *  @param object The @c GTLRCloudIot_ModifyCloudToDeviceConfigRequest to
 *    include in the query.
 *  @param name The name of the device. For example,
 *    `projects/p0/locations/us-central1/registries/registry0/devices/device0`
 *    or
 *    `projects/p0/locations/us-central1/registries/registry0/devices/{num_id}`.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesModifyCloudToDeviceConfig
 */
+ (instancetype)queryWithObject:(GTLRCloudIot_ModifyCloudToDeviceConfigRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Updates a device.
 *
 *  Method: cloudiot.projects.locations.registries.devices.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesPatch : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesDevicesPatchWithObject:name:]

/**
 *  The resource path name. For example,
 *  `projects/p1/locations/us-central1/registries/registry0/devices/dev0` or
 *  `projects/p1/locations/us-central1/registries/registry0/devices/{num_id}`.
 *  When `name` is populated as a response from the service, it always ends
 *  in the device numeric ID.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Only updates the `device` fields indicated by this mask.
 *  The field mask must not be empty, and it must not contain fields that
 *  are immutable or only set by the server.
 *  Mutable top-level fields: `credentials`, `enabled_state`, and `metadata`
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRCloudIot_Device.
 *
 *  Updates a device.
 *
 *  @param object The @c GTLRCloudIot_Device to include in the query.
 *  @param name The resource path name. For example,
 *    `projects/p1/locations/us-central1/registries/registry0/devices/dev0` or
 *    `projects/p1/locations/us-central1/registries/registry0/devices/{num_id}`.
 *    When `name` is populated as a response from the service, it always ends
 *    in the device numeric ID.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudIot_Device *)object
                           name:(NSString *)name;

@end

/**
 *  Lists the last few versions of the device state in descending order (i.e.:
 *  newest first).
 *
 *  Method: cloudiot.projects.locations.registries.devices.states.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesStatesList : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesDevicesStatesListWithname:]

/**
 *  The name of the device. For example,
 *  `projects/p0/locations/us-central1/registries/registry0/devices/device0` or
 *  `projects/p0/locations/us-central1/registries/registry0/devices/{num_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The number of states to list. States are listed in descending order of
 *  update time. The maximum number of states retained is 10. If this
 *  value is zero, it will return all the states available.
 */
@property(nonatomic, assign) NSInteger numStates;

/**
 *  Fetches a @c GTLRCloudIot_ListDeviceStatesResponse.
 *
 *  Lists the last few versions of the device state in descending order (i.e.:
 *  newest first).
 *
 *  @param name The name of the device. For example,
 *    `projects/p0/locations/us-central1/registries/registry0/devices/device0`
 *    or
 *    `projects/p0/locations/us-central1/registries/registry0/devices/{num_id}`.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesDevicesStatesList
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a device registry configuration.
 *
 *  Method: cloudiot.projects.locations.registries.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesGet : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesGetWithname:]

/**
 *  The name of the device registry. For example,
 *  `projects/example-project/locations/us-central1/registries/my-registry`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudIot_DeviceRegistry.
 *
 *  Gets a device registry configuration.
 *
 *  @param name The name of the device registry. For example,
 *    `projects/example-project/locations/us-central1/registries/my-registry`.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the access control policy for a resource.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *
 *  Method: cloudiot.projects.locations.registries.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesGetIamPolicy : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesGetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIot_Policy.
 *
 *  Gets the access control policy for a resource.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *
 *  @param object The @c GTLRCloudIot_GetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesGetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudIot_GetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Lists device registries.
 *
 *  Method: cloudiot.projects.locations.registries.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesList : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesListWithparent:]

/**
 *  The maximum number of registries to return in the response. If this value
 *  is zero, the service will select a default size. A call may return fewer
 *  objects than requested, but if there is a non-empty `page_token`, it
 *  indicates that more entries are available.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The value returned by the last `ListDeviceRegistriesResponse`; indicates
 *  that this is a continuation of a prior `ListDeviceRegistries` call, and
 *  that the system should return the next page of data.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The project and cloud region path. For example,
 *  `projects/example-project/locations/us-central1`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudIot_ListDeviceRegistriesResponse.
 *
 *  Lists device registries.
 *
 *  @param parent The project and cloud region path. For example,
 *    `projects/example-project/locations/us-central1`.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates a device registry configuration.
 *
 *  Method: cloudiot.projects.locations.registries.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesPatch : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesPatchWithObject:name:]

/**
 *  The resource path name. For example,
 *  `projects/example-project/locations/us-central1/registries/my-registry`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Only updates the `device_registry` fields indicated by this mask.
 *  The field mask must not be empty, and it must not contain fields that
 *  are immutable or only set by the server.
 *  Mutable top-level fields: `event_notification_config`, `http_config`,
 *  `mqtt_config`, and `state_notification_config`.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRCloudIot_DeviceRegistry.
 *
 *  Updates a device registry configuration.
 *
 *  @param object The @c GTLRCloudIot_DeviceRegistry to include in the query.
 *  @param name The resource path name. For example,
 *    `projects/example-project/locations/us-central1/registries/my-registry`.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudIot_DeviceRegistry *)object
                           name:(NSString *)name;

@end

/**
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy.
 *
 *  Method: cloudiot.projects.locations.registries.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesSetIamPolicy : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIot_Policy.
 *
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy.
 *
 *  @param object The @c GTLRCloudIot_SetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudIot_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the specified resource.
 *  If the resource does not exist, this will return an empty set of
 *  permissions, not a NOT_FOUND error.
 *
 *  Method: cloudiot.projects.locations.registries.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudIot
 *    @c kGTLRAuthScopeCloudIotCloudPlatform
 */
@interface GTLRCloudIotQuery_ProjectsLocationsRegistriesTestIamPermissions : GTLRCloudIotQuery
// Previous library name was
//   +[GTLQueryCloudIot queryForProjectsLocationsRegistriesTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudIot_TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the specified resource.
 *  If the resource does not exist, this will return an empty set of
 *  permissions, not a NOT_FOUND error.
 *
 *  @param object The @c GTLRCloudIot_TestIamPermissionsRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @returns GTLRCloudIotQuery_ProjectsLocationsRegistriesTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudIot_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
