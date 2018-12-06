// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Classroom API (classroom/v1)
// Description:
//   Manages classes, rosters, and invitations in Google Classroom.
// Documentation:
//   https://developers.google.com/classroom/

#import "GTLRClassroomObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRClassroom_Announcement.assigneeMode
NSString * const kGTLRClassroom_Announcement_AssigneeMode_AllStudents = @"ALL_STUDENTS";
NSString * const kGTLRClassroom_Announcement_AssigneeMode_AssigneeModeUnspecified = @"ASSIGNEE_MODE_UNSPECIFIED";
NSString * const kGTLRClassroom_Announcement_AssigneeMode_IndividualStudents = @"INDIVIDUAL_STUDENTS";

// GTLRClassroom_Announcement.state
NSString * const kGTLRClassroom_Announcement_State_AnnouncementStateUnspecified = @"ANNOUNCEMENT_STATE_UNSPECIFIED";
NSString * const kGTLRClassroom_Announcement_State_Deleted     = @"DELETED";
NSString * const kGTLRClassroom_Announcement_State_Draft       = @"DRAFT";
NSString * const kGTLRClassroom_Announcement_State_Published   = @"PUBLISHED";

// GTLRClassroom_Course.courseState
NSString * const kGTLRClassroom_Course_CourseState_Active      = @"ACTIVE";
NSString * const kGTLRClassroom_Course_CourseState_Archived    = @"ARCHIVED";
NSString * const kGTLRClassroom_Course_CourseState_CourseStateUnspecified = @"COURSE_STATE_UNSPECIFIED";
NSString * const kGTLRClassroom_Course_CourseState_Declined    = @"DECLINED";
NSString * const kGTLRClassroom_Course_CourseState_Provisioned = @"PROVISIONED";
NSString * const kGTLRClassroom_Course_CourseState_Suspended   = @"SUSPENDED";

// GTLRClassroom_CourseWork.assigneeMode
NSString * const kGTLRClassroom_CourseWork_AssigneeMode_AllStudents = @"ALL_STUDENTS";
NSString * const kGTLRClassroom_CourseWork_AssigneeMode_AssigneeModeUnspecified = @"ASSIGNEE_MODE_UNSPECIFIED";
NSString * const kGTLRClassroom_CourseWork_AssigneeMode_IndividualStudents = @"INDIVIDUAL_STUDENTS";

// GTLRClassroom_CourseWork.state
NSString * const kGTLRClassroom_CourseWork_State_CourseWorkStateUnspecified = @"COURSE_WORK_STATE_UNSPECIFIED";
NSString * const kGTLRClassroom_CourseWork_State_Deleted       = @"DELETED";
NSString * const kGTLRClassroom_CourseWork_State_Draft         = @"DRAFT";
NSString * const kGTLRClassroom_CourseWork_State_Published     = @"PUBLISHED";

// GTLRClassroom_CourseWork.submissionModificationMode
NSString * const kGTLRClassroom_CourseWork_SubmissionModificationMode_Modifiable = @"MODIFIABLE";
NSString * const kGTLRClassroom_CourseWork_SubmissionModificationMode_ModifiableUntilTurnedIn = @"MODIFIABLE_UNTIL_TURNED_IN";
NSString * const kGTLRClassroom_CourseWork_SubmissionModificationMode_SubmissionModificationModeUnspecified = @"SUBMISSION_MODIFICATION_MODE_UNSPECIFIED";

// GTLRClassroom_CourseWork.workType
NSString * const kGTLRClassroom_CourseWork_WorkType_Assignment = @"ASSIGNMENT";
NSString * const kGTLRClassroom_CourseWork_WorkType_CourseWorkTypeUnspecified = @"COURSE_WORK_TYPE_UNSPECIFIED";
NSString * const kGTLRClassroom_CourseWork_WorkType_MultipleChoiceQuestion = @"MULTIPLE_CHOICE_QUESTION";
NSString * const kGTLRClassroom_CourseWork_WorkType_ShortAnswerQuestion = @"SHORT_ANSWER_QUESTION";

