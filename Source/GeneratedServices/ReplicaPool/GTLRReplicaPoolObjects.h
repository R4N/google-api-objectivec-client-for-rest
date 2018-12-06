// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Replica Pool API (replicapool/v1beta1)
// Description:
//   The Replica Pool API allows users to declaratively provision and manage
//   groups of Google Compute Engine instances based on a common template.
// Documentation:
//   https://developers.google.com/compute/docs/replica-pool/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRReplicaPool_AccessConfig;
@class GTLRReplicaPool_Action;
@class GTLRReplicaPool_DiskAttachment;
@class GTLRReplicaPool_EnvVariable;
@class GTLRReplicaPool_ExistingDisk;
@class GTLRReplicaPool_HealthCheck;
@class GTLRReplicaPool_Label;
@class GTLRReplicaPool_Metadata;
@class GTLRReplicaPool_MetadataItem;
@class GTLRReplicaPool_NetworkInterface;
@class GTLRReplicaPool_NewDisk;
@class GTLRReplicaPool_NewDiskInitializeParams;
@class GTLRReplicaPool_Pool;
@class GTLRReplicaPool_Replica;
@class GTLRReplicaPool_ReplicaStatus;
@class GTLRReplicaPool_ServiceAccount;
@class GTLRReplicaPool_Tag;
@class GTLRReplicaPool_Template;
@class GTLRReplicaPool_VmParams;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  A Compute Engine network accessConfig. Identical to the accessConfig on
 *  corresponding Compute Engine resource.
 */
@interface GTLRReplicaPool_AccessConfig : GTLRObject

/** Name of this access configuration. */
@property(nonatomic, copy, nullable) NSString *name;

/** An external IP address associated with this instance. */
@property(nonatomic, copy, nullable) NSString *natIp;

/**
 *  Type of this access configuration file. Currently only ONE_TO_ONE_NAT is
 *  supported.
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  An action that gets executed during initialization of the replicas.
 */
@interface GTLRReplicaPool_Action : GTLRObject

/**
 *  A list of commands to run, one per line. If any command fails, the whole
 *  action is considered a failure and no further actions are run. This also
 *  marks the virtual machine or replica as a failure.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *commands;

/** A list of environment variables to use for the commands in this action. */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicaPool_EnvVariable *> *envVariables;

/**
 *  If an action's commands on a particular replica do not finish in the
 *  specified timeoutMilliSeconds, the replica is considered to be in a FAILING
 *  state. No efforts are made to stop any processes that were spawned or
 *  created as the result of running the action's commands. The default is the
 *  max allowed value, 1 hour (i.e. 3600000 milliseconds).
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *timeoutMilliSeconds;

@end


/**
 *  Specifies how to attach a disk to a Replica.
 */
@interface GTLRReplicaPool_DiskAttachment : GTLRObject

/** The device name of this disk. */
@property(nonatomic, copy, nullable) NSString *deviceName;

/**
 *  A zero-based index to assign to this disk, where 0 is reserved for the boot
 *  disk. If not specified, this is assigned by the server.
 *
 *  Uses NSNumber of unsignedIntValue.
 */
@property(nonatomic, strong, nullable) NSNumber *index;

@end


/**
 *  An environment variable to set for an action.
 */
@interface GTLRReplicaPool_EnvVariable : GTLRObject

/**
 *  Deprecated, do not use.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *hidden;

/** The name of the environment variable. */
@property(nonatomic, copy, nullable) NSString *name;

/** The value of the variable. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  A pre-existing persistent disk that will be attached to every Replica in the
 *  Pool in READ_ONLY mode.
 */
@interface GTLRReplicaPool_ExistingDisk : GTLRObject

/** How the disk will be attached to the Replica. */
@property(nonatomic, strong, nullable) GTLRReplicaPool_DiskAttachment *attachment;

/**
 *  The name of the Persistent Disk resource. The Persistent Disk resource must
 *  be in the same zone as the Pool.
 */
@property(nonatomic, copy, nullable) NSString *source;

@end


/**
 *  GTLRReplicaPool_HealthCheck
 */
@interface GTLRReplicaPool_HealthCheck : GTLRObject

/**
 *  How often (in seconds) to make HTTP requests for this healthcheck. The
 *  default value is 5 seconds.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *checkIntervalSec;

/**
 *  The description for this health check.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  The number of consecutive health check requests that need to succeed before
 *  the replica is considered healthy again. The default value is 2.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *healthyThreshold;

/**
 *  The value of the host header in the HTTP health check request. If left empty
 *  (default value), the localhost IP 127.0.0.1 will be used.
 */
