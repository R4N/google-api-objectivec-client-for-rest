// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Billing API (cloudbilling/v1)
// Description:
//   Allows developers to manage billing for their Google Cloud Platform
//   projects
//   programmatically.
// Documentation:
//   https://cloud.google.com/billing/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudbilling_AggregationInfo;
@class GTLRCloudbilling_AuditConfig;
@class GTLRCloudbilling_AuditLogConfig;
@class GTLRCloudbilling_BillingAccount;
@class GTLRCloudbilling_Binding;
@class GTLRCloudbilling_Category;
@class GTLRCloudbilling_Expr;
@class GTLRCloudbilling_Money;
@class GTLRCloudbilling_Policy;
@class GTLRCloudbilling_PricingExpression;
@class GTLRCloudbilling_PricingInfo;
@class GTLRCloudbilling_ProjectBillingInfo;
@class GTLRCloudbilling_Service;
@class GTLRCloudbilling_Sku;
@class GTLRCloudbilling_TierRate;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudbilling_AggregationInfo.aggregationInterval

/** Value: "AGGREGATION_INTERVAL_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRCloudbilling_AggregationInfo_AggregationInterval_AggregationIntervalUnspecified;
/** Value: "DAILY" */
GTLR_EXTERN NSString * const kGTLRCloudbilling_AggregationInfo_AggregationInterval_Daily;
/** Value: "MONTHLY" */
GTLR_EXTERN NSString * const kGTLRCloudbilling_AggregationInfo_AggregationInterval_Monthly;

// ----------------------------------------------------------------------------
// GTLRCloudbilling_AggregationInfo.aggregationLevel

/** Value: "ACCOUNT" */
GTLR_EXTERN NSString * const kGTLRCloudbilling_AggregationInfo_AggregationLevel_Account;
/** Value: "AGGREGATION_LEVEL_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRCloudbilling_AggregationInfo_AggregationLevel_AggregationLevelUnspecified;
/** Value: "PROJECT" */
GTLR_EXTERN NSString * const kGTLRCloudbilling_AggregationInfo_AggregationLevel_Project;

// ----------------------------------------------------------------------------
// GTLRCloudbilling_AuditLogConfig.logType

/**
 *  Admin reads. Example: CloudIAM getIamPolicy
 *
 *  Value: "ADMIN_READ"
 */
GTLR_EXTERN NSString * const kGTLRCloudbilling_AuditLogConfig_LogType_AdminRead;
/**
 *  Data reads. Example: CloudSQL Users list
 *
 *  Value: "DATA_READ"
 */
GTLR_EXTERN NSString * const kGTLRCloudbilling_AuditLogConfig_LogType_DataRead;
/**
 *  Data writes. Example: CloudSQL Users create
 *
 *  Value: "DATA_WRITE"
 */
GTLR_EXTERN NSString * const kGTLRCloudbilling_AuditLogConfig_LogType_DataWrite;
/**
 *  Default case. Should never be this.
 *
 *  Value: "LOG_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudbilling_AuditLogConfig_LogType_LogTypeUnspecified;

/**
 *  Represents the aggregation level and interval for pricing of a single SKU.
 */
@interface GTLRCloudbilling_AggregationInfo : GTLRObject

/**
 *  The number of intervals to aggregate over.
 *  Example: If aggregation_level is "DAILY" and aggregation_count is 14,
 *  aggregation will be over 14 days.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *aggregationCount;

/**
 *  aggregationInterval
 *
 *  Likely values:
 *    @arg @c kGTLRCloudbilling_AggregationInfo_AggregationInterval_AggregationIntervalUnspecified
 *        Value "AGGREGATION_INTERVAL_UNSPECIFIED"
 *    @arg @c kGTLRCloudbilling_AggregationInfo_AggregationInterval_Daily Value
 *        "DAILY"
 *    @arg @c kGTLRCloudbilling_AggregationInfo_AggregationInterval_Monthly
 *        Value "MONTHLY"
 */
@property(nonatomic, copy, nullable) NSString *aggregationInterval;

/**
 *  aggregationLevel
 *
 *  Likely values:
 *    @arg @c kGTLRCloudbilling_AggregationInfo_AggregationLevel_Account Value
 *        "ACCOUNT"
 *    @arg @c kGTLRCloudbilling_AggregationInfo_AggregationLevel_AggregationLevelUnspecified
 *        Value "AGGREGATION_LEVEL_UNSPECIFIED"
 *    @arg @c kGTLRCloudbilling_AggregationInfo_AggregationLevel_Project Value
 *        "PROJECT"
 */
