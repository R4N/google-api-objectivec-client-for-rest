// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud TPU API (tpu/v1alpha1)
// Description:
//   TPU API provides customers with access to Google TPU technology.
// Documentation:
//   https://cloud.google.com/tpu/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRTPU_Node;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other TPU query classes.
 */
@interface GTLRTPUQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Get information about a location.
 *
 *  Method: tpu.projects.locations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTPUCloudPlatform
 */
@interface GTLRTPUQuery_ProjectsLocationsGet : GTLRTPUQuery
// Previous library name was
//   +[GTLQueryTPU queryForProjectsLocationsGetWithname:]

/** Resource name for the location. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRTPU_Location.
 *
 *  Get information about a location.
 *
 *  @param name Resource name for the location.
 *
 *  @returns GTLRTPUQuery_ProjectsLocationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists information about the supported locations for this service.
 *
 *  Method: tpu.projects.locations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTPUCloudPlatform
 */
@interface GTLRTPUQuery_ProjectsLocationsList : GTLRTPUQuery
// Previous library name was
//   +[GTLQueryTPU queryForProjectsLocationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The resource that owns the locations collection, if applicable. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRTPU_ListLocationsResponse.
 *
 *  Lists information about the supported locations for this service.
 *
 *  @param name The resource that owns the locations collection, if applicable.
 *
 *  @returns GTLRTPUQuery_ProjectsLocationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Creates a node.
 *
 *  Method: tpu.projects.locations.nodes.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTPUCloudPlatform
 */
@interface GTLRTPUQuery_ProjectsLocationsNodesCreate : GTLRTPUQuery
// Previous library name was
//   +[GTLQueryTPU queryForProjectsLocationsNodesCreateWithObject:parent:]

/** The unqualified resource name. */
@property(nonatomic, copy, nullable) NSString *nodeId;

/** The parent resource name. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRTPU_Operation.
 *
 *  Creates a node.
 *
 *  @param object The @c GTLRTPU_Node to include in the query.
 *  @param parent The parent resource name.
 *
 *  @returns GTLRTPUQuery_ProjectsLocationsNodesCreate
 */