@property(nonatomic, copy, nullable) NSString *host;

/** The name of this health check. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The localhost request path to send this health check, in the format
 *  /path/to/use. For example, /healthcheck.
 */
@property(nonatomic, copy, nullable) NSString *path;

/**
 *  The TCP port for the health check requests.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *port;

/**
 *  How long (in seconds) to wait before a timeout failure for this healthcheck.
 *  The default value is 5 seconds.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *timeoutSec;

/**
 *  The number of consecutive health check requests that need to fail in order
 *  to consider the replica unhealthy. The default value is 2.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *unhealthyThreshold;

@end


/**
 *  A label to apply to this replica pool.
 */
@interface GTLRReplicaPool_Label : GTLRObject

/** The key for this label. */
@property(nonatomic, copy, nullable) NSString *key;

/** The value of this label. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  A Compute Engine metadata entry. Identical to the metadata on the
 *  corresponding Compute Engine resource.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property.
 */
@interface GTLRReplicaPool_Metadata : GTLRCollectionObject

/**
 *  The fingerprint of the metadata. Required for updating the metadata entries
 *  for this instance.
 */
@property(nonatomic, copy, nullable) NSString *fingerPrint;

/**
 *  A list of metadata items.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicaPool_MetadataItem *> *items;

@end


/**
 *  A Compute Engine metadata item, defined as a key:value pair. Identical to
 *  the metadata on the corresponding Compute Engine resource.
 */
@interface GTLRReplicaPool_MetadataItem : GTLRObject

/** A metadata key. */
@property(nonatomic, copy, nullable) NSString *key;

/** A metadata value. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  A Compute Engine NetworkInterface resource. Identical to the
 *  NetworkInterface on the corresponding Compute Engine resource.
 */
@interface GTLRReplicaPool_NetworkInterface : GTLRObject

/**
 *  An array of configurations for this interface. This specifies how this
 *  interface is configured to interact with other network services.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicaPool_AccessConfig *> *accessConfigs;

/** Name the Network resource to which this interface applies. */
@property(nonatomic, copy, nullable) NSString *network;

/**
 *  An optional IPV4 internal network address to assign to the instance for this
 *  network interface.
 */
@property(nonatomic, copy, nullable) NSString *networkIp;

@end


/**
 *  A Persistent Disk resource that will be created and attached to each Replica
 *  in the Pool. Each Replica will have a unique persistent disk that is created
 *  and attached to that Replica in READ_WRITE mode.
 */
@interface GTLRReplicaPool_NewDisk : GTLRObject

/** How the disk will be attached to the Replica. */
@property(nonatomic, strong, nullable) GTLRReplicaPool_DiskAttachment *attachment;

/**
 *  If true, then this disk will be deleted when the instance is deleted. The
 *  default value is true.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *autoDelete;

/**
 *  If true, indicates that this is the root persistent disk.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *boot;

/**
 *  Create the new disk using these parameters. The name of the disk will be
 *  <instance_name>-<four_random_charactersgt;.
 */
@property(nonatomic, strong, nullable) GTLRReplicaPool_NewDiskInitializeParams *initializeParams;

@end


/**
 *  Initialization parameters for creating a new disk.
 */
@interface GTLRReplicaPool_NewDiskInitializeParams : GTLRObject

/**
 *  The size of the created disk in gigabytes.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *diskSizeGb;

/**
 *  Name of the disk type resource describing which disk type to use to create
 *  the disk. For example 'pd-ssd' or 'pd-standard'. Default is 'pd-standard'
 */
@property(nonatomic, copy, nullable) NSString *diskType;

/**
 *  The name or fully-qualified URL of a source image to use to create this
 *  disk. If you provide a name of the source image, Replica Pool will look for
 *  an image with that name in your project. If you are specifying an image
 *  provided by Compute Engine, you will need to provide the full URL with the
 *  correct project, such as:
 *  http://www.googleapis.com/compute/v1/projects/debian-cloud/
 *  global/images/debian-wheezy-7-vYYYYMMDD
 */
@property(nonatomic, copy, nullable) NSString *sourceImage;

@end


/**
 *  GTLRReplicaPool_Pool
 */
@interface GTLRReplicaPool_Pool : GTLRObject