@property(nonatomic, copy, nullable) NSString *aggregationLevel;

@end


/**
 *  Specifies the audit configuration for a service.
 *  The configuration determines which permission types are logged, and what
 *  identities, if any, are exempted from logging.
 *  An AuditConfig must have one or more AuditLogConfigs.
 *  If there are AuditConfigs for both `allServices` and a specific service,
 *  the union of the two AuditConfigs is used for that service: the log_types
 *  specified in each AuditConfig are enabled, and the exempted_members in each
 *  AuditLogConfig are exempted.
 *  Example Policy with multiple AuditConfigs:
 *  {
 *  "audit_configs": [
 *  {
 *  "service": "allServices"
 *  "audit_log_configs": [
 *  {
 *  "log_type": "DATA_READ",
 *  "exempted_members": [
 *  "user:foo\@gmail.com"
 *  ]
 *  },
 *  {
 *  "log_type": "DATA_WRITE",
 *  },
 *  {
 *  "log_type": "ADMIN_READ",
 *  }
 *  ]
 *  },
 *  {
 *  "service": "fooservice.googleapis.com"
 *  "audit_log_configs": [
 *  {
 *  "log_type": "DATA_READ",
 *  },
 *  {
 *  "log_type": "DATA_WRITE",
 *  "exempted_members": [
 *  "user:bar\@gmail.com"
 *  ]
 *  }
 *  ]
 *  }
 *  ]
 *  }
 *  For fooservice, this policy enables DATA_READ, DATA_WRITE and ADMIN_READ
 *  logging. It also exempts foo\@gmail.com from DATA_READ logging, and
 *  bar\@gmail.com from DATA_WRITE logging.
 */
@interface GTLRCloudbilling_AuditConfig : GTLRObject

/** The configuration for logging of each type of permission. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudbilling_AuditLogConfig *> *auditLogConfigs;

/**
 *  Specifies a service that will be enabled for audit logging.
 *  For example, `storage.googleapis.com`, `cloudsql.googleapis.com`.
 *  `allServices` is a special value that covers all services.
 */
@property(nonatomic, copy, nullable) NSString *service;

@end


/**
 *  Provides the configuration for logging a type of permissions.
 *  Example:
 *  {
 *  "audit_log_configs": [
 *  {
 *  "log_type": "DATA_READ",
 *  "exempted_members": [
 *  "user:foo\@gmail.com"
 *  ]
 *  },
 *  {
 *  "log_type": "DATA_WRITE",
 *  }
 *  ]
 *  }
 *  This enables 'DATA_READ' and 'DATA_WRITE' logging, while exempting
 *  foo\@gmail.com from DATA_READ logging.
 */
@interface GTLRCloudbilling_AuditLogConfig : GTLRObject

/**
 *  Specifies the identities that do not cause logging for this type of
 *  permission.
 *  Follows the same format of Binding.members.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *exemptedMembers;

/**
 *  The log type that this config enables.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudbilling_AuditLogConfig_LogType_AdminRead Admin reads.
 *        Example: CloudIAM getIamPolicy (Value: "ADMIN_READ")
 *    @arg @c kGTLRCloudbilling_AuditLogConfig_LogType_DataRead Data reads.
 *        Example: CloudSQL Users list (Value: "DATA_READ")
 *    @arg @c kGTLRCloudbilling_AuditLogConfig_LogType_DataWrite Data writes.
 *        Example: CloudSQL Users create (Value: "DATA_WRITE")
 *    @arg @c kGTLRCloudbilling_AuditLogConfig_LogType_LogTypeUnspecified
 *        Default case. Should never be this. (Value: "LOG_TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *logType;

@end


/**
 *  A billing account in [GCP Console](https://console.cloud.google.com/).
 *  You can assign a billing account to one or more projects.
 */
@interface GTLRCloudbilling_BillingAccount : GTLRObject

/**
 *  The display name given to the billing account, such as `My Billing
 *  Account`. This name is displayed in the GCP Console.
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  If this account is a
 *  [subaccount](https://cloud.google.com/billing/docs/concepts), then this
 *  will be the resource name of the master billing account that it is being
 *  resold through.
 *  Otherwise this will be empty.
 */
