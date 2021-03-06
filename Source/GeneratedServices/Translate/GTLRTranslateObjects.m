// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Translation API (translate/v2)
// Description:
//   The Google Cloud Translation API lets websites and programs integrate with
//   Google Translate programmatically.
// Documentation:
//   https://code.google.com/apis/language/translate/v2/getting_started.html

#import "GTLRTranslateObjects.h"

// ----------------------------------------------------------------------------
//
//   GTLRTranslate_DetectionsListResponse
//

@implementation GTLRTranslate_DetectionsListResponse
@dynamic detections;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"detections" : [GTLRTranslate_DetectionsResource_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTranslate_DetectionsResource_Item
//

@implementation GTLRTranslate_DetectionsResource_Item
@dynamic confidence, isReliable, language;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTranslate_DetectLanguageRequest
//

@implementation GTLRTranslate_DetectLanguageRequest
@dynamic q;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"q" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTranslate_GetSupportedLanguagesRequest
//

@implementation GTLRTranslate_GetSupportedLanguagesRequest
@dynamic target;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTranslate_LanguagesListResponse
//

@implementation GTLRTranslate_LanguagesListResponse
@dynamic languages;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"languages" : [GTLRTranslate_LanguagesResource class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTranslate_LanguagesResource
//

@implementation GTLRTranslate_LanguagesResource
@dynamic language, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRTranslate_TextRequest
//

@implementation GTLRTranslate_TextRequest
@dynamic format, model, q, source, target;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"q" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTranslate_TranslationsListResponse
//

@implementation GTLRTranslate_TranslationsListResponse
@dynamic translations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"translations" : [GTLRTranslate_TranslationsResource class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRTranslate_TranslationsResource
//

@implementation GTLRTranslate_TranslationsResource
@dynamic detectedSourceLanguage, model, translatedText;
@end
