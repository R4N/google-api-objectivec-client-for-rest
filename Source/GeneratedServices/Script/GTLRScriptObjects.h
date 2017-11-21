// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Apps Script API (script/v1)
// Description:
//   An API for managing and executing Google Apps Script projects.
// Documentation:
//   https://developers.google.com/apps-script/execution/rest/v1/scripts/run

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRScript_Operation_Response;
@class GTLRScript_StackTraceElement;
@class GTLRScript_Status;
@class GTLRScript_Status_Details_Item;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  An object that provides information about the nature of an error resulting
 *  from an attempted execution of a script function using the Apps Script API.
 *  If a run call
 *  succeeds but the script function (or Apps Script itself) throws an
 *  exception,
 *  the response body's error field
 *  contains a
 *  Status object. The `Status` object's `details` field
 *  contains an array with a single one of these `ExecutionError` objects.
 */
@interface GTLRScript_ExecutionError : GTLRObject

/**
 *  The error message thrown by Apps Script, usually localized into the user's
 *  language.
 */
@property(nonatomic, copy, nullable) NSString *errorMessage;

/**
 *  The error type, for example `TypeError` or `ReferenceError`. If the error
 *  type is unavailable, this field is not included.
 */
@property(nonatomic, copy, nullable) NSString *errorType;

/**
 *  An array of objects that provide a stack trace through the script to show
 *  where the execution failed, with the deepest call first.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRScript_StackTraceElement *> *scriptStackTraceElements;

@end


/**
 *  A request to run the function in a script. The script is identified by the
 *  specified `script_id`. Executing a function on a script returns results
 *  based on the implementation of the script.
 */
@interface GTLRScript_ExecutionRequest : GTLRObject

/**
 *  If `true` and the user is an owner of the script, the script runs at the
 *  most recently saved version rather than the version deployed for use with
 *  the Apps Script API. Optional; default is `false`.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *devMode;

/**
 *  The name of the function to execute in the given script. The name does not
 *  include parentheses or parameters.
 */
@property(nonatomic, copy, nullable) NSString *function;

/**
 *  The parameters to be passed to the function being executed. The object type
 *  for each parameter should match the expected type in Apps Script.
 *  Parameters cannot be Apps Script-specific object types (such as a
 *  `Document` or a `Calendar`); they can only be primitive types such as
 *  `string`, `number`, `array`, `object`, or `boolean`. Optional.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) NSArray *parameters;

/**
 *  For Android add-ons only. An ID that represents the user's current session
 *  in the Android app for Google Docs or Sheets, included as extra data in the
 *  [Intent](https://developer.android.com/guide/components/intents-filters.html)
 *  that launches the add-on. When an Android add-on is run with a session
 *  state, it gains the privileges of a
 *  [bound](https://developers.google.com/apps-script/guides/bound)
 *  script&mdash;that is, it can access information like the user's current
 *  cursor position (in Docs) or selected cell (in Sheets). To retrieve the
 *  state, call
 *  `Intent.getStringExtra("com.google.android.apps.docs.addons.SessionState")`.
 *  Optional.
 */
@property(nonatomic, copy, nullable) NSString *sessionState;

@end


/**
 *  An object that provides the return value of a function executed using the
 *  Apps Script API. If the script function returns successfully, the response
 *  body's response field contains this
 *  `ExecutionResponse` object.
 */
@interface GTLRScript_ExecutionResponse : GTLRObject

/**
 *  The return value of the script function. The type matches the object type
 *  returned in Apps Script. Functions called using the Apps Script API cannot
 *  return Apps Script-specific objects (such as a `Document` or a `Calendar`);
 *  they can only return primitive types such as a `string`, `number`, `array`,
 *  `object`, or `boolean`.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) id result;

@end


/**
 *  A representation of a execution of an Apps Script function that is started
 *  using run. The execution response does not arrive until the function
 *  finishes executing. The maximum execution runtime is listed in the [Apps
 *  Script quotas
 *  guide](/apps-script/guides/services/quotas#current_limitations). <p>After
 *  the execution is started, it can have one of four outcomes:</p> <ul> <li> If
 *  the script function returns successfully, the
 *  response field contains an
 *  ExecutionResponse object
 *  with the function's return value in the object's `result` field.</li>
 *  <li> If the script function (or Apps Script itself) throws an exception, the
 *  error field contains a
 *  Status object. The `Status` object's `details`
 *  field contains an array with a single
 *  ExecutionError object that
 *  provides information about the nature of the error.</li>
 *  <li> If the execution has not yet completed,
 *  the done field is `false` and
 *  the neither the `response` nor `error` fields are present.</li>
 *  <li> If the `run` call itself fails (for example, because of a
 *  malformed request or an authorization error), the method returns an HTTP
 *  response code in the 4XX range with a different format for the response
 *  body. Client libraries automatically convert a 4XX response into an
 *  exception class.</li>
 *  </ul>
 */
@interface GTLRScript_Operation : GTLRObject

/**
 *  This field indicates whether the script execution has completed. A completed
 *  execution has a populated `response` field containing the ExecutionResponse
 *  from function that was executed.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/**
 *  If a `run` call succeeds but the script function (or Apps Script itself)
 *  throws an exception, this field contains a Status object. The `Status`
 *  object's `details` field contains an array with a single ExecutionError
 *  object that provides information about the nature of the error.
 */
@property(nonatomic, strong, nullable) GTLRScript_Status *error;

/**
 *  If the script function returns successfully, this field contains an
 *  ExecutionResponse object with the function's return value.
 */
@property(nonatomic, strong, nullable) GTLRScript_Operation_Response *response;

@end


/**
 *  If the script function returns successfully, this field contains an
 *  ExecutionResponse object with the function's return value.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRScript_Operation_Response : GTLRObject
@end


/**
 *  A stack trace through the script that shows where the execution failed.
 */
@interface GTLRScript_StackTraceElement : GTLRObject

/** The name of the function that failed. */
@property(nonatomic, copy, nullable) NSString *function;

/**
 *  The line number where the script failed.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *lineNumber;

@end


/**
 *  If a `run` call succeeds but the script function (or Apps Script itself)
 *  throws an exception, the response body's error field contains this `Status`
 *  object.
 */
@interface GTLRScript_Status : GTLRObject

/**
 *  The status code. For this API, this value either: <ul> <li> 3, indicating an
 *  `INVALID_ARGUMENT` error, or</li> <li> 1, indicating a `CANCELLED`
 *  execution.</li> </ul>
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  An array that contains a single ExecutionError object that provides
 *  information about the nature of the error.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRScript_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which is in English. Any user-facing error
 *  message is localized and sent in the
 *  [google.rpc.Status.details](google.rpc.Status.details) field, or localized
 *  by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRScript_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRScript_Status_Details_Item : GTLRObject
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