@property(nonatomic, copy, nullable) NSString *masterBillingAccount;

/**
 *  The resource name of the billing account. The resource name has the form
 *  `billingAccounts/{billing_account_id}`. For example,
 *  `billingAccounts/012345-567890-ABCDEF` would be the resource name for
 *  billing account `012345-567890-ABCDEF`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  True if the billing account is open, and will therefore be charged for any
 *  usage on associated projects. False if the billing account is closed, and
 *  therefore projects associated with it will be unable to use paid services.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *open;

@end


/**
 *  Associates `members` with a `role`.
 */
@interface GTLRCloudbilling_Binding : GTLRObject

/**
 *  Unimplemented. The condition that is associated with this binding.
 *  NOTE: an unsatisfied condition will not allow user access via current
 *  binding. Different bindings, including their conditions, are examined
 *  independently.
 */
@property(nonatomic, strong, nullable) GTLRCloudbilling_Expr *condition;

/**
 *  Specifies the identities requesting access for a Cloud Platform resource.
 *  `members` can have the following values:
 *  * `allUsers`: A special identifier that represents anyone who is
 *  on the internet; with or without a Google account.
 *  * `allAuthenticatedUsers`: A special identifier that represents anyone
 *  who is authenticated with a Google account or a service account.
 *  * `user:{emailid}`: An email address that represents a specific Google
 *  account. For example, `alice\@gmail.com` .
 *  * `serviceAccount:{emailid}`: An email address that represents a service
 *  account. For example, `my-other-app\@appspot.gserviceaccount.com`.
 *  * `group:{emailid}`: An email address that represents a Google group.
 *  For example, `admins\@example.com`.
 *  * `domain:{domain}`: A Google Apps domain name that represents all the
 *  users of that domain. For example, `google.com` or `example.com`.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *members;

/**
 *  Role that is assigned to `members`.
 *  For example, `roles/viewer`, `roles/editor`, or `roles/owner`.
 */
@property(nonatomic, copy, nullable) NSString *role;

@end


/**
 *  Represents the category hierarchy of a SKU.
 */
@interface GTLRCloudbilling_Category : GTLRObject

/**
 *  The type of product the SKU refers to.
 *  Example: "Compute", "Storage", "Network", "ApplicationServices" etc.
 */
@property(nonatomic, copy, nullable) NSString *resourceFamily;

/**
 *  A group classification for related SKUs.
 *  Example: "RAM", "GPU", "Prediction", "Ops", "GoogleEgress" etc.
 */
@property(nonatomic, copy, nullable) NSString *resourceGroup;

/** The display name of the service this SKU belongs to. */
@property(nonatomic, copy, nullable) NSString *serviceDisplayName;

/**
 *  Represents how the SKU is consumed.
 *  Example: "OnDemand", "Preemptible", "Commit1Mo", "Commit1Yr" etc.
 */
@property(nonatomic, copy, nullable) NSString *usageType;

@end


/**
 *  Represents an expression text. Example:
 *  title: "User account presence"
 *  description: "Determines whether the request has a user account"
 *  expression: "size(request.user) > 0"
 */
@interface GTLRCloudbilling_Expr : GTLRObject

/**
 *  An optional description of the expression. This is a longer text which
 *  describes the expression, e.g. when hovered over it in a UI.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  Textual representation of an expression in
 *  Common Expression Language syntax.
 *  The application context of the containing message determines which
 *  well-known feature set of CEL is supported.
 */
@property(nonatomic, copy, nullable) NSString *expression;

/**
 *  An optional string indicating the location of the expression for error
 *  reporting, e.g. a file name and a position in the file.
 */
@property(nonatomic, copy, nullable) NSString *location;

/**
 *  An optional title for the expression, i.e. a short string describing
 *  its purpose. This can be used e.g. in UIs which allow to enter the
 *  expression.
 */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  Response message for `ListBillingAccounts`.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "billingAccounts" property. If returned as the result of a query,
 *        it should support automatic pagination (when @c shouldFetchNextPages
 *        is enabled).
 */
@interface GTLRCloudbilling_ListBillingAccountsResponse : GTLRCollectionObject

/**
 *  A list of billing accounts.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudbilling_BillingAccount *> *billingAccounts;

/**
 *  A token to retrieve the next page of results. To retrieve the next page,
 *  call `ListBillingAccounts` again with the `page_token` field set to this
 *  value. This field is empty if there are no more results to retrieve.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Request message for `ListProjectBillingInfoResponse`.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "projectBillingInfo" property. If returned as the result of a
 *        query, it should support automatic pagination (when @c
 *        shouldFetchNextPages is enabled).
 */