/**
 *  Whether replicas in this pool should be restarted if they experience a
 *  failure. The default value is true.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *autoRestart;

/**
 *  The base instance name to use for the replicas in this pool. This must match
 *  the regex [a-z]([-a-z0-9]*[a-z0-9])?. If specified, the instances in this
 *  replica pool will be named in the format <base-instance-name>-<ID>. The <ID>
 *  postfix will be a four character alphanumeric identifier generated by the
 *  service.
 *  If this is not specified by the user, a random base instance name is
 *  generated by the service.
 */
@property(nonatomic, copy, nullable) NSString *baseInstanceName;

/**
 *  [Output Only] The current number of replicas in the pool.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *currentNumReplicas;

/**
 *  An optional description of the replica pool.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/** Deprecated. Please use template[].healthChecks instead. */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicaPool_HealthCheck *> *healthChecks;

/**
 *  The initial number of replicas this pool should have. You must provide a
 *  value greater than or equal to 0.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *initialNumReplicas;

/**
 *  A list of labels to attach to this replica pool and all created virtual
 *  machines in this replica pool.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicaPool_Label *> *labels;

/**
 *  The name of the replica pool. Must follow the regex
 *  [a-z]([-a-z0-9]*[a-z0-9])? and be 1-28 characters long.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Deprecated! Use initial_num_replicas instead.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *numReplicas;

/**
 *  The list of resource views that should be updated with all the replicas that
 *  are managed by this pool.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *resourceViews;

/** [Output Only] A self-link to the replica pool. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/** Deprecated, please use target_pools instead. */
@property(nonatomic, copy, nullable) NSString *targetPool;

/**
 *  A list of target pools to update with the replicas that are managed by this
 *  pool. If specified, the replicas in this replica pool will be added to the
 *  specified target pools for load balancing purposes. The replica pool must
 *  live in the same region as the specified target pools. These values must be
 *  the target pool resource names, and not fully qualified URLs.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *targetPools;

/**
 *  The template to use when creating replicas in this pool. This template is
 *  used during initial instance creation of the pool, when growing the pool in
 *  size, or when a replica restarts.
 *
 *  Remapped to 'templateProperty' to avoid language reserved word 'template'.
 */
@property(nonatomic, strong, nullable) GTLRReplicaPool_Template *templateProperty;

/** Deprecated! Do not set. */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  GTLRReplicaPool_PoolsDeleteRequest
 */
@interface GTLRReplicaPool_PoolsDeleteRequest : GTLRObject

/**
 *  If there are instances you would like to keep, you can specify them here.
 *  These instances won't be deleted, but the associated replica objects will be
 *  removed.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *abandonInstances;

@end


/**
 *  GTLRReplicaPool_PoolsListResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "resources" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRReplicaPool_PoolsListResponse : GTLRCollectionObject

@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  resources
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicaPool_Pool *> *resources;

@end


/**
 *  An individual Replica within a Pool. Replicas are automatically created by
 *  the replica pool, using the template provided by the user. You cannot
 *  directly create replicas.
 */
@interface GTLRReplicaPool_Replica : GTLRObject

/** [Output Only] The name of the Replica object. */
@property(nonatomic, copy, nullable) NSString *name;

/** [Output Only] The self-link of the Replica. */
@property(nonatomic, copy, nullable) NSString *selfLink;

/** [Output Only] Last known status of the Replica. */
@property(nonatomic, strong, nullable) GTLRReplicaPool_ReplicaStatus *status;

@end


/**
 *  GTLRReplicaPool_ReplicasDeleteRequest
 */
@interface GTLRReplicaPool_ReplicasDeleteRequest : GTLRObject

/**
 *  Whether the instance resource represented by this replica should be deleted
 *  or abandoned. If abandoned, the replica will be deleted but the virtual
 *  machine instance will remain. By default, this is set to false and the
 *  instance will be deleted along with the replica.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *abandonInstance;

@end


/**
 *  GTLRReplicaPool_ReplicasListResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "resources" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRReplicaPool_ReplicasListResponse : GTLRCollectionObject

@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  resources
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicaPool_Replica *> *resources;

@end


/**
 *  The current status of a Replica.
 */
@interface GTLRReplicaPool_ReplicaStatus : GTLRObject

/**
 *  [Output Only] Human-readable details about the current state of the replica
 */
@property(nonatomic, copy, nullable) NSString *details;

/** [Output Only] The state of the Replica. */
@property(nonatomic, copy, nullable) NSString *state;