// GTLRClassroom_Feed.feedType
NSString * const kGTLRClassroom_Feed_FeedType_CourseRosterChanges = @"COURSE_ROSTER_CHANGES";
NSString * const kGTLRClassroom_Feed_FeedType_CourseWorkChanges = @"COURSE_WORK_CHANGES";
NSString * const kGTLRClassroom_Feed_FeedType_DomainRosterChanges = @"DOMAIN_ROSTER_CHANGES";
NSString * const kGTLRClassroom_Feed_FeedType_FeedTypeUnspecified = @"FEED_TYPE_UNSPECIFIED";

// GTLRClassroom_GlobalPermission.permission
NSString * const kGTLRClassroom_GlobalPermission_Permission_CreateCourse = @"CREATE_COURSE";
NSString * const kGTLRClassroom_GlobalPermission_Permission_PermissionUnspecified = @"PERMISSION_UNSPECIFIED";

// GTLRClassroom_GradeHistory.gradeChangeType
NSString * const kGTLRClassroom_GradeHistory_GradeChangeType_AssignedGradePointsEarnedChange = @"ASSIGNED_GRADE_POINTS_EARNED_CHANGE";
NSString * const kGTLRClassroom_GradeHistory_GradeChangeType_DraftGradePointsEarnedChange = @"DRAFT_GRADE_POINTS_EARNED_CHANGE";
NSString * const kGTLRClassroom_GradeHistory_GradeChangeType_MaxPointsChange = @"MAX_POINTS_CHANGE";
NSString * const kGTLRClassroom_GradeHistory_GradeChangeType_UnknownGradeChangeType = @"UNKNOWN_GRADE_CHANGE_TYPE";

// GTLRClassroom_GuardianInvitation.state
NSString * const kGTLRClassroom_GuardianInvitation_State_Complete = @"COMPLETE";
NSString * const kGTLRClassroom_GuardianInvitation_State_GuardianInvitationStateUnspecified = @"GUARDIAN_INVITATION_STATE_UNSPECIFIED";
NSString * const kGTLRClassroom_GuardianInvitation_State_Pending = @"PENDING";

// GTLRClassroom_Invitation.role
NSString * const kGTLRClassroom_Invitation_Role_CourseRoleUnspecified = @"COURSE_ROLE_UNSPECIFIED";
NSString * const kGTLRClassroom_Invitation_Role_Owner          = @"OWNER";
NSString * const kGTLRClassroom_Invitation_Role_Student        = @"STUDENT";
NSString * const kGTLRClassroom_Invitation_Role_Teacher        = @"TEACHER";

// GTLRClassroom_ModifyAnnouncementAssigneesRequest.assigneeMode
NSString * const kGTLRClassroom_ModifyAnnouncementAssigneesRequest_AssigneeMode_AllStudents = @"ALL_STUDENTS";
NSString * const kGTLRClassroom_ModifyAnnouncementAssigneesRequest_AssigneeMode_AssigneeModeUnspecified = @"ASSIGNEE_MODE_UNSPECIFIED";
NSString * const kGTLRClassroom_ModifyAnnouncementAssigneesRequest_AssigneeMode_IndividualStudents = @"INDIVIDUAL_STUDENTS";

// GTLRClassroom_ModifyCourseWorkAssigneesRequest.assigneeMode
NSString * const kGTLRClassroom_ModifyCourseWorkAssigneesRequest_AssigneeMode_AllStudents = @"ALL_STUDENTS";
NSString * const kGTLRClassroom_ModifyCourseWorkAssigneesRequest_AssigneeMode_AssigneeModeUnspecified = @"ASSIGNEE_MODE_UNSPECIFIED";
NSString * const kGTLRClassroom_ModifyCourseWorkAssigneesRequest_AssigneeMode_IndividualStudents = @"INDIVIDUAL_STUDENTS";

