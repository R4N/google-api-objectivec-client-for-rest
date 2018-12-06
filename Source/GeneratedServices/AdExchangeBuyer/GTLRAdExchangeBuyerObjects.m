// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Ad Exchange Buyer API (adexchangebuyer/v1.4)
// Description:
//   Accesses your bidding-account information, submits creatives for
//   validation, finds available direct deals, and retrieves performance
//   reports.
// Documentation:
//   https://developers.google.com/ad-exchange/buyer-rest

#import "GTLRAdExchangeBuyerObjects.h"

// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Account
//

@implementation GTLRAdExchangeBuyer_Account
@dynamic applyPretargetingToNonGuaranteedDeals, bidderLocation,
         cookieMatchingNid, cookieMatchingUrl, identifier, kind,
         maximumActiveCreatives, maximumTotalQps, numberActiveCreatives;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"bidderLocation" : [GTLRAdExchangeBuyer_Account_BidderLocation_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Account_BidderLocation_Item
//

@implementation GTLRAdExchangeBuyer_Account_BidderLocation_Item
@dynamic bidProtocol, maximumQps, region, url;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_AccountsList
//

@implementation GTLRAdExchangeBuyer_AccountsList
@dynamic items, kind;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRAdExchangeBuyer_Account class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_AddOrderDealsRequest
//

@implementation GTLRAdExchangeBuyer_AddOrderDealsRequest
@dynamic deals, proposalRevisionNumber, updateAction;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"deals" : [GTLRAdExchangeBuyer_MarketplaceDeal class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_AddOrderDealsResponse
//

@implementation GTLRAdExchangeBuyer_AddOrderDealsResponse
@dynamic deals, proposalRevisionNumber;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"deals" : [GTLRAdExchangeBuyer_MarketplaceDeal class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_AddOrderNotesRequest
//

@implementation GTLRAdExchangeBuyer_AddOrderNotesRequest
@dynamic notes;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"notes" : [GTLRAdExchangeBuyer_MarketplaceNote class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_AddOrderNotesResponse
//

@implementation GTLRAdExchangeBuyer_AddOrderNotesResponse
@dynamic notes;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"notes" : [GTLRAdExchangeBuyer_MarketplaceNote class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_BillingInfo
//

@implementation GTLRAdExchangeBuyer_BillingInfo
@dynamic accountId, accountName, billingId, kind;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"billingId" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_BillingInfoList
//

@implementation GTLRAdExchangeBuyer_BillingInfoList
@dynamic items, kind;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRAdExchangeBuyer_BillingInfo class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Budget
//

@implementation GTLRAdExchangeBuyer_Budget
@dynamic accountId, billingId, budgetAmount, currencyCode, identifier, kind;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Buyer
//

@implementation GTLRAdExchangeBuyer_Buyer
@dynamic accountId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_ContactInformation
//

@implementation GTLRAdExchangeBuyer_ContactInformation
@dynamic email, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_CreateOrdersRequest
//

@implementation GTLRAdExchangeBuyer_CreateOrdersRequest
@dynamic proposals, webPropertyCode;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"proposals" : [GTLRAdExchangeBuyer_Proposal class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_CreateOrdersResponse
//

@implementation GTLRAdExchangeBuyer_CreateOrdersResponse
@dynamic proposals;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"proposals" : [GTLRAdExchangeBuyer_Proposal class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Creative
//

@implementation GTLRAdExchangeBuyer_Creative
@dynamic accountId, adChoicesDestinationUrl, advertiserId, advertiserName,
         agencyId, apiUploadTimestamp, attribute, buyerCreativeId,
         clickThroughUrl, corrections, creativeStatusIdentityType, dealsStatus,
         detectedDomains, filteringReasons, height, HTMLSnippet,
         impressionTrackingUrl, kind, languages, nativeAd, openAuctionStatus,
         productCategories, restrictedCategories, sensitiveCategories,
         servingRestrictions, vendorType, version, videoURL, videoVastXML,
         width;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"advertiserId" : [NSNumber class],
    @"attribute" : [NSNumber class],
    @"clickThroughUrl" : [NSString class],
    @"corrections" : [GTLRAdExchangeBuyer_Creative_Corrections_Item class],
    @"detectedDomains" : [NSString class],
    @"impressionTrackingUrl" : [NSString class],
    @"languages" : [NSString class],
    @"productCategories" : [NSNumber class],
    @"restrictedCategories" : [NSNumber class],
    @"sensitiveCategories" : [NSNumber class],
    @"servingRestrictions" : [GTLRAdExchangeBuyer_Creative_ServingRestrictions_Item class],
    @"vendorType" : [NSNumber class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Creative_Corrections_Item
//

@implementation GTLRAdExchangeBuyer_Creative_Corrections_Item
@dynamic contexts, details, reason;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"contexts" : [GTLRAdExchangeBuyer_Creative_Corrections_Item_Contexts_Item class],
    @"details" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Creative_FilteringReasons
//

@implementation GTLRAdExchangeBuyer_Creative_FilteringReasons
@dynamic date, reasons;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"reasons" : [GTLRAdExchangeBuyer_Creative_FilteringReasons_Reasons_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Creative_NativeAd
//

@implementation GTLRAdExchangeBuyer_Creative_NativeAd
@dynamic advertiser, appIcon, body, callToAction, clickLinkUrl,
         clickTrackingUrl, headline, image, impressionTrackingUrl, logo, price,
         starRating, store, videoURL;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"impressionTrackingUrl" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Creative_ServingRestrictions_Item
//

@implementation GTLRAdExchangeBuyer_Creative_ServingRestrictions_Item
@dynamic contexts, disapprovalReasons, reason;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"contexts" : [GTLRAdExchangeBuyer_Creative_ServingRestrictions_Item_Contexts_Item class],
    @"disapprovalReasons" : [GTLRAdExchangeBuyer_Creative_ServingRestrictions_Item_DisapprovalReasons_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Creative_Corrections_Item_Contexts_Item
//

@implementation GTLRAdExchangeBuyer_Creative_Corrections_Item_Contexts_Item
@dynamic auctionType, contextType, geoCriteriaId, platform;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auctionType" : [NSString class],
    @"geoCriteriaId" : [NSNumber class],
    @"platform" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Creative_FilteringReasons_Reasons_Item
//

@implementation GTLRAdExchangeBuyer_Creative_FilteringReasons_Reasons_Item
@dynamic filteringCount, filteringStatus;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Creative_NativeAd_AppIcon
//

@implementation GTLRAdExchangeBuyer_Creative_NativeAd_AppIcon
@dynamic height, url, width;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Creative_NativeAd_Image
//

@implementation GTLRAdExchangeBuyer_Creative_NativeAd_Image
@dynamic height, url, width;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Creative_NativeAd_Logo
//

@implementation GTLRAdExchangeBuyer_Creative_NativeAd_Logo
@dynamic height, url, width;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Creative_ServingRestrictions_Item_Contexts_Item
//

@implementation GTLRAdExchangeBuyer_Creative_ServingRestrictions_Item_Contexts_Item
@dynamic auctionType, contextType, geoCriteriaId, platform;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auctionType" : [NSString class],
    @"geoCriteriaId" : [NSNumber class],
    @"platform" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Creative_ServingRestrictions_Item_DisapprovalReasons_Item
//

@implementation GTLRAdExchangeBuyer_Creative_ServingRestrictions_Item_DisapprovalReasons_Item
@dynamic details, reason;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_CreativeDealIds
//

@implementation GTLRAdExchangeBuyer_CreativeDealIds
@dynamic dealStatuses, kind;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dealStatuses" : [GTLRAdExchangeBuyer_CreativeDealIds_DealStatuses_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_CreativeDealIds_DealStatuses_Item
//

@implementation GTLRAdExchangeBuyer_CreativeDealIds_DealStatuses_Item
@dynamic arcStatus, dealId, webPropertyId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_CreativesList
//

@implementation GTLRAdExchangeBuyer_CreativesList
@dynamic items, kind, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRAdExchangeBuyer_Creative class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_DealServingMetadata
//

@implementation GTLRAdExchangeBuyer_DealServingMetadata
@dynamic alcoholAdsAllowed, dealPauseStatus;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_DealServingMetadataDealPauseStatus
//

@implementation GTLRAdExchangeBuyer_DealServingMetadataDealPauseStatus
@dynamic buyerPauseReason, firstPausedBy, hasBuyerPaused, hasSellerPaused,
         sellerPauseReason;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_DealTerms
//

@implementation GTLRAdExchangeBuyer_DealTerms
@dynamic brandingType, crossListedExternalDealIdType, descriptionProperty,
         estimatedGrossSpend, estimatedImpressionsPerDay,
         guaranteedFixedPriceTerms, nonGuaranteedAuctionTerms,
         nonGuaranteedFixedPriceTerms, rubiconNonGuaranteedTerms,
         sellerTimeZone;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_DealTermsGuaranteedFixedPriceTerms
//

@implementation GTLRAdExchangeBuyer_DealTermsGuaranteedFixedPriceTerms
@dynamic billingInfo, fixedPrices, guaranteedImpressions, guaranteedLooks,
         minimumDailyLooks;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"fixedPrices" : [GTLRAdExchangeBuyer_PricePerBuyer class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_DealTermsGuaranteedFixedPriceTermsBillingInfo
//

@implementation GTLRAdExchangeBuyer_DealTermsGuaranteedFixedPriceTermsBillingInfo
@dynamic currencyConversionTimeMs, dfpLineItemId, originalContractedQuantity,
         price;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_DealTermsNonGuaranteedAuctionTerms
//

@implementation GTLRAdExchangeBuyer_DealTermsNonGuaranteedAuctionTerms
@dynamic autoOptimizePrivateAuction, reservePricePerBuyers;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"reservePricePerBuyers" : [GTLRAdExchangeBuyer_PricePerBuyer class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_DealTermsNonGuaranteedFixedPriceTerms
//

@implementation GTLRAdExchangeBuyer_DealTermsNonGuaranteedFixedPriceTerms
@dynamic fixedPrices;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"fixedPrices" : [GTLRAdExchangeBuyer_PricePerBuyer class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_DealTermsRubiconNonGuaranteedTerms
//

@implementation GTLRAdExchangeBuyer_DealTermsRubiconNonGuaranteedTerms
@dynamic priorityPrice, standardPrice;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_DeleteOrderDealsRequest
//

@implementation GTLRAdExchangeBuyer_DeleteOrderDealsRequest
@dynamic dealIds, proposalRevisionNumber, updateAction;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dealIds" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_DeleteOrderDealsResponse
//

@implementation GTLRAdExchangeBuyer_DeleteOrderDealsResponse
@dynamic deals, proposalRevisionNumber;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"deals" : [GTLRAdExchangeBuyer_MarketplaceDeal class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_DeliveryControl
//

@implementation GTLRAdExchangeBuyer_DeliveryControl
@dynamic creativeBlockingLevel, deliveryRateType, frequencyCaps;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"frequencyCaps" : [GTLRAdExchangeBuyer_DeliveryControlFrequencyCap class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_DeliveryControlFrequencyCap
//

@implementation GTLRAdExchangeBuyer_DeliveryControlFrequencyCap
@dynamic maxImpressions, numTimeUnits, timeUnitType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Dimension
//

@implementation GTLRAdExchangeBuyer_Dimension
@dynamic dimensionType, dimensionValues;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dimensionValues" : [GTLRAdExchangeBuyer_DimensionDimensionValue class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_DimensionDimensionValue
//

@implementation GTLRAdExchangeBuyer_DimensionDimensionValue
@dynamic identifier, name, percentage;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_EditAllOrderDealsRequest
//

@implementation GTLRAdExchangeBuyer_EditAllOrderDealsRequest
@dynamic deals, proposal, proposalRevisionNumber, updateAction;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"deals" : [GTLRAdExchangeBuyer_MarketplaceDeal class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_EditAllOrderDealsResponse
//

@implementation GTLRAdExchangeBuyer_EditAllOrderDealsResponse
@dynamic deals, orderRevisionNumber;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"deals" : [GTLRAdExchangeBuyer_MarketplaceDeal class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_GetOffersResponse
//

@implementation GTLRAdExchangeBuyer_GetOffersResponse
@dynamic products;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"products" : [GTLRAdExchangeBuyer_Product class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_GetOrderDealsResponse
//

@implementation GTLRAdExchangeBuyer_GetOrderDealsResponse
@dynamic deals;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"deals" : [GTLRAdExchangeBuyer_MarketplaceDeal class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_GetOrderNotesResponse
//

@implementation GTLRAdExchangeBuyer_GetOrderNotesResponse
@dynamic notes;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"notes" : [GTLRAdExchangeBuyer_MarketplaceNote class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_GetOrdersResponse
//

@implementation GTLRAdExchangeBuyer_GetOrdersResponse
@dynamic proposals;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"proposals" : [GTLRAdExchangeBuyer_Proposal class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_GetPublisherProfilesByAccountIdResponse
//

@implementation GTLRAdExchangeBuyer_GetPublisherProfilesByAccountIdResponse
@dynamic profiles;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"profiles" : [GTLRAdExchangeBuyer_PublisherProfileApiProto class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_MarketplaceDeal
//

@implementation GTLRAdExchangeBuyer_MarketplaceDeal
@dynamic buyerPrivateData, creationTimeMs, creativePreApprovalPolicy,
         creativeSafeFrameCompatibility, dealId, dealServingMetadata,
         deliveryControl, externalDealId, flightEndTimeMs, flightStartTimeMs,
         inventoryDescription, isRfpTemplate, isSetupComplete, kind,
         lastUpdateTimeMs, name, productId, productRevisionNumber,
         programmaticCreativeSource, proposalId, sellerContacts,
         sharedTargetings, syndicationProduct, terms, webPropertyCode;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"sellerContacts" : [GTLRAdExchangeBuyer_ContactInformation class],
    @"sharedTargetings" : [GTLRAdExchangeBuyer_SharedTargeting class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_MarketplaceDealParty
//

@implementation GTLRAdExchangeBuyer_MarketplaceDealParty
@dynamic buyer, seller;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_MarketplaceLabel
//

@implementation GTLRAdExchangeBuyer_MarketplaceLabel
@dynamic accountId, createTimeMs, deprecatedMarketplaceDealParty, label;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_MarketplaceNote
//

@implementation GTLRAdExchangeBuyer_MarketplaceNote
@dynamic creatorRole, dealId, kind, note, noteId, proposalId,
         proposalRevisionNumber, timestampMs;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_PerformanceReport
//

@implementation GTLRAdExchangeBuyer_PerformanceReport
@dynamic bidRate, bidRequestRate, calloutStatusRate, cookieMatcherStatusRate,
         creativeStatusRate, filteredBidRate, hostedMatchStatusRate,
         inventoryMatchRate, kind, latency50thPercentile, latency85thPercentile,
         latency95thPercentile, noQuotaInRegion, outOfQuota, pixelMatchRequests,
         pixelMatchResponses, quotaConfiguredLimit, quotaThrottledLimit, region,
         successfulRequestRate, timestamp, unsuccessfulRequestRate;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"calloutStatusRate" : [NSObject class],
    @"cookieMatcherStatusRate" : [NSObject class],
    @"creativeStatusRate" : [NSObject class],
    @"hostedMatchStatusRate" : [NSObject class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_PerformanceReportList
//

@implementation GTLRAdExchangeBuyer_PerformanceReportList
@dynamic kind, performanceReport;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"performanceReport" : [GTLRAdExchangeBuyer_PerformanceReport class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_PretargetingConfig
//

@implementation GTLRAdExchangeBuyer_PretargetingConfig
@dynamic billingId, configId, configName, creativeType, dimensions,
         excludedContentLabels, excludedGeoCriteriaIds, excludedPlacements,
         excludedUserLists, excludedVerticals, geoCriteriaIds, isActive, kind,
         languages, minimumViewabilityDecile, mobileCarriers, mobileDevices,
         mobileOperatingSystemVersions, placements, platforms,
         supportedCreativeAttributes, userIdentifierDataRequired, userLists,
         vendorTypes, verticals, videoPlayerSizes;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"creativeType" : [NSString class],
    @"dimensions" : [GTLRAdExchangeBuyer_PretargetingConfig_Dimensions_Item class],
    @"excludedContentLabels" : [NSNumber class],
    @"excludedGeoCriteriaIds" : [NSNumber class],
    @"excludedPlacements" : [GTLRAdExchangeBuyer_PretargetingConfig_ExcludedPlacements_Item class],
    @"excludedUserLists" : [NSNumber class],
    @"excludedVerticals" : [NSNumber class],
    @"geoCriteriaIds" : [NSNumber class],
    @"languages" : [NSString class],
    @"mobileCarriers" : [NSNumber class],
    @"mobileDevices" : [NSNumber class],
    @"mobileOperatingSystemVersions" : [NSNumber class],
    @"placements" : [GTLRAdExchangeBuyer_PretargetingConfig_Placements_Item class],
    @"platforms" : [NSString class],
    @"supportedCreativeAttributes" : [NSNumber class],
    @"userIdentifierDataRequired" : [NSString class],
    @"userLists" : [NSNumber class],
    @"vendorTypes" : [NSNumber class],
    @"verticals" : [NSNumber class],
    @"videoPlayerSizes" : [GTLRAdExchangeBuyer_PretargetingConfig_VideoPlayerSizes_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_PretargetingConfig_Dimensions_Item
//

@implementation GTLRAdExchangeBuyer_PretargetingConfig_Dimensions_Item
@dynamic height, width;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_PretargetingConfig_ExcludedPlacements_Item
//

@implementation GTLRAdExchangeBuyer_PretargetingConfig_ExcludedPlacements_Item
@dynamic token, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_PretargetingConfig_Placements_Item
//

@implementation GTLRAdExchangeBuyer_PretargetingConfig_Placements_Item
@dynamic token, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_PretargetingConfig_VideoPlayerSizes_Item
//

@implementation GTLRAdExchangeBuyer_PretargetingConfig_VideoPlayerSizes_Item
@dynamic aspectRatio, minHeight, minWidth;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_PretargetingConfigList
//

@implementation GTLRAdExchangeBuyer_PretargetingConfigList
@dynamic items, kind;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"items" : [GTLRAdExchangeBuyer_PretargetingConfig class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Price
//

@implementation GTLRAdExchangeBuyer_Price
@dynamic amountMicros, currencyCode, expectedCpmMicros, pricingType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_PricePerBuyer
//

@implementation GTLRAdExchangeBuyer_PricePerBuyer
@dynamic auctionTier, billedBuyer, buyer, price;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_PrivateData
//

@implementation GTLRAdExchangeBuyer_PrivateData
@dynamic referenceId, referencePayload;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Product
//

@implementation GTLRAdExchangeBuyer_Product
@dynamic billedBuyer, buyer, creationTimeMs, creatorContacts, creatorRole,
         deliveryControl, flightEndTimeMs, flightStartTimeMs,
         hasCreatorSignedOff, inventorySource, kind, labels, lastUpdateTimeMs,
         legacyOfferId, marketplacePublisherProfileId, name, privateAuctionId,
         productId, publisherProfileId, publisherProvidedForecast,
         revisionNumber, seller, sharedTargetings, state, syndicationProduct,
         terms, webPropertyCode;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"creatorContacts" : [GTLRAdExchangeBuyer_ContactInformation class],
    @"labels" : [GTLRAdExchangeBuyer_MarketplaceLabel class],
    @"sharedTargetings" : [GTLRAdExchangeBuyer_SharedTargeting class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Proposal
//

@implementation GTLRAdExchangeBuyer_Proposal
@dynamic billedBuyer, buyer, buyerContacts, buyerPrivateData, dbmAdvertiserIds,
         hasBuyerSignedOff, hasSellerSignedOff, inventorySource,
         isRenegotiating, isSetupComplete, kind, labels,
         lastUpdaterOrCommentorRole, name, negotiationId, originatorRole,
         privateAuctionId, proposalId, proposalState, revisionNumber,
         revisionTimeMs, seller, sellerContacts;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"buyerContacts" : [GTLRAdExchangeBuyer_ContactInformation class],
    @"dbmAdvertiserIds" : [NSString class],
    @"labels" : [GTLRAdExchangeBuyer_MarketplaceLabel class],
    @"sellerContacts" : [GTLRAdExchangeBuyer_ContactInformation class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_PublisherProfileApiProto
//

@implementation GTLRAdExchangeBuyer_PublisherProfileApiProto
@dynamic audience, buyerPitchStatement, directContact, exchange, googlePlusLink,
         isParent, isPublished, kind, logoUrl, mediaKitLink, name, overview,
         profileId, programmaticContact, publisherDomains, publisherProfileId,
         publisherProvidedForecast, rateCardInfoLink, samplePageLink, seller,
         state, topHeadlines;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"publisherDomains" : [NSString class],
    @"topHeadlines" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_PublisherProvidedForecast
//

@implementation GTLRAdExchangeBuyer_PublisherProvidedForecast
@dynamic dimensions, weeklyImpressions, weeklyUniques;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dimensions" : [GTLRAdExchangeBuyer_Dimension class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_Seller
//

@implementation GTLRAdExchangeBuyer_Seller
@dynamic accountId, subAccountId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_SharedTargeting
//

@implementation GTLRAdExchangeBuyer_SharedTargeting
@dynamic exclusions, inclusions, key;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"exclusions" : [GTLRAdExchangeBuyer_TargetingValue class],
    @"inclusions" : [GTLRAdExchangeBuyer_TargetingValue class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_TargetingValue
//

@implementation GTLRAdExchangeBuyer_TargetingValue
@dynamic creativeSizeValue, dayPartTargetingValue, demogAgeCriteriaValue,
         demogGenderCriteriaValue, longValue, stringValue;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_TargetingValueCreativeSize
//

@implementation GTLRAdExchangeBuyer_TargetingValueCreativeSize
@dynamic allowedFormats, companionSizes, creativeSizeType, nativeTemplate, size,
         skippableAdType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"allowedFormats" : [NSString class],
    @"companionSizes" : [GTLRAdExchangeBuyer_TargetingValueSize class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_TargetingValueDayPartTargeting
//

@implementation GTLRAdExchangeBuyer_TargetingValueDayPartTargeting
@dynamic dayParts, timeZoneType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dayParts" : [GTLRAdExchangeBuyer_TargetingValueDayPartTargetingDayPart class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_TargetingValueDayPartTargetingDayPart
//

@implementation GTLRAdExchangeBuyer_TargetingValueDayPartTargetingDayPart
@dynamic dayOfWeek, endHour, endMinute, startHour, startMinute;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_TargetingValueDemogAgeCriteria
//

@implementation GTLRAdExchangeBuyer_TargetingValueDemogAgeCriteria
@dynamic demogAgeCriteriaIds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"demogAgeCriteriaIds" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_TargetingValueDemogGenderCriteria
//

@implementation GTLRAdExchangeBuyer_TargetingValueDemogGenderCriteria
@dynamic demogGenderCriteriaIds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"demogGenderCriteriaIds" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_TargetingValueSize
//

@implementation GTLRAdExchangeBuyer_TargetingValueSize
@dynamic height, width;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAdExchangeBuyer_UpdatePrivateAuctionProposalRequest
//

@implementation GTLRAdExchangeBuyer_UpdatePrivateAuctionProposalRequest
@dynamic externalDealId, note, proposalRevisionNumber, updateAction;
@end