+ (instancetype)queryWithObject:(GTLRTPU_Node *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a node.
 *
 *  Method: tpu.projects.locations.nodes.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTPUCloudPlatform
 */
@interface GTLRTPUQuery_ProjectsLocationsNodesDelete : GTLRTPUQuery
// Previous library name was
//   +[GTLQueryTPU queryForProjectsLocationsNodesDeleteWithname:]

/** The resource name. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRTPU_Operation.
 *
 *  Deletes a node.
 *
 *  @param name The resource name.
 *
 *  @returns GTLRTPUQuery_ProjectsLocationsNodesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the details of a node.
 *
 *  Method: tpu.projects.locations.nodes.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTPUCloudPlatform
 */
@interface GTLRTPUQuery_ProjectsLocationsNodesGet : GTLRTPUQuery
// Previous library name was
//   +[GTLQueryTPU queryForProjectsLocationsNodesGetWithname:]

/** The resource name. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRTPU_Node.
 *
 *  Gets the details of a node.
 *
 *  @param name The resource name.
 *
 *  @returns GTLRTPUQuery_ProjectsLocationsNodesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists nodes.
 *
 *  Method: tpu.projects.locations.nodes.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTPUCloudPlatform
 */
@interface GTLRTPUQuery_ProjectsLocationsNodesList : GTLRTPUQuery
// Previous library name was
//   +[GTLQueryTPU queryForProjectsLocationsNodesListWithparent:]

/** The maximum number of items to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous List request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The parent resource name. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRTPU_ListNodesResponse.
 *
 *  Lists nodes.
 *
 *  @param parent The parent resource name.
 *
 *  @returns GTLRTPUQuery_ProjectsLocationsNodesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Reimage a node's OS.
 *
 *  Method: tpu.projects.locations.nodes.reimage
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTPUCloudPlatform
 */
@interface GTLRTPUQuery_ProjectsLocationsNodesReimage : GTLRTPUQuery
// Previous library name was
//   +[GTLQueryTPU queryForProjectsLocationsNodesReimageWithname:]

/** The resource name. */
@property(nonatomic, copy, nullable) NSString *name;

/** The version for reimage to create. */
@property(nonatomic, copy, nullable) NSString *tensorflowVersion;

/**
 *  Fetches a @c GTLRTPU_Operation.
 *
 *  Reimage a node's OS.
 *
 *  @param name The resource name.
 *
 *  @returns GTLRTPUQuery_ProjectsLocationsNodesReimage
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Resets a node, which stops and starts the VM.
 *
 *  Method: tpu.projects.locations.nodes.reset
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTPUCloudPlatform
 */
@interface GTLRTPUQuery_ProjectsLocationsNodesReset : GTLRTPUQuery
// Previous library name was
//   +[GTLQueryTPU queryForProjectsLocationsNodesResetWithname:]

/** The resource name. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRTPU_Operation.
 *
 *  Resets a node, which stops and starts the VM.
 *
 *  @param name The resource name.
 *
 *  @returns GTLRTPUQuery_ProjectsLocationsNodesReset
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not
 *  guaranteed. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use
 *  Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation,
 *  the operation is not deleted; instead, it becomes an operation with
 *  an Operation.error value with a google.rpc.Status.code of 1,
 *  corresponding to `Code.CANCELLED`.
 *
 *  Method: tpu.projects.locations.operations.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTPUCloudPlatform
 */
@interface GTLRTPUQuery_ProjectsLocationsOperationsCancel : GTLRTPUQuery
// Previous library name was
//   +[GTLQueryTPU queryForProjectsLocationsOperationsCancelWithname:]

/** The name of the operation resource to be cancelled. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRTPU_Empty.
 *
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not
 *  guaranteed. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use
 *  Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation,
 *  the operation is not deleted; instead, it becomes an operation with
 *  an Operation.error value with a google.rpc.Status.code of 1,
 *  corresponding to `Code.CANCELLED`.
 *
 *  @param name The name of the operation resource to be cancelled.
 *
 *  @returns GTLRTPUQuery_ProjectsLocationsOperationsCancel
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  Method: tpu.projects.locations.operations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTPUCloudPlatform
 */
@interface GTLRTPUQuery_ProjectsLocationsOperationsDelete : GTLRTPUQuery
// Previous library name was
//   +[GTLQueryTPU queryForProjectsLocationsOperationsDeleteWithname:]

/** The name of the operation resource to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRTPU_Empty.
 *
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  @param name The name of the operation resource to be deleted.
 *
 *  @returns GTLRTPUQuery_ProjectsLocationsOperationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: tpu.projects.locations.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTPUCloudPlatform
 */
@interface GTLRTPUQuery_ProjectsLocationsOperationsGet : GTLRTPUQuery
// Previous library name was
//   +[GTLQueryTPU queryForProjectsLocationsOperationsGetWithname:]

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRTPU_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @returns GTLRTPUQuery_ProjectsLocationsOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`. To
 *  override the binding, API services can add a binding such as
 *  `"/v1/{name=users/ *}/operations"` to their service configuration.
 *  For backwards compatibility, the default name includes the operations
 *  collection id, however overriding users must ensure the name binding
 *  is the parent resource, without the operations collection id.
 *
 *  Method: tpu.projects.locations.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeTPUCloudPlatform
 */
@interface GTLRTPUQuery_ProjectsLocationsOperationsList : GTLRTPUQuery
// Previous library name was
//   +[GTLQueryTPU queryForProjectsLocationsOperationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRTPU_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`. To
 *  override the binding, API services can add a binding such as
 *  `"/v1/{name=users/ *}/operations"` to their service configuration.
 *  For backwards compatibility, the default name includes the operations
 *  collection id, however overriding users must ensure the name binding
 *  is the parent resource, without the operations collection id.
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @returns GTLRTPUQuery_ProjectsLocationsOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