// GTLRClassroom_SharedDriveFile.shareMode
NSString * const kGTLRClassroom_SharedDriveFile_ShareMode_Edit = @"EDIT";
NSString * const kGTLRClassroom_SharedDriveFile_ShareMode_StudentCopy = @"STUDENT_COPY";
NSString * const kGTLRClassroom_SharedDriveFile_ShareMode_UnknownShareMode = @"UNKNOWN_SHARE_MODE";
NSString * const kGTLRClassroom_SharedDriveFile_ShareMode_View = @"VIEW";

// GTLRClassroom_StateHistory.state
NSString * const kGTLRClassroom_StateHistory_State_Created     = @"CREATED";
NSString * const kGTLRClassroom_StateHistory_State_ReclaimedByStudent = @"RECLAIMED_BY_STUDENT";
NSString * const kGTLRClassroom_StateHistory_State_Returned    = @"RETURNED";
NSString * const kGTLRClassroom_StateHistory_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRClassroom_StateHistory_State_StudentEditedAfterTurnIn = @"STUDENT_EDITED_AFTER_TURN_IN";
NSString * const kGTLRClassroom_StateHistory_State_TurnedIn    = @"TURNED_IN";

// GTLRClassroom_StudentSubmission.courseWorkType
NSString * const kGTLRClassroom_StudentSubmission_CourseWorkType_Assignment = @"ASSIGNMENT";
NSString * const kGTLRClassroom_StudentSubmission_CourseWorkType_CourseWorkTypeUnspecified = @"COURSE_WORK_TYPE_UNSPECIFIED";
NSString * const kGTLRClassroom_StudentSubmission_CourseWorkType_MultipleChoiceQuestion = @"MULTIPLE_CHOICE_QUESTION";
NSString * const kGTLRClassroom_StudentSubmission_CourseWorkType_ShortAnswerQuestion = @"SHORT_ANSWER_QUESTION";

// GTLRClassroom_StudentSubmission.state
NSString * const kGTLRClassroom_StudentSubmission_State_Created = @"CREATED";
NSString * const kGTLRClassroom_StudentSubmission_State_New    = @"NEW";
NSString * const kGTLRClassroom_StudentSubmission_State_ReclaimedByStudent = @"RECLAIMED_BY_STUDENT";
NSString * const kGTLRClassroom_StudentSubmission_State_Returned = @"RETURNED";
NSString * const kGTLRClassroom_StudentSubmission_State_SubmissionStateUnspecified = @"SUBMISSION_STATE_UNSPECIFIED";
NSString * const kGTLRClassroom_StudentSubmission_State_TurnedIn = @"TURNED_IN";

// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Announcement
//