@interface GTLRCloudbilling_ListProjectBillingInfoResponse : GTLRCollectionObject

/**
 *  A token to retrieve the next page of results. To retrieve the next page,
 *  call `ListProjectBillingInfo` again with the `page_token` field set to this
 *  value. This field is empty if there are no more results to retrieve.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  A list of `ProjectBillingInfo` resources representing the projects
 *  associated with the billing account.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudbilling_ProjectBillingInfo *> *projectBillingInfo;

@end


/**
 *  Response message for `ListServices`.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "services" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudbilling_ListServicesResponse : GTLRCollectionObject

/**
 *  A token to retrieve the next page of results. To retrieve the next page,
 *  call `ListServices` again with the `page_token` field set to this
 *  value. This field is empty if there are no more results to retrieve.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  A list of services.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudbilling_Service *> *services;

@end


/**
 *  Response message for `ListSkus`.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "skus" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudbilling_ListSkusResponse : GTLRCollectionObject

/**
 *  A token to retrieve the next page of results. To retrieve the next page,
 *  call `ListSkus` again with the `page_token` field set to this
 *  value. This field is empty if there are no more results to retrieve.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The list of public SKUs of the given service.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudbilling_Sku *> *skus;

@end


/**
 *  Represents an amount of money with its currency type.
 */
@interface GTLRCloudbilling_Money : GTLRObject

/** The 3-letter currency code defined in ISO 4217. */
@property(nonatomic, copy, nullable) NSString *currencyCode;

/**
 *  Number of nano (10^-9) units of the amount.
 *  The value must be between -999,999,999 and +999,999,999 inclusive.
 *  If `units` is positive, `nanos` must be positive or zero.
 *  If `units` is zero, `nanos` can be positive, zero, or negative.
 *  If `units` is negative, `nanos` must be negative or zero.
 *  For example $-1.75 is represented as `units`=-1 and `nanos`=-750,000,000.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *nanos;

/**
 *  The whole units of the amount.
 *  For example if `currencyCode` is `"USD"`, then 1 unit is one US dollar.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *units;

@end


/**
 *  Defines an Identity and Access Management (IAM) policy. It is used to
 *  specify access control policies for Cloud Platform resources.
 *  A `Policy` consists of a list of `bindings`. A `binding` binds a list of
 *  `members` to a `role`, where the members can be user accounts, Google
 *  groups,
 *  Google domains, and service accounts. A `role` is a named list of
 *  permissions
 *  defined by IAM.
 *  **JSON Example**
 *  {
 *  "bindings": [
 *  {
 *  "role": "roles/owner",
 *  "members": [
 *  "user:mike\@example.com",
 *  "group:admins\@example.com",
 *  "domain:google.com",
 *  "serviceAccount:my-other-app\@appspot.gserviceaccount.com"
 *  ]
 *  },
 *  {
 *  "role": "roles/viewer",
 *  "members": ["user:sean\@example.com"]
 *  }
 *  ]
 *  }
 *  **YAML Example**
 *  bindings:
 *  - members:
 *  - user:mike\@example.com
 *  - group:admins\@example.com
 *  - domain:google.com
 *  - serviceAccount:my-other-app\@appspot.gserviceaccount.com
 *  role: roles/owner
 *  - members:
 *  - user:sean\@example.com
 *  role: roles/viewer
 *  For a description of IAM and its features, see the
 *  [IAM developer's guide](https://cloud.google.com/iam/docs).
 */
@interface GTLRCloudbilling_Policy : GTLRObject

/** Specifies cloud audit logging configuration for this policy. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudbilling_AuditConfig *> *auditConfigs;

/**
 *  Associates a list of `members` to a `role`.
 *  `bindings` with no members will result in an error.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudbilling_Binding *> *bindings;

/**
 *  `etag` is used for optimistic concurrency control as a way to help
 *  prevent simultaneous updates of a policy from overwriting each other.
 *  It is strongly suggested that systems make use of the `etag` in the
 *  read-modify-write cycle to perform policy updates in order to avoid race
 *  conditions: An `etag` is returned in the response to `getIamPolicy`, and
 *  systems are expected to put that etag in the request to `setIamPolicy` to
 *  ensure that their change will be applied to the same version of the policy.
 *  If no `etag` is provided in the call to `setIamPolicy`, then the existing
 *  policy is overwritten blindly.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Deprecated.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *version;

@end


/**
 *  Expresses a mathematical pricing formula. For Example:-
 *  `usage_unit: GBy`
 *  `tiered_rates:`
 *  `[start_usage_amount: 20, unit_price: $10]`
 *  `[start_usage_amount: 100, unit_price: $5]`
 *  The above expresses a pricing formula where the first 20GB is free, the
 *  next 80GB is priced at $10 per GB followed by $5 per GB for additional
 *  usage.
 */
