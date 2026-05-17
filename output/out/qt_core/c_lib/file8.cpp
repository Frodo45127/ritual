#include "qt_core_c_global.h"
#include "file1.h"
extern "C" {
RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString8(QLocale const * this_ptr, long long arg1) {
  return new QString(this_ptr->toCurrencyString(arg1));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString9(QLocale const * this_ptr, unsigned long long arg1) {
  return new QString(this_ptr->toCurrencyString(arg1));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString10(QLocale const * this_ptr, short i) {
  return new QString(this_ptr->toCurrencyString(i));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString11(QLocale const * this_ptr, unsigned short i) {
  return new QString(this_ptr->toCurrencyString(i));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString12(QLocale const * this_ptr, int i) {
  return new QString(this_ptr->toCurrencyString(i));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString13(QLocale const * this_ptr, unsigned int i) {
  return new QString(this_ptr->toCurrencyString(i));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString14(QLocale const * this_ptr, double arg1, QString const * symbol) {
  return new QString(this_ptr->toCurrencyString(arg1, *symbol));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString15(QLocale const * this_ptr, double arg1) {
  return new QString(this_ptr->toCurrencyString(arg1));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString16(QLocale const * this_ptr, float i, QString const * symbol) {
  return new QString(this_ptr->toCurrencyString(i, *symbol));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString17(QLocale const * this_ptr, float i) {
  return new QString(this_ptr->toCurrencyString(i));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_formattedDataSize1(QLocale const * this_ptr, long long bytes, int precision) {
  return new QString(this_ptr->formattedDataSize(bytes, precision));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_formattedDataSize2(QLocale const * this_ptr, long long bytes) {
  return new QString(this_ptr->formattedDataSize(bytes));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QLocale_uiLanguages1(QLocale const * this_ptr) {
  return new QList< QString >(this_ptr->uiLanguages());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_languageToCode1(QLocale::Language language) {
  return new QString(QLocale::languageToCode(language));
}


RITUAL_EXPORT QLocale::Language ctr_qt_core_ffi_QLocale_codeToLanguage1(QStringView const * languageCode) {
  return QLocale::codeToLanguage(*languageCode);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_quoteString2(QLocale const * this_ptr, QString const * str) {
  return new QString(this_ptr->quoteString(*str));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_quoteString3(QLocale const * this_ptr, QStringView const * str) {
  return new QString(this_ptr->quoteString(*str));
}


RITUAL_EXPORT QCalendar::YearMonthDay * ctr_qt_core_ffi_QCalendar_YearMonthDay_YearMonthDay3(int y, int m) {
  return new QCalendar::YearMonthDay(y, m);
}


RITUAL_EXPORT QCalendar::YearMonthDay * ctr_qt_core_ffi_QCalendar_YearMonthDay_YearMonthDay4(int y) {
  return new QCalendar::YearMonthDay(y);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCalendar_daysInMonth1(QCalendar const * this_ptr, int month) {
  return this_ptr->daysInMonth(month);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCalendar_monthName1(QCalendar const * this_ptr, QLocale const * locale, int month, int year) {
  return new QString(this_ptr->monthName(*locale, month, year));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCalendar_monthName2(QCalendar const * this_ptr, QLocale const * locale, int month) {
  return new QString(this_ptr->monthName(*locale, month));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCalendar_standaloneMonthName1(QCalendar const * this_ptr, QLocale const * locale, int month, int year) {
  return new QString(this_ptr->standaloneMonthName(*locale, month, year));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCalendar_standaloneMonthName2(QCalendar const * this_ptr, QLocale const * locale, int month) {
  return new QString(this_ptr->standaloneMonthName(*locale, month));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCalendar_weekDayName1(QCalendar const * this_ptr, QLocale const * locale, int day) {
  return new QString(this_ptr->weekDayName(*locale, day));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCalendar_standaloneWeekDayName1(QCalendar const * this_ptr, QLocale const * locale, int day) {
  return new QString(this_ptr->standaloneWeekDayName(*locale, day));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash181(QCborSimpleType tag) {
  return qHash(tag);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash182(QCborTag tag) {
  return qHash(tag);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_weekNumber1(QDate const * this_ptr) {
  return this_ptr->weekNumber();
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDate_startOfDay3(QDate const * this_ptr, Qt::TimeSpec spec) {
  return new QDateTime(this_ptr->startOfDay(spec));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDate_endOfDay3(QDate const * this_ptr, Qt::TimeSpec spec) {
  return new QDateTime(this_ptr->endOfDay(spec));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDate_toString5(QDate const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString11(QStringView const * string) {
  return new QDate(QDate::fromString(*string));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString12(QString const * string) {
  return new QDate(QDate::fromString(*string));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString13(QStringView const * string, QStringView const * format) {
  return new QDate(QDate::fromString(*string, *format));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString14(QString const * string, QStringView const * format) {
  return new QDate(QDate::fromString(*string, *format));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString15(QString const * string, QString const * format) {
  return new QDate(QDate::fromString(*string, *format));
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_QTime3(int h, int m, int s) {
  return new QTime(h, m, s);
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_QTime4(int h, int m) {
  return new QTime(h, m);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTime_toString3(QTime const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTime_setHMS1(QTime * this_ptr, int h, int m, int s) {
  return this_ptr->setHMS(h, m, s);
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_fromString5(QStringView const * string) {
  return new QTime(QTime::fromString(*string));
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_fromString6(QString const * string) {
  return new QTime(QTime::fromString(*string));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTime_isValid2(int h, int m, int s) {
  return QTime::isValid(h, m, s);
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_QDateTime6(QDate const * date, QTime const * time, Qt::TimeSpec spec) {
  return new QDateTime(*date, *time, spec);
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_QDateTime7(QDate const * date, QTime const * time, QTimeZone const * timeZone) {
  return new QDateTime(*date, *time, *timeZone);
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_QDateTime8(QDate const * date, QTime const * time) {
  return new QDateTime(*date, *time);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDateTime_setDate1(QDateTime * this_ptr, QDate const * date) {
  this_ptr->setDate(*date);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDateTime_setTime1(QDateTime * this_ptr, QTime const * time) {
  this_ptr->setTime(*time);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDateTime_setTimeZone1(QDateTime * this_ptr, QTimeZone const * toZone) {
  this_ptr->setTimeZone(*toZone);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDateTime_toString5(QDateTime const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString11(QStringView const * string) {
  return new QDateTime(QDateTime::fromString(*string));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString12(QString const * string) {
  return new QDateTime(QDateTime::fromString(*string));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString13(QStringView const * string, QStringView const * format) {
  return new QDateTime(QDateTime::fromString(*string, *format));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString14(QString const * string, QStringView const * format) {
  return new QDateTime(QDateTime::fromString(*string, *format));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString15(QString const * string, QString const * format) {
  return new QDateTime(QDateTime::fromString(*string, *format));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromMSecsSinceEpoch3(long long msecs, Qt::TimeSpec spec) {
  return new QDateTime(QDateTime::fromMSecsSinceEpoch(msecs, spec));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromSecsSinceEpoch3(long long secs, Qt::TimeSpec spec) {
  return new QDateTime(QDateTime::fromSecsSinceEpoch(secs, spec));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash183(QDateTime const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash184(QDate const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash185(QTime const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash186(QRegularExpression const * key) {
  return qHash(*key);
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QRegularExpression_QRegularExpression4(QString const * pattern) {
  return new QRegularExpression(*pattern);
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpression_match2(QRegularExpression const * this_ptr, QString const * subject, long long offset, QRegularExpression::MatchType matchType) {
  return new QRegularExpressionMatch(this_ptr->match(*subject, offset, matchType));
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpression_match3(QRegularExpression const * this_ptr, QString const * subject, long long offset) {
  return new QRegularExpressionMatch(this_ptr->match(*subject, offset));
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpression_match4(QRegularExpression const * this_ptr, QString const * subject) {
  return new QRegularExpressionMatch(this_ptr->match(*subject));
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpression_match5(QRegularExpression const * this_ptr, QStringView const * subjectView, long long offset, QRegularExpression::MatchType matchType) {
  return new QRegularExpressionMatch(this_ptr->match(*subjectView, offset, matchType));
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpression_match6(QRegularExpression const * this_ptr, QStringView const * subjectView, long long offset) {
  return new QRegularExpressionMatch(this_ptr->match(*subjectView, offset));
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpression_match7(QRegularExpression const * this_ptr, QStringView const * subjectView) {
  return new QRegularExpressionMatch(this_ptr->match(*subjectView));
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpression_matchView1(QRegularExpression const * this_ptr, QStringView const * subjectView, long long offset, QRegularExpression::MatchType matchType) {
  return new QRegularExpressionMatch(this_ptr->matchView(*subjectView, offset, matchType));
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpression_matchView2(QRegularExpression const * this_ptr, QStringView const * subjectView, long long offset) {
  return new QRegularExpressionMatch(this_ptr->matchView(*subjectView, offset));
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpression_matchView3(QRegularExpression const * this_ptr, QStringView const * subjectView) {
  return new QRegularExpressionMatch(this_ptr->matchView(*subjectView));
}


RITUAL_EXPORT QRegularExpressionMatchIterator * ctr_qt_core_ffi_QRegularExpression_globalMatch2(QRegularExpression const * this_ptr, QString const * subject, long long offset, QRegularExpression::MatchType matchType) {
  return new QRegularExpressionMatchIterator(this_ptr->globalMatch(*subject, offset, matchType));
}


RITUAL_EXPORT QRegularExpressionMatchIterator * ctr_qt_core_ffi_QRegularExpression_globalMatch3(QRegularExpression const * this_ptr, QString const * subject, long long offset) {
  return new QRegularExpressionMatchIterator(this_ptr->globalMatch(*subject, offset));
}


RITUAL_EXPORT QRegularExpressionMatchIterator * ctr_qt_core_ffi_QRegularExpression_globalMatch4(QRegularExpression const * this_ptr, QString const * subject) {
  return new QRegularExpressionMatchIterator(this_ptr->globalMatch(*subject));
}


RITUAL_EXPORT QRegularExpressionMatchIterator * ctr_qt_core_ffi_QRegularExpression_globalMatch5(QRegularExpression const * this_ptr, QStringView const * subjectView, long long offset, QRegularExpression::MatchType matchType) {
  return new QRegularExpressionMatchIterator(this_ptr->globalMatch(*subjectView, offset, matchType));
}


RITUAL_EXPORT QRegularExpressionMatchIterator * ctr_qt_core_ffi_QRegularExpression_globalMatch6(QRegularExpression const * this_ptr, QStringView const * subjectView, long long offset) {
  return new QRegularExpressionMatchIterator(this_ptr->globalMatch(*subjectView, offset));
}


RITUAL_EXPORT QRegularExpressionMatchIterator * ctr_qt_core_ffi_QRegularExpression_globalMatch7(QRegularExpression const * this_ptr, QStringView const * subjectView) {
  return new QRegularExpressionMatchIterator(this_ptr->globalMatch(*subjectView));
}


RITUAL_EXPORT QRegularExpressionMatchIterator * ctr_qt_core_ffi_QRegularExpression_globalMatchView1(QRegularExpression const * this_ptr, QStringView const * subjectView, long long offset, QRegularExpression::MatchType matchType) {
  return new QRegularExpressionMatchIterator(this_ptr->globalMatchView(*subjectView, offset, matchType));
}


RITUAL_EXPORT QRegularExpressionMatchIterator * ctr_qt_core_ffi_QRegularExpression_globalMatchView2(QRegularExpression const * this_ptr, QStringView const * subjectView, long long offset) {
  return new QRegularExpressionMatchIterator(this_ptr->globalMatchView(*subjectView, offset));
}


RITUAL_EXPORT QRegularExpressionMatchIterator * ctr_qt_core_ffi_QRegularExpression_globalMatchView3(QRegularExpression const * this_ptr, QStringView const * subjectView) {
  return new QRegularExpressionMatchIterator(this_ptr->globalMatchView(*subjectView));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QRegularExpression_wildcardToRegularExpression2(QString const * str) {
  return new QString(QRegularExpression::wildcardToRegularExpression(*str));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QRegularExpression_wildcardToRegularExpression3(QStringView const * str) {
  return new QString(QRegularExpression::wildcardToRegularExpression(*str));
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QRegularExpression_fromWildcard1(QStringView const * pattern, Qt::CaseSensitivity cs) {
  return new QRegularExpression(QRegularExpression::fromWildcard(*pattern, cs));
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QRegularExpression_fromWildcard2(QStringView const * pattern) {
  return new QRegularExpression(QRegularExpression::fromWildcard(*pattern));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QRegularExpressionMatch_captured2(QRegularExpressionMatch const * this_ptr) {
  return new QString(this_ptr->captured());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QRegularExpressionMatch_capturedView2(QRegularExpressionMatch const * this_ptr) {
  return new QStringView(this_ptr->capturedView());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QRegularExpressionMatch_capturedStart2(QRegularExpressionMatch const * this_ptr) {
  return this_ptr->capturedStart();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QRegularExpressionMatch_capturedLength2(QRegularExpressionMatch const * this_ptr) {
  return this_ptr->capturedLength();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QRegularExpressionMatch_capturedEnd2(QRegularExpressionMatch const * this_ptr) {
  return this_ptr->capturedEnd();
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash187(QUrl const * url) {
  return qHash(*url);
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QUrl_QUrl4(QString const * url) {
  return new QUrl(*url);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setUrl1(QUrl * this_ptr, QString const * url) {
  this_ptr->setUrl(*url);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_url1(QUrl const * this_ptr) {
  return new QString(this_ptr->url());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_toString1(QUrl const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_toDisplayString1(QUrl const * this_ptr) {
  return new QString(this_ptr->toDisplayString());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QUrl_toEncoded1(QUrl const * this_ptr) {
  return new QByteArray(this_ptr->toEncoded());
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QUrl_fromEncoded1(QByteArrayView const * input) {
  return new QUrl(QUrl::fromEncoded(*input));
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QUrl_fromUserInput1(QString const * userInput, QString const * workingDirectory) {
  return new QUrl(QUrl::fromUserInput(*userInput, *workingDirectory));
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QUrl_fromUserInput2(QString const * userInput) {
  return new QUrl(QUrl::fromUserInput(*userInput));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setAuthority1(QUrl * this_ptr, QString const * authority) {
  this_ptr->setAuthority(*authority);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_authority1(QUrl const * this_ptr) {
  return new QString(this_ptr->authority());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setUserInfo1(QUrl * this_ptr, QString const * userInfo) {
  this_ptr->setUserInfo(*userInfo);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_userInfo1(QUrl const * this_ptr) {
  return new QString(this_ptr->userInfo());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setUserName1(QUrl * this_ptr, QString const * userName) {
  this_ptr->setUserName(*userName);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_userName1(QUrl const * this_ptr) {
  return new QString(this_ptr->userName());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setPassword1(QUrl * this_ptr, QString const * password) {
  this_ptr->setPassword(*password);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_password1(QUrl const * this_ptr) {
  return new QString(this_ptr->password());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setHost1(QUrl * this_ptr, QString const * host) {
  this_ptr->setHost(*host);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_host1(QUrl const * this_ptr) {
  return new QString(this_ptr->host());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QUrl_port1(QUrl const * this_ptr) {
  return this_ptr->port();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setPath1(QUrl * this_ptr, QString const * path) {
  this_ptr->setPath(*path);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_path1(QUrl const * this_ptr) {
  return new QString(this_ptr->path());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_fileName1(QUrl const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setQuery2(QUrl * this_ptr, QString const * query) {
  this_ptr->setQuery(*query);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_query1(QUrl const * this_ptr) {
  return new QString(this_ptr->query());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_fragment1(QUrl const * this_ptr) {
  return new QString(this_ptr->fragment());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setFragment1(QUrl * this_ptr, QString const * fragment) {
  this_ptr->setFragment(*fragment);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QUrl_toPercentEncoding1(QString const * arg1, QByteArray const * exclude) {
  return new QByteArray(QUrl::toPercentEncoding(*arg1, *exclude));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QUrl_toPercentEncoding2(QString const * arg1) {
  return new QByteArray(QUrl::toPercentEncoding(*arg1));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_fromAce1(QByteArray const * domain) {
  return new QString(QUrl::fromAce(*domain));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QUrl_toAce1(QString const * domain) {
  return new QByteArray(QUrl::toAce(*domain));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QUrl_toStringList1(QList< QUrl > const * uris) {
  return new QList< QString >(QUrl::toStringList(*uris));
}


RITUAL_EXPORT QList< QUrl > * ctr_qt_core_ffi_QUrl_fromStringList1(QList< QString > const * uris) {
  return new QList< QUrl >(QUrl::fromStringList(*uris));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUuid_toString1(QUuid const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QUuid_toByteArray1(QUuid const * this_ptr) {
  return new QByteArray(this_ptr->toByteArray());
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QUuid_fromBytes1(void const * bytes) {
  return new QUuid(QUuid::fromBytes(bytes));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUuid_isNull1(QUuid const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT QUuid::Variant ctr_qt_core_ffi_QUuid_variant1(QUuid const * this_ptr) {
  return this_ptr->variant();
}


RITUAL_EXPORT QUuid::Version ctr_qt_core_ffi_QUuid_version1(QUuid const * this_ptr) {
  return this_ptr->version();
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash188(QUuid const * uuid) {
  return qHash(*uuid);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue26(QCborTag tag) {
  return new QCborValue(tag);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue27(QCborKnownTags t_) {
  return new QCborValue(t_);
}


RITUAL_EXPORT QCborSimpleType ctr_qt_core_ffi_QCborValue_toSimpleType1(QCborValue const * this_ptr) {
  return this_ptr->toSimpleType();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborValue_toInteger1(QCborValue const * this_ptr) {
  return this_ptr->toInteger();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_toBool1(QCborValue const * this_ptr) {
  return this_ptr->toBool();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QCborValue_toDouble1(QCborValue const * this_ptr) {
  return this_ptr->toDouble();
}


RITUAL_EXPORT QCborTag ctr_qt_core_ffi_QCborValue_tag1(QCborValue const * this_ptr) {
  return this_ptr->tag();
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_taggedValue1(QCborValue const * this_ptr) {
  return new QCborValue(this_ptr->taggedValue());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCborValue_toByteArray1(QCborValue const * this_ptr) {
  return new QByteArray(this_ptr->toByteArray());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCborValue_toString1(QCborValue const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QCborValue_toStringView1(QCborValue const * this_ptr) {
  return new QAnyStringView(this_ptr->toStringView());
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QCborValue_toDateTime1(QCborValue const * this_ptr) {
  return new QDateTime(this_ptr->toDateTime());
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QCborValue_toUrl1(QCborValue const * this_ptr) {
  return new QUrl(this_ptr->toUrl());
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QCborValue_toRegularExpression1(QCborValue const * this_ptr) {
  return new QRegularExpression(this_ptr->toRegularExpression());
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QCborValue_toUuid1(QCborValue const * this_ptr) {
  return new QUuid(this_ptr->toUuid());
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_fromCbor4(QByteArray const * ba) {
  return new QCborValue(QCborValue::fromCbor(*ba));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_fromCbor5(char const * data, long long len) {
  return new QCborValue(QCborValue::fromCbor(data, len));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_fromCbor6(unsigned char const * data, long long len) {
  return new QCborValue(QCborValue::fromCbor(data, len));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCborValue_toCbor2(QCborValue const * this_ptr) {
  return new QByteArray(this_ptr->toCbor());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborValue_toCbor3(QCborValue const * this_ptr, QCborStreamWriter * writer) {
  this_ptr->toCbor(*writer);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCborValue_toDiagnosticNotation1(QCborValue const * this_ptr) {
  return new QString(this_ptr->toDiagnosticNotation());
}


RITUAL_EXPORT QCborSimpleType ctr_qt_core_ffi_QCborValueConstRef_toSimpleType1(QCborValueConstRef const * this_ptr) {
  return this_ptr->toSimpleType();
}


RITUAL_EXPORT QCborTag ctr_qt_core_ffi_QCborValueConstRef_tag1(QCborValueConstRef const * this_ptr) {
  return this_ptr->tag();
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValueConstRef_taggedValue1(QCborValueConstRef const * this_ptr) {
  return new QCborValue(this_ptr->taggedValue());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborValueConstRef_toInteger1(QCborValueConstRef const * this_ptr) {
  return this_ptr->toInteger();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_toBool1(QCborValueConstRef const * this_ptr) {
  return this_ptr->toBool();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QCborValueConstRef_toDouble1(QCborValueConstRef const * this_ptr) {
  return this_ptr->toDouble();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCborValueConstRef_toByteArray1(QCborValueConstRef const * this_ptr) {
  return new QByteArray(this_ptr->toByteArray());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCborValueConstRef_toString1(QCborValueConstRef const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QCborValueConstRef_toStringView1(QCborValueConstRef const * this_ptr) {
  return new QAnyStringView(this_ptr->toStringView());
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QCborValueConstRef_toDateTime1(QCborValueConstRef const * this_ptr) {
  return new QDateTime(this_ptr->toDateTime());
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QCborValueConstRef_toUrl1(QCborValueConstRef const * this_ptr) {
  return new QUrl(this_ptr->toUrl());
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QCborValueConstRef_toRegularExpression1(QCborValueConstRef const * this_ptr) {
  return new QRegularExpression(this_ptr->toRegularExpression());
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QCborValueConstRef_toUuid1(QCborValueConstRef const * this_ptr) {
  return new QUuid(this_ptr->toUuid());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCborValueConstRef_toCbor2(QCborValueConstRef const * this_ptr) {
  return new QByteArray(this_ptr->toCbor());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborValueConstRef_toCbor3(QCborValueConstRef const * this_ptr, QCborStreamWriter * writer) {
  this_ptr->toCbor(*writer);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCborValueConstRef_toDiagnosticNotation1(QCborValueConstRef const * this_ptr) {
  return new QString(this_ptr->toDiagnosticNotation());
}


RITUAL_EXPORT QCborSimpleType ctr_qt_core_ffi_QCborValueRef_toSimpleType1(QCborValueRef const * this_ptr) {
  return this_ptr->toSimpleType();
}


RITUAL_EXPORT QCborTag ctr_qt_core_ffi_QCborValueRef_tag1(QCborValueRef const * this_ptr) {
  return this_ptr->tag();
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValueRef_taggedValue1(QCborValueRef const * this_ptr) {
  return new QCborValue(this_ptr->taggedValue());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborValueRef_toInteger1(QCborValueRef const * this_ptr) {
  return this_ptr->toInteger();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_toBool1(QCborValueRef const * this_ptr) {
  return this_ptr->toBool();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QCborValueRef_toDouble1(QCborValueRef const * this_ptr) {
  return this_ptr->toDouble();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCborValueRef_toByteArray1(QCborValueRef const * this_ptr) {
  return new QByteArray(this_ptr->toByteArray());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCborValueRef_toString1(QCborValueRef const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QCborValueRef_toDateTime1(QCborValueRef const * this_ptr) {
  return new QDateTime(this_ptr->toDateTime());
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QCborValueRef_toUrl1(QCborValueRef const * this_ptr) {
  return new QUrl(this_ptr->toUrl());
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QCborValueRef_toRegularExpression1(QCborValueRef const * this_ptr) {
  return new QRegularExpression(this_ptr->toRegularExpression());
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QCborValueRef_toUuid1(QCborValueRef const * this_ptr) {
  return new QUuid(this_ptr->toUuid());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCborValueRef_toCbor2(QCborValueRef * this_ptr) {
  return new QByteArray(this_ptr->toCbor());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborValueRef_toCbor3(QCborValueRef * this_ptr, QCborStreamWriter * writer) {
  this_ptr->toCbor(*writer);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCborValueRef_toDiagnosticNotation1(QCborValueRef * this_ptr) {
  return new QString(this_ptr->toDiagnosticNotation());
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash189(QCborValue const * value) {
  return qHash(*value);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash190(QCborArray const * array) {
  return qHash(*array);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash191(QCborMap const * map) {
  return qHash(*map);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_next1(QCborStreamReader * this_ptr) {
  return this_ptr->next();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append16(QCborStreamWriter * this_ptr, char const * str) {
  this_ptr->append(str);
}


RITUAL_EXPORT QPropertyBindingError * ctr_qt_core_ffi_QPropertyBindingError_QPropertyBindingError4(QPropertyBindingError::Type type) {
  return new QPropertyBindingError(type);
}


RITUAL_EXPORT QUntypedPropertyBinding * ctr_qt_core_ffi_QUntypedBindable_makeBinding1(QUntypedBindable const * this_ptr) {
  return new QUntypedPropertyBinding(this_ptr->makeBinding());
}


RITUAL_EXPORT QCommandLineOption * ctr_qt_core_ffi_QCommandLineOption_QCommandLineOption6(QString const * name, QString const * description, QString const * valueName) {
  return new QCommandLineOption(*name, *description, *valueName);
}


RITUAL_EXPORT QCommandLineOption * ctr_qt_core_ffi_QCommandLineOption_QCommandLineOption7(QString const * name, QString const * description) {
  return new QCommandLineOption(*name, *description);
}


RITUAL_EXPORT QCommandLineOption * ctr_qt_core_ffi_QCommandLineOption_QCommandLineOption8(QList< QString > const * names, QString const * description, QString const * valueName) {
  return new QCommandLineOption(*names, *description, *valueName);
}


RITUAL_EXPORT QCommandLineOption * ctr_qt_core_ffi_QCommandLineOption_QCommandLineOption9(QList< QString > const * names, QString const * description) {
  return new QCommandLineOption(*names, *description);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineParser_addPositionalArgument1(QCommandLineParser * this_ptr, QString const * name, QString const * description) {
  this_ptr->addPositionalArgument(*name, *description);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineParser_showHelp1(QCommandLineParser * this_ptr) {
  this_ptr->showHelp();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineParser_showMessageAndExit1(QCommandLineParser::MessageType type, QString const * message) {
  QCommandLineParser::showMessageAndExit(type, *message);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QConcatenateTablesProxyModel_data1(QConcatenateTablesProxyModel const * this_ptr, QModelIndex const * index) {
  return new QVariant(this_ptr->data(*index));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QConcatenateTablesProxyModel_setData1(QConcatenateTablesProxyModel * this_ptr, QModelIndex const * index, QVariant const * value) {
  return this_ptr->setData(*index, *value);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QConcatenateTablesProxyModel_index1(QConcatenateTablesProxyModel const * this_ptr, int row, int column) {
  return new QModelIndex(this_ptr->index(row, column));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QConcatenateTablesProxyModel_rowCount1(QConcatenateTablesProxyModel const * this_ptr) {
  return this_ptr->rowCount();
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QConcatenateTablesProxyModel_headerData1(QConcatenateTablesProxyModel const * this_ptr, int section, Qt::Orientation orientation) {
  return new QVariant(this_ptr->headerData(section, orientation));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QConcatenateTablesProxyModel_columnCount1(QConcatenateTablesProxyModel const * this_ptr) {
  return this_ptr->columnCount();
}


RITUAL_EXPORT unsigned char * ctr_qt_core_ffi_QFileDevice_map1(QFileDevice * this_ptr, long long offset, long long size) {
  return this_ptr->map(offset, size);
}


RITUAL_EXPORT QDirListing * ctr_qt_core_ffi_QDirListing_QDirListing4(QString const * path) {
  return new QDirListing(*path);
}


RITUAL_EXPORT QDirListing * ctr_qt_core_ffi_QDirListing_QDirListing5(QString const * path, QList< QString > const * nameFilters) {
  return new QDirListing(*path, *nameFilters);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_moveToTrash2(QString const * fileName) {
  return QFile::moveToTrash(*fileName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_open3(QFile * this_ptr, int fd, int ioFlags) {
  return this_ptr->open(fd, QFlags< QIODeviceBase::OpenModeFlag >(ioFlags));
}


RITUAL_EXPORT QTimeZone * ctr_qt_core_ffi_QTimeZone_QTimeZone7(QByteArray const * zoneId, int offsetSeconds, QString const * name, QString const * abbreviation, QLocale::Country territory) {
  return new QTimeZone(*zoneId, offsetSeconds, *name, *abbreviation, territory);
}


RITUAL_EXPORT QTimeZone * ctr_qt_core_ffi_QTimeZone_QTimeZone8(QByteArray const * zoneId, int offsetSeconds, QString const * name, QString const * abbreviation) {
  return new QTimeZone(*zoneId, offsetSeconds, *name, *abbreviation);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTimeZone_displayName2(QTimeZone const * this_ptr, QDateTime const * atDateTime, QTimeZone::NameType nameType) {
  return new QString(this_ptr->displayName(*atDateTime, nameType));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTimeZone_displayName3(QTimeZone const * this_ptr, QDateTime const * atDateTime) {
  return new QString(this_ptr->displayName(*atDateTime));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTimeZone_displayName4(QTimeZone const * this_ptr, QTimeZone::TimeType timeType, QTimeZone::NameType nameType) {
  return new QString(this_ptr->displayName(timeType, nameType));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTimeZone_displayName5(QTimeZone const * this_ptr, QTimeZone::TimeType timeType) {
  return new QString(this_ptr->displayName(timeType));
}


RITUAL_EXPORT QDir * ctr_qt_core_ffi_QDir_QDir4(QString const * path, QString const * nameFilter, int sort) {
  return new QDir(*path, *nameFilter, QFlags< QDir::SortFlag >(sort));
}


RITUAL_EXPORT QDir * ctr_qt_core_ffi_QDir_QDir5(QString const * path, QString const * nameFilter) {
  return new QDir(*path, *nameFilter);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDir_count1(QDir const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_isEmpty1(QDir const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QDir_entryList2(QDir const * this_ptr, int filters) {
  return new QList< QString >(this_ptr->entryList(QFlags< QDir::Filter >(filters)));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QDir_entryList3(QDir const * this_ptr) {
  return new QList< QString >(this_ptr->entryList());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QDir_entryList4(QDir const * this_ptr, QList< QString > const * nameFilters, int filters) {
  return new QList< QString >(this_ptr->entryList(*nameFilters, QFlags< QDir::Filter >(filters)));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QDir_entryList5(QDir const * this_ptr, QList< QString > const * nameFilters) {
  return new QList< QString >(this_ptr->entryList(*nameFilters));
}


RITUAL_EXPORT QList< QFileInfo > * ctr_qt_core_ffi_QDir_entryInfoList2(QDir const * this_ptr, int filters) {
  return new QList< QFileInfo >(this_ptr->entryInfoList(QFlags< QDir::Filter >(filters)));
}


RITUAL_EXPORT QList< QFileInfo > * ctr_qt_core_ffi_QDir_entryInfoList3(QDir const * this_ptr) {
  return new QList< QFileInfo >(this_ptr->entryInfoList());
}


RITUAL_EXPORT QList< QFileInfo > * ctr_qt_core_ffi_QDir_entryInfoList4(QDir const * this_ptr, QList< QString > const * nameFilters, int filters) {
  return new QList< QFileInfo >(this_ptr->entryInfoList(*nameFilters, QFlags< QDir::Filter >(filters)));
}


RITUAL_EXPORT QList< QFileInfo > * ctr_qt_core_ffi_QDir_entryInfoList5(QDir const * this_ptr, QList< QString > const * nameFilters) {
  return new QList< QFileInfo >(this_ptr->entryInfoList(*nameFilters));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_mkdir1(QDir const * this_ptr, QString const * dirName) {
  return this_ptr->mkdir(*dirName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_mkpath1(QDir const * this_ptr, QString const * dirPath) {
  return this_ptr->mkpath(*dirPath);
}


RITUAL_EXPORT QDirIterator * ctr_qt_core_ffi_QDirIterator_QDirIterator5(QDir const * dir) {
  return new QDirIterator(*dir);
}


RITUAL_EXPORT QDirIterator * ctr_qt_core_ffi_QDirIterator_QDirIterator6(QString const * path) {
  return new QDirIterator(*path);
}


RITUAL_EXPORT QDirIterator * ctr_qt_core_ffi_QDirIterator_QDirIterator7(QString const * path, int filter) {
  return new QDirIterator(*path, QFlags< QDir::Filter >(filter));
}


RITUAL_EXPORT QDirIterator * ctr_qt_core_ffi_QDirIterator_QDirIterator8(QString const * path, QList< QString > const * nameFilters, int filters) {
  return new QDirIterator(*path, *nameFilters, QFlags< QDir::Filter >(filters));
}


RITUAL_EXPORT QDirIterator * ctr_qt_core_ffi_QDirIterator_QDirIterator9(QString const * path, QList< QString > const * nameFilters) {
  return new QDirIterator(*path, *nameFilters);
}


RITUAL_EXPORT QFileSystemWatcher * ctr_qt_core_ffi_QFileSystemWatcher_QFileSystemWatcher4(QList< QString > const * paths) {
  return new QFileSystemWatcher(*paths);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_start1(QThread * this_ptr) {
  this_ptr->start();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_exit1(QThread * this_ptr) {
  this_ptr->exit();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QThread_wait2(QThread * this_ptr) {
  return this_ptr->wait();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThreadPool_start1(QThreadPool * this_ptr, QRunnable * runnable) {
  this_ptr->start(runnable);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QThreadPool_waitForDone2(QThreadPool * this_ptr) {
  return this_ptr->waitForDone();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QIdentityProxyModel_columnCount1(QIdentityProxyModel const * this_ptr) {
  return this_ptr->columnCount();
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QIdentityProxyModel_index1(QIdentityProxyModel const * this_ptr, int row, int column) {
  return new QModelIndex(this_ptr->index(row, column));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QIdentityProxyModel_rowCount1(QIdentityProxyModel const * this_ptr) {
  return this_ptr->rowCount();
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QIdentityProxyModel_headerData1(QIdentityProxyModel const * this_ptr, int section, Qt::Orientation orientation) {
  return new QVariant(this_ptr->headerData(section, orientation));
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QIdentityProxyModel_match1(QIdentityProxyModel const * this_ptr, QModelIndex const * start, int role, QVariant const * value, int hits) {
  return new QList< QModelIndex >(this_ptr->match(*start, role, *value, hits));
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QIdentityProxyModel_match2(QIdentityProxyModel const * this_ptr, QModelIndex const * start, int role, QVariant const * value) {
  return new QList< QModelIndex >(this_ptr->match(*start, role, *value));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIdentityProxyModel_insertColumns1(QIdentityProxyModel * this_ptr, int column, int count) {
  return this_ptr->insertColumns(column, count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIdentityProxyModel_insertRows1(QIdentityProxyModel * this_ptr, int row, int count) {
  return this_ptr->insertRows(row, count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIdentityProxyModel_removeColumns1(QIdentityProxyModel * this_ptr, int column, int count) {
  return this_ptr->removeColumns(column, count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIdentityProxyModel_removeRows1(QIdentityProxyModel * this_ptr, int row, int count) {
  return this_ptr->removeRows(row, count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelectionModel_isRowSelected1(QItemSelectionModel const * this_ptr, int row) {
  return this_ptr->isRowSelected(row);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelectionModel_isColumnSelected1(QItemSelectionModel const * this_ptr, int column) {
  return this_ptr->isColumnSelected(column);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelectionModel_rowIntersectsSelection1(QItemSelectionModel const * this_ptr, int row) {
  return this_ptr->rowIntersectsSelection(row);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelectionModel_columnIntersectsSelection1(QItemSelectionModel const * this_ptr, int column) {
  return this_ptr->columnIntersectsSelection(column);
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QItemSelectionModel_selectedRows1(QItemSelectionModel const * this_ptr) {
  return new QList< QModelIndex >(this_ptr->selectedRows());
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QItemSelectionModel_selectedColumns1(QItemSelectionModel const * this_ptr) {
  return new QList< QModelIndex >(this_ptr->selectedColumns());
}


RITUAL_EXPORT QJsonDocument * ctr_qt_core_ffi_QJsonDocument_fromJson1(QByteArray const * json) {
  return new QJsonDocument(QJsonDocument::fromJson(*json));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QJsonDocument_toJson1(QJsonDocument const * this_ptr) {
  return new QByteArray(this_ptr->toJson());
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_fromJson1(QByteArrayView const * json) {
  return new QJsonValue(QJsonValue::fromJson(*json));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QJsonValue_toJson1(QJsonValue const * this_ptr) {
  return new QByteArray(this_ptr->toJson());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValue_toBool1(QJsonValue const * this_ptr) {
  return this_ptr->toBool();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QJsonValue_toInt1(QJsonValue const * this_ptr) {
  return this_ptr->toInt();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QJsonValue_toInteger1(QJsonValue const * this_ptr) {
  return this_ptr->toInteger();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QJsonValue_toDouble1(QJsonValue const * this_ptr) {
  return this_ptr->toDouble();
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QJsonValue_toStringView1(QJsonValue const * this_ptr) {
  return new QAnyStringView(this_ptr->toStringView());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueConstRef_toBool1(QJsonValueConstRef const * this_ptr) {
  return this_ptr->toBool();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QJsonValueConstRef_toInt1(QJsonValueConstRef const * this_ptr) {
  return this_ptr->toInt();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QJsonValueConstRef_toInteger1(QJsonValueConstRef const * this_ptr) {
  return this_ptr->toInteger();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QJsonValueConstRef_toDouble1(QJsonValueConstRef const * this_ptr) {
  return this_ptr->toDouble();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QJsonValueConstRef_toString1(QJsonValueConstRef const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QJsonValueConstRef_toStringView1(QJsonValueConstRef const * this_ptr) {
  return new QAnyStringView(this_ptr->toStringView());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueRef_toBool1(QJsonValueRef const * this_ptr) {
  return this_ptr->toBool();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QJsonValueRef_toInt1(QJsonValueRef const * this_ptr) {
  return this_ptr->toInt();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QJsonValueRef_toInteger1(QJsonValueRef const * this_ptr) {
  return this_ptr->toInteger();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QJsonValueRef_toDouble1(QJsonValueRef const * this_ptr) {
  return this_ptr->toDouble();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QJsonValueRef_toString1(QJsonValueRef const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QJsonValueRef_toStringView1(QJsonValueRef const * this_ptr) {
  return new QAnyStringView(this_ptr->toStringView());
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash192(QJsonValue const * value) {
  return qHash(*value);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash193(QJsonArray const * array) {
  return qHash(*array);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash194(QJsonObject const * object) {
  return qHash(*object);
}


RITUAL_EXPORT QLatin1StringMatcher * ctr_qt_core_ffi_QLatin1StringMatcher_QLatin1StringMatcher3(QLatin1String const * pattern) {
  return new QLatin1StringMatcher(*pattern);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1StringMatcher_indexIn2(QLatin1StringMatcher const * this_ptr, QLatin1String const * haystack) {
  return this_ptr->indexIn(*haystack);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1StringMatcher_indexIn3(QLatin1StringMatcher const * this_ptr, QStringView const * haystack) {
  return this_ptr->indexIn(*haystack);
}


RITUAL_EXPORT QLibrary * ctr_qt_core_ffi_QLibrary_QLibrary5(QString const * fileName) {
  return new QLibrary(*fileName);
}


RITUAL_EXPORT QLibrary * ctr_qt_core_ffi_QLibrary_QLibrary6(QString const * fileName, int verNum) {
  return new QLibrary(*fileName, verNum);
}


RITUAL_EXPORT QLibrary * ctr_qt_core_ffi_QLibrary_QLibrary7(QString const * fileName, QString const * version) {
  return new QLibrary(*fileName, *version);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash195(QTypeRevision const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash196(QVersionNumber const * key) {
  return qHash(*key);
}


RITUAL_EXPORT QVersionNumber * ctr_qt_core_ffi_QVersionNumber_fromString1(QAnyStringView const * string) {
  return new QVersionNumber(QVersionNumber::fromString(*string));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash197(QPoint const * key) {
  return qHash(*key);
}


RITUAL_EXPORT QLineF::IntersectionType ctr_qt_core_ffi_QLineF_intersects1(QLineF const * this_ptr, QLineF const * l) {
  return this_ptr->intersects(*l);
}


RITUAL_EXPORT QLoggingCategory * ctr_qt_core_ffi_QLoggingCategory_QLoggingCategory2(char const * category) {
  return new QLoggingCategory(category);
}


RITUAL_EXPORT QMessageAuthenticationCode * ctr_qt_core_ffi_QMessageAuthenticationCode_QMessageAuthenticationCode3(QCryptographicHash::Algorithm method) {
  return new QMessageAuthenticationCode(method);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaEnum_keyToValue1(QMetaEnum const * this_ptr, char const * key) {
  return this_ptr->keyToValue(key);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaEnum_keysToValue1(QMetaEnum const * this_ptr, char const * keys) {
  return this_ptr->keysToValue(keys);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash199(QMimeType const * key) {
  return qHash(*key);
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QMimeDatabase_mimeTypeForFile2(QMimeDatabase const * this_ptr, QString const * fileName) {
  return new QMimeType(this_ptr->mimeTypeForFile(*fileName));
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QMimeDatabase_mimeTypeForFile3(QMimeDatabase const * this_ptr, QFileInfo const * fileInfo) {
  return new QMimeType(this_ptr->mimeTypeForFile(*fileInfo));
}


RITUAL_EXPORT QOperatingSystemVersionBase * ctr_qt_core_ffi_QOperatingSystemVersionBase_QOperatingSystemVersionBase2(QOperatingSystemVersionBase::OSType osType, int vmajor, int vminor) {
  return new QOperatingSystemVersionBase(osType, vmajor, vminor);
}


RITUAL_EXPORT QOperatingSystemVersionBase * ctr_qt_core_ffi_QOperatingSystemVersionBase_QOperatingSystemVersionBase3(QOperatingSystemVersionBase::OSType osType, int vmajor) {
  return new QOperatingSystemVersionBase(osType, vmajor);
}


RITUAL_EXPORT QOperatingSystemVersion * ctr_qt_core_ffi_QOperatingSystemVersion_QOperatingSystemVersion3(QOperatingSystemVersion::OSType osType, int vmajor, int vminor) {
  return new QOperatingSystemVersion(osType, vmajor, vminor);
}


RITUAL_EXPORT QOperatingSystemVersion * ctr_qt_core_ffi_QOperatingSystemVersion_QOperatingSystemVersion4(QOperatingSystemVersion::OSType osType, int vmajor) {
  return new QOperatingSystemVersion(osType, vmajor);
}


RITUAL_EXPORT QPauseAnimation * ctr_qt_core_ffi_QPauseAnimation_QPauseAnimation3(int msecs) {
  return new QPauseAnimation(msecs);
}


RITUAL_EXPORT QPluginLoader * ctr_qt_core_ffi_QPluginLoader_QPluginLoader3(QString const * fileName) {
  return new QPluginLoader(*fileName);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QProcessEnvironment_value1(QProcessEnvironment const * this_ptr, QString const * name) {
  return new QString(this_ptr->value(*name));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_start2(QProcess * this_ptr, QString const * program, QList< QString > const * arguments) {
  this_ptr->start(*program, *arguments);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_start3(QProcess * this_ptr, QString const * program) {
  this_ptr->start(*program);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_start4(QProcess * this_ptr) {
  this_ptr->start();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_startCommand1(QProcess * this_ptr, QString const * command) {
  this_ptr->startCommand(*command);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_startDetached2(QProcess * this_ptr) {
  return this_ptr->startDetached();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_open1(QProcess * this_ptr) {
  return this_ptr->open();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setStandardOutputFile1(QProcess * this_ptr, QString const * fileName) {
  this_ptr->setStandardOutputFile(*fileName);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setStandardErrorFile1(QProcess * this_ptr, QString const * fileName) {
  this_ptr->setStandardErrorFile(*fileName);
}


#ifndef _WIN32
RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_failChildProcessModifier1(QProcess * this_ptr, char const * description) {
  this_ptr->failChildProcessModifier(description);
}
#endif


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_waitForStarted1(QProcess * this_ptr) {
  return this_ptr->waitForStarted();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_waitForReadyRead1(QProcess * this_ptr) {
  return this_ptr->waitForReadyRead();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_waitForBytesWritten1(QProcess * this_ptr) {
  return this_ptr->waitForBytesWritten();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_waitForFinished1(QProcess * this_ptr) {
  return this_ptr->waitForFinished();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QProcess_execute1(QString const * program) {
  return QProcess::execute(*program);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_startDetached3(QString const * program, QList< QString > const * arguments, QString const * workingDirectory) {
  return QProcess::startDetached(*program, *arguments, *workingDirectory);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_startDetached4(QString const * program, QList< QString > const * arguments) {
  return QProcess::startDetached(*program, *arguments);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_startDetached5(QString const * program) {
  return QProcess::startDetached(*program);
}


RITUAL_EXPORT QPropertyAnimation * ctr_qt_core_ffi_QPropertyAnimation_QPropertyAnimation3(QObject * target, QByteArray const * propertyName) {
  return new QPropertyAnimation(target, *propertyName);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRandomGenerator_seed2(QRandomGenerator * this_ptr) {
  this_ptr->seed();
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QRangeModel_index1(QRangeModel const * this_ptr, int row, int column) {
  return new QModelIndex(this_ptr->index(row, column));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRangeModel_rowCount1(QRangeModel const * this_ptr) {
  return this_ptr->rowCount();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRangeModel_columnCount1(QRangeModel const * this_ptr) {
  return this_ptr->columnCount();
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QRangeModel_headerData1(QRangeModel const * this_ptr, int section, Qt::Orientation orientation) {
  return new QVariant(this_ptr->headerData(section, orientation));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_setHeaderData1(QRangeModel * this_ptr, int section, Qt::Orientation orientation, QVariant const * data) {
  return this_ptr->setHeaderData(section, orientation, *data);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QRangeModel_data1(QRangeModel const * this_ptr, QModelIndex const * index) {
  return new QVariant(this_ptr->data(*index));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_setData1(QRangeModel * this_ptr, QModelIndex const * index, QVariant const * data) {
  return this_ptr->setData(*index, *data);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_insertColumns1(QRangeModel * this_ptr, int column, int count) {
  return this_ptr->insertColumns(column, count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_removeColumns1(QRangeModel * this_ptr, int column, int count) {
  return this_ptr->removeColumns(column, count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_insertRows1(QRangeModel * this_ptr, int row, int count) {
  return this_ptr->insertRows(row, count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_removeRows1(QRangeModel * this_ptr, int row, int count) {
  return this_ptr->removeRows(row, count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_hasChildren1(QRangeModel const * this_ptr) {
  return this_ptr->hasChildren();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRangeModel_sort1(QRangeModel * this_ptr, int column) {
  this_ptr->sort(column);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QReadWriteLock_tryLockForRead2(QReadWriteLock * this_ptr) {
  return this_ptr->tryLockForRead();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QReadWriteLock_tryLockForWrite2(QReadWriteLock * this_ptr) {
  return this_ptr->tryLockForWrite();
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash200(QSize const * s) {
  return qHash(*s);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRect_contains4(QRect const * this_ptr, QRect const * r) {
  return this_ptr->contains(*r);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRect_contains5(QRect const * this_ptr, QPoint const * p) {
  return this_ptr->contains(*p);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash201(QRect const * r) {
  return qHash(*r);
}


RITUAL_EXPORT QResource * ctr_qt_core_ffi_QResource_QResource3(QString const * file) {
  return new QResource(*file);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QResource_registerResource2(QString const * rccFilename) {
  return QResource::registerResource(*rccFilename);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QResource_unregisterResource2(QString const * rccFilename) {
  return QResource::unregisterResource(*rccFilename);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QResource_registerResource3(unsigned char const * rccData) {
  return QResource::registerResource(rccData);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QResource_unregisterResource3(unsigned char const * rccData) {
  return QResource::unregisterResource(rccData);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSemaphore_acquire1(QSemaphore * this_ptr) {
  this_ptr->acquire();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSemaphore_tryAcquire3(QSemaphore * this_ptr) {
  return this_ptr->tryAcquire();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSemaphore_release1(QSemaphore * this_ptr) {
  this_ptr->release();
}


RITUAL_EXPORT QSemaphoreReleaser * ctr_qt_core_ffi_QSemaphoreReleaser_QSemaphoreReleaser5(QSemaphore * sem) {
  return new QSemaphoreReleaser(*sem);
}


RITUAL_EXPORT QSemaphoreReleaser * ctr_qt_core_ffi_QSemaphoreReleaser_QSemaphoreReleaser6(QSemaphore * sem) {
  return new QSemaphoreReleaser(sem);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSequentialIterable_addValue1(QSequentialIterable * this_ptr, QVariant const * value) {
  this_ptr->addValue(*value);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSequentialIterable_removeValue1(QSequentialIterable * this_ptr) {
  this_ptr->removeValue();
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_QSettings_QSettings7(QString const * organization, QString const * application) {
  return new QSettings(*organization, *application);
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_QSettings_QSettings8(QString const * organization) {
  return new QSettings(*organization);
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_QSettings_QSettings9(QSettings::Scope scope, QString const * organization, QString const * application) {
  return new QSettings(scope, *organization, *application);
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_QSettings_QSettings10(QSettings::Scope scope, QString const * organization) {
  return new QSettings(scope, *organization);
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_QSettings_QSettings11(QSettings::Format format, QSettings::Scope scope, QString const * organization, QString const * application) {
  return new QSettings(format, scope, *organization, *application);
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_QSettings_QSettings12(QSettings::Format format, QSettings::Scope scope, QString const * organization) {
  return new QSettings(format, scope, *organization);
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_QSettings_QSettings13(QString const * fileName, QSettings::Format format) {
  return new QSettings(*fileName, format);
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_QSettings_QSettings14(QSettings::Scope scope) {
  return new QSettings(scope);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSettings_beginWriteArray1(QSettings * this_ptr, QAnyStringView const * prefix) {
  this_ptr->beginWriteArray(*prefix);
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QNativeIpcKey_QNativeIpcKey5(QString const * k) {
  return new QNativeIpcKey(*k);
}


RITUAL_EXPORT QSharedMemory * ctr_qt_core_ffi_QSharedMemory_QSharedMemory4(QNativeIpcKey const * key) {
  return new QSharedMemory(*key);
}


RITUAL_EXPORT QSharedMemory * ctr_qt_core_ffi_QSharedMemory_QSharedMemory5(QString const * key) {
  return new QSharedMemory(*key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSharedMemory_setNativeKey2(QSharedMemory * this_ptr, QString const * key) {
  this_ptr->setNativeKey(*key);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSharedMemory_create1(QSharedMemory * this_ptr, long long size) {
  return this_ptr->create(size);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSharedMemory_attach1(QSharedMemory * this_ptr) {
  return this_ptr->attach();
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QSharedMemory_platformSafeKey1(QString const * key) {
  return new QNativeIpcKey(QSharedMemory::platformSafeKey(*key));
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QSharedMemory_legacyNativeKey1(QString const * key) {
  return new QNativeIpcKey(QSharedMemory::legacyNativeKey(*key));
}


RITUAL_EXPORT QSocketNotifier * ctr_qt_core_ffi_QSocketNotifier_QSocketNotifier3(QSocketNotifier::Type arg1) {
  return new QSocketNotifier(arg1);
}


RITUAL_EXPORT QSocketNotifier * ctr_qt_core_ffi_QSocketNotifier_QSocketNotifier4(long long socket, QSocketNotifier::Type arg2) {
  return new QSocketNotifier(socket, arg2);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QSortFilterProxyModel_index1(QSortFilterProxyModel const * this_ptr, int row, int column) {
  return new QModelIndex(this_ptr->index(row, column));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSortFilterProxyModel_rowCount1(QSortFilterProxyModel const * this_ptr) {
  return this_ptr->rowCount();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSortFilterProxyModel_columnCount1(QSortFilterProxyModel const * this_ptr) {
  return this_ptr->columnCount();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_hasChildren1(QSortFilterProxyModel const * this_ptr) {
  return this_ptr->hasChildren();
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QSortFilterProxyModel_data1(QSortFilterProxyModel const * this_ptr, QModelIndex const * index) {
  return new QVariant(this_ptr->data(*index));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_setData1(QSortFilterProxyModel * this_ptr, QModelIndex const * index, QVariant const * value) {
  return this_ptr->setData(*index, *value);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QSortFilterProxyModel_headerData1(QSortFilterProxyModel const * this_ptr, int section, Qt::Orientation orientation) {
  return new QVariant(this_ptr->headerData(section, orientation));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_setHeaderData1(QSortFilterProxyModel * this_ptr, int section, Qt::Orientation orientation, QVariant const * value) {
  return this_ptr->setHeaderData(section, orientation, *value);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_insertRows1(QSortFilterProxyModel * this_ptr, int row, int count) {
  return this_ptr->insertRows(row, count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_insertColumns1(QSortFilterProxyModel * this_ptr, int column, int count) {
  return this_ptr->insertColumns(column, count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_removeRows1(QSortFilterProxyModel * this_ptr, int row, int count) {
  return this_ptr->removeRows(row, count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_removeColumns1(QSortFilterProxyModel * this_ptr, int column, int count) {
  return this_ptr->removeColumns(column, count);
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QSortFilterProxyModel_match1(QSortFilterProxyModel const * this_ptr, QModelIndex const * start, int role, QVariant const * value, int hits) {
  return new QList< QModelIndex >(this_ptr->match(*start, role, *value, hits));
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QSortFilterProxyModel_match2(QSortFilterProxyModel const * this_ptr, QModelIndex const * start, int role, QVariant const * value) {
  return new QList< QModelIndex >(this_ptr->match(*start, role, *value));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_sort1(QSortFilterProxyModel * this_ptr, int column) {
  this_ptr->sort(column);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QStandardPaths_locate1(QStandardPaths::StandardLocation type, QString const * fileName) {
  return new QString(QStandardPaths::locate(type, *fileName));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QStandardPaths_locateAll1(QStandardPaths::StandardLocation type, QString const * fileName) {
  return new QList< QString >(QStandardPaths::locateAll(type, *fileName));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QStandardPaths_findExecutable1(QString const * executableName) {
  return new QString(QStandardPaths::findExecutable(*executableName));
}


RITUAL_EXPORT QStringListModel * ctr_qt_core_ffi_QStringListModel_QStringListModel3(QList< QString > const * strings) {
  return new QStringListModel(*strings);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QStringListModel_rowCount1(QStringListModel const * this_ptr) {
  return this_ptr->rowCount();
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QStringListModel_data1(QStringListModel const * this_ptr, QModelIndex const * index) {
  return new QVariant(this_ptr->data(*index));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringListModel_setData1(QStringListModel * this_ptr, QModelIndex const * index, QVariant const * value) {
  return this_ptr->setData(*index, *value);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringListModel_insertRows1(QStringListModel * this_ptr, int row, int count) {
  return this_ptr->insertRows(row, count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringListModel_removeRows1(QStringListModel * this_ptr, int row, int count) {
  return this_ptr->removeRows(row, count);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringListModel_sort1(QStringListModel * this_ptr, int column) {
  this_ptr->sort(column);
}


RITUAL_EXPORT QSystemSemaphore * ctr_qt_core_ffi_QSystemSemaphore_QSystemSemaphore3(QNativeIpcKey const * key, int initialValue) {
  return new QSystemSemaphore(*key, initialValue);
}


RITUAL_EXPORT QSystemSemaphore * ctr_qt_core_ffi_QSystemSemaphore_QSystemSemaphore4(QNativeIpcKey const * key) {
  return new QSystemSemaphore(*key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSystemSemaphore_setNativeKey2(QSystemSemaphore * this_ptr, QNativeIpcKey const * key, int initialValue) {
  this_ptr->setNativeKey(*key, initialValue);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSystemSemaphore_setNativeKey3(QSystemSemaphore * this_ptr, QNativeIpcKey const * key) {
  this_ptr->setNativeKey(*key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSystemSemaphore_setNativeKey4(QSystemSemaphore * this_ptr, QString const * key, int initialValue, QSystemSemaphore::AccessMode mode) {
  this_ptr->setNativeKey(*key, initialValue, mode);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSystemSemaphore_setNativeKey5(QSystemSemaphore * this_ptr, QString const * key, int initialValue) {
  this_ptr->setNativeKey(*key, initialValue);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSystemSemaphore_setNativeKey6(QSystemSemaphore * this_ptr, QString const * key) {
  this_ptr->setNativeKey(*key);
}


RITUAL_EXPORT QSystemSemaphore * ctr_qt_core_ffi_QSystemSemaphore_QSystemSemaphore5(QString const * key, int initialValue) {
  return new QSystemSemaphore(*key, initialValue);
}


RITUAL_EXPORT QSystemSemaphore * ctr_qt_core_ffi_QSystemSemaphore_QSystemSemaphore6(QString const * key) {
  return new QSystemSemaphore(*key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSystemSemaphore_setKey1(QSystemSemaphore * this_ptr, QString const * key, int initialValue) {
  this_ptr->setKey(*key, initialValue);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSystemSemaphore_setKey2(QSystemSemaphore * this_ptr, QString const * key) {
  this_ptr->setKey(*key);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSystemSemaphore_release1(QSystemSemaphore * this_ptr) {
  return this_ptr->release();
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QSystemSemaphore_platformSafeKey1(QString const * key) {
  return new QNativeIpcKey(QSystemSemaphore::platformSafeKey(*key));
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QSystemSemaphore_legacyNativeKey1(QString const * key) {
  return new QNativeIpcKey(QSystemSemaphore::legacyNativeKey(*key));
}


RITUAL_EXPORT QTextBoundaryFinder * ctr_qt_core_ffi_QTextBoundaryFinder_QTextBoundaryFinder5(QTextBoundaryFinder::BoundaryType type, QChar const * chars, long long length, unsigned char * buffer) {
  return new QTextBoundaryFinder(type, chars, length, buffer);
}


RITUAL_EXPORT QTextBoundaryFinder * ctr_qt_core_ffi_QTextBoundaryFinder_QTextBoundaryFinder6(QTextBoundaryFinder::BoundaryType type, QChar const * chars, long long length) {
  return new QTextBoundaryFinder(type, chars, length);
}


RITUAL_EXPORT QTextBoundaryFinder * ctr_qt_core_ffi_QTextBoundaryFinder_QTextBoundaryFinder7(QTextBoundaryFinder::BoundaryType type, QStringView const * str, unsigned char * buffer) {
  return new QTextBoundaryFinder(type, *str, buffer);
}


RITUAL_EXPORT QTextBoundaryFinder * ctr_qt_core_ffi_QTextBoundaryFinder_QTextBoundaryFinder8(QTextBoundaryFinder::BoundaryType type, QStringView const * str) {
  return new QTextBoundaryFinder(type, *str);
}


RITUAL_EXPORT QTimeLine * ctr_qt_core_ffi_QTimeLine_QTimeLine2(int duration) {
  return new QTimeLine(duration);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTranslator_translate1(QTranslator const * this_ptr, char const * context, char const * sourceText, char const * disambiguation) {
  return new QString(this_ptr->translate(context, sourceText, disambiguation));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTranslator_translate2(QTranslator const * this_ptr, char const * context, char const * sourceText) {
  return new QString(this_ptr->translate(context, sourceText));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTranslator_load3(QTranslator * this_ptr, QString const * filename, QString const * directory, QString const * search_delimiters) {
  return this_ptr->load(*filename, *directory, *search_delimiters);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTranslator_load4(QTranslator * this_ptr, QString const * filename, QString const * directory) {
  return this_ptr->load(*filename, *directory);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTranslator_load5(QTranslator * this_ptr, QString const * filename) {
  return this_ptr->load(*filename);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTranslator_load6(QTranslator * this_ptr, QLocale const * locale, QString const * filename, QString const * prefix, QString const * directory) {
  return this_ptr->load(*locale, *filename, *prefix, *directory);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTranslator_load7(QTranslator * this_ptr, QLocale const * locale, QString const * filename, QString const * prefix) {
  return this_ptr->load(*locale, *filename, *prefix);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTranslator_load8(QTranslator * this_ptr, QLocale const * locale, QString const * filename) {
  return this_ptr->load(*locale, *filename);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTranslator_load9(QTranslator * this_ptr, unsigned char const * data, int len) {
  return this_ptr->load(data, len);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTransposeProxyModel_rowCount1(QTransposeProxyModel const * this_ptr) {
  return this_ptr->rowCount();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTransposeProxyModel_columnCount1(QTransposeProxyModel const * this_ptr) {
  return this_ptr->columnCount();
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QTransposeProxyModel_headerData1(QTransposeProxyModel const * this_ptr, int section, Qt::Orientation orientation) {
  return new QVariant(this_ptr->headerData(section, orientation));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTransposeProxyModel_setHeaderData1(QTransposeProxyModel * this_ptr, int section, Qt::Orientation orientation, QVariant const * value) {
  return this_ptr->setHeaderData(section, orientation, *value);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QTransposeProxyModel_index1(QTransposeProxyModel const * this_ptr, int row, int column) {
  return new QModelIndex(this_ptr->index(row, column));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTransposeProxyModel_insertRows1(QTransposeProxyModel * this_ptr, int row, int count) {
  return this_ptr->insertRows(row, count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTransposeProxyModel_removeRows1(QTransposeProxyModel * this_ptr, int row, int count) {
  return this_ptr->removeRows(row, count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTransposeProxyModel_insertColumns1(QTransposeProxyModel * this_ptr, int column, int count) {
  return this_ptr->insertColumns(column, count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTransposeProxyModel_removeColumns1(QTransposeProxyModel * this_ptr, int column, int count) {
  return this_ptr->removeColumns(column, count);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTransposeProxyModel_sort1(QTransposeProxyModel * this_ptr, int column) {
  this_ptr->sort(column);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash202(QUrlQuery const * key) {
  return qHash(*key);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrlQuery_query1(QUrlQuery const * this_ptr) {
  return new QString(this_ptr->query());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrlQuery_toString1(QUrlQuery const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrlQuery_queryItemValue1(QUrlQuery const * this_ptr, QString const * key) {
  return new QString(this_ptr->queryItemValue(*key));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QUrlQuery_allQueryItemValues1(QUrlQuery const * this_ptr, QString const * key) {
  return new QList< QString >(this_ptr->allQueryItemValues(*key));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QWaitCondition_wait4(QWaitCondition * this_ptr, QMutex * lockedMutex) {
  return this_ptr->wait(lockedMutex);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QWaitCondition_wait5(QWaitCondition * this_ptr, QReadWriteLock * lockedReadWriteLock) {
  return this_ptr->wait(lockedReadWriteLock);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QXmlStreamReader_readElementText1(QXmlStreamReader * this_ptr) {
  return new QString(this_ptr->readElementText());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamReader_raiseError1(QXmlStreamReader * this_ptr) {
  this_ptr->raiseError();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeNamespace1(QXmlStreamWriter * this_ptr, QAnyStringView const * namespaceUri) {
  this_ptr->writeNamespace(*namespaceUri);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeProcessingInstruction1(QXmlStreamWriter * this_ptr, QAnyStringView const * target) {
  this_ptr->writeProcessingInstruction(*target);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_QObject_findChild_QObject_ptr2(QObject const * this_ptr, QAnyStringView const * aName) {
  return this_ptr->findChild< QObject * >(*aName);
}


RITUAL_EXPORT QList< QObject * > * ctr_qt_core_ffi_QObject_findChildren_QObject_ptr3(QObject const * this_ptr, QAnyStringView const * aName) {
  return new QList< QObject * >(this_ptr->findChildren< QObject * >(*aName));
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_QObject_findChild_QObject_ptr3(QObject const * this_ptr) {
  return this_ptr->findChild< QObject * >();
}


RITUAL_EXPORT QList< QObject * > * ctr_qt_core_ffi_QObject_findChildren_QObject_ptr4(QObject const * this_ptr) {
  return new QList< QObject * >(this_ptr->findChildren< QObject * >());
}


RITUAL_EXPORT QList< QObject * > * ctr_qt_core_ffi_QObject_findChildren_QObject_ptr5(QObject const * this_ptr, QRegularExpression const * re) {
  return new QList< QObject * >(this_ptr->findChildren< QObject * >(*re));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash203(int flags) {
  return qHash(QFlags< Qt::SplitBehaviorFlags >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash204(int flags) {
  return qHash(QFlags< QStringConverterBase::Flag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash205(int flags) {
  return qHash(QFlags< QtMetaContainerPrivate::IteratorCapability >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash206(int flags) {
  return qHash(QFlags< QtMetaContainerPrivate::AddRemoveCapability >(flags));
}


#ifndef _WIN32
RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash207(int flags) {
  return qHash(QFlags< QProcess::UnixProcessFlag >(flags));
}
#endif


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash208(int flags) {
  return qHash(QFlags< QtOrderingPrivate::QtOrderingType >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash209(int flags) {
  return qHash(QFlags< Qt::MouseButton >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash210(int flags) {
  return qHash(QFlags< Qt::Orientation >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash211(int flags) {
  return qHash(QFlags< Qt::AlignmentFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash212(int flags) {
  return qHash(QFlags< Qt::WindowType >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash213(int flags) {
  return qHash(QFlags< Qt::WindowState >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash214(int flags) {
  return qHash(QFlags< Qt::ScreenOrientation >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash215(int flags) {
  return qHash(QFlags< Qt::ImageConversionFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash216(int flags) {
  return qHash(QFlags< Qt::KeyboardModifier >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash217(int flags) {
  return qHash(QFlags< Qt::Modifier >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash218(int flags) {
  return qHash(QFlags< Qt::DockWidgetArea >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash219(int flags) {
  return qHash(QFlags< Qt::ToolBarArea >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash220(int flags) {
  return qHash(QFlags< Qt::Edge >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash221(int flags) {
  return qHash(QFlags< Qt::InputMethodQuery >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash222(int flags) {
  return qHash(QFlags< Qt::InputMethodHint >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash223(int flags) {
  return qHash(QFlags< Qt::DropAction >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash224(int flags) {
  return qHash(QFlags< Qt::ItemFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash225(int flags) {
  return qHash(QFlags< Qt::MatchFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash226(int flags) {
  return qHash(QFlags< Qt::TextInteractionFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash227(int flags) {
  return qHash(QFlags< Qt::TouchPointState >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash228(int flags) {
  return qHash(QFlags< Qt::GestureFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash229(int flags) {
  return qHash(QFlags< Qt::MouseEventFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash231(int flags) {
  return qHash(QFlags< QByteArray::Base64Option >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash232(int flags) {
  return qHash(QFlags< QString::SectionFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash233(int flags) {
  return qHash(QFlags< QIODeviceBase::OpenModeFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash234(int flags) {
  return qHash(QFlags< QMetaType::TypeFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash235(int flags) {
  return qHash(QFlags< Qt::FindChildOption >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash236(int flags) {
  return qHash(QFlags< QEventLoop::ProcessEventsFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash237(int flags) {
  return qHash(QFlags< QTextStream::NumberFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash238(int flags) {
  return qHash(QFlags< QAbstractItemModel::CheckIndexOption >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash239(int flags) {
  return qHash(QFlags< QLocale::DataSizeFormat >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash240(int flags) {
  return qHash(QFlags< QLocale::LanguageCodeType >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash241(int flags) {
  return qHash(QFlags< QLocale::NumberOption >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash242(int flags) {
  return qHash(QFlags< QRegularExpression::PatternOption >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash243(int flags) {
  return qHash(QFlags< QRegularExpression::MatchOption >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash244(int flags) {
  return qHash(QFlags< QRegularExpression::WildcardConversionOption >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash245(int flags) {
  return qHash(QFlags< QUrl::UserInputResolutionOption >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash246(int flags) {
  return qHash(QFlags< QUrl::ComponentFormattingOption >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash247(int flags) {
  return qHash(QFlags< QUrl::AceProcessingOption >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash248(int flags) {
  return qHash(QFlags< QCborValue::EncodingOption >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash249(int flags) {
  return qHash(QFlags< QCborValue::DiagnosticNotationOption >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash250(int flags) {
  return qHash(QFlags< QCommandLineOption::Flag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash251(int flags) {
  return qHash(QFlags< QFileDevice::Permission >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash252(int flags) {
  return qHash(QFlags< QFileDevice::MemoryMapFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash253(int flags) {
  return qHash(QFlags< QFileDevice::FileHandleFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash254(int flags) {
  return qHash(QFlags< QDirListing::IteratorFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash255(int flags) {
  return qHash(QFlags< QDir::SortFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash256(int flags) {
  return qHash(QFlags< QDir::Filter >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash257(int flags) {
  return qHash(QFlags< QDirIterator::IteratorFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash258(int flags) {
  return qHash(QFlags< QItemSelectionModel::SelectionFlag >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash259(int flags) {
  return qHash(QFlags< QLibrary::LoadHint >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash260(int flags) {
  return qHash(QFlags< QBluetoothPermission::CommunicationMode >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash261(int flags) {
  return qHash(QFlags< QSortFilterProxyModel::Direction >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash262(int flags) {
  return qHash(QFlags< QStandardPaths::LocateOption >(flags));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash263(int flags) {
  return qHash(QFlags< QTextBoundaryFinder::BoundaryReason >(flags));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QItemSelectionRange_remove1(QList< QItemSelectionRange > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QObject_ptr_remove1(QList< QObject * > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QString_remove1(QList< QString > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QXmlStreamAttribute_remove1(QList< QXmlStreamAttribute > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QByteArray_remove1(QList< QByteArray > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_unsigned_int_remove1(QList< unsigned int > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QStringView_remove1(QList< QStringView > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfo_remove1(QList< QAbstractEventDispatcher::TimerInfo > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfoV2_remove1(QList< QAbstractEventDispatcher::TimerInfoV2 > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QVariant_remove1(QList< QVariant > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QModelIndex_remove1(QList< QModelIndex > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_int_remove1(QList< int > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QPersistentModelIndex_remove1(QList< QPersistentModelIndex > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_Qt_DayOfWeek_remove1(QList< Qt::DayOfWeek > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QLocale_remove1(QList< QLocale > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QLocale_Country_remove1(QList< QLocale::Country > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QUrl_remove1(QList< QUrl > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QCborValue_remove1(QList< QCborValue > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QCommandLineOption_remove1(QList< QCommandLineOption > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QAbstractItemModel_ptr_remove1(QList< QAbstractItemModel * > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QTimeZone_OffsetData_remove1(QList< QTimeZone::OffsetData > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QFileInfo_remove1(QList< QFileInfo > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QPointF_remove1(QList< QPointF > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QMimeType_remove1(QList< QMimeType > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QStaticPlugin_remove1(QList< QStaticPlugin > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QStorageInfo_remove1(QList< QStorageInfo > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QXmlStreamNamespaceDeclaration_remove1(QList< QXmlStreamNamespaceDeclaration > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QXmlStreamNotationDeclaration_remove1(QList< QXmlStreamNotationDeclaration > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QList_QXmlStreamEntityDeclaration_remove1(QList< QXmlStreamEntityDeclaration > * this_ptr, long long i) {
  this_ptr->remove(i);
}


RITUAL_EXPORT QList< QItemSelectionRange > * ctr_qt_core_ffi_QList_QItemSelectionRange_fill1(QList< QItemSelectionRange > * this_ptr, QItemSelectionRange const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QObject * > * ctr_qt_core_ffi_QList_QObject_ptr_fill1(QList< QObject * > * this_ptr, QObject * const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QList_QString_fill1(QList< QString > * this_ptr, QString const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QXmlStreamAttribute > * ctr_qt_core_ffi_QList_QXmlStreamAttribute_fill1(QList< QXmlStreamAttribute > * this_ptr, QXmlStreamAttribute const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_core_ffi_QList_QByteArray_fill1(QList< QByteArray > * this_ptr, QByteArray const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< unsigned int > * ctr_qt_core_ffi_QList_unsigned_int_fill1(QList< unsigned int > * this_ptr, unsigned int const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QStringView > * ctr_qt_core_ffi_QList_QStringView_fill1(QList< QStringView > * this_ptr, QStringView const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QAbstractEventDispatcher::TimerInfo > * ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfo_fill1(QList< QAbstractEventDispatcher::TimerInfo > * this_ptr, QAbstractEventDispatcher::TimerInfo const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QAbstractEventDispatcher::TimerInfoV2 > * ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfoV2_fill1(QList< QAbstractEventDispatcher::TimerInfoV2 > * this_ptr, QAbstractEventDispatcher::TimerInfoV2 const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QVariant > * ctr_qt_core_ffi_QList_QVariant_fill1(QList< QVariant > * this_ptr, QVariant const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QList_QModelIndex_fill1(QList< QModelIndex > * this_ptr, QModelIndex const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< int > * ctr_qt_core_ffi_QList_int_fill1(QList< int > * this_ptr, int const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QPersistentModelIndex > * ctr_qt_core_ffi_QList_QPersistentModelIndex_fill1(QList< QPersistentModelIndex > * this_ptr, QPersistentModelIndex const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< Qt::DayOfWeek > * ctr_qt_core_ffi_QList_Qt_DayOfWeek_fill1(QList< Qt::DayOfWeek > * this_ptr, Qt::DayOfWeek const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QLocale > * ctr_qt_core_ffi_QList_QLocale_fill1(QList< QLocale > * this_ptr, QLocale const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QLocale::Country > * ctr_qt_core_ffi_QList_QLocale_Country_fill1(QList< QLocale::Country > * this_ptr, QLocale::Country const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QUrl > * ctr_qt_core_ffi_QList_QUrl_fill1(QList< QUrl > * this_ptr, QUrl const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QCborValue > * ctr_qt_core_ffi_QList_QCborValue_fill1(QList< QCborValue > * this_ptr, QCborValue const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QCommandLineOption > * ctr_qt_core_ffi_QList_QCommandLineOption_fill1(QList< QCommandLineOption > * this_ptr, QCommandLineOption const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QAbstractItemModel * > * ctr_qt_core_ffi_QList_QAbstractItemModel_ptr_fill1(QList< QAbstractItemModel * > * this_ptr, QAbstractItemModel * const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QTimeZone::OffsetData > * ctr_qt_core_ffi_QList_QTimeZone_OffsetData_fill1(QList< QTimeZone::OffsetData > * this_ptr, QTimeZone::OffsetData const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QFileInfo > * ctr_qt_core_ffi_QList_QFileInfo_fill1(QList< QFileInfo > * this_ptr, QFileInfo const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QPointF > * ctr_qt_core_ffi_QList_QPointF_fill1(QList< QPointF > * this_ptr, QPointF const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QMimeType > * ctr_qt_core_ffi_QList_QMimeType_fill1(QList< QMimeType > * this_ptr, QMimeType const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QStaticPlugin > * ctr_qt_core_ffi_QList_QStaticPlugin_fill1(QList< QStaticPlugin > * this_ptr, QStaticPlugin const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QStorageInfo > * ctr_qt_core_ffi_QList_QStorageInfo_fill1(QList< QStorageInfo > * this_ptr, QStorageInfo const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QXmlStreamNamespaceDeclaration > * ctr_qt_core_ffi_QList_QXmlStreamNamespaceDeclaration_fill1(QList< QXmlStreamNamespaceDeclaration > * this_ptr, QXmlStreamNamespaceDeclaration const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QXmlStreamNotationDeclaration > * ctr_qt_core_ffi_QList_QXmlStreamNotationDeclaration_fill1(QList< QXmlStreamNotationDeclaration > * this_ptr, QXmlStreamNotationDeclaration const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QXmlStreamEntityDeclaration > * ctr_qt_core_ffi_QList_QXmlStreamEntityDeclaration_fill1(QList< QXmlStreamEntityDeclaration > * this_ptr, QXmlStreamEntityDeclaration const * t) {
  return &this_ptr->fill(*t);
}


RITUAL_EXPORT QList< QItemSelectionRange > * ctr_qt_core_ffi_QList_QItemSelectionRange_mid1(QList< QItemSelectionRange > const * this_ptr, long long pos) {
  return new QList< QItemSelectionRange >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QObject * > * ctr_qt_core_ffi_QList_QObject_ptr_mid1(QList< QObject * > const * this_ptr, long long pos) {
  return new QList< QObject * >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QList_QString_mid1(QList< QString > const * this_ptr, long long pos) {
  return new QList< QString >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QXmlStreamAttribute > * ctr_qt_core_ffi_QList_QXmlStreamAttribute_mid1(QList< QXmlStreamAttribute > const * this_ptr, long long pos) {
  return new QList< QXmlStreamAttribute >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_core_ffi_QList_QByteArray_mid1(QList< QByteArray > const * this_ptr, long long pos) {
  return new QList< QByteArray >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< unsigned int > * ctr_qt_core_ffi_QList_unsigned_int_mid1(QList< unsigned int > const * this_ptr, long long pos) {
  return new QList< unsigned int >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QStringView > * ctr_qt_core_ffi_QList_QStringView_mid1(QList< QStringView > const * this_ptr, long long pos) {
  return new QList< QStringView >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QAbstractEventDispatcher::TimerInfo > * ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfo_mid1(QList< QAbstractEventDispatcher::TimerInfo > const * this_ptr, long long pos) {
  return new QList< QAbstractEventDispatcher::TimerInfo >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QAbstractEventDispatcher::TimerInfoV2 > * ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfoV2_mid1(QList< QAbstractEventDispatcher::TimerInfoV2 > const * this_ptr, long long pos) {
  return new QList< QAbstractEventDispatcher::TimerInfoV2 >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QVariant > * ctr_qt_core_ffi_QList_QVariant_mid1(QList< QVariant > const * this_ptr, long long pos) {
  return new QList< QVariant >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QList_QModelIndex_mid1(QList< QModelIndex > const * this_ptr, long long pos) {
  return new QList< QModelIndex >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< int > * ctr_qt_core_ffi_QList_int_mid1(QList< int > const * this_ptr, long long pos) {
  return new QList< int >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QPersistentModelIndex > * ctr_qt_core_ffi_QList_QPersistentModelIndex_mid1(QList< QPersistentModelIndex > const * this_ptr, long long pos) {
  return new QList< QPersistentModelIndex >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< Qt::DayOfWeek > * ctr_qt_core_ffi_QList_Qt_DayOfWeek_mid1(QList< Qt::DayOfWeek > const * this_ptr, long long pos) {
  return new QList< Qt::DayOfWeek >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QLocale > * ctr_qt_core_ffi_QList_QLocale_mid1(QList< QLocale > const * this_ptr, long long pos) {
  return new QList< QLocale >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QLocale::Country > * ctr_qt_core_ffi_QList_QLocale_Country_mid1(QList< QLocale::Country > const * this_ptr, long long pos) {
  return new QList< QLocale::Country >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QUrl > * ctr_qt_core_ffi_QList_QUrl_mid1(QList< QUrl > const * this_ptr, long long pos) {
  return new QList< QUrl >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QCborValue > * ctr_qt_core_ffi_QList_QCborValue_mid1(QList< QCborValue > const * this_ptr, long long pos) {
  return new QList< QCborValue >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QCommandLineOption > * ctr_qt_core_ffi_QList_QCommandLineOption_mid1(QList< QCommandLineOption > const * this_ptr, long long pos) {
  return new QList< QCommandLineOption >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QAbstractItemModel * > * ctr_qt_core_ffi_QList_QAbstractItemModel_ptr_mid1(QList< QAbstractItemModel * > const * this_ptr, long long pos) {
  return new QList< QAbstractItemModel * >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QTimeZone::OffsetData > * ctr_qt_core_ffi_QList_QTimeZone_OffsetData_mid1(QList< QTimeZone::OffsetData > const * this_ptr, long long pos) {
  return new QList< QTimeZone::OffsetData >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QFileInfo > * ctr_qt_core_ffi_QList_QFileInfo_mid1(QList< QFileInfo > const * this_ptr, long long pos) {
  return new QList< QFileInfo >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QPointF > * ctr_qt_core_ffi_QList_QPointF_mid1(QList< QPointF > const * this_ptr, long long pos) {
  return new QList< QPointF >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QMimeType > * ctr_qt_core_ffi_QList_QMimeType_mid1(QList< QMimeType > const * this_ptr, long long pos) {
  return new QList< QMimeType >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QStaticPlugin > * ctr_qt_core_ffi_QList_QStaticPlugin_mid1(QList< QStaticPlugin > const * this_ptr, long long pos) {
  return new QList< QStaticPlugin >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QStorageInfo > * ctr_qt_core_ffi_QList_QStorageInfo_mid1(QList< QStorageInfo > const * this_ptr, long long pos) {
  return new QList< QStorageInfo >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QXmlStreamNamespaceDeclaration > * ctr_qt_core_ffi_QList_QXmlStreamNamespaceDeclaration_mid1(QList< QXmlStreamNamespaceDeclaration > const * this_ptr, long long pos) {
  return new QList< QXmlStreamNamespaceDeclaration >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QXmlStreamNotationDeclaration > * ctr_qt_core_ffi_QList_QXmlStreamNotationDeclaration_mid1(QList< QXmlStreamNotationDeclaration > const * this_ptr, long long pos) {
  return new QList< QXmlStreamNotationDeclaration >(this_ptr->mid(pos));
}


RITUAL_EXPORT QList< QXmlStreamEntityDeclaration > * ctr_qt_core_ffi_QList_QXmlStreamEntityDeclaration_mid1(QList< QXmlStreamEntityDeclaration > const * this_ptr, long long pos) {
  return new QList< QXmlStreamEntityDeclaration >(this_ptr->mid(pos));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash265(QList< QObject * > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash266(QList< QString > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash268(QList< QByteArray > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash269(QList< unsigned int > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash270(QList< QStringView > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash274(QList< QModelIndex > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash275(QList< int > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash276(QList< QPersistentModelIndex > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash277(QList< Qt::DayOfWeek > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash278(QList< QLocale > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash279(QList< QLocale::Country > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash280(QList< QUrl > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash281(QList< QCborValue > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash283(QList< QAbstractItemModel * > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash287(QList< QMimeType > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT QTaggedPointer< QPropertyObserver, QPropertyObserverBase::ObserverTag > * ctr_qt_core_ffi_QTaggedPointer_QPropertyObserver_QPropertyObserverBase_ObserverTag_QTaggedPointer3(QPropertyObserver * pointer) {
  return new QTaggedPointer< QPropertyObserver, QPropertyObserverBase::ObserverTag >(pointer);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash293(QTaggedPointer< QPropertyObserver, QPropertyObserverBase::ObserverTag > const * p) {
  return qHash(*p);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash296(QHash< int, QByteArray > const * key) {
  return qHash(*key);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QMap_QString_QVariant_key1(QMap< QString, QVariant > const * this_ptr, QVariant const * value) {
  return new QString(this_ptr->key(*value));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMap_int_QVariant_key1(QMap< int, QVariant > const * this_ptr, QVariant const * value) {
  return this_ptr->key(*value);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QMap_QString_QVariant_value1(QMap< QString, QVariant > const * this_ptr, QString const * key) {
  return new QVariant(this_ptr->value(*key));
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QMap_int_QVariant_value1(QMap< int, QVariant > const * this_ptr, int const * key) {
  return new QVariant(this_ptr->value(*key));
}


RITUAL_EXPORT QStringConverter * ctr_qt_core_ffi_static_cast_QStringConverter_ptr(QStringConverterBase * ptr) {
  return static_cast< QStringConverter * >(ptr);
}


RITUAL_EXPORT QStringConverterBase * ctr_qt_core_ffi_static_cast_QStringConverterBase_ptr(QStringConverter * ptr) {
  return static_cast< QStringConverterBase * >(ptr);
}


RITUAL_EXPORT QStringEncoder * ctr_qt_core_ffi_static_cast_QStringEncoder_ptr(QStringConverter * ptr) {
  return static_cast< QStringEncoder * >(ptr);
}


RITUAL_EXPORT QStringConverter * ctr_qt_core_ffi_static_cast_QStringConverter_ptr1(QStringEncoder * ptr) {
  return static_cast< QStringConverter * >(ptr);
}


RITUAL_EXPORT QStringEncoder * ctr_qt_core_ffi_static_cast_QStringEncoder_ptr1(QStringConverterBase * ptr) {
  return static_cast< QStringEncoder * >(ptr);
}


RITUAL_EXPORT QStringConverterBase * ctr_qt_core_ffi_static_cast_QStringConverterBase_ptr1(QStringEncoder * ptr) {
  return static_cast< QStringConverterBase * >(ptr);
}


RITUAL_EXPORT QStringDecoder * ctr_qt_core_ffi_static_cast_QStringDecoder_ptr(QStringConverter * ptr) {
  return static_cast< QStringDecoder * >(ptr);
}


RITUAL_EXPORT QStringConverter * ctr_qt_core_ffi_static_cast_QStringConverter_ptr2(QStringDecoder * ptr) {
  return static_cast< QStringConverter * >(ptr);
}


RITUAL_EXPORT QStringDecoder * ctr_qt_core_ffi_static_cast_QStringDecoder_ptr1(QStringConverterBase * ptr) {
  return static_cast< QStringDecoder * >(ptr);
}


RITUAL_EXPORT QStringConverterBase * ctr_qt_core_ffi_static_cast_QStringConverterBase_ptr2(QStringDecoder * ptr) {
  return static_cast< QStringConverterBase * >(ptr);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_static_cast_QDataStream_ptr(QIODeviceBase * ptr) {
  return static_cast< QDataStream * >(ptr);
}


RITUAL_EXPORT QIODeviceBase * ctr_qt_core_ffi_static_cast_QIODeviceBase_ptr(QDataStream * ptr) {
  return static_cast< QIODeviceBase * >(ptr);
}


RITUAL_EXPORT QtMetaContainerPrivate::QMetaSequenceInterface * ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_QMetaSequenceInterface_ptr(QtMetaContainerPrivate::QMetaContainerInterface * ptr) {
  return static_cast< QtMetaContainerPrivate::QMetaSequenceInterface * >(ptr);
}


RITUAL_EXPORT QtMetaContainerPrivate::QMetaContainerInterface * ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_QMetaContainerInterface_ptr(QtMetaContainerPrivate::QMetaSequenceInterface * ptr) {
  return static_cast< QtMetaContainerPrivate::QMetaContainerInterface * >(ptr);
}


RITUAL_EXPORT QtMetaContainerPrivate::QMetaAssociationInterface * ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_QMetaAssociationInterface_ptr(QtMetaContainerPrivate::QMetaContainerInterface * ptr) {
  return static_cast< QtMetaContainerPrivate::QMetaAssociationInterface * >(ptr);
}


RITUAL_EXPORT QtMetaContainerPrivate::QMetaContainerInterface * ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_QMetaContainerInterface_ptr1(QtMetaContainerPrivate::QMetaAssociationInterface * ptr) {
  return static_cast< QtMetaContainerPrivate::QMetaContainerInterface * >(ptr);
}


RITUAL_EXPORT QMetaSequence * ctr_qt_core_ffi_static_cast_QMetaSequence_ptr(QMetaContainer * ptr) {
  return static_cast< QMetaSequence * >(ptr);
}


RITUAL_EXPORT QMetaContainer * ctr_qt_core_ffi_static_cast_QMetaContainer_ptr(QMetaSequence * ptr) {
  return static_cast< QMetaContainer * >(ptr);
}


RITUAL_EXPORT QMetaAssociation * ctr_qt_core_ffi_static_cast_QMetaAssociation_ptr(QMetaContainer * ptr) {
  return static_cast< QMetaAssociation * >(ptr);
}


RITUAL_EXPORT QMetaContainer * ctr_qt_core_ffi_static_cast_QMetaContainer_ptr1(QMetaAssociation * ptr) {
  return static_cast< QMetaContainer * >(ptr);
}


RITUAL_EXPORT QAbstractAnimation * ctr_qt_core_ffi_static_cast_QAbstractAnimation_ptr(QObject * ptr) {
  return static_cast< QAbstractAnimation * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr(QAbstractAnimation * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAbstractAnimation * ctr_qt_core_ffi_dynamic_cast_QAbstractAnimation_ptr(QObject * ptr) {
  return dynamic_cast< QAbstractAnimation * >(ptr);
}


RITUAL_EXPORT QAnimationDriver * ctr_qt_core_ffi_static_cast_QAnimationDriver_ptr(QObject * ptr) {
  return static_cast< QAnimationDriver * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr1(QAnimationDriver * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAnimationDriver * ctr_qt_core_ffi_dynamic_cast_QAnimationDriver_ptr(QObject * ptr) {
  return dynamic_cast< QAnimationDriver * >(ptr);
}


RITUAL_EXPORT QEventLoop * ctr_qt_core_ffi_static_cast_QEventLoop_ptr(QObject * ptr) {
  return static_cast< QEventLoop * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr2(QEventLoop * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QEventLoop * ctr_qt_core_ffi_dynamic_cast_QEventLoop_ptr(QObject * ptr) {
  return dynamic_cast< QEventLoop * >(ptr);
}


RITUAL_EXPORT QAbstractEventDispatcher * ctr_qt_core_ffi_static_cast_QAbstractEventDispatcher_ptr(QObject * ptr) {
  return static_cast< QAbstractEventDispatcher * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr3(QAbstractEventDispatcher * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAbstractEventDispatcher * ctr_qt_core_ffi_dynamic_cast_QAbstractEventDispatcher_ptr(QObject * ptr) {
  return dynamic_cast< QAbstractEventDispatcher * >(ptr);
}


RITUAL_EXPORT QAbstractEventDispatcherV2 * ctr_qt_core_ffi_static_cast_QAbstractEventDispatcherV2_ptr(QAbstractEventDispatcher * ptr) {
  return static_cast< QAbstractEventDispatcherV2 * >(ptr);
}


RITUAL_EXPORT QAbstractEventDispatcher * ctr_qt_core_ffi_static_cast_QAbstractEventDispatcher_ptr1(QAbstractEventDispatcherV2 * ptr) {
  return static_cast< QAbstractEventDispatcher * >(ptr);
}


RITUAL_EXPORT QAbstractEventDispatcherV2 * ctr_qt_core_ffi_dynamic_cast_QAbstractEventDispatcherV2_ptr(QAbstractEventDispatcher * ptr) {
  return dynamic_cast< QAbstractEventDispatcherV2 * >(ptr);
}


RITUAL_EXPORT QAbstractEventDispatcherV2 * ctr_qt_core_ffi_static_cast_QAbstractEventDispatcherV2_ptr1(QObject * ptr) {
  return static_cast< QAbstractEventDispatcherV2 * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr4(QAbstractEventDispatcherV2 * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAbstractEventDispatcherV2 * ctr_qt_core_ffi_dynamic_cast_QAbstractEventDispatcherV2_ptr1(QObject * ptr) {
  return dynamic_cast< QAbstractEventDispatcherV2 * >(ptr);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_static_cast_QTextStream_ptr(QIODeviceBase * ptr) {
  return static_cast< QTextStream * >(ptr);
}


RITUAL_EXPORT QIODeviceBase * ctr_qt_core_ffi_static_cast_QIODeviceBase_ptr1(QTextStream * ptr) {
  return static_cast< QIODeviceBase * >(ptr);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_static_cast_QDebug_ptr(QIODeviceBase * ptr) {
  return static_cast< QDebug * >(ptr);
}


RITUAL_EXPORT QIODeviceBase * ctr_qt_core_ffi_static_cast_QIODeviceBase_ptr2(QDebug * ptr) {
  return static_cast< QIODeviceBase * >(ptr);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_core_ffi_static_cast_QAbstractItemModel_ptr(QObject * ptr) {
  return static_cast< QAbstractItemModel * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr5(QAbstractItemModel * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_core_ffi_dynamic_cast_QAbstractItemModel_ptr(QObject * ptr) {
  return dynamic_cast< QAbstractItemModel * >(ptr);
}


RITUAL_EXPORT QAbstractTableModel * ctr_qt_core_ffi_static_cast_QAbstractTableModel_ptr(QAbstractItemModel * ptr) {
  return static_cast< QAbstractTableModel * >(ptr);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_core_ffi_static_cast_QAbstractItemModel_ptr1(QAbstractTableModel * ptr) {
  return static_cast< QAbstractItemModel * >(ptr);
}


RITUAL_EXPORT QAbstractTableModel * ctr_qt_core_ffi_dynamic_cast_QAbstractTableModel_ptr(QAbstractItemModel * ptr) {
  return dynamic_cast< QAbstractTableModel * >(ptr);
}


RITUAL_EXPORT QAbstractTableModel * ctr_qt_core_ffi_static_cast_QAbstractTableModel_ptr1(QObject * ptr) {
  return static_cast< QAbstractTableModel * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr6(QAbstractTableModel * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAbstractTableModel * ctr_qt_core_ffi_dynamic_cast_QAbstractTableModel_ptr1(QObject * ptr) {
  return dynamic_cast< QAbstractTableModel * >(ptr);
}


RITUAL_EXPORT QAbstractListModel * ctr_qt_core_ffi_static_cast_QAbstractListModel_ptr(QAbstractItemModel * ptr) {
  return static_cast< QAbstractListModel * >(ptr);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_core_ffi_static_cast_QAbstractItemModel_ptr2(QAbstractListModel * ptr) {
  return static_cast< QAbstractItemModel * >(ptr);
}


RITUAL_EXPORT QAbstractListModel * ctr_qt_core_ffi_dynamic_cast_QAbstractListModel_ptr(QAbstractItemModel * ptr) {
  return dynamic_cast< QAbstractListModel * >(ptr);
}


RITUAL_EXPORT QAbstractListModel * ctr_qt_core_ffi_static_cast_QAbstractListModel_ptr1(QObject * ptr) {
  return static_cast< QAbstractListModel * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr7(QAbstractListModel * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAbstractListModel * ctr_qt_core_ffi_dynamic_cast_QAbstractListModel_ptr1(QObject * ptr) {
  return dynamic_cast< QAbstractListModel * >(ptr);
}


RITUAL_EXPORT QAbstractProxyModel * ctr_qt_core_ffi_static_cast_QAbstractProxyModel_ptr(QAbstractItemModel * ptr) {
  return static_cast< QAbstractProxyModel * >(ptr);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_core_ffi_static_cast_QAbstractItemModel_ptr3(QAbstractProxyModel * ptr) {
  return static_cast< QAbstractItemModel * >(ptr);
}


RITUAL_EXPORT QAbstractProxyModel * ctr_qt_core_ffi_dynamic_cast_QAbstractProxyModel_ptr(QAbstractItemModel * ptr) {
  return dynamic_cast< QAbstractProxyModel * >(ptr);
}


RITUAL_EXPORT QAbstractProxyModel * ctr_qt_core_ffi_static_cast_QAbstractProxyModel_ptr1(QObject * ptr) {
  return static_cast< QAbstractProxyModel * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr8(QAbstractProxyModel * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAbstractProxyModel * ctr_qt_core_ffi_dynamic_cast_QAbstractProxyModel_ptr1(QObject * ptr) {
  return dynamic_cast< QAbstractProxyModel * >(ptr);
}


RITUAL_EXPORT QAnimationGroup * ctr_qt_core_ffi_static_cast_QAnimationGroup_ptr(QAbstractAnimation * ptr) {
  return static_cast< QAnimationGroup * >(ptr);
}


RITUAL_EXPORT QAbstractAnimation * ctr_qt_core_ffi_static_cast_QAbstractAnimation_ptr1(QAnimationGroup * ptr) {
  return static_cast< QAbstractAnimation * >(ptr);
}


RITUAL_EXPORT QAnimationGroup * ctr_qt_core_ffi_dynamic_cast_QAnimationGroup_ptr(QAbstractAnimation * ptr) {
  return dynamic_cast< QAnimationGroup * >(ptr);
}


RITUAL_EXPORT QAnimationGroup * ctr_qt_core_ffi_static_cast_QAnimationGroup_ptr1(QObject * ptr) {
  return static_cast< QAnimationGroup * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr9(QAnimationGroup * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QAnimationGroup * ctr_qt_core_ffi_dynamic_cast_QAnimationGroup_ptr1(QObject * ptr) {
  return dynamic_cast< QAnimationGroup * >(ptr);
}


RITUAL_EXPORT QMutex * ctr_qt_core_ffi_static_cast_QMutex_ptr(QBasicMutex * ptr) {
  return static_cast< QMutex * >(ptr);
}


RITUAL_EXPORT QBasicMutex * ctr_qt_core_ffi_static_cast_QBasicMutex_ptr(QMutex * ptr) {
  return static_cast< QBasicMutex * >(ptr);
}


RITUAL_EXPORT QTimerEvent * ctr_qt_core_ffi_static_cast_QTimerEvent_ptr(QEvent * ptr) {
  return static_cast< QTimerEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_core_ffi_static_cast_QEvent_ptr(QTimerEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QTimerEvent * ctr_qt_core_ffi_dynamic_cast_QTimerEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QTimerEvent * >(ptr);
}


RITUAL_EXPORT QChildEvent * ctr_qt_core_ffi_static_cast_QChildEvent_ptr(QEvent * ptr) {
  return static_cast< QChildEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_core_ffi_static_cast_QEvent_ptr1(QChildEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QChildEvent * ctr_qt_core_ffi_dynamic_cast_QChildEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QChildEvent * >(ptr);
}


RITUAL_EXPORT QDynamicPropertyChangeEvent * ctr_qt_core_ffi_static_cast_QDynamicPropertyChangeEvent_ptr(QEvent * ptr) {
  return static_cast< QDynamicPropertyChangeEvent * >(ptr);
}


RITUAL_EXPORT QEvent * ctr_qt_core_ffi_static_cast_QEvent_ptr2(QDynamicPropertyChangeEvent * ptr) {
  return static_cast< QEvent * >(ptr);
}


RITUAL_EXPORT QDynamicPropertyChangeEvent * ctr_qt_core_ffi_dynamic_cast_QDynamicPropertyChangeEvent_ptr(QEvent * ptr) {
  return dynamic_cast< QDynamicPropertyChangeEvent * >(ptr);
}


RITUAL_EXPORT QCoreApplication * ctr_qt_core_ffi_static_cast_QCoreApplication_ptr(QObject * ptr) {
  return static_cast< QCoreApplication * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr10(QCoreApplication * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QCoreApplication * ctr_qt_core_ffi_dynamic_cast_QCoreApplication_ptr(QObject * ptr) {
  return dynamic_cast< QCoreApplication * >(ptr);
}


RITUAL_EXPORT QAssociativeIterator * ctr_qt_core_ffi_static_cast_QAssociativeIterator_ptr(QIterator< QMetaAssociation > * ptr) {
  return static_cast< QAssociativeIterator * >(ptr);
}


RITUAL_EXPORT QIterator< QMetaAssociation > * ctr_qt_core_ffi_static_cast_QIterator_QMetaAssociation_ptr(QAssociativeIterator * ptr) {
  return static_cast< QIterator< QMetaAssociation > * >(ptr);
}


RITUAL_EXPORT QAssociativeConstIterator * ctr_qt_core_ffi_static_cast_QAssociativeConstIterator_ptr(QConstIterator< QMetaAssociation > * ptr) {
  return static_cast< QAssociativeConstIterator * >(ptr);
}


RITUAL_EXPORT QConstIterator< QMetaAssociation > * ctr_qt_core_ffi_static_cast_QConstIterator_QMetaAssociation_ptr(QAssociativeConstIterator * ptr) {
  return static_cast< QConstIterator< QMetaAssociation > * >(ptr);
}


RITUAL_EXPORT QAssociativeIterable * ctr_qt_core_ffi_static_cast_QAssociativeIterable_ptr(QIterable< QMetaAssociation > * ptr) {
  return static_cast< QAssociativeIterable * >(ptr);
}


RITUAL_EXPORT QIterable< QMetaAssociation > * ctr_qt_core_ffi_static_cast_QIterable_QMetaAssociation_ptr(QAssociativeIterable * ptr) {
  return static_cast< QIterable< QMetaAssociation > * >(ptr);
}


RITUAL_EXPORT QIODevice * ctr_qt_core_ffi_static_cast_QIODevice_ptr(QObject * ptr) {
  return static_cast< QIODevice * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr11(QIODevice * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QIODevice * ctr_qt_core_ffi_dynamic_cast_QIODevice_ptr(QObject * ptr) {
  return dynamic_cast< QIODevice * >(ptr);
}


RITUAL_EXPORT QIODevice * ctr_qt_core_ffi_static_cast_QIODevice_ptr1(QIODeviceBase * ptr) {
  return static_cast< QIODevice * >(ptr);
}


RITUAL_EXPORT QIODeviceBase * ctr_qt_core_ffi_static_cast_QIODeviceBase_ptr3(QIODevice * ptr) {
  return static_cast< QIODeviceBase * >(ptr);
}


RITUAL_EXPORT QBuffer * ctr_qt_core_ffi_static_cast_QBuffer_ptr(QIODevice * ptr) {
  return static_cast< QBuffer * >(ptr);
}


RITUAL_EXPORT QIODevice * ctr_qt_core_ffi_static_cast_QIODevice_ptr2(QBuffer * ptr) {
  return static_cast< QIODevice * >(ptr);
}


RITUAL_EXPORT QBuffer * ctr_qt_core_ffi_dynamic_cast_QBuffer_ptr(QIODevice * ptr) {
  return dynamic_cast< QBuffer * >(ptr);
}


RITUAL_EXPORT QBuffer * ctr_qt_core_ffi_static_cast_QBuffer_ptr1(QObject * ptr) {
  return static_cast< QBuffer * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr12(QBuffer * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QBuffer * ctr_qt_core_ffi_dynamic_cast_QBuffer_ptr1(QObject * ptr) {
  return dynamic_cast< QBuffer * >(ptr);
}


RITUAL_EXPORT QBuffer * ctr_qt_core_ffi_static_cast_QBuffer_ptr2(QIODeviceBase * ptr) {
  return static_cast< QBuffer * >(ptr);
}


RITUAL_EXPORT QIODeviceBase * ctr_qt_core_ffi_static_cast_QIODeviceBase_ptr4(QBuffer * ptr) {
  return static_cast< QIODeviceBase * >(ptr);
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_static_cast_QCborValueRef_ptr(QCborValueConstRef * ptr) {
  return static_cast< QCborValueRef * >(ptr);
}


RITUAL_EXPORT QCborValueConstRef * ctr_qt_core_ffi_static_cast_QCborValueConstRef_ptr(QCborValueRef * ptr) {
  return static_cast< QCborValueConstRef * >(ptr);
}


RITUAL_EXPORT QPropertyObserver * ctr_qt_core_ffi_static_cast_QPropertyObserver_ptr(QPropertyObserverBase * ptr) {
  return static_cast< QPropertyObserver * >(ptr);
}


RITUAL_EXPORT QPropertyObserverBase * ctr_qt_core_ffi_static_cast_QPropertyObserverBase_ptr(QPropertyObserver * ptr) {
  return static_cast< QPropertyObserverBase * >(ptr);
}


RITUAL_EXPORT QPropertyNotifier * ctr_qt_core_ffi_static_cast_QPropertyNotifier_ptr(QPropertyObserver * ptr) {
  return static_cast< QPropertyNotifier * >(ptr);
}


RITUAL_EXPORT QPropertyObserver * ctr_qt_core_ffi_static_cast_QPropertyObserver_ptr1(QPropertyNotifier * ptr) {
  return static_cast< QPropertyObserver * >(ptr);
}


RITUAL_EXPORT QPropertyNotifier * ctr_qt_core_ffi_static_cast_QPropertyNotifier_ptr1(QPropertyObserverBase * ptr) {
  return static_cast< QPropertyNotifier * >(ptr);
}


RITUAL_EXPORT QPropertyObserverBase * ctr_qt_core_ffi_static_cast_QPropertyObserverBase_ptr1(QPropertyNotifier * ptr) {
  return static_cast< QPropertyObserverBase * >(ptr);
}


RITUAL_EXPORT QTimer * ctr_qt_core_ffi_static_cast_QTimer_ptr(QObject * ptr) {
  return static_cast< QTimer * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr13(QTimer * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTimer * ctr_qt_core_ffi_dynamic_cast_QTimer_ptr(QObject * ptr) {
  return dynamic_cast< QTimer * >(ptr);
}


RITUAL_EXPORT QChronoTimer * ctr_qt_core_ffi_static_cast_QChronoTimer_ptr(QObject * ptr) {
  return static_cast< QChronoTimer * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr14(QChronoTimer * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QChronoTimer * ctr_qt_core_ffi_dynamic_cast_QChronoTimer_ptr(QObject * ptr) {
  return dynamic_cast< QChronoTimer * >(ptr);
}


RITUAL_EXPORT QConcatenateTablesProxyModel * ctr_qt_core_ffi_static_cast_QConcatenateTablesProxyModel_ptr(QAbstractItemModel * ptr) {
  return static_cast< QConcatenateTablesProxyModel * >(ptr);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_core_ffi_static_cast_QAbstractItemModel_ptr4(QConcatenateTablesProxyModel * ptr) {
  return static_cast< QAbstractItemModel * >(ptr);
}


RITUAL_EXPORT QConcatenateTablesProxyModel * ctr_qt_core_ffi_dynamic_cast_QConcatenateTablesProxyModel_ptr(QAbstractItemModel * ptr) {
  return dynamic_cast< QConcatenateTablesProxyModel * >(ptr);
}


RITUAL_EXPORT QConcatenateTablesProxyModel * ctr_qt_core_ffi_static_cast_QConcatenateTablesProxyModel_ptr1(QObject * ptr) {
  return static_cast< QConcatenateTablesProxyModel * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr15(QConcatenateTablesProxyModel * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QConcatenateTablesProxyModel * ctr_qt_core_ffi_dynamic_cast_QConcatenateTablesProxyModel_ptr1(QObject * ptr) {
  return dynamic_cast< QConcatenateTablesProxyModel * >(ptr);
}


RITUAL_EXPORT QFileDevice * ctr_qt_core_ffi_static_cast_QFileDevice_ptr(QIODevice * ptr) {
  return static_cast< QFileDevice * >(ptr);
}


RITUAL_EXPORT QIODevice * ctr_qt_core_ffi_static_cast_QIODevice_ptr3(QFileDevice * ptr) {
  return static_cast< QIODevice * >(ptr);
}


RITUAL_EXPORT QFileDevice * ctr_qt_core_ffi_dynamic_cast_QFileDevice_ptr(QIODevice * ptr) {
  return dynamic_cast< QFileDevice * >(ptr);
}


RITUAL_EXPORT QFileDevice * ctr_qt_core_ffi_static_cast_QFileDevice_ptr1(QObject * ptr) {
  return static_cast< QFileDevice * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr16(QFileDevice * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QFileDevice * ctr_qt_core_ffi_dynamic_cast_QFileDevice_ptr1(QObject * ptr) {
  return dynamic_cast< QFileDevice * >(ptr);
}


RITUAL_EXPORT QFileDevice * ctr_qt_core_ffi_static_cast_QFileDevice_ptr2(QIODeviceBase * ptr) {
  return static_cast< QFileDevice * >(ptr);
}


RITUAL_EXPORT QIODeviceBase * ctr_qt_core_ffi_static_cast_QIODeviceBase_ptr5(QFileDevice * ptr) {
  return static_cast< QIODeviceBase * >(ptr);
}


RITUAL_EXPORT QFile * ctr_qt_core_ffi_static_cast_QFile_ptr(QFileDevice * ptr) {
  return static_cast< QFile * >(ptr);
}


RITUAL_EXPORT QFileDevice * ctr_qt_core_ffi_static_cast_QFileDevice_ptr3(QFile * ptr) {
  return static_cast< QFileDevice * >(ptr);
}


RITUAL_EXPORT QFile * ctr_qt_core_ffi_dynamic_cast_QFile_ptr(QFileDevice * ptr) {
  return dynamic_cast< QFile * >(ptr);
}


RITUAL_EXPORT QFile * ctr_qt_core_ffi_static_cast_QFile_ptr1(QIODevice * ptr) {
  return static_cast< QFile * >(ptr);
}


RITUAL_EXPORT QIODevice * ctr_qt_core_ffi_static_cast_QIODevice_ptr4(QFile * ptr) {
  return static_cast< QIODevice * >(ptr);
}


RITUAL_EXPORT QFile * ctr_qt_core_ffi_dynamic_cast_QFile_ptr1(QIODevice * ptr) {
  return dynamic_cast< QFile * >(ptr);
}


RITUAL_EXPORT QFile * ctr_qt_core_ffi_static_cast_QFile_ptr2(QObject * ptr) {
  return static_cast< QFile * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr17(QFile * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QFile * ctr_qt_core_ffi_dynamic_cast_QFile_ptr2(QObject * ptr) {
  return dynamic_cast< QFile * >(ptr);
}


RITUAL_EXPORT QFile * ctr_qt_core_ffi_static_cast_QFile_ptr3(QIODeviceBase * ptr) {
  return static_cast< QFile * >(ptr);
}


RITUAL_EXPORT QIODeviceBase * ctr_qt_core_ffi_static_cast_QIODeviceBase_ptr6(QFile * ptr) {
  return static_cast< QIODeviceBase * >(ptr);
}


RITUAL_EXPORT QUnhandledException * ctr_qt_core_ffi_static_cast_QUnhandledException_ptr(QException * ptr) {
  return static_cast< QUnhandledException * >(ptr);
}


RITUAL_EXPORT QException * ctr_qt_core_ffi_static_cast_QException_ptr(QUnhandledException * ptr) {
  return static_cast< QException * >(ptr);
}


RITUAL_EXPORT QUnhandledException * ctr_qt_core_ffi_dynamic_cast_QUnhandledException_ptr(QException * ptr) {
  return dynamic_cast< QUnhandledException * >(ptr);
}


RITUAL_EXPORT QFileSelector * ctr_qt_core_ffi_static_cast_QFileSelector_ptr(QObject * ptr) {
  return static_cast< QFileSelector * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr18(QFileSelector * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QFileSelector * ctr_qt_core_ffi_dynamic_cast_QFileSelector_ptr(QObject * ptr) {
  return dynamic_cast< QFileSelector * >(ptr);
}


RITUAL_EXPORT QFileSystemWatcher * ctr_qt_core_ffi_static_cast_QFileSystemWatcher_ptr(QObject * ptr) {
  return static_cast< QFileSystemWatcher * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr19(QFileSystemWatcher * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QFileSystemWatcher * ctr_qt_core_ffi_dynamic_cast_QFileSystemWatcher_ptr(QObject * ptr) {
  return dynamic_cast< QFileSystemWatcher * >(ptr);
}


RITUAL_EXPORT QThread * ctr_qt_core_ffi_static_cast_QThread_ptr(QObject * ptr) {
  return static_cast< QThread * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr20(QThread * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QThread * ctr_qt_core_ffi_dynamic_cast_QThread_ptr(QObject * ptr) {
  return dynamic_cast< QThread * >(ptr);
}


RITUAL_EXPORT QThreadPool * ctr_qt_core_ffi_static_cast_QThreadPool_ptr(QObject * ptr) {
  return static_cast< QThreadPool * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr21(QThreadPool * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QThreadPool * ctr_qt_core_ffi_dynamic_cast_QThreadPool_ptr(QObject * ptr) {
  return dynamic_cast< QThreadPool * >(ptr);
}


RITUAL_EXPORT QFutureWatcherBase * ctr_qt_core_ffi_static_cast_QFutureWatcherBase_ptr(QObject * ptr) {
  return static_cast< QFutureWatcherBase * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr22(QFutureWatcherBase * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QFutureWatcherBase * ctr_qt_core_ffi_dynamic_cast_QFutureWatcherBase_ptr(QObject * ptr) {
  return dynamic_cast< QFutureWatcherBase * >(ptr);
}


RITUAL_EXPORT QIdentityProxyModel * ctr_qt_core_ffi_static_cast_QIdentityProxyModel_ptr(QAbstractProxyModel * ptr) {
  return static_cast< QIdentityProxyModel * >(ptr);
}


RITUAL_EXPORT QAbstractProxyModel * ctr_qt_core_ffi_static_cast_QAbstractProxyModel_ptr2(QIdentityProxyModel * ptr) {
  return static_cast< QAbstractProxyModel * >(ptr);
}


RITUAL_EXPORT QIdentityProxyModel * ctr_qt_core_ffi_dynamic_cast_QIdentityProxyModel_ptr(QAbstractProxyModel * ptr) {
  return dynamic_cast< QIdentityProxyModel * >(ptr);
}


RITUAL_EXPORT QIdentityProxyModel * ctr_qt_core_ffi_static_cast_QIdentityProxyModel_ptr1(QAbstractItemModel * ptr) {
  return static_cast< QIdentityProxyModel * >(ptr);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_core_ffi_static_cast_QAbstractItemModel_ptr5(QIdentityProxyModel * ptr) {
  return static_cast< QAbstractItemModel * >(ptr);
}


RITUAL_EXPORT QIdentityProxyModel * ctr_qt_core_ffi_dynamic_cast_QIdentityProxyModel_ptr1(QAbstractItemModel * ptr) {
  return dynamic_cast< QIdentityProxyModel * >(ptr);
}


RITUAL_EXPORT QIdentityProxyModel * ctr_qt_core_ffi_static_cast_QIdentityProxyModel_ptr2(QObject * ptr) {
  return static_cast< QIdentityProxyModel * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr23(QIdentityProxyModel * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QIdentityProxyModel * ctr_qt_core_ffi_dynamic_cast_QIdentityProxyModel_ptr2(QObject * ptr) {
  return dynamic_cast< QIdentityProxyModel * >(ptr);
}


RITUAL_EXPORT QItemSelectionModel * ctr_qt_core_ffi_static_cast_QItemSelectionModel_ptr(QObject * ptr) {
  return static_cast< QItemSelectionModel * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr24(QItemSelectionModel * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QItemSelectionModel * ctr_qt_core_ffi_dynamic_cast_QItemSelectionModel_ptr(QObject * ptr) {
  return dynamic_cast< QItemSelectionModel * >(ptr);
}


RITUAL_EXPORT QItemSelection * ctr_qt_core_ffi_static_cast_QItemSelection_ptr(QList< QItemSelectionRange > * ptr) {
  return static_cast< QItemSelection * >(ptr);
}


RITUAL_EXPORT QList< QItemSelectionRange > * ctr_qt_core_ffi_static_cast_QList_QItemSelectionRange_ptr(QItemSelection * ptr) {
  return static_cast< QList< QItemSelectionRange > * >(ptr);
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_static_cast_QJsonValueRef_ptr(QJsonValueConstRef * ptr) {
  return static_cast< QJsonValueRef * >(ptr);
}


RITUAL_EXPORT QJsonValueConstRef * ctr_qt_core_ffi_static_cast_QJsonValueConstRef_ptr(QJsonValueRef * ptr) {
  return static_cast< QJsonValueConstRef * >(ptr);
}


RITUAL_EXPORT QLibrary * ctr_qt_core_ffi_static_cast_QLibrary_ptr(QObject * ptr) {
  return static_cast< QLibrary * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr25(QLibrary * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QLibrary * ctr_qt_core_ffi_dynamic_cast_QLibrary_ptr(QObject * ptr) {
  return dynamic_cast< QLibrary * >(ptr);
}


RITUAL_EXPORT QMimeData * ctr_qt_core_ffi_static_cast_QMimeData_ptr(QObject * ptr) {
  return static_cast< QMimeData * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr26(QMimeData * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QMimeData * ctr_qt_core_ffi_dynamic_cast_QMimeData_ptr(QObject * ptr) {
  return dynamic_cast< QMimeData * >(ptr);
}


RITUAL_EXPORT QObjectCleanupHandler * ctr_qt_core_ffi_static_cast_QObjectCleanupHandler_ptr(QObject * ptr) {
  return static_cast< QObjectCleanupHandler * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr27(QObjectCleanupHandler * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QObjectCleanupHandler * ctr_qt_core_ffi_dynamic_cast_QObjectCleanupHandler_ptr(QObject * ptr) {
  return dynamic_cast< QObjectCleanupHandler * >(ptr);
}


RITUAL_EXPORT QOperatingSystemVersionUnexported * ctr_qt_core_ffi_static_cast_QOperatingSystemVersionUnexported_ptr(QOperatingSystemVersionBase * ptr) {
  return static_cast< QOperatingSystemVersionUnexported * >(ptr);
}


RITUAL_EXPORT QOperatingSystemVersionBase * ctr_qt_core_ffi_static_cast_QOperatingSystemVersionBase_ptr(QOperatingSystemVersionUnexported * ptr) {
  return static_cast< QOperatingSystemVersionBase * >(ptr);
}


RITUAL_EXPORT QOperatingSystemVersion * ctr_qt_core_ffi_static_cast_QOperatingSystemVersion_ptr(QOperatingSystemVersionUnexported * ptr) {
  return static_cast< QOperatingSystemVersion * >(ptr);
}


RITUAL_EXPORT QOperatingSystemVersionUnexported * ctr_qt_core_ffi_static_cast_QOperatingSystemVersionUnexported_ptr1(QOperatingSystemVersion * ptr) {
  return static_cast< QOperatingSystemVersionUnexported * >(ptr);
}


RITUAL_EXPORT QOperatingSystemVersion * ctr_qt_core_ffi_static_cast_QOperatingSystemVersion_ptr1(QOperatingSystemVersionBase * ptr) {
  return static_cast< QOperatingSystemVersion * >(ptr);
}


RITUAL_EXPORT QOperatingSystemVersionBase * ctr_qt_core_ffi_static_cast_QOperatingSystemVersionBase_ptr1(QOperatingSystemVersion * ptr) {
  return static_cast< QOperatingSystemVersionBase * >(ptr);
}


RITUAL_EXPORT QParallelAnimationGroup * ctr_qt_core_ffi_static_cast_QParallelAnimationGroup_ptr(QAnimationGroup * ptr) {
  return static_cast< QParallelAnimationGroup * >(ptr);
}


RITUAL_EXPORT QAnimationGroup * ctr_qt_core_ffi_static_cast_QAnimationGroup_ptr2(QParallelAnimationGroup * ptr) {
  return static_cast< QAnimationGroup * >(ptr);
}


RITUAL_EXPORT QParallelAnimationGroup * ctr_qt_core_ffi_dynamic_cast_QParallelAnimationGroup_ptr(QAnimationGroup * ptr) {
  return dynamic_cast< QParallelAnimationGroup * >(ptr);
}


RITUAL_EXPORT QParallelAnimationGroup * ctr_qt_core_ffi_static_cast_QParallelAnimationGroup_ptr1(QAbstractAnimation * ptr) {
  return static_cast< QParallelAnimationGroup * >(ptr);
}


RITUAL_EXPORT QAbstractAnimation * ctr_qt_core_ffi_static_cast_QAbstractAnimation_ptr2(QParallelAnimationGroup * ptr) {
  return static_cast< QAbstractAnimation * >(ptr);
}


RITUAL_EXPORT QParallelAnimationGroup * ctr_qt_core_ffi_dynamic_cast_QParallelAnimationGroup_ptr1(QAbstractAnimation * ptr) {
  return dynamic_cast< QParallelAnimationGroup * >(ptr);
}


RITUAL_EXPORT QParallelAnimationGroup * ctr_qt_core_ffi_static_cast_QParallelAnimationGroup_ptr2(QObject * ptr) {
  return static_cast< QParallelAnimationGroup * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr28(QParallelAnimationGroup * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QParallelAnimationGroup * ctr_qt_core_ffi_dynamic_cast_QParallelAnimationGroup_ptr2(QObject * ptr) {
  return dynamic_cast< QParallelAnimationGroup * >(ptr);
}


RITUAL_EXPORT QPauseAnimation * ctr_qt_core_ffi_static_cast_QPauseAnimation_ptr(QAbstractAnimation * ptr) {
  return static_cast< QPauseAnimation * >(ptr);
}


RITUAL_EXPORT QAbstractAnimation * ctr_qt_core_ffi_static_cast_QAbstractAnimation_ptr3(QPauseAnimation * ptr) {
  return static_cast< QAbstractAnimation * >(ptr);
}


RITUAL_EXPORT QPauseAnimation * ctr_qt_core_ffi_dynamic_cast_QPauseAnimation_ptr(QAbstractAnimation * ptr) {
  return dynamic_cast< QPauseAnimation * >(ptr);
}


RITUAL_EXPORT QPauseAnimation * ctr_qt_core_ffi_static_cast_QPauseAnimation_ptr1(QObject * ptr) {
  return static_cast< QPauseAnimation * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr29(QPauseAnimation * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QPauseAnimation * ctr_qt_core_ffi_dynamic_cast_QPauseAnimation_ptr1(QObject * ptr) {
  return dynamic_cast< QPauseAnimation * >(ptr);
}


RITUAL_EXPORT QPluginLoader * ctr_qt_core_ffi_static_cast_QPluginLoader_ptr(QObject * ptr) {
  return static_cast< QPluginLoader * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr30(QPluginLoader * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QPluginLoader * ctr_qt_core_ffi_dynamic_cast_QPluginLoader_ptr(QObject * ptr) {
  return dynamic_cast< QPluginLoader * >(ptr);
}


RITUAL_EXPORT QProcess * ctr_qt_core_ffi_static_cast_QProcess_ptr(QIODevice * ptr) {
  return static_cast< QProcess * >(ptr);
}


RITUAL_EXPORT QIODevice * ctr_qt_core_ffi_static_cast_QIODevice_ptr5(QProcess * ptr) {
  return static_cast< QIODevice * >(ptr);
}


RITUAL_EXPORT QProcess * ctr_qt_core_ffi_dynamic_cast_QProcess_ptr(QIODevice * ptr) {
  return dynamic_cast< QProcess * >(ptr);
}


RITUAL_EXPORT QProcess * ctr_qt_core_ffi_static_cast_QProcess_ptr1(QObject * ptr) {
  return static_cast< QProcess * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr31(QProcess * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QProcess * ctr_qt_core_ffi_dynamic_cast_QProcess_ptr1(QObject * ptr) {
  return dynamic_cast< QProcess * >(ptr);
}


RITUAL_EXPORT QProcess * ctr_qt_core_ffi_static_cast_QProcess_ptr2(QIODeviceBase * ptr) {
  return static_cast< QProcess * >(ptr);
}


RITUAL_EXPORT QIODeviceBase * ctr_qt_core_ffi_static_cast_QIODeviceBase_ptr7(QProcess * ptr) {
  return static_cast< QIODeviceBase * >(ptr);
}


RITUAL_EXPORT QVariantAnimation * ctr_qt_core_ffi_static_cast_QVariantAnimation_ptr(QAbstractAnimation * ptr) {
  return static_cast< QVariantAnimation * >(ptr);
}


RITUAL_EXPORT QAbstractAnimation * ctr_qt_core_ffi_static_cast_QAbstractAnimation_ptr4(QVariantAnimation * ptr) {
  return static_cast< QAbstractAnimation * >(ptr);
}


RITUAL_EXPORT QVariantAnimation * ctr_qt_core_ffi_dynamic_cast_QVariantAnimation_ptr(QAbstractAnimation * ptr) {
  return dynamic_cast< QVariantAnimation * >(ptr);
}


RITUAL_EXPORT QVariantAnimation * ctr_qt_core_ffi_static_cast_QVariantAnimation_ptr1(QObject * ptr) {
  return static_cast< QVariantAnimation * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr32(QVariantAnimation * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QVariantAnimation * ctr_qt_core_ffi_dynamic_cast_QVariantAnimation_ptr1(QObject * ptr) {
  return dynamic_cast< QVariantAnimation * >(ptr);
}


RITUAL_EXPORT QPropertyAnimation * ctr_qt_core_ffi_static_cast_QPropertyAnimation_ptr(QVariantAnimation * ptr) {
  return static_cast< QPropertyAnimation * >(ptr);
}


RITUAL_EXPORT QVariantAnimation * ctr_qt_core_ffi_static_cast_QVariantAnimation_ptr2(QPropertyAnimation * ptr) {
  return static_cast< QVariantAnimation * >(ptr);
}


RITUAL_EXPORT QPropertyAnimation * ctr_qt_core_ffi_dynamic_cast_QPropertyAnimation_ptr(QVariantAnimation * ptr) {
  return dynamic_cast< QPropertyAnimation * >(ptr);
}


RITUAL_EXPORT QPropertyAnimation * ctr_qt_core_ffi_static_cast_QPropertyAnimation_ptr1(QAbstractAnimation * ptr) {
  return static_cast< QPropertyAnimation * >(ptr);
}


RITUAL_EXPORT QAbstractAnimation * ctr_qt_core_ffi_static_cast_QAbstractAnimation_ptr5(QPropertyAnimation * ptr) {
  return static_cast< QAbstractAnimation * >(ptr);
}


RITUAL_EXPORT QPropertyAnimation * ctr_qt_core_ffi_dynamic_cast_QPropertyAnimation_ptr1(QAbstractAnimation * ptr) {
  return dynamic_cast< QPropertyAnimation * >(ptr);
}


RITUAL_EXPORT QPropertyAnimation * ctr_qt_core_ffi_static_cast_QPropertyAnimation_ptr2(QObject * ptr) {
  return static_cast< QPropertyAnimation * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr33(QPropertyAnimation * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QPropertyAnimation * ctr_qt_core_ffi_dynamic_cast_QPropertyAnimation_ptr2(QObject * ptr) {
  return dynamic_cast< QPropertyAnimation * >(ptr);
}


RITUAL_EXPORT QRandomGenerator64 * ctr_qt_core_ffi_static_cast_QRandomGenerator64_ptr(QRandomGenerator * ptr) {
  return static_cast< QRandomGenerator64 * >(ptr);
}


RITUAL_EXPORT QRandomGenerator * ctr_qt_core_ffi_static_cast_QRandomGenerator_ptr(QRandomGenerator64 * ptr) {
  return static_cast< QRandomGenerator * >(ptr);
}


RITUAL_EXPORT QRangeModel * ctr_qt_core_ffi_static_cast_QRangeModel_ptr(QAbstractItemModel * ptr) {
  return static_cast< QRangeModel * >(ptr);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_core_ffi_static_cast_QAbstractItemModel_ptr6(QRangeModel * ptr) {
  return static_cast< QAbstractItemModel * >(ptr);
}


RITUAL_EXPORT QRangeModel * ctr_qt_core_ffi_dynamic_cast_QRangeModel_ptr(QAbstractItemModel * ptr) {
  return dynamic_cast< QRangeModel * >(ptr);
}


RITUAL_EXPORT QRangeModel * ctr_qt_core_ffi_static_cast_QRangeModel_ptr1(QObject * ptr) {
  return static_cast< QRangeModel * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr34(QRangeModel * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QRangeModel * ctr_qt_core_ffi_dynamic_cast_QRangeModel_ptr1(QObject * ptr) {
  return dynamic_cast< QRangeModel * >(ptr);
}


RITUAL_EXPORT QSaveFile * ctr_qt_core_ffi_static_cast_QSaveFile_ptr(QFileDevice * ptr) {
  return static_cast< QSaveFile * >(ptr);
}


RITUAL_EXPORT QFileDevice * ctr_qt_core_ffi_static_cast_QFileDevice_ptr4(QSaveFile * ptr) {
  return static_cast< QFileDevice * >(ptr);
}


RITUAL_EXPORT QSaveFile * ctr_qt_core_ffi_dynamic_cast_QSaveFile_ptr(QFileDevice * ptr) {
  return dynamic_cast< QSaveFile * >(ptr);
}


RITUAL_EXPORT QSaveFile * ctr_qt_core_ffi_static_cast_QSaveFile_ptr1(QIODevice * ptr) {
  return static_cast< QSaveFile * >(ptr);
}


RITUAL_EXPORT QIODevice * ctr_qt_core_ffi_static_cast_QIODevice_ptr6(QSaveFile * ptr) {
  return static_cast< QIODevice * >(ptr);
}


RITUAL_EXPORT QSaveFile * ctr_qt_core_ffi_dynamic_cast_QSaveFile_ptr1(QIODevice * ptr) {
  return dynamic_cast< QSaveFile * >(ptr);
}


RITUAL_EXPORT QSaveFile * ctr_qt_core_ffi_static_cast_QSaveFile_ptr2(QObject * ptr) {
  return static_cast< QSaveFile * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr35(QSaveFile * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QSaveFile * ctr_qt_core_ffi_dynamic_cast_QSaveFile_ptr2(QObject * ptr) {
  return dynamic_cast< QSaveFile * >(ptr);
}


RITUAL_EXPORT QSaveFile * ctr_qt_core_ffi_static_cast_QSaveFile_ptr3(QIODeviceBase * ptr) {
  return static_cast< QSaveFile * >(ptr);
}


RITUAL_EXPORT QIODeviceBase * ctr_qt_core_ffi_static_cast_QIODeviceBase_ptr8(QSaveFile * ptr) {
  return static_cast< QIODeviceBase * >(ptr);
}


RITUAL_EXPORT QSequentialAnimationGroup * ctr_qt_core_ffi_static_cast_QSequentialAnimationGroup_ptr(QAnimationGroup * ptr) {
  return static_cast< QSequentialAnimationGroup * >(ptr);
}


RITUAL_EXPORT QAnimationGroup * ctr_qt_core_ffi_static_cast_QAnimationGroup_ptr3(QSequentialAnimationGroup * ptr) {
  return static_cast< QAnimationGroup * >(ptr);
}


RITUAL_EXPORT QSequentialAnimationGroup * ctr_qt_core_ffi_dynamic_cast_QSequentialAnimationGroup_ptr(QAnimationGroup * ptr) {
  return dynamic_cast< QSequentialAnimationGroup * >(ptr);
}


RITUAL_EXPORT QSequentialAnimationGroup * ctr_qt_core_ffi_static_cast_QSequentialAnimationGroup_ptr1(QAbstractAnimation * ptr) {
  return static_cast< QSequentialAnimationGroup * >(ptr);
}


RITUAL_EXPORT QAbstractAnimation * ctr_qt_core_ffi_static_cast_QAbstractAnimation_ptr6(QSequentialAnimationGroup * ptr) {
  return static_cast< QAbstractAnimation * >(ptr);
}


RITUAL_EXPORT QSequentialAnimationGroup * ctr_qt_core_ffi_dynamic_cast_QSequentialAnimationGroup_ptr1(QAbstractAnimation * ptr) {
  return dynamic_cast< QSequentialAnimationGroup * >(ptr);
}


RITUAL_EXPORT QSequentialAnimationGroup * ctr_qt_core_ffi_static_cast_QSequentialAnimationGroup_ptr2(QObject * ptr) {
  return static_cast< QSequentialAnimationGroup * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr36(QSequentialAnimationGroup * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QSequentialAnimationGroup * ctr_qt_core_ffi_dynamic_cast_QSequentialAnimationGroup_ptr2(QObject * ptr) {
  return dynamic_cast< QSequentialAnimationGroup * >(ptr);
}


RITUAL_EXPORT QSequentialIterator * ctr_qt_core_ffi_static_cast_QSequentialIterator_ptr(QIterator< QMetaSequence > * ptr) {
  return static_cast< QSequentialIterator * >(ptr);
}


RITUAL_EXPORT QIterator< QMetaSequence > * ctr_qt_core_ffi_static_cast_QIterator_QMetaSequence_ptr(QSequentialIterator * ptr) {
  return static_cast< QIterator< QMetaSequence > * >(ptr);
}


RITUAL_EXPORT QSequentialConstIterator * ctr_qt_core_ffi_static_cast_QSequentialConstIterator_ptr(QConstIterator< QMetaSequence > * ptr) {
  return static_cast< QSequentialConstIterator * >(ptr);
}


RITUAL_EXPORT QConstIterator< QMetaSequence > * ctr_qt_core_ffi_static_cast_QConstIterator_QMetaSequence_ptr(QSequentialConstIterator * ptr) {
  return static_cast< QConstIterator< QMetaSequence > * >(ptr);
}


RITUAL_EXPORT QSequentialIterable * ctr_qt_core_ffi_static_cast_QSequentialIterable_ptr(QIterable< QMetaSequence > * ptr) {
  return static_cast< QSequentialIterable * >(ptr);
}


RITUAL_EXPORT QIterable< QMetaSequence > * ctr_qt_core_ffi_static_cast_QIterable_QMetaSequence_ptr(QSequentialIterable * ptr) {
  return static_cast< QIterable< QMetaSequence > * >(ptr);
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_static_cast_QSettings_ptr(QObject * ptr) {
  return static_cast< QSettings * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr37(QSettings * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_dynamic_cast_QSettings_ptr(QObject * ptr) {
  return dynamic_cast< QSettings * >(ptr);
}


RITUAL_EXPORT QSharedMemory * ctr_qt_core_ffi_static_cast_QSharedMemory_ptr(QObject * ptr) {
  return static_cast< QSharedMemory * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr38(QSharedMemory * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QSharedMemory * ctr_qt_core_ffi_dynamic_cast_QSharedMemory_ptr(QObject * ptr) {
  return dynamic_cast< QSharedMemory * >(ptr);
}


RITUAL_EXPORT QSignalMapper * ctr_qt_core_ffi_static_cast_QSignalMapper_ptr(QObject * ptr) {
  return static_cast< QSignalMapper * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr39(QSignalMapper * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QSignalMapper * ctr_qt_core_ffi_dynamic_cast_QSignalMapper_ptr(QObject * ptr) {
  return dynamic_cast< QSignalMapper * >(ptr);
}


RITUAL_EXPORT QSocketNotifier * ctr_qt_core_ffi_static_cast_QSocketNotifier_ptr(QObject * ptr) {
  return static_cast< QSocketNotifier * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr40(QSocketNotifier * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QSocketNotifier * ctr_qt_core_ffi_dynamic_cast_QSocketNotifier_ptr(QObject * ptr) {
  return dynamic_cast< QSocketNotifier * >(ptr);
}


RITUAL_EXPORT QSortFilterProxyModel * ctr_qt_core_ffi_static_cast_QSortFilterProxyModel_ptr(QAbstractProxyModel * ptr) {
  return static_cast< QSortFilterProxyModel * >(ptr);
}


RITUAL_EXPORT QAbstractProxyModel * ctr_qt_core_ffi_static_cast_QAbstractProxyModel_ptr3(QSortFilterProxyModel * ptr) {
  return static_cast< QAbstractProxyModel * >(ptr);
}


RITUAL_EXPORT QSortFilterProxyModel * ctr_qt_core_ffi_dynamic_cast_QSortFilterProxyModel_ptr(QAbstractProxyModel * ptr) {
  return dynamic_cast< QSortFilterProxyModel * >(ptr);
}


RITUAL_EXPORT QSortFilterProxyModel * ctr_qt_core_ffi_static_cast_QSortFilterProxyModel_ptr1(QAbstractItemModel * ptr) {
  return static_cast< QSortFilterProxyModel * >(ptr);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_core_ffi_static_cast_QAbstractItemModel_ptr7(QSortFilterProxyModel * ptr) {
  return static_cast< QAbstractItemModel * >(ptr);
}


RITUAL_EXPORT QSortFilterProxyModel * ctr_qt_core_ffi_dynamic_cast_QSortFilterProxyModel_ptr1(QAbstractItemModel * ptr) {
  return dynamic_cast< QSortFilterProxyModel * >(ptr);
}


RITUAL_EXPORT QSortFilterProxyModel * ctr_qt_core_ffi_static_cast_QSortFilterProxyModel_ptr2(QObject * ptr) {
  return static_cast< QSortFilterProxyModel * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr41(QSortFilterProxyModel * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QSortFilterProxyModel * ctr_qt_core_ffi_dynamic_cast_QSortFilterProxyModel_ptr2(QObject * ptr) {
  return dynamic_cast< QSortFilterProxyModel * >(ptr);
}


RITUAL_EXPORT QStringListModel * ctr_qt_core_ffi_static_cast_QStringListModel_ptr(QAbstractListModel * ptr) {
  return static_cast< QStringListModel * >(ptr);
}


RITUAL_EXPORT QAbstractListModel * ctr_qt_core_ffi_static_cast_QAbstractListModel_ptr2(QStringListModel * ptr) {
  return static_cast< QAbstractListModel * >(ptr);
}


RITUAL_EXPORT QStringListModel * ctr_qt_core_ffi_dynamic_cast_QStringListModel_ptr(QAbstractListModel * ptr) {
  return dynamic_cast< QStringListModel * >(ptr);
}


RITUAL_EXPORT QStringListModel * ctr_qt_core_ffi_static_cast_QStringListModel_ptr1(QAbstractItemModel * ptr) {
  return static_cast< QStringListModel * >(ptr);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_core_ffi_static_cast_QAbstractItemModel_ptr8(QStringListModel * ptr) {
  return static_cast< QAbstractItemModel * >(ptr);
}


RITUAL_EXPORT QStringListModel * ctr_qt_core_ffi_dynamic_cast_QStringListModel_ptr1(QAbstractItemModel * ptr) {
  return dynamic_cast< QStringListModel * >(ptr);
}


RITUAL_EXPORT QStringListModel * ctr_qt_core_ffi_static_cast_QStringListModel_ptr2(QObject * ptr) {
  return static_cast< QStringListModel * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr42(QStringListModel * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QStringListModel * ctr_qt_core_ffi_dynamic_cast_QStringListModel_ptr2(QObject * ptr) {
  return dynamic_cast< QStringListModel * >(ptr);
}


RITUAL_EXPORT QTemporaryFile * ctr_qt_core_ffi_static_cast_QTemporaryFile_ptr(QFile * ptr) {
  return static_cast< QTemporaryFile * >(ptr);
}


RITUAL_EXPORT QFile * ctr_qt_core_ffi_static_cast_QFile_ptr4(QTemporaryFile * ptr) {
  return static_cast< QFile * >(ptr);
}


RITUAL_EXPORT QTemporaryFile * ctr_qt_core_ffi_dynamic_cast_QTemporaryFile_ptr(QFile * ptr) {
  return dynamic_cast< QTemporaryFile * >(ptr);
}


RITUAL_EXPORT QTemporaryFile * ctr_qt_core_ffi_static_cast_QTemporaryFile_ptr1(QFileDevice * ptr) {
  return static_cast< QTemporaryFile * >(ptr);
}


RITUAL_EXPORT QFileDevice * ctr_qt_core_ffi_static_cast_QFileDevice_ptr5(QTemporaryFile * ptr) {
  return static_cast< QFileDevice * >(ptr);
}


RITUAL_EXPORT QTemporaryFile * ctr_qt_core_ffi_dynamic_cast_QTemporaryFile_ptr1(QFileDevice * ptr) {
  return dynamic_cast< QTemporaryFile * >(ptr);
}


RITUAL_EXPORT QTemporaryFile * ctr_qt_core_ffi_static_cast_QTemporaryFile_ptr2(QIODevice * ptr) {
  return static_cast< QTemporaryFile * >(ptr);
}


RITUAL_EXPORT QIODevice * ctr_qt_core_ffi_static_cast_QIODevice_ptr7(QTemporaryFile * ptr) {
  return static_cast< QIODevice * >(ptr);
}


RITUAL_EXPORT QTemporaryFile * ctr_qt_core_ffi_dynamic_cast_QTemporaryFile_ptr2(QIODevice * ptr) {
  return dynamic_cast< QTemporaryFile * >(ptr);
}


RITUAL_EXPORT QTemporaryFile * ctr_qt_core_ffi_static_cast_QTemporaryFile_ptr3(QObject * ptr) {
  return static_cast< QTemporaryFile * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr43(QTemporaryFile * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTemporaryFile * ctr_qt_core_ffi_dynamic_cast_QTemporaryFile_ptr3(QObject * ptr) {
  return dynamic_cast< QTemporaryFile * >(ptr);
}


RITUAL_EXPORT QTemporaryFile * ctr_qt_core_ffi_static_cast_QTemporaryFile_ptr4(QIODeviceBase * ptr) {
  return static_cast< QTemporaryFile * >(ptr);
}


RITUAL_EXPORT QIODeviceBase * ctr_qt_core_ffi_static_cast_QIODeviceBase_ptr9(QTemporaryFile * ptr) {
  return static_cast< QIODeviceBase * >(ptr);
}


RITUAL_EXPORT QTimeLine * ctr_qt_core_ffi_static_cast_QTimeLine_ptr(QObject * ptr) {
  return static_cast< QTimeLine * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr44(QTimeLine * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTimeLine * ctr_qt_core_ffi_dynamic_cast_QTimeLine_ptr(QObject * ptr) {
  return dynamic_cast< QTimeLine * >(ptr);
}


RITUAL_EXPORT QTranslator * ctr_qt_core_ffi_static_cast_QTranslator_ptr(QObject * ptr) {
  return static_cast< QTranslator * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr45(QTranslator * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTranslator * ctr_qt_core_ffi_dynamic_cast_QTranslator_ptr(QObject * ptr) {
  return dynamic_cast< QTranslator * >(ptr);
}


RITUAL_EXPORT QTransposeProxyModel * ctr_qt_core_ffi_static_cast_QTransposeProxyModel_ptr(QAbstractProxyModel * ptr) {
  return static_cast< QTransposeProxyModel * >(ptr);
}


RITUAL_EXPORT QAbstractProxyModel * ctr_qt_core_ffi_static_cast_QAbstractProxyModel_ptr4(QTransposeProxyModel * ptr) {
  return static_cast< QAbstractProxyModel * >(ptr);
}


RITUAL_EXPORT QTransposeProxyModel * ctr_qt_core_ffi_dynamic_cast_QTransposeProxyModel_ptr(QAbstractProxyModel * ptr) {
  return dynamic_cast< QTransposeProxyModel * >(ptr);
}


RITUAL_EXPORT QTransposeProxyModel * ctr_qt_core_ffi_static_cast_QTransposeProxyModel_ptr1(QAbstractItemModel * ptr) {
  return static_cast< QTransposeProxyModel * >(ptr);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_core_ffi_static_cast_QAbstractItemModel_ptr9(QTransposeProxyModel * ptr) {
  return static_cast< QAbstractItemModel * >(ptr);
}


RITUAL_EXPORT QTransposeProxyModel * ctr_qt_core_ffi_dynamic_cast_QTransposeProxyModel_ptr1(QAbstractItemModel * ptr) {
  return dynamic_cast< QTransposeProxyModel * >(ptr);
}


RITUAL_EXPORT QTransposeProxyModel * ctr_qt_core_ffi_static_cast_QTransposeProxyModel_ptr2(QObject * ptr) {
  return static_cast< QTransposeProxyModel * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr46(QTransposeProxyModel * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT QTransposeProxyModel * ctr_qt_core_ffi_dynamic_cast_QTransposeProxyModel_ptr2(QObject * ptr) {
  return dynamic_cast< QTransposeProxyModel * >(ptr);
}


RITUAL_EXPORT QXmlStreamAttributes * ctr_qt_core_ffi_static_cast_QXmlStreamAttributes_ptr(QList< QXmlStreamAttribute > * ptr) {
  return static_cast< QXmlStreamAttributes * >(ptr);
}


RITUAL_EXPORT QList< QXmlStreamAttribute > * ctr_qt_core_ffi_static_cast_QList_QXmlStreamAttribute_ptr(QXmlStreamAttributes * ptr) {
  return static_cast< QList< QXmlStreamAttribute > * >(ptr);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_metaObject(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref(QObject * parent, void (*callback)(void *, QModelIndex const *, QModelIndex const *, QList< int > const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_set(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * this_ptr, void (*callback)(void *, QModelIndex const *, QModelIndex const *, QList< int > const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_slot_(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * this_ptr, QModelIndex const * arg0, QModelIndex const * arg1, QList< int > const * arg2) {
  this_ptr->slot_(*arg0, *arg1, *arg2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_metaObject(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref() {
  return new ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_emit_(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * this_ptr, QModelIndex const * arg0, QModelIndex const * arg1, QList< int > const * arg2) {
  this_ptr->emit_(*arg0, *arg1, *arg2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_int_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_int_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_int_metaObject(ctr_qt_core_ffi_slot_wrapper_int_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_int_qt_metacast(ctr_qt_core_ffi_slot_wrapper_int_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_int_qt_metacall(ctr_qt_core_ffi_slot_wrapper_int_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_int_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_int_int * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_int_ctr_qt_core_ffi_slot_wrapper_int_int(QObject * parent, void (*callback)(void *, int, int), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_int_int(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_int_set(ctr_qt_core_ffi_slot_wrapper_int_int * this_ptr, void (*callback)(void *, int, int), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_int_slot_(ctr_qt_core_ffi_slot_wrapper_int_int * this_ptr, int arg0, int arg1) {
  this_ptr->slot_(arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_int_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_int_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_int_metaObject(ctr_qt_core_ffi_signal_wrapper_int_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_int_qt_metacast(ctr_qt_core_ffi_signal_wrapper_int_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_int_qt_metacall(ctr_qt_core_ffi_signal_wrapper_int_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_int_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_int_int * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_int_ctr_qt_core_ffi_signal_wrapper_int_int() {
  return new ctr_qt_core_ffi_signal_wrapper_int_int();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_int_emit_(ctr_qt_core_ffi_signal_wrapper_int_int * this_ptr, int arg0, int arg1) {
  this_ptr->emit_(arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_metaObject(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int(QObject * parent, void (*callback)(void *, QModelIndex const *, int, int), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_set(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int * this_ptr, void (*callback)(void *, QModelIndex const *, int, int), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_slot_(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int * this_ptr, QModelIndex const * arg0, int arg1, int arg2) {
  this_ptr->slot_(*arg0, arg1, arg2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_metaObject(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int() {
  return new ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_emit_(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int * this_ptr, QModelIndex const * arg0, int arg1, int arg2) {
  this_ptr->emit_(*arg0, arg1, arg2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QString_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QString_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QString_const_ref_metaObject(ctr_qt_core_ffi_slot_wrapper_QString_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QString_const_ref_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QString_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QString_const_ref_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QString_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QString_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QString_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QString_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QString_const_ref_ctr_qt_core_ffi_slot_wrapper_QString_const_ref(QObject * parent, void (*callback)(void *, QString const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QString_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QString_const_ref_set(ctr_qt_core_ffi_slot_wrapper_QString_const_ref * this_ptr, void (*callback)(void *, QString const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QString_const_ref_slot_(ctr_qt_core_ffi_slot_wrapper_QString_const_ref * this_ptr, QString const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QString_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QString_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QString_const_ref_metaObject(ctr_qt_core_ffi_signal_wrapper_QString_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QString_const_ref_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QString_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QString_const_ref_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QString_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QString_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QString_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QString_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QString_const_ref_ctr_qt_core_ffi_signal_wrapper_QString_const_ref() {
  return new ctr_qt_core_ffi_signal_wrapper_QString_const_ref();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QString_const_ref_emit_(ctr_qt_core_ffi_signal_wrapper_QString_const_ref * this_ptr, QString const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState_metaObject(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState(QObject * parent, void (*callback)(void *, QProcess::ProcessState), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState_set(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState * this_ptr, void (*callback)(void *, QProcess::ProcessState), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState_slot_(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState * this_ptr, QProcess::ProcessState arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState_metaObject(ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState() {
  return new ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState_emit_(ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState * this_ptr, QProcess::ProcessState arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref_metaObject(ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref_ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref(QObject * parent, void (*callback)(void *, QVariant const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref_set(ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref * this_ptr, void (*callback)(void *, QVariant const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref_slot_(ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref * this_ptr, QVariant const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref_metaObject(ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref_ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref() {
  return new ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref_emit_(ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref * this_ptr, QVariant const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_bool_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_bool::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_bool_metaObject(ctr_qt_core_ffi_slot_wrapper_bool const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_bool_qt_metacast(ctr_qt_core_ffi_slot_wrapper_bool * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_bool_qt_metacall(ctr_qt_core_ffi_slot_wrapper_bool * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_bool_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_bool::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_bool * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_bool_ctr_qt_core_ffi_slot_wrapper_bool(QObject * parent, void (*callback)(void *, bool), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_bool(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_bool_set(ctr_qt_core_ffi_slot_wrapper_bool * this_ptr, void (*callback)(void *, bool), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_bool_slot_(ctr_qt_core_ffi_slot_wrapper_bool * this_ptr, bool arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_bool_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_bool::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_bool_metaObject(ctr_qt_core_ffi_signal_wrapper_bool const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_bool_qt_metacast(ctr_qt_core_ffi_signal_wrapper_bool * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_bool_qt_metacall(ctr_qt_core_ffi_signal_wrapper_bool * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_bool_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_bool::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_bool * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_bool_ctr_qt_core_ffi_signal_wrapper_bool() {
  return new ctr_qt_core_ffi_signal_wrapper_bool();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_bool_emit_(ctr_qt_core_ffi_signal_wrapper_bool * this_ptr, bool arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_double_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_double::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_double_metaObject(ctr_qt_core_ffi_slot_wrapper_double const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_double_qt_metacast(ctr_qt_core_ffi_slot_wrapper_double * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_double_qt_metacall(ctr_qt_core_ffi_slot_wrapper_double * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_double_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_double::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_double * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_double_ctr_qt_core_ffi_slot_wrapper_double(QObject * parent, void (*callback)(void *, double), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_double(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_double_set(ctr_qt_core_ffi_slot_wrapper_double * this_ptr, void (*callback)(void *, double), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_double_slot_(ctr_qt_core_ffi_slot_wrapper_double * this_ptr, double arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_double_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_double::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_double_metaObject(ctr_qt_core_ffi_signal_wrapper_double const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_double_qt_metacast(ctr_qt_core_ffi_signal_wrapper_double * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_double_qt_metacall(ctr_qt_core_ffi_signal_wrapper_double * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_double_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_double::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_double * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_double_ctr_qt_core_ffi_signal_wrapper_double() {
  return new ctr_qt_core_ffi_signal_wrapper_double();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_double_emit_(ctr_qt_core_ffi_signal_wrapper_double * this_ptr, double arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr_metaObject(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr(QObject * parent, void (*callback)(void *, QAbstractAnimation *), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr_set(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr * this_ptr, void (*callback)(void *, QAbstractAnimation *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr_slot_(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr * this_ptr, QAbstractAnimation * arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr_metaObject(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr() {
  return new ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr_emit_(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr * this_ptr, QAbstractAnimation * arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_metaObject(ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_slot_(ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor * this_ptr, QSocketDescriptor const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_metaObject(ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor() {
  return new ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_emit_(ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor * this_ptr, QSocketDescriptor const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError_metaObject(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError(QObject * parent, void (*callback)(void *, QProcess::ProcessError), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError_set(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError * this_ptr, void (*callback)(void *, QProcess::ProcessError), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError_slot_(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError * this_ptr, QProcess::ProcessError arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError_metaObject(ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError() {
  return new ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError_emit_(ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError * this_ptr, QProcess::ProcessError arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction_metaObject(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction(QObject * parent, void (*callback)(void *, QAbstractAnimation::Direction), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction_set(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction * this_ptr, void (*callback)(void *, QAbstractAnimation::Direction), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction_slot_(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction * this_ptr, QAbstractAnimation::Direction arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction_metaObject(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction() {
  return new ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction_emit_(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction * this_ptr, QAbstractAnimation::Direction arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity_metaObject(ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity_qt_metacast(ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity_qt_metacall(ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity_ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity(QObject * parent, void (*callback)(void *, Qt::CaseSensitivity), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity_set(ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity * this_ptr, void (*callback)(void *, Qt::CaseSensitivity), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity_slot_(ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity * this_ptr, Qt::CaseSensitivity arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity_metaObject(ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity_qt_metacast(ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity_qt_metacall(ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity_ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity() {
  return new ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity_emit_(ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity * this_ptr, Qt::CaseSensitivity arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr_metaObject(ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr_ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr(QObject * parent, void (*callback)(void *, QAbstractItemModel *), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr_set(ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr * this_ptr, void (*callback)(void *, QAbstractItemModel *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr_slot_(ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr * this_ptr, QAbstractItemModel * arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr_metaObject(ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr_ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr() {
  return new ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr_emit_(ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr * this_ptr, QAbstractItemModel * arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_metaObject(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State(QObject * parent, void (*callback)(void *, QAbstractAnimation::State, QAbstractAnimation::State), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_set(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * this_ptr, void (*callback)(void *, QAbstractAnimation::State, QAbstractAnimation::State), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_slot_(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * this_ptr, QAbstractAnimation::State arg0, QAbstractAnimation::State arg1) {
  this_ptr->slot_(arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_metaObject(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State() {
  return new ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_emit_(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * this_ptr, QAbstractAnimation::State arg0, QAbstractAnimation::State arg1) {
  this_ptr->emit_(arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_Qt_Orientation::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_metaObject(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_qt_metacast(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_qt_metacall(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_Qt_Orientation * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation(QObject * parent, void (*callback)(void *, Qt::Orientation), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_Qt_Orientation(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_set(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation * this_ptr, void (*callback)(void *, Qt::Orientation), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_slot_(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation * this_ptr, Qt::Orientation arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_Qt_Orientation::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_metaObject(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_qt_metacast(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_qt_metacall(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_Qt_Orientation * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation() {
  return new ctr_qt_core_ffi_signal_wrapper_Qt_Orientation();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_emit_(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation * this_ptr, Qt::Orientation arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int_metaObject(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int_qt_metacast(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int_qt_metacall(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int(QObject * parent, void (*callback)(void *, Qt::Orientation, int, int), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int_set(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int * this_ptr, void (*callback)(void *, Qt::Orientation, int, int), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int_slot_(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int * this_ptr, Qt::Orientation arg0, int arg1, int arg2) {
  this_ptr->slot_(arg0, arg1, arg2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int_metaObject(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int_qt_metacast(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int_qt_metacall(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int() {
  return new ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int_emit_(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int * this_ptr, Qt::Orientation arg0, int arg1, int arg2) {
  this_ptr->emit_(arg0, arg1, arg2);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_metaObject(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref(QObject * parent, void (*callback)(void *, QList< QPersistentModelIndex > const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_set(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref * this_ptr, void (*callback)(void *, QList< QPersistentModelIndex > const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_slot_(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref * this_ptr, QList< QPersistentModelIndex > const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_metaObject(ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref() {
  return new ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_emit_(ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref * this_ptr, QList< QPersistentModelIndex > const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_metaObject(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_qt_metacast(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_qt_metacall(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int(QObject * parent, void (*callback)(void *, Qt::Orientation, int), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_set(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int * this_ptr, void (*callback)(void *, Qt::Orientation, int), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_slot_(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int * this_ptr, Qt::Orientation arg0, int arg1) {
  this_ptr->slot_(arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_metaObject(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_qt_metacast(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_qt_metacall(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int() {
  return new ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_emit_(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int * this_ptr, Qt::Orientation arg0, int arg1) {
  this_ptr->emit_(arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type_metaObject(ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type_slot_(ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type * this_ptr, QSocketDescriptor const * arg0, QSocketNotifier::Type arg1) {
  this_ptr->slot_(*arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type_metaObject(ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type() {
  return new ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type_emit_(ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type * this_ptr, QSocketDescriptor const * arg0, QSocketNotifier::Type arg1) {
  this_ptr->emit_(*arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_long_long_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_long_long::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_long_long_metaObject(ctr_qt_core_ffi_slot_wrapper_long_long const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_long_long_qt_metacast(ctr_qt_core_ffi_slot_wrapper_long_long * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_long_long_qt_metacall(ctr_qt_core_ffi_slot_wrapper_long_long * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_long_long_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_long_long::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_long_long * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_long_long_ctr_qt_core_ffi_slot_wrapper_long_long(QObject * parent, void (*callback)(void *, long long), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_long_long(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_long_long_set(ctr_qt_core_ffi_slot_wrapper_long_long * this_ptr, void (*callback)(void *, long long), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_long_long_slot_(ctr_qt_core_ffi_slot_wrapper_long_long * this_ptr, long long arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_long_long_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_long_long::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_long_long_metaObject(ctr_qt_core_ffi_signal_wrapper_long_long const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_long_long_qt_metacast(ctr_qt_core_ffi_signal_wrapper_long_long * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_long_long_qt_metacall(ctr_qt_core_ffi_signal_wrapper_long_long * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_long_long_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_long_long::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_long_long * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_long_long_ctr_qt_core_ffi_signal_wrapper_long_long() {
  return new ctr_qt_core_ffi_signal_wrapper_long_long();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_long_long_emit_(ctr_qt_core_ffi_signal_wrapper_long_long * this_ptr, long long arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QObject_ptr_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QObject_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QObject_ptr_metaObject(ctr_qt_core_ffi_slot_wrapper_QObject_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QObject_ptr_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QObject_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QObject_ptr_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QObject_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QObject_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QObject_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QObject_ptr * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QObject_ptr_ctr_qt_core_ffi_slot_wrapper_QObject_ptr(QObject * parent, void (*callback)(void *, QObject *), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QObject_ptr(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QObject_ptr_set(ctr_qt_core_ffi_slot_wrapper_QObject_ptr * this_ptr, void (*callback)(void *, QObject *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QObject_ptr_slot_(ctr_qt_core_ffi_slot_wrapper_QObject_ptr * this_ptr, QObject * arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QObject_ptr_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QObject_ptr::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QObject_ptr_metaObject(ctr_qt_core_ffi_signal_wrapper_QObject_ptr const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QObject_ptr_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QObject_ptr * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QObject_ptr_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QObject_ptr * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QObject_ptr_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QObject_ptr::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QObject_ptr * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QObject_ptr_ctr_qt_core_ffi_signal_wrapper_QObject_ptr() {
  return new ctr_qt_core_ffi_signal_wrapper_QObject_ptr();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QObject_ptr_emit_(ctr_qt_core_ffi_signal_wrapper_QObject_ptr * this_ptr, QObject * arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_metaObject(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref(QObject * parent, void (*callback)(void *, QItemSelection const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_set(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref * this_ptr, void (*callback)(void *, QItemSelection const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_slot_(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref * this_ptr, QItemSelection const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_metaObject(ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref() {
  return new ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_emit_(ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref * this_ptr, QItemSelection const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_metaObject(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref(QObject * parent, void (*callback)(void *, QModelIndex const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_set(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref * this_ptr, void (*callback)(void *, QModelIndex const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_slot_(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref * this_ptr, QModelIndex const * arg0) {
  this_ptr->slot_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_metaObject(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref() {
  return new ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_emit_(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref * this_ptr, QModelIndex const * arg0) {
  this_ptr->emit_(*arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_metaObject(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int(QObject * parent, void (*callback)(void *, QModelIndex const *, int, int, QModelIndex const *, int), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_set(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * this_ptr, void (*callback)(void *, QModelIndex const *, int, int, QModelIndex const *, int), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_slot_(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * this_ptr, QModelIndex const * arg0, int arg1, int arg2, QModelIndex const * arg3, int arg4) {
  this_ptr->slot_(*arg0, arg1, arg2, *arg3, arg4);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_metaObject(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int() {
  return new ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_emit_(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * this_ptr, QModelIndex const * arg0, int arg1, int arg2, QModelIndex const * arg3, int arg4) {
  this_ptr->emit_(*arg0, arg1, arg2, *arg3, arg4);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_long_long_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_int_long_long::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_long_long_metaObject(ctr_qt_core_ffi_slot_wrapper_int_long_long const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_long_long_qt_metacast(ctr_qt_core_ffi_slot_wrapper_int_long_long * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_long_long_qt_metacall(ctr_qt_core_ffi_slot_wrapper_int_long_long * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_long_long_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_int_long_long::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_int_long_long * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_long_long_ctr_qt_core_ffi_slot_wrapper_int_long_long(QObject * parent, void (*callback)(void *, int, long long), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_int_long_long(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_long_long_set(ctr_qt_core_ffi_slot_wrapper_int_long_long * this_ptr, void (*callback)(void *, int, long long), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_long_long_slot_(ctr_qt_core_ffi_slot_wrapper_int_long_long * this_ptr, int arg0, long long arg1) {
  this_ptr->slot_(arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_long_long_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_int_long_long::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_long_long_metaObject(ctr_qt_core_ffi_signal_wrapper_int_long_long const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_long_long_qt_metacast(ctr_qt_core_ffi_signal_wrapper_int_long_long * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_long_long_qt_metacall(ctr_qt_core_ffi_signal_wrapper_int_long_long * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_long_long_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_int_long_long::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_int_long_long * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_long_long_ctr_qt_core_ffi_signal_wrapper_int_long_long() {
  return new ctr_qt_core_ffi_signal_wrapper_int_long_long();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_long_long_emit_(ctr_qt_core_ffi_signal_wrapper_int_long_long * this_ptr, int arg0, long long arg1) {
  this_ptr->emit_(arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_metaObject(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref(QObject * parent, void (*callback)(void *, QItemSelection const *, QItemSelection const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_set(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * this_ptr, void (*callback)(void *, QItemSelection const *, QItemSelection const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_slot_(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * this_ptr, QItemSelection const * arg0, QItemSelection const * arg1) {
  this_ptr->slot_(*arg0, *arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_metaObject(ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref() {
  return new ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_emit_(ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * this_ptr, QItemSelection const * arg0, QItemSelection const * arg1) {
  this_ptr->emit_(*arg0, *arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_metaObject(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref(QObject * parent, void (*callback)(void *, QModelIndex const *, int, int, QModelIndex const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_set(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * this_ptr, void (*callback)(void *, QModelIndex const *, int, int, QModelIndex const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_slot_(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * this_ptr, QModelIndex const * arg0, int arg1, int arg2, QModelIndex const * arg3) {
  this_ptr->slot_(*arg0, arg1, arg2, *arg3);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_metaObject(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref() {
  return new ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_emit_(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * this_ptr, QModelIndex const * arg0, int arg1, int arg2, QModelIndex const * arg3) {
  this_ptr->emit_(*arg0, arg1, arg2, *arg3);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_metaObject(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int(QObject * parent, void (*callback)(void *, QModelIndex const *, int), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_set(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int * this_ptr, void (*callback)(void *, QModelIndex const *, int), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_slot_(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int * this_ptr, QModelIndex const * arg0, int arg1) {
  this_ptr->slot_(*arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_metaObject(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int() {
  return new ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_emit_(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int * this_ptr, QModelIndex const * arg0, int arg1) {
  this_ptr->emit_(*arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_metaObject(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref(QObject * parent, void (*callback)(void *, QModelIndex const *, QModelIndex const *), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_set(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * this_ptr, void (*callback)(void *, QModelIndex const *, QModelIndex const *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_slot_(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * this_ptr, QModelIndex const * arg0, QModelIndex const * arg1) {
  this_ptr->slot_(*arg0, *arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_metaObject(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref() {
  return new ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_emit_(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * this_ptr, QModelIndex const * arg0, QModelIndex const * arg1) {
  this_ptr->emit_(*arg0, *arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper__staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper__metaObject(ctr_qt_core_ffi_slot_wrapper_ const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper__qt_metacast(ctr_qt_core_ffi_slot_wrapper_ * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper__qt_metacall(ctr_qt_core_ffi_slot_wrapper_ * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper__tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_ * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper__ctr_qt_core_ffi_slot_wrapper_(QObject * parent, void (*callback)(void *), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper__set(ctr_qt_core_ffi_slot_wrapper_ * this_ptr, void (*callback)(void *), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper__slot_(ctr_qt_core_ffi_slot_wrapper_ * this_ptr) {
  this_ptr->slot_();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper__staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper__metaObject(ctr_qt_core_ffi_signal_wrapper_ const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper__qt_metacast(ctr_qt_core_ffi_signal_wrapper_ * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper__qt_metacall(ctr_qt_core_ffi_signal_wrapper_ * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper__tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_ * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper__ctr_qt_core_ffi_signal_wrapper_() {
  return new ctr_qt_core_ffi_signal_wrapper_();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper__emit_(ctr_qt_core_ffi_signal_wrapper_ * this_ptr) {
  this_ptr->emit_();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_metaObject(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint(QObject * parent, void (*callback)(void *, QList< QPersistentModelIndex > const *, QAbstractItemModel::LayoutChangeHint), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_set(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * this_ptr, void (*callback)(void *, QList< QPersistentModelIndex > const *, QAbstractItemModel::LayoutChangeHint), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_slot_(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * this_ptr, QList< QPersistentModelIndex > const * arg0, QAbstractItemModel::LayoutChangeHint arg1) {
  this_ptr->slot_(*arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_metaObject(ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint() {
  return new ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_emit_(ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * this_ptr, QList< QPersistentModelIndex > const * arg0, QAbstractItemModel::LayoutChangeHint arg1) {
  this_ptr->emit_(*arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus_metaObject(ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus_qt_metacast(ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus_qt_metacall(ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus_ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus(QObject * parent, void (*callback)(void *, int, QProcess::ExitStatus), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus_set(ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus * this_ptr, void (*callback)(void *, int, QProcess::ExitStatus), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus_slot_(ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus * this_ptr, int arg0, QProcess::ExitStatus arg1) {
  this_ptr->slot_(arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus_metaObject(ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus_qt_metacast(ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus_qt_metacall(ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus_ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus() {
  return new ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus_emit_(ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus * this_ptr, int arg0, QProcess::ExitStatus arg1) {
  this_ptr->emit_(arg0, arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_metaObject(ctr_qt_core_ffi_slot_wrapper_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_qt_metacast(ctr_qt_core_ffi_slot_wrapper_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_qt_metacall(ctr_qt_core_ffi_slot_wrapper_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_int * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_ctr_qt_core_ffi_slot_wrapper_int(QObject * parent, void (*callback)(void *, int), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_int(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_set(ctr_qt_core_ffi_slot_wrapper_int * this_ptr, void (*callback)(void *, int), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_slot_(ctr_qt_core_ffi_slot_wrapper_int * this_ptr, int arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_int::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_metaObject(ctr_qt_core_ffi_signal_wrapper_int const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_qt_metacast(ctr_qt_core_ffi_signal_wrapper_int * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_qt_metacall(ctr_qt_core_ffi_signal_wrapper_int * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_int::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_int * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_ctr_qt_core_ffi_signal_wrapper_int() {
  return new ctr_qt_core_ffi_signal_wrapper_int();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_emit_(ctr_qt_core_ffi_signal_wrapper_int * this_ptr, int arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QTimeLine_State_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QTimeLine_State::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QTimeLine_State_metaObject(ctr_qt_core_ffi_slot_wrapper_QTimeLine_State const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QTimeLine_State_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QTimeLine_State * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QTimeLine_State_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QTimeLine_State * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QTimeLine_State_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QTimeLine_State::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QTimeLine_State * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QTimeLine_State_ctr_qt_core_ffi_slot_wrapper_QTimeLine_State(QObject * parent, void (*callback)(void *, QTimeLine::State), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QTimeLine_State(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QTimeLine_State_set(ctr_qt_core_ffi_slot_wrapper_QTimeLine_State * this_ptr, void (*callback)(void *, QTimeLine::State), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QTimeLine_State_slot_(ctr_qt_core_ffi_slot_wrapper_QTimeLine_State * this_ptr, QTimeLine::State arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QTimeLine_State_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QTimeLine_State::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QTimeLine_State_metaObject(ctr_qt_core_ffi_signal_wrapper_QTimeLine_State const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QTimeLine_State_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QTimeLine_State * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QTimeLine_State_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QTimeLine_State * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QTimeLine_State_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QTimeLine_State::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QTimeLine_State * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QTimeLine_State_ctr_qt_core_ffi_signal_wrapper_QTimeLine_State() {
  return new ctr_qt_core_ffi_signal_wrapper_QTimeLine_State();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QTimeLine_State_emit_(ctr_qt_core_ffi_signal_wrapper_QTimeLine_State * this_ptr, QTimeLine::State arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_staticMetaObject() {
  return &ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_metaObject(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_qt_metacast(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_qt_metacall(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State * ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State(QObject * parent, void (*callback)(void *, QAbstractAnimation::State), void (*deleter)(void *), void * data) {
  return new ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State(parent, callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_set(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State * this_ptr, void (*callback)(void *, QAbstractAnimation::State), void (*deleter)(void *), void * data) {
  this_ptr->set(callback, deleter, data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_slot_(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State * this_ptr, QAbstractAnimation::State arg0) {
  this_ptr->slot_(arg0);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_staticMetaObject() {
  return &ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_metaObject(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_qt_metacast(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_qt_metacall(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_tr(char const * s, char const * c, int n) {
  return new QString(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State::tr(s, c, n));
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State * ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State() {
  return new ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State();
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_emit_(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State * this_ptr, QAbstractAnimation::State arg0) {
  this_ptr->emit_(arg0);
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_dctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_dctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_int_dctr_qt_core_ffi_slot_wrapper_int_int(ctr_qt_core_ffi_slot_wrapper_int_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_int_dctr_qt_core_ffi_signal_wrapper_int_int(ctr_qt_core_ffi_signal_wrapper_int_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_dctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_dctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QString_const_ref_dctr_qt_core_ffi_slot_wrapper_QString_const_ref(ctr_qt_core_ffi_slot_wrapper_QString_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QString_const_ref_dctr_qt_core_ffi_signal_wrapper_QString_const_ref(ctr_qt_core_ffi_signal_wrapper_QString_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState_dctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState_dctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState(ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref_dctr_qt_core_ffi_slot_wrapper_QVariant_const_ref(ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref_dctr_qt_core_ffi_signal_wrapper_QVariant_const_ref(ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_bool_dctr_qt_core_ffi_slot_wrapper_bool(ctr_qt_core_ffi_slot_wrapper_bool * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_bool_dctr_qt_core_ffi_signal_wrapper_bool(ctr_qt_core_ffi_signal_wrapper_bool * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_double_dctr_qt_core_ffi_slot_wrapper_double(ctr_qt_core_ffi_slot_wrapper_double * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_double_dctr_qt_core_ffi_signal_wrapper_double(ctr_qt_core_ffi_signal_wrapper_double * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr_dctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr_dctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_dctr_qt_core_ffi_slot_wrapper_QSocketDescriptor(ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_dctr_qt_core_ffi_signal_wrapper_QSocketDescriptor(ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError_dctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError_dctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError(ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction_dctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction_dctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity_dctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity(ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity_dctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity(ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr_dctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr(ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr_dctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr(ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_dctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_dctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_dctr_qt_core_ffi_slot_wrapper_Qt_Orientation(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_dctr_qt_core_ffi_signal_wrapper_Qt_Orientation(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int_dctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int_dctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_dctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_dctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref(ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_dctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_dctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type_dctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type(ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type_dctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type(ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_long_long_dctr_qt_core_ffi_slot_wrapper_long_long(ctr_qt_core_ffi_slot_wrapper_long_long * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_long_long_dctr_qt_core_ffi_signal_wrapper_long_long(ctr_qt_core_ffi_signal_wrapper_long_long * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QObject_ptr_dctr_qt_core_ffi_slot_wrapper_QObject_ptr(ctr_qt_core_ffi_slot_wrapper_QObject_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QObject_ptr_dctr_qt_core_ffi_signal_wrapper_QObject_ptr(ctr_qt_core_ffi_signal_wrapper_QObject_ptr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_dctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_dctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref(ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_dctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_dctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_dctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_dctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_long_long_dctr_qt_core_ffi_slot_wrapper_int_long_long(ctr_qt_core_ffi_slot_wrapper_int_long_long * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_long_long_dctr_qt_core_ffi_signal_wrapper_int_long_long(ctr_qt_core_ffi_signal_wrapper_int_long_long * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_dctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_dctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref(ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_dctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_dctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_dctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_dctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_dctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_dctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper__dctr_qt_core_ffi_slot_wrapper_(ctr_qt_core_ffi_slot_wrapper_ * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper__dctr_qt_core_ffi_signal_wrapper_(ctr_qt_core_ffi_signal_wrapper_ * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_dctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_dctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint(ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus_dctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus(ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus_dctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus(ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_int_dctr_qt_core_ffi_slot_wrapper_int(ctr_qt_core_ffi_slot_wrapper_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_int_dctr_qt_core_ffi_signal_wrapper_int(ctr_qt_core_ffi_signal_wrapper_int * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QTimeLine_State_dctr_qt_core_ffi_slot_wrapper_QTimeLine_State(ctr_qt_core_ffi_slot_wrapper_QTimeLine_State * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QTimeLine_State_dctr_qt_core_ffi_signal_wrapper_QTimeLine_State(ctr_qt_core_ffi_signal_wrapper_QTimeLine_State * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_dctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_dctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr94(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr95(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_QList_int_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_int_int * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_int_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_int_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr96(ctr_qt_core_ffi_slot_wrapper_int_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_int_int * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_int_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_int_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_int_int * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_int_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_int_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr97(ctr_qt_core_ffi_signal_wrapper_int_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_int_int * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_int_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_int_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr98(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr99(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QString_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QString_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QString_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr100(ctr_qt_core_ffi_slot_wrapper_QString_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QString_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QString_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QString_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QString_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QString_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QString_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr101(ctr_qt_core_ffi_signal_wrapper_QString_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QString_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QString_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QString_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr102(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessState * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr103(ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessState * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr104(ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QVariant_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr105(ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QVariant_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_bool * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_bool_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_bool * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr106(ctr_qt_core_ffi_slot_wrapper_bool * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_bool * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_bool_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_bool * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_bool * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_bool_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_bool * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr107(ctr_qt_core_ffi_signal_wrapper_bool * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_bool * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_bool_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_bool * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_double * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_double_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_double * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr108(ctr_qt_core_ffi_slot_wrapper_double * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_double * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_double_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_double * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_double * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_double_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_double * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr109(ctr_qt_core_ffi_signal_wrapper_double * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_double * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_double_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_double * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr110(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr111(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr112(ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr113(ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr114(ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QProcess_ProcessError * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr115(ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QProcess_ProcessError * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr116(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_Direction * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr117(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_Direction * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr118(ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_Qt_CaseSensitivity * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr119(ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_Qt_CaseSensitivity * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr120(ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QAbstractItemModel_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr121(ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QAbstractItemModel_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr122(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr123(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_QAbstractAnimation_State * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_Qt_Orientation * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_Qt_Orientation * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr124(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_Qt_Orientation * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_Qt_Orientation * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_Qt_Orientation * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_Qt_Orientation * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr125(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_Qt_Orientation * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_Qt_Orientation * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr126(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr127(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr128(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr129(ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr130(ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_Qt_Orientation_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr131(ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_Qt_Orientation_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr132(ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QSocketDescriptor_QSocketNotifier_Type * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr133(ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QSocketDescriptor_QSocketNotifier_Type * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_long_long * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_long_long_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_long_long * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr134(ctr_qt_core_ffi_slot_wrapper_long_long * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_long_long * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_long_long_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_long_long * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_long_long * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_long_long_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_long_long * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr135(ctr_qt_core_ffi_signal_wrapper_long_long * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_long_long * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_long_long_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_long_long * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QObject_ptr * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QObject_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QObject_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr136(ctr_qt_core_ffi_slot_wrapper_QObject_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QObject_ptr * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QObject_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QObject_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QObject_ptr * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QObject_ptr_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QObject_ptr * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr137(ctr_qt_core_ffi_signal_wrapper_QObject_ptr * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QObject_ptr * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QObject_ptr_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QObject_ptr * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr138(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr139(ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr140(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr141(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr142(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr143(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_int_long_long * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_int_long_long_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_int_long_long * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr144(ctr_qt_core_ffi_slot_wrapper_int_long_long * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_int_long_long * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_int_long_long_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_int_long_long * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_int_long_long * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_int_long_long_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_int_long_long * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr145(ctr_qt_core_ffi_signal_wrapper_int_long_long * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_int_long_long * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_int_long_long_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_int_long_long * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr146(ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr147(ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QItemSelection_const_ref_QItemSelection_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr148(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr149(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_int_QModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr150(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr151(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr152(ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr153(ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QModelIndex_const_ref_QModelIndex_const_ref * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_ * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper__ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_ * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr154(ctr_qt_core_ffi_slot_wrapper_ * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_ * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper__ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_ * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_ * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper__ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_ * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr155(ctr_qt_core_ffi_signal_wrapper_ * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_ * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper__ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_ * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr156(ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr157(ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QList_QPersistentModelIndex_const_ref_QAbstractItemModel_LayoutChangeHint * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr158(ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_int_QProcess_ExitStatus * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr159(ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_int_QProcess_ExitStatus * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_int * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr160(ctr_qt_core_ffi_slot_wrapper_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_int * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_int * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_int_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_int * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr161(ctr_qt_core_ffi_signal_wrapper_int * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_int * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_int_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_int * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QTimeLine_State * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QTimeLine_State_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QTimeLine_State * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr162(ctr_qt_core_ffi_slot_wrapper_QTimeLine_State * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QTimeLine_State * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QTimeLine_State_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QTimeLine_State * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QTimeLine_State * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QTimeLine_State_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QTimeLine_State * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr163(ctr_qt_core_ffi_signal_wrapper_QTimeLine_State * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QTimeLine_State * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QTimeLine_State_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QTimeLine_State * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr164(ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_slot_wrapper_QAbstractAnimation_State * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State * ctr_qt_core_ffi_static_cast_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_ptr(QObject * ptr) {
  return static_cast< ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State * >(ptr);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_static_cast_QObject_ptr165(ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State * ptr) {
  return static_cast< QObject * >(ptr);
}


RITUAL_EXPORT ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State * ctr_qt_core_ffi_dynamic_cast_ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State_ptr(QObject * ptr) {
  return dynamic_cast< ctr_qt_core_ffi_signal_wrapper_QAbstractAnimation_State * >(ptr);
}


} // extern "C"