@implementation GTLRClassroom_Announcement
@dynamic alternateLink, assigneeMode, courseId, creationTime, creatorUserId,
         identifier, individualStudentsOptions, materials, scheduledTime, state,
         text, updateTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"materials" : [GTLRClassroom_Material class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Assignment
//

@implementation GTLRClassroom_Assignment
@dynamic studentWorkFolder;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_AssignmentSubmission
//

@implementation GTLRClassroom_AssignmentSubmission
@dynamic attachments;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"attachments" : [GTLRClassroom_Attachment class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Attachment
//

@implementation GTLRClassroom_Attachment
@dynamic driveFile, form, link, youTubeVideo;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_CloudPubsubTopic
//

@implementation GTLRClassroom_CloudPubsubTopic
@dynamic topicName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Course
//

@implementation GTLRClassroom_Course
@dynamic alternateLink, calendarId, courseGroupEmail, courseMaterialSets,
         courseState, creationTime, descriptionProperty, descriptionHeading,
         enrollmentCode, guardiansEnabled, identifier, name, ownerId, room,
         section, teacherFolder, teacherGroupEmail, updateTime;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"identifier" : @"id"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"courseMaterialSets" : [GTLRClassroom_CourseMaterialSet class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_CourseAlias
//

@implementation GTLRClassroom_CourseAlias
@dynamic alias;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_CourseMaterial
//

@implementation GTLRClassroom_CourseMaterial
@dynamic driveFile, form, link, youTubeVideo;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_CourseMaterialSet
//

@implementation GTLRClassroom_CourseMaterialSet
@dynamic materials, title;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"materials" : [GTLRClassroom_CourseMaterial class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_CourseRosterChangesInfo
//

@implementation GTLRClassroom_CourseRosterChangesInfo
@dynamic courseId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_CourseWork
//

@implementation GTLRClassroom_CourseWork
@dynamic alternateLink, assigneeMode, assignment, associatedWithDeveloper,
         courseId, creationTime, creatorUserId, descriptionProperty, dueDate,
         dueTime, identifier, individualStudentsOptions, materials, maxPoints,
         multipleChoiceQuestion, scheduledTime, state,
         submissionModificationMode, title, updateTime, workType;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"descriptionProperty" : @"description",
    @"identifier" : @"id"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"materials" : [GTLRClassroom_Material class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_CourseWorkChangesInfo
//

@implementation GTLRClassroom_CourseWorkChangesInfo
@dynamic courseId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Date
//

@implementation GTLRClassroom_Date
@dynamic day, month, year;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_DriveFile
//

@implementation GTLRClassroom_DriveFile
@dynamic alternateLink, identifier, thumbnailUrl, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_DriveFolder
//

@implementation GTLRClassroom_DriveFolder
@dynamic alternateLink, identifier, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Empty
//

@implementation GTLRClassroom_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Feed
//

@implementation GTLRClassroom_Feed
@dynamic courseRosterChangesInfo, courseWorkChangesInfo, feedType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Form
//

@implementation GTLRClassroom_Form
@dynamic formUrl, responseUrl, thumbnailUrl, title;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_GlobalPermission
//

@implementation GTLRClassroom_GlobalPermission
@dynamic permission;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_GradeHistory
//

@implementation GTLRClassroom_GradeHistory
@dynamic actorUserId, gradeChangeType, gradeTimestamp, maxPoints, pointsEarned;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Guardian
//

@implementation GTLRClassroom_Guardian
@dynamic guardianId, guardianProfile, invitedEmailAddress, studentId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_GuardianInvitation
//

@implementation GTLRClassroom_GuardianInvitation
@dynamic creationTime, invitationId, invitedEmailAddress, state, studentId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_IndividualStudentsOptions
//

@implementation GTLRClassroom_IndividualStudentsOptions
@dynamic studentIds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"studentIds" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Invitation
//

@implementation GTLRClassroom_Invitation
@dynamic courseId, identifier, role, userId;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Link
//

@implementation GTLRClassroom_Link
@dynamic thumbnailUrl, title, url;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ListAnnouncementsResponse
//

@implementation GTLRClassroom_ListAnnouncementsResponse
@dynamic announcements, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"announcements" : [GTLRClassroom_Announcement class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"announcements";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ListCourseAliasesResponse
//

@implementation GTLRClassroom_ListCourseAliasesResponse
@dynamic aliases, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"aliases" : [GTLRClassroom_CourseAlias class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"aliases";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ListCoursesResponse
//

@implementation GTLRClassroom_ListCoursesResponse
@dynamic courses, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"courses" : [GTLRClassroom_Course class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"courses";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ListCourseWorkResponse
//

@implementation GTLRClassroom_ListCourseWorkResponse
@dynamic courseWork, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"courseWork" : [GTLRClassroom_CourseWork class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"courseWork";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ListGuardianInvitationsResponse
//

@implementation GTLRClassroom_ListGuardianInvitationsResponse
@dynamic guardianInvitations, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"guardianInvitations" : [GTLRClassroom_GuardianInvitation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"guardianInvitations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ListGuardiansResponse
//

@implementation GTLRClassroom_ListGuardiansResponse
@dynamic guardians, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"guardians" : [GTLRClassroom_Guardian class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"guardians";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ListInvitationsResponse
//

@implementation GTLRClassroom_ListInvitationsResponse
@dynamic invitations, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"invitations" : [GTLRClassroom_Invitation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"invitations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ListStudentsResponse
//

@implementation GTLRClassroom_ListStudentsResponse
@dynamic nextPageToken, students;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"students" : [GTLRClassroom_Student class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"students";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ListStudentSubmissionsResponse
//

@implementation GTLRClassroom_ListStudentSubmissionsResponse
@dynamic nextPageToken, studentSubmissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"studentSubmissions" : [GTLRClassroom_StudentSubmission class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"studentSubmissions";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ListTeachersResponse
//

@implementation GTLRClassroom_ListTeachersResponse
@dynamic nextPageToken, teachers;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"teachers" : [GTLRClassroom_Teacher class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"teachers";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Material
//

@implementation GTLRClassroom_Material
@dynamic driveFile, form, link, youtubeVideo;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ModifyAnnouncementAssigneesRequest
//

@implementation GTLRClassroom_ModifyAnnouncementAssigneesRequest
@dynamic assigneeMode, modifyIndividualStudentsOptions;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ModifyAttachmentsRequest
//

@implementation GTLRClassroom_ModifyAttachmentsRequest
@dynamic addAttachments;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"addAttachments" : [GTLRClassroom_Attachment class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ModifyCourseWorkAssigneesRequest
//

@implementation GTLRClassroom_ModifyCourseWorkAssigneesRequest
@dynamic assigneeMode, modifyIndividualStudentsOptions;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ModifyIndividualStudentsOptions
//

@implementation GTLRClassroom_ModifyIndividualStudentsOptions
@dynamic addStudentIds, removeStudentIds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"addStudentIds" : [NSString class],
    @"removeStudentIds" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_MultipleChoiceQuestion
//

@implementation GTLRClassroom_MultipleChoiceQuestion
@dynamic choices;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"choices" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_MultipleChoiceSubmission
//

@implementation GTLRClassroom_MultipleChoiceSubmission
@dynamic answer;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Name
//

@implementation GTLRClassroom_Name
@dynamic familyName, fullName, givenName;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ReclaimStudentSubmissionRequest
//

@implementation GTLRClassroom_ReclaimStudentSubmissionRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Registration
//

@implementation GTLRClassroom_Registration
@dynamic cloudPubsubTopic, expiryTime, feed, registrationId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ReturnStudentSubmissionRequest
//

@implementation GTLRClassroom_ReturnStudentSubmissionRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_SharedDriveFile
//

@implementation GTLRClassroom_SharedDriveFile
@dynamic driveFile, shareMode;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_ShortAnswerSubmission
//

@implementation GTLRClassroom_ShortAnswerSubmission
@dynamic answer;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_StateHistory
//

@implementation GTLRClassroom_StateHistory
@dynamic actorUserId, state, stateTimestamp;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Student
//

@implementation GTLRClassroom_Student
@dynamic courseId, profile, studentWorkFolder, userId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_StudentSubmission
//

@implementation GTLRClassroom_StudentSubmission
@dynamic alternateLink, assignedGrade, assignmentSubmission,
         associatedWithDeveloper, courseId, courseWorkId, courseWorkType,
         creationTime, draftGrade, identifier, late, multipleChoiceSubmission,
         shortAnswerSubmission, state, submissionHistory, updateTime, userId;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"submissionHistory" : [GTLRClassroom_SubmissionHistory class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_SubmissionHistory
//

@implementation GTLRClassroom_SubmissionHistory
@dynamic gradeHistory, stateHistory;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_Teacher
//

@implementation GTLRClassroom_Teacher
@dynamic courseId, profile, userId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_TimeOfDay
//

@implementation GTLRClassroom_TimeOfDay
@dynamic hours, minutes, nanos, seconds;
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_TurnInStudentSubmissionRequest
//

@implementation GTLRClassroom_TurnInStudentSubmissionRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_UserProfile
//

@implementation GTLRClassroom_UserProfile
@dynamic emailAddress, identifier, name, permissions, photoUrl, verifiedTeacher;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [GTLRClassroom_GlobalPermission class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRClassroom_YouTubeVideo
//

@implementation GTLRClassroom_YouTubeVideo
@dynamic alternateLink, identifier, thumbnailUrl, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

@end