@interface GTLRCloudbilling_PricingExpression : GTLRObject

/**
 *  The base unit for the SKU which is the unit used in usage exports.
 *  Example: "By"
 */
@property(nonatomic, copy, nullable) NSString *baseUnit;

/**
 *  Conversion factor for converting from price per usage_unit to price per
 *  base_unit, and start_usage_amount to start_usage_amount in base_unit.
 *  unit_price / base_unit_conversion_factor = price per base_unit.
 *  start_usage_amount * base_unit_conversion_factor = start_usage_amount in
 *  base_unit.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *baseUnitConversionFactor;

/**
 *  The base unit in human readable form.
 *  Example: "byte".
 */
@property(nonatomic, copy, nullable) NSString *baseUnitDescription;

/**
 *  The recommended quantity of units for displaying pricing info. When
 *  displaying pricing info it is recommended to display:
 *  (unit_price * display_quantity) per display_quantity usage_unit.
 *  This field does not affect the pricing formula and is for display purposes
 *  only.
 *  Example: If the unit_price is "0.0001 USD", the usage_unit is "GB" and
 *  the display_quantity is "1000" then the recommended way of displaying the
 *  pricing info is "0.10 USD per 1000 GB"
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *displayQuantity;

/**
 *  The list of tiered rates for this pricing. The total cost is computed by
 *  applying each of the tiered rates on usage. This repeated list is sorted
 *  by ascending order of start_usage_amount.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudbilling_TierRate *> *tieredRates;

/**
 *  The short hand for unit of usage this pricing is specified in.
 *  Example: usage_unit of "GiBy" means that usage is specified in "Gibi Byte".
 */
@property(nonatomic, copy, nullable) NSString *usageUnit;

/**
 *  The unit of usage in human readable form.
 *  Example: "gibi byte".
 */
@property(nonatomic, copy, nullable) NSString *usageUnitDescription;

@end


/**
 *  Represents the pricing information for a SKU at a single point of time.
 */
@interface GTLRCloudbilling_PricingInfo : GTLRObject

/**
 *  Aggregation Info. This can be left unspecified if the pricing expression
 *  doesn't require aggregation.
 */
@property(nonatomic, strong, nullable) GTLRCloudbilling_AggregationInfo *aggregationInfo;

/**
 *  Conversion rate used for currency conversion, from USD to the currency
 *  specified in the request. This includes any surcharge collected for billing
 *  in non USD currency. If a currency is not specified in the request this
 *  defaults to 1.0.
 *  Example: USD * currency_conversion_rate = JPY
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *currencyConversionRate;

/**
 *  The timestamp from which this pricing was effective within the requested
 *  time range. This is guaranteed to be greater than or equal to the
 *  start_time field in the request and less than the end_time field in the
 *  request. If a time range was not specified in the request this field will
 *  be equivalent to a time within the last 12 hours, indicating the latest
 *  pricing info.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *effectiveTime;

/** Expresses the pricing formula. See `PricingExpression` for an example. */
@property(nonatomic, strong, nullable) GTLRCloudbilling_PricingExpression *pricingExpression;

/**
 *  An optional human readable summary of the pricing information, has a
 *  maximum length of 256 characters.
 */
@property(nonatomic, copy, nullable) NSString *summary;

@end


/**
 *  Encapsulation of billing information for a GCP Console project. A project
 *  has at most one associated billing account at a time (but a billing account
 *  can be assigned to multiple projects).
 */
@interface GTLRCloudbilling_ProjectBillingInfo : GTLRObject

/**
 *  The resource name of the billing account associated with the project, if
 *  any. For example, `billingAccounts/012345-567890-ABCDEF`.
 */
@property(nonatomic, copy, nullable) NSString *billingAccountName;

