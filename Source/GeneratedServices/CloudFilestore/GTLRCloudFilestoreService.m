// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Filestore API (file/v1beta1)
// Description:
//   The Cloud Filestore API is used for creating and managing cloud file
//   servers.
// Documentation:
//   https://cloud.google.com/filestore/

#import "GTLRCloudFilestore.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeCloudFilestoreCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRCloudFilestoreService
//

@implementation GTLRCloudFilestoreService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://file.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