/** [Output Only] The template used to build the replica. */
@property(nonatomic, copy, nullable) NSString *templateVersion;

/** [Output Only] Link to the virtual machine that this Replica represents. */
@property(nonatomic, copy, nullable) NSString *vmLink;

/**
 *  [Output Only] The time that this Replica got to the RUNNING state, in RFC
 *  3339 format. If the start time is unknown, UNKNOWN is returned.
 */
@property(nonatomic, copy, nullable) NSString *vmStartTime;

@end


/**
 *  A Compute Engine service account, identical to the Compute Engine resource.
 */
@interface GTLRReplicaPool_ServiceAccount : GTLRObject

/**
 *  The service account email address, for example:
 *  123845678986\@project.gserviceaccount.com
 */
@property(nonatomic, copy, nullable) NSString *email;

/**
 *  The list of OAuth2 scopes to obtain for the service account, for example:
 *  https://www.googleapis.com/auth/devstorage.full_control
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *scopes;

@end


/**
 *  A Compute Engine Instance tag, identical to the tags on the corresponding
 *  Compute Engine Instance resource.
 */
@interface GTLRReplicaPool_Tag : GTLRObject

/** The fingerprint of the tag. Required for updating the list of tags. */
@property(nonatomic, copy, nullable) NSString *fingerPrint;

/** Items contained in this tag. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *items;

@end


/**
 *  The template used for creating replicas in the pool.
 */
@interface GTLRReplicaPool_Template : GTLRObject

/**
 *  An action to run during initialization of your replicas. An action is run as
 *  shell commands which are executed one after the other in the same bash
 *  shell, so any state established by one command is inherited by later
 *  commands.
 */
@property(nonatomic, strong, nullable) GTLRReplicaPool_Action *action;

/**
 *  A list of HTTP Health Checks to configure for this replica pool and all
 *  virtual machines in this replica pool.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicaPool_HealthCheck *> *healthChecks;

/**
 *  A free-form string describing the version of this template. You can provide
 *  any versioning string you would like. For example, version1 or template-v1.
 */
@property(nonatomic, copy, nullable) NSString *version;

/**
 *  The virtual machine parameters to use for creating replicas. You can define
 *  settings such as the machine type and the image of replicas in this pool.
 *  This is required if replica type is SMART_VM.
 */
@property(nonatomic, strong, nullable) GTLRReplicaPool_VmParams *vmParams;

@end


/**
 *  Parameters for creating a Compute Engine Instance resource. Most fields are
 *  identical to the corresponding Compute Engine resource.
 */
@interface GTLRReplicaPool_VmParams : GTLRObject

/** Deprecated. Please use baseInstanceName instead. */
@property(nonatomic, copy, nullable) NSString *baseInstanceName;

/**
 *  Enables IP Forwarding, which allows this instance to receive packets
 *  destined for a different IP address, and send packets with a different
 *  source IP. See IP Forwarding for more information.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *canIpForward;

/**
 *  An optional textual description of the instance.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  A list of existing Persistent Disk resources to attach to each replica in
 *  the pool. Each disk will be attached in read-only mode to every replica.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicaPool_ExistingDisk *> *disksToAttach;

/**
 *  A list of Disk resources to create and attach to each Replica in the Pool.
 *  Currently, you can only define one disk and it must be a root persistent
 *  disk. Note that Replica Pool will create a root persistent disk for each
 *  replica.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicaPool_NewDisk *> *disksToCreate;

/**
 *  The machine type for this instance. The resource name (e.g. n1-standard-1).
 */
@property(nonatomic, copy, nullable) NSString *machineType;

/** The metadata key/value pairs assigned to this instance. */
@property(nonatomic, strong, nullable) GTLRReplicaPool_Metadata *metadata;

/**
 *  A list of network interfaces for the instance. Currently only one interface
 *  is supported by Google Compute Engine, ONE_TO_ONE_NAT.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicaPool_NetworkInterface *> *networkInterfaces;

@property(nonatomic, copy, nullable) NSString *onHostMaintenance;

/** A list of Service Accounts to enable for this instance. */
@property(nonatomic, strong, nullable) NSArray<GTLRReplicaPool_ServiceAccount *> *serviceAccounts;

/**
 *  A list of tags to apply to the Google Compute Engine instance to identify
 *  resources.
 */
@property(nonatomic, strong, nullable) GTLRReplicaPool_Tag *tags;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