/**
 *  True if the project is associated with an open billing account, to which
 *  usage on the project is charged. False if the project is associated with a
 *  closed billing account, or no billing account at all, and therefore cannot
 *  use paid services. This field is read-only.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *billingEnabled;

/**
 *  The resource name for the `ProjectBillingInfo`; has the form
 *  `projects/{project_id}/billingInfo`. For example, the resource name for the
 *  billing information for project `tokyo-rain-123` would be
 *  `projects/tokyo-rain-123/billingInfo`. This field is read-only.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The ID of the project that this `ProjectBillingInfo` represents, such as
 *  `tokyo-rain-123`. This is a convenience field so that you don't need to
 *  parse the `name` field to obtain a project ID. This field is read-only.
 */
@property(nonatomic, copy, nullable) NSString *projectId;

@end


/**
 *  Encapsulates a single service in Google Cloud Platform.
 */
@interface GTLRCloudbilling_Service : GTLRObject

/** A human readable display name for this service. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  The resource name for the service.
 *  Example: "services/DA34-426B-A397"
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The identifier for the service.
 *  Example: "DA34-426B-A397"
 */
@property(nonatomic, copy, nullable) NSString *serviceId;

@end


/**
 *  Request message for `SetIamPolicy` method.
 */
@interface GTLRCloudbilling_SetIamPolicyRequest : GTLRObject

/**
 *  REQUIRED: The complete policy to be applied to the `resource`. The size of
 *  the policy is limited to a few 10s of KB. An empty policy is a
 *  valid policy but certain Cloud Platform services (such as Projects)
 *  might reject them.
 */
@property(nonatomic, strong, nullable) GTLRCloudbilling_Policy *policy;

/**
 *  OPTIONAL: A FieldMask specifying which fields of the policy to modify. Only
 *  the fields in the mask will be modified. If no mask is provided, the
 *  following default mask is used:
 *  paths: "bindings, etag"
 *  This field is only used by Cloud IAM.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

@end


/**
 *  Encapsulates a single SKU in Google Cloud Platform
 */
@interface GTLRCloudbilling_Sku : GTLRObject

/** The category hierarchy of this SKU, purely for organizational purpose. */
@property(nonatomic, strong, nullable) GTLRCloudbilling_Category *category;

/**
 *  A human readable description of the SKU, has a maximum length of 256
 *  characters.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  The resource name for the SKU.
 *  Example: "services/DA34-426B-A397/skus/AA95-CD31-42FE"
 */
@property(nonatomic, copy, nullable) NSString *name;

/** A timeline of pricing info for this SKU in chronological order. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudbilling_PricingInfo *> *pricingInfo;

/**
 *  Identifies the service provider.
 *  This is 'Google' for first party services in Google Cloud Platform.
 */
@property(nonatomic, copy, nullable) NSString *serviceProviderName;

/**
 *  List of service regions this SKU is offered at.
 *  Example: "asia-east1"
 *  Service regions can be found at https://cloud.google.com/about/locations/
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *serviceRegions;

/**
 *  The identifier for the SKU.
 *  Example: "AA95-CD31-42FE"
 */
@property(nonatomic, copy, nullable) NSString *skuId;

@end


/**
 *  Request message for `TestIamPermissions` method.
 */
@interface GTLRCloudbilling_TestIamPermissionsRequest : GTLRObject

/**
 *  The set of permissions to check for the `resource`. Permissions with
 *  wildcards (such as '*' or 'storage.*') are not allowed. For more
 *  information see
 *  [IAM Overview](https://cloud.google.com/iam/docs/overview#permissions).
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

@end


/**
 *  Response message for `TestIamPermissions` method.
 */
@interface GTLRCloudbilling_TestIamPermissionsResponse : GTLRObject

/**
 *  A subset of `TestPermissionsRequest.permissions` that the caller is
 *  allowed.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

@end


/**
 *  The price rate indicating starting usage and its corresponding price.
 */
@interface GTLRCloudbilling_TierRate : GTLRObject

/**
 *  Usage is priced at this rate only after this amount.
 *  Example: start_usage_amount of 10 indicates that the usage will be priced
 *  at the unit_price after the first 10 usage_units.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *startUsageAmount;

/**
 *  The price per unit of usage.
 *  Example: unit_price of amount $10 indicates that each unit will cost $10.
 */
@property(nonatomic, strong, nullable) GTLRCloudbilling_Money *unitPrice;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
