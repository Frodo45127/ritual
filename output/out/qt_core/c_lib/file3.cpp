#include "qt_core_c_global.h"
#include "file1.h"
extern "C" {
RITUAL_EXPORT QCborSimpleType ctr_qt_core_ffi_QCborStreamReader_toSimpleType(QCborStreamReader const * this_ptr) {
  return this_ptr->toSimpleType();
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_QCborStreamReader_toFloat16(QCborStreamReader const * this_ptr) {
  return new qfloat16(this_ptr->toFloat16());
}


RITUAL_EXPORT float ctr_qt_core_ffi_QCborStreamReader_toFloat(QCborStreamReader const * this_ptr) {
  return this_ptr->toFloat();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QCborStreamReader_toDouble(QCborStreamReader const * this_ptr) {
  return this_ptr->toDouble();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborStreamReader_toInteger(QCborStreamReader const * this_ptr) {
  return this_ptr->toInteger();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCborStreamReader_readAllString(QCborStreamReader * this_ptr) {
  return new QString(this_ptr->readAllString());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCborStreamReader_readAllUtf8String(QCborStreamReader * this_ptr) {
  return new QByteArray(this_ptr->readAllUtf8String());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCborStreamReader_readAllByteArray(QCborStreamReader * this_ptr) {
  return new QByteArray(this_ptr->readAllByteArray());
}


RITUAL_EXPORT QCborStreamWriter * ctr_qt_core_ffi_QCborStreamWriter_QCborStreamWriter(QIODevice * device) {
  return new QCborStreamWriter(device);
}


RITUAL_EXPORT QCborStreamWriter * ctr_qt_core_ffi_QCborStreamWriter_QCborStreamWriter1(QByteArray * data) {
  return new QCborStreamWriter(data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_dQCborStreamWriter(QCborStreamWriter * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_setDevice(QCborStreamWriter * this_ptr, QIODevice * device) {
  this_ptr->setDevice(device);
}


RITUAL_EXPORT QIODevice * ctr_qt_core_ffi_QCborStreamWriter_device(QCborStreamWriter const * this_ptr) {
  return this_ptr->device();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append(QCborStreamWriter * this_ptr, unsigned long long u) {
  this_ptr->append(u);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append1(QCborStreamWriter * this_ptr, long long i) {
  this_ptr->append(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append2(QCborStreamWriter * this_ptr, QCborNegativeInteger n) {
  this_ptr->append(n);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append3(QCborStreamWriter * this_ptr, QByteArrayView const * ba) {
  this_ptr->append(*ba);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append4(QCborStreamWriter * this_ptr, QLatin1String const * str) {
  this_ptr->append(*str);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append5(QCborStreamWriter * this_ptr, QStringView const * str) {
  this_ptr->append(*str);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append6(QCborStreamWriter * this_ptr, QCborTag tag) {
  this_ptr->append(tag);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append7(QCborStreamWriter * this_ptr, QCborKnownTags tag) {
  this_ptr->append(tag);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append8(QCborStreamWriter * this_ptr, QCborSimpleType st) {
  this_ptr->append(st);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append9(QCborStreamWriter * this_ptr, qfloat16 const * f) {
  this_ptr->append(*f);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append10(QCborStreamWriter * this_ptr, float f) {
  this_ptr->append(f);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append11(QCborStreamWriter * this_ptr, double d) {
  this_ptr->append(d);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_appendByteString(QCborStreamWriter * this_ptr, char const * data, long long len) {
  this_ptr->appendByteString(data, len);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_appendTextString(QCborStreamWriter * this_ptr, char const * utf8, long long len) {
  this_ptr->appendTextString(utf8, len);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append12(QCborStreamWriter * this_ptr, bool b) {
  this_ptr->append(b);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_appendNull(QCborStreamWriter * this_ptr) {
  this_ptr->appendNull();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_appendUndefined(QCborStreamWriter * this_ptr) {
  this_ptr->appendUndefined();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append13(QCborStreamWriter * this_ptr, int i) {
  this_ptr->append(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append14(QCborStreamWriter * this_ptr, unsigned int u) {
  this_ptr->append(u);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_append15(QCborStreamWriter * this_ptr, char const * str, long long size) {
  this_ptr->append(str, size);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_startArray(QCborStreamWriter * this_ptr) {
  this_ptr->startArray();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_startArray1(QCborStreamWriter * this_ptr, unsigned long long count) {
  this_ptr->startArray(count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamWriter_endArray(QCborStreamWriter * this_ptr) {
  return this_ptr->endArray();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_startMap(QCborStreamWriter * this_ptr) {
  this_ptr->startMap();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamWriter_startMap1(QCborStreamWriter * this_ptr, unsigned long long count) {
  this_ptr->startMap(count);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamWriter_endMap(QCborStreamWriter * this_ptr) {
  return this_ptr->endMap();
}


RITUAL_EXPORT QPropertyBindingPrivatePtr * ctr_qt_core_ffi_QPropertyBindingPrivatePtr_QPropertyBindingPrivatePtr() {
  return new QPropertyBindingPrivatePtr();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPropertyBindingPrivatePtr_dQPropertyBindingPrivatePtr(QPropertyBindingPrivatePtr * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPropertyBindingPrivatePtr_destroyAndFreeMemory(QPropertyBindingPrivatePtr * this_ptr) {
  this_ptr->destroyAndFreeMemory();
}


RITUAL_EXPORT QPropertyBindingPrivatePtr * ctr_qt_core_ffi_QPropertyBindingPrivatePtr_QPropertyBindingPrivatePtr1(QPropertyBindingPrivatePtr const * o) {
  return new QPropertyBindingPrivatePtr(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QPropertyBindingPrivatePtr_operator_bool(QPropertyBindingPrivatePtr const * this_ptr) {
  return this_ptr->operator bool();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QPropertyBindingPrivatePtr_operator_2(QPropertyBindingPrivatePtr const * this_ptr) {
  return this_ptr->operator!();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPropertyBindingPrivatePtr_swap(QPropertyBindingPrivatePtr * this_ptr, QPropertyBindingPrivatePtr * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_Qt_beginPropertyUpdateGroup() {
  Qt::beginPropertyUpdateGroup();
}


RITUAL_EXPORT void ctr_qt_core_ffi_Qt_endPropertyUpdateGroup() {
  Qt::endPropertyUpdateGroup();
}


RITUAL_EXPORT QScopedPropertyUpdateGroup * ctr_qt_core_ffi_QScopedPropertyUpdateGroup_QScopedPropertyUpdateGroup() {
  return new QScopedPropertyUpdateGroup();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QScopedPropertyUpdateGroup_dQScopedPropertyUpdateGroup(QScopedPropertyUpdateGroup * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPropertyBindingSourceLocation * ctr_qt_core_ffi_QPropertyBindingSourceLocation_QPropertyBindingSourceLocation() {
  return new QPropertyBindingSourceLocation();
}


RITUAL_EXPORT QPropertyBindingError * ctr_qt_core_ffi_QPropertyBindingError_QPropertyBindingError() {
  return new QPropertyBindingError();
}


RITUAL_EXPORT QPropertyBindingError * ctr_qt_core_ffi_QPropertyBindingError_QPropertyBindingError1(QPropertyBindingError::Type type, QString const * description) {
  return new QPropertyBindingError(type, *description);
}


RITUAL_EXPORT QPropertyBindingError * ctr_qt_core_ffi_QPropertyBindingError_QPropertyBindingError2(QPropertyBindingError const * other) {
  return new QPropertyBindingError(*other);
}


RITUAL_EXPORT QPropertyBindingError * ctr_qt_core_ffi_QPropertyBindingError_operator_(QPropertyBindingError * this_ptr, QPropertyBindingError const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPropertyBindingError_dQPropertyBindingError(QPropertyBindingError * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QPropertyBindingError_hasError(QPropertyBindingError const * this_ptr) {
  return this_ptr->hasError();
}


RITUAL_EXPORT QPropertyBindingError::Type ctr_qt_core_ffi_QPropertyBindingError_type(QPropertyBindingError const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QPropertyBindingError_description(QPropertyBindingError const * this_ptr) {
  return new QString(this_ptr->description());
}


RITUAL_EXPORT QUntypedPropertyBinding * ctr_qt_core_ffi_QUntypedPropertyBinding_QUntypedPropertyBinding() {
  return new QUntypedPropertyBinding();
}


RITUAL_EXPORT QUntypedPropertyBinding * ctr_qt_core_ffi_QUntypedPropertyBinding_QUntypedPropertyBinding2(QUntypedPropertyBinding const * other) {
  return new QUntypedPropertyBinding(*other);
}


RITUAL_EXPORT QUntypedPropertyBinding * ctr_qt_core_ffi_QUntypedPropertyBinding_operator_(QUntypedPropertyBinding * this_ptr, QUntypedPropertyBinding const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUntypedPropertyBinding_dQUntypedPropertyBinding(QUntypedPropertyBinding * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUntypedPropertyBinding_isNull(QUntypedPropertyBinding const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT QPropertyBindingError * ctr_qt_core_ffi_QUntypedPropertyBinding_error(QUntypedPropertyBinding const * this_ptr) {
  return new QPropertyBindingError(this_ptr->error());
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QUntypedPropertyBinding_valueMetaType(QUntypedPropertyBinding const * this_ptr) {
  return new QMetaType(this_ptr->valueMetaType());
}


RITUAL_EXPORT QPropertyObserver * ctr_qt_core_ffi_QPropertyObserver_QPropertyObserver() {
  return new QPropertyObserver();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPropertyObserver_dQPropertyObserver(QPropertyObserver * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPropertyNotifier * ctr_qt_core_ffi_QPropertyNotifier_QPropertyNotifier() {
  return new QPropertyNotifier();
}


RITUAL_EXPORT QUntypedBindable * ctr_qt_core_ffi_QUntypedBindable_QUntypedBindable() {
  return new QUntypedBindable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUntypedBindable_isValid(QUntypedBindable const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUntypedBindable_isBindable(QUntypedBindable const * this_ptr) {
  return this_ptr->isBindable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUntypedBindable_isReadOnly(QUntypedBindable const * this_ptr) {
  return this_ptr->isReadOnly();
}


RITUAL_EXPORT QUntypedPropertyBinding * ctr_qt_core_ffi_QUntypedBindable_makeBinding(QUntypedBindable const * this_ptr, QPropertyBindingSourceLocation const * location) {
  return new QUntypedPropertyBinding(this_ptr->makeBinding(*location));
}


RITUAL_EXPORT QUntypedPropertyBinding * ctr_qt_core_ffi_QUntypedBindable_takeBinding(QUntypedBindable * this_ptr) {
  return new QUntypedPropertyBinding(this_ptr->takeBinding());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUntypedBindable_observe(QUntypedBindable const * this_ptr, QPropertyObserver * observer) {
  this_ptr->observe(observer);
}


RITUAL_EXPORT QUntypedPropertyBinding * ctr_qt_core_ffi_QUntypedBindable_binding(QUntypedBindable const * this_ptr) {
  return new QUntypedPropertyBinding(this_ptr->binding());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUntypedBindable_setBinding(QUntypedBindable * this_ptr, QUntypedPropertyBinding const * binding) {
  return this_ptr->setBinding(*binding);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUntypedBindable_hasBinding(QUntypedBindable const * this_ptr) {
  return this_ptr->hasBinding();
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QUntypedBindable_metaType(QUntypedBindable const * this_ptr) {
  return new QMetaType(this_ptr->metaType());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QTimer_metaObject(QTimer const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QTimer_qt_metacast(QTimer * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimer_qt_metacall(QTimer * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTimer_tr(char const * s, char const * c, int n) {
  return new QString(QTimer::tr(s, c, n));
}


RITUAL_EXPORT QTimer * ctr_qt_core_ffi_QTimer_QTimer(QObject * parent) {
  return new QTimer(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimer_dQTimer(QTimer * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTimer_isActive(QTimer const * this_ptr) {
  return this_ptr->isActive();
}


RITUAL_EXPORT QBindable< bool > * ctr_qt_core_ffi_QTimer_bindableActive(QTimer * this_ptr) {
  return new QBindable< bool >(this_ptr->bindableActive());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimer_timerId(QTimer const * this_ptr) {
  return this_ptr->timerId();
}


RITUAL_EXPORT Qt::TimerId ctr_qt_core_ffi_QTimer_id(QTimer const * this_ptr) {
  return this_ptr->id();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimer_setInterval(QTimer * this_ptr, int msec) {
  this_ptr->setInterval(msec);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimer_interval(QTimer const * this_ptr) {
  return this_ptr->interval();
}


RITUAL_EXPORT QBindable< int > * ctr_qt_core_ffi_QTimer_bindableInterval(QTimer * this_ptr) {
  return new QBindable< int >(this_ptr->bindableInterval());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimer_remainingTime(QTimer const * this_ptr) {
  return this_ptr->remainingTime();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimer_setTimerType(QTimer * this_ptr, Qt::TimerType atype) {
  this_ptr->setTimerType(atype);
}


RITUAL_EXPORT Qt::TimerType ctr_qt_core_ffi_QTimer_timerType(QTimer const * this_ptr) {
  return this_ptr->timerType();
}


RITUAL_EXPORT QBindable< Qt::TimerType > * ctr_qt_core_ffi_QTimer_bindableTimerType(QTimer * this_ptr) {
  return new QBindable< Qt::TimerType >(this_ptr->bindableTimerType());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimer_setSingleShot(QTimer * this_ptr, bool singleShot) {
  this_ptr->setSingleShot(singleShot);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTimer_isSingleShot(QTimer const * this_ptr) {
  return this_ptr->isSingleShot();
}


RITUAL_EXPORT QBindable< bool > * ctr_qt_core_ffi_QTimer_bindableSingleShot(QTimer * this_ptr) {
  return new QBindable< bool >(this_ptr->bindableSingleShot());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimer_singleShot(int msec, QObject const * receiver, char const * member) {
  QTimer::singleShot(msec, receiver, member);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimer_singleShot1(int msec, Qt::TimerType timerType, QObject const * receiver, char const * member) {
  QTimer::singleShot(msec, timerType, receiver, member);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimer_start(QTimer * this_ptr, int msec) {
  this_ptr->start(msec);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimer_start1(QTimer * this_ptr) {
  this_ptr->start();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimer_stop(QTimer * this_ptr) {
  this_ptr->stop();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QChronoTimer_metaObject(QChronoTimer const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QChronoTimer_qt_metacast(QChronoTimer * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QChronoTimer_qt_metacall(QChronoTimer * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QChronoTimer_tr(char const * s, char const * c, int n) {
  return new QString(QChronoTimer::tr(s, c, n));
}


RITUAL_EXPORT QChronoTimer * ctr_qt_core_ffi_QChronoTimer_QChronoTimer(QObject * parent) {
  return new QChronoTimer(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QChronoTimer_dQChronoTimer(QChronoTimer * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChronoTimer_isActive(QChronoTimer const * this_ptr) {
  return this_ptr->isActive();
}


RITUAL_EXPORT QBindable< bool > * ctr_qt_core_ffi_QChronoTimer_bindableActive(QChronoTimer * this_ptr) {
  return new QBindable< bool >(this_ptr->bindableActive());
}


RITUAL_EXPORT Qt::TimerId ctr_qt_core_ffi_QChronoTimer_id(QChronoTimer const * this_ptr) {
  return this_ptr->id();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QChronoTimer_setTimerType(QChronoTimer * this_ptr, Qt::TimerType atype) {
  this_ptr->setTimerType(atype);
}


RITUAL_EXPORT Qt::TimerType ctr_qt_core_ffi_QChronoTimer_timerType(QChronoTimer const * this_ptr) {
  return this_ptr->timerType();
}


RITUAL_EXPORT QBindable< Qt::TimerType > * ctr_qt_core_ffi_QChronoTimer_bindableTimerType(QChronoTimer * this_ptr) {
  return new QBindable< Qt::TimerType >(this_ptr->bindableTimerType());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QChronoTimer_setSingleShot(QChronoTimer * this_ptr, bool singleShot) {
  this_ptr->setSingleShot(singleShot);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChronoTimer_isSingleShot(QChronoTimer const * this_ptr) {
  return this_ptr->isSingleShot();
}


RITUAL_EXPORT QBindable< bool > * ctr_qt_core_ffi_QChronoTimer_bindableSingleShot(QChronoTimer * this_ptr) {
  return new QBindable< bool >(this_ptr->bindableSingleShot());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QChronoTimer_start(QChronoTimer * this_ptr) {
  this_ptr->start();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QChronoTimer_stop(QChronoTimer * this_ptr) {
  this_ptr->stop();
}


RITUAL_EXPORT QCollatorSortKey * ctr_qt_core_ffi_QCollatorSortKey_QCollatorSortKey(QCollatorSortKey const * other) {
  return new QCollatorSortKey(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCollatorSortKey_dQCollatorSortKey(QCollatorSortKey * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QCollatorSortKey * ctr_qt_core_ffi_QCollatorSortKey_operator_(QCollatorSortKey * this_ptr, QCollatorSortKey const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCollatorSortKey_swap(QCollatorSortKey * this_ptr, QCollatorSortKey * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCollatorSortKey_compare(QCollatorSortKey const * this_ptr, QCollatorSortKey const * key) {
  return this_ptr->compare(*key);
}


RITUAL_EXPORT QCollator * ctr_qt_core_ffi_QCollator_QCollator() {
  return new QCollator();
}


RITUAL_EXPORT QCollator * ctr_qt_core_ffi_QCollator_QCollator1(QLocale const * locale) {
  return new QCollator(*locale);
}


RITUAL_EXPORT QCollator * ctr_qt_core_ffi_QCollator_QCollator2(QCollator const * arg1) {
  return new QCollator(*arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCollator_dQCollator(QCollator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QCollator * ctr_qt_core_ffi_QCollator_operator_(QCollator * this_ptr, QCollator const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCollator_swap(QCollator * this_ptr, QCollator * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCollator_setLocale(QCollator * this_ptr, QLocale const * locale) {
  this_ptr->setLocale(*locale);
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QCollator_locale(QCollator const * this_ptr) {
  return new QLocale(this_ptr->locale());
}


RITUAL_EXPORT Qt::CaseSensitivity ctr_qt_core_ffi_QCollator_caseSensitivity(QCollator const * this_ptr) {
  return this_ptr->caseSensitivity();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCollator_setCaseSensitivity(QCollator * this_ptr, Qt::CaseSensitivity cs) {
  this_ptr->setCaseSensitivity(cs);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCollator_setNumericMode(QCollator * this_ptr, bool on) {
  this_ptr->setNumericMode(on);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCollator_numericMode(QCollator const * this_ptr) {
  return this_ptr->numericMode();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCollator_setIgnorePunctuation(QCollator * this_ptr, bool on) {
  this_ptr->setIgnorePunctuation(on);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCollator_ignorePunctuation(QCollator const * this_ptr) {
  return this_ptr->ignorePunctuation();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCollator_compare(QCollator const * this_ptr, QString const * s1, QString const * s2) {
  return this_ptr->compare(*s1, *s2);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCollator_compare1(QCollator const * this_ptr, QChar const * s1, long long len1, QChar const * s2, long long len2) {
  return this_ptr->compare(s1, len1, s2, len2);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCollator_operator__(QCollator const * this_ptr, QString const * s1, QString const * s2) {
  return this_ptr->operator()(*s1, *s2);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCollator_compare2(QCollator const * this_ptr, QStringView const * s1, QStringView const * s2) {
  return this_ptr->compare(*s1, *s2);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCollator_operator__1(QCollator const * this_ptr, QStringView const * s1, QStringView const * s2) {
  return this_ptr->operator()(*s1, *s2);
}


RITUAL_EXPORT QCollatorSortKey * ctr_qt_core_ffi_QCollator_sortKey(QCollator const * this_ptr, QString const * string) {
  return new QCollatorSortKey(this_ptr->sortKey(*string));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCollator_defaultCompare(QStringView const * s1, QStringView const * s2) {
  return QCollator::defaultCompare(*s1, *s2);
}


RITUAL_EXPORT QCollatorSortKey * ctr_qt_core_ffi_QCollator_defaultSortKey(QStringView const * key) {
  return new QCollatorSortKey(QCollator::defaultSortKey(*key));
}


RITUAL_EXPORT QCommandLineOption * ctr_qt_core_ffi_QCommandLineOption_QCommandLineOption(QString const * name) {
  return new QCommandLineOption(*name);
}


RITUAL_EXPORT QCommandLineOption * ctr_qt_core_ffi_QCommandLineOption_QCommandLineOption1(QList< QString > const * names) {
  return new QCommandLineOption(*names);
}


RITUAL_EXPORT QCommandLineOption * ctr_qt_core_ffi_QCommandLineOption_QCommandLineOption2(QString const * name, QString const * description, QString const * valueName, QString const * defaultValue) {
  return new QCommandLineOption(*name, *description, *valueName, *defaultValue);
}


RITUAL_EXPORT QCommandLineOption * ctr_qt_core_ffi_QCommandLineOption_QCommandLineOption3(QList< QString > const * names, QString const * description, QString const * valueName, QString const * defaultValue) {
  return new QCommandLineOption(*names, *description, *valueName, *defaultValue);
}


RITUAL_EXPORT QCommandLineOption * ctr_qt_core_ffi_QCommandLineOption_QCommandLineOption4(QCommandLineOption const * other) {
  return new QCommandLineOption(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineOption_dQCommandLineOption(QCommandLineOption * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QCommandLineOption * ctr_qt_core_ffi_QCommandLineOption_operator_(QCommandLineOption * this_ptr, QCommandLineOption const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineOption_swap(QCommandLineOption * this_ptr, QCommandLineOption * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QCommandLineOption_names(QCommandLineOption const * this_ptr) {
  return new QList< QString >(this_ptr->names());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineOption_setValueName(QCommandLineOption * this_ptr, QString const * name) {
  this_ptr->setValueName(*name);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCommandLineOption_valueName(QCommandLineOption const * this_ptr) {
  return new QString(this_ptr->valueName());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineOption_setDescription(QCommandLineOption * this_ptr, QString const * description) {
  this_ptr->setDescription(*description);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCommandLineOption_description(QCommandLineOption const * this_ptr) {
  return new QString(this_ptr->description());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineOption_setDefaultValue(QCommandLineOption * this_ptr, QString const * defaultValue) {
  this_ptr->setDefaultValue(*defaultValue);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineOption_setDefaultValues(QCommandLineOption * this_ptr, QList< QString > const * defaultValues) {
  this_ptr->setDefaultValues(*defaultValues);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QCommandLineOption_defaultValues(QCommandLineOption const * this_ptr) {
  return new QList< QString >(this_ptr->defaultValues());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCommandLineOption_flags(QCommandLineOption const * this_ptr) {
  return int(this_ptr->flags());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineOption_setFlags(QCommandLineOption * this_ptr, int aflags) {
  this_ptr->setFlags(QFlags< QCommandLineOption::Flag >(aflags));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCommandLineParser_tr(char const * sourceText, char const * disambiguation, int n) {
  return new QString(QCommandLineParser::tr(sourceText, disambiguation, n));
}


RITUAL_EXPORT QCommandLineParser * ctr_qt_core_ffi_QCommandLineParser_QCommandLineParser() {
  return new QCommandLineParser();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineParser_dQCommandLineParser(QCommandLineParser * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineParser_setSingleDashWordOptionMode(QCommandLineParser * this_ptr, QCommandLineParser::SingleDashWordOptionMode parsingMode) {
  this_ptr->setSingleDashWordOptionMode(parsingMode);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineParser_setOptionsAfterPositionalArgumentsMode(QCommandLineParser * this_ptr, QCommandLineParser::OptionsAfterPositionalArgumentsMode mode) {
  this_ptr->setOptionsAfterPositionalArgumentsMode(mode);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCommandLineParser_addOption(QCommandLineParser * this_ptr, QCommandLineOption const * commandLineOption) {
  return this_ptr->addOption(*commandLineOption);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCommandLineParser_addOptions(QCommandLineParser * this_ptr, QList< QCommandLineOption > const * options) {
  return this_ptr->addOptions(*options);
}


RITUAL_EXPORT QCommandLineOption * ctr_qt_core_ffi_QCommandLineParser_addVersionOption(QCommandLineParser * this_ptr) {
  return new QCommandLineOption(this_ptr->addVersionOption());
}


RITUAL_EXPORT QCommandLineOption * ctr_qt_core_ffi_QCommandLineParser_addHelpOption(QCommandLineParser * this_ptr) {
  return new QCommandLineOption(this_ptr->addHelpOption());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineParser_setApplicationDescription(QCommandLineParser * this_ptr, QString const * description) {
  this_ptr->setApplicationDescription(*description);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCommandLineParser_applicationDescription(QCommandLineParser const * this_ptr) {
  return new QString(this_ptr->applicationDescription());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineParser_addPositionalArgument(QCommandLineParser * this_ptr, QString const * name, QString const * description, QString const * syntax) {
  this_ptr->addPositionalArgument(*name, *description, *syntax);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineParser_clearPositionalArguments(QCommandLineParser * this_ptr) {
  this_ptr->clearPositionalArguments();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineParser_process(QCommandLineParser * this_ptr, QList< QString > const * arguments) {
  this_ptr->process(*arguments);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineParser_process1(QCommandLineParser * this_ptr, QCoreApplication const * app) {
  this_ptr->process(*app);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCommandLineParser_parse(QCommandLineParser * this_ptr, QList< QString > const * arguments) {
  return this_ptr->parse(*arguments);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCommandLineParser_errorText(QCommandLineParser const * this_ptr) {
  return new QString(this_ptr->errorText());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCommandLineParser_isSet(QCommandLineParser const * this_ptr, QString const * name) {
  return this_ptr->isSet(*name);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCommandLineParser_value(QCommandLineParser const * this_ptr, QString const * name) {
  return new QString(this_ptr->value(*name));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QCommandLineParser_values(QCommandLineParser const * this_ptr, QString const * name) {
  return new QList< QString >(this_ptr->values(*name));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCommandLineParser_isSet1(QCommandLineParser const * this_ptr, QCommandLineOption const * option) {
  return this_ptr->isSet(*option);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCommandLineParser_value1(QCommandLineParser const * this_ptr, QCommandLineOption const * option) {
  return new QString(this_ptr->value(*option));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QCommandLineParser_values1(QCommandLineParser const * this_ptr, QCommandLineOption const * option) {
  return new QList< QString >(this_ptr->values(*option));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QCommandLineParser_positionalArguments(QCommandLineParser const * this_ptr) {
  return new QList< QString >(this_ptr->positionalArguments());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QCommandLineParser_optionNames(QCommandLineParser const * this_ptr) {
  return new QList< QString >(this_ptr->optionNames());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QCommandLineParser_unknownOptionNames(QCommandLineParser const * this_ptr) {
  return new QList< QString >(this_ptr->unknownOptionNames());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineParser_showVersion(QCommandLineParser * this_ptr) {
  this_ptr->showVersion();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineParser_showHelp(QCommandLineParser * this_ptr, int exitCode) {
  this_ptr->showHelp(exitCode);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCommandLineParser_helpText(QCommandLineParser const * this_ptr) {
  return new QString(this_ptr->helpText());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCommandLineParser_showMessageAndExit(QCommandLineParser::MessageType type, QString const * message, int exitCode) {
  QCommandLineParser::showMessageAndExit(type, *message, exitCode);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QConcatenateTablesProxyModel_metaObject(QConcatenateTablesProxyModel const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QConcatenateTablesProxyModel_qt_metacast(QConcatenateTablesProxyModel * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QConcatenateTablesProxyModel_qt_metacall(QConcatenateTablesProxyModel * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QConcatenateTablesProxyModel_tr(char const * s, char const * c, int n) {
  return new QString(QConcatenateTablesProxyModel::tr(s, c, n));
}


RITUAL_EXPORT QConcatenateTablesProxyModel * ctr_qt_core_ffi_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel(QObject * parent) {
  return new QConcatenateTablesProxyModel(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QConcatenateTablesProxyModel_dQConcatenateTablesProxyModel(QConcatenateTablesProxyModel * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QList< QAbstractItemModel * > * ctr_qt_core_ffi_QConcatenateTablesProxyModel_sourceModels(QConcatenateTablesProxyModel const * this_ptr) {
  return new QList< QAbstractItemModel * >(this_ptr->sourceModels());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QConcatenateTablesProxyModel_addSourceModel(QConcatenateTablesProxyModel * this_ptr, QAbstractItemModel * sourceModel) {
  this_ptr->addSourceModel(sourceModel);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QConcatenateTablesProxyModel_removeSourceModel(QConcatenateTablesProxyModel * this_ptr, QAbstractItemModel * sourceModel) {
  this_ptr->removeSourceModel(sourceModel);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QConcatenateTablesProxyModel_mapFromSource(QConcatenateTablesProxyModel const * this_ptr, QModelIndex const * sourceIndex) {
  return new QModelIndex(this_ptr->mapFromSource(*sourceIndex));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QConcatenateTablesProxyModel_mapToSource(QConcatenateTablesProxyModel const * this_ptr, QModelIndex const * proxyIndex) {
  return new QModelIndex(this_ptr->mapToSource(*proxyIndex));
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QConcatenateTablesProxyModel_data(QConcatenateTablesProxyModel const * this_ptr, QModelIndex const * index, int role) {
  return new QVariant(this_ptr->data(*index, role));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QConcatenateTablesProxyModel_setData(QConcatenateTablesProxyModel * this_ptr, QModelIndex const * index, QVariant const * value, int role) {
  return this_ptr->setData(*index, *value, role);
}


RITUAL_EXPORT QMap< int, QVariant > * ctr_qt_core_ffi_QConcatenateTablesProxyModel_itemData(QConcatenateTablesProxyModel const * this_ptr, QModelIndex const * proxyIndex) {
  return new QMap< int, QVariant >(this_ptr->itemData(*proxyIndex));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QConcatenateTablesProxyModel_setItemData(QConcatenateTablesProxyModel * this_ptr, QModelIndex const * index, QMap< int, QVariant > const * roles) {
  return this_ptr->setItemData(*index, *roles);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QConcatenateTablesProxyModel_flags(QConcatenateTablesProxyModel const * this_ptr, QModelIndex const * index) {
  return int(this_ptr->flags(*index));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QConcatenateTablesProxyModel_index(QConcatenateTablesProxyModel const * this_ptr, int row, int column, QModelIndex const * parent) {
  return new QModelIndex(this_ptr->index(row, column, *parent));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QConcatenateTablesProxyModel_parent(QConcatenateTablesProxyModel const * this_ptr, QModelIndex const * index) {
  return new QModelIndex(this_ptr->parent(*index));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QConcatenateTablesProxyModel_rowCount(QConcatenateTablesProxyModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->rowCount(*parent);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QConcatenateTablesProxyModel_headerData(QConcatenateTablesProxyModel const * this_ptr, int section, Qt::Orientation orientation, int role) {
  return new QVariant(this_ptr->headerData(section, orientation, role));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QConcatenateTablesProxyModel_columnCount(QConcatenateTablesProxyModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->columnCount(*parent);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QConcatenateTablesProxyModel_mimeTypes(QConcatenateTablesProxyModel const * this_ptr) {
  return new QList< QString >(this_ptr->mimeTypes());
}


RITUAL_EXPORT QMimeData * ctr_qt_core_ffi_QConcatenateTablesProxyModel_mimeData(QConcatenateTablesProxyModel const * this_ptr, QList< QModelIndex > const * indexes) {
  return this_ptr->mimeData(*indexes);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QConcatenateTablesProxyModel_canDropMimeData(QConcatenateTablesProxyModel const * this_ptr, QMimeData const * data, Qt::DropAction action, int row, int column, QModelIndex const * parent) {
  return this_ptr->canDropMimeData(data, action, row, column, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QConcatenateTablesProxyModel_dropMimeData(QConcatenateTablesProxyModel * this_ptr, QMimeData const * data, Qt::DropAction action, int row, int column, QModelIndex const * parent) {
  return this_ptr->dropMimeData(data, action, row, column, *parent);
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QConcatenateTablesProxyModel_span(QConcatenateTablesProxyModel const * this_ptr, QModelIndex const * index) {
  return new QSize(this_ptr->span(*index));
}


RITUAL_EXPORT QHash< int, QByteArray > * ctr_qt_core_ffi_QConcatenateTablesProxyModel_roleNames(QConcatenateTablesProxyModel const * this_ptr) {
  return new QHash< int, QByteArray >(this_ptr->roleNames());
}


RITUAL_EXPORT QCryptographicHash * ctr_qt_core_ffi_QCryptographicHash_QCryptographicHash(QCryptographicHash::Algorithm method) {
  return new QCryptographicHash(method);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCryptographicHash_dQCryptographicHash(QCryptographicHash * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCryptographicHash_swap(QCryptographicHash * this_ptr, QCryptographicHash * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCryptographicHash_reset(QCryptographicHash * this_ptr) {
  this_ptr->reset();
}


RITUAL_EXPORT QCryptographicHash::Algorithm ctr_qt_core_ffi_QCryptographicHash_algorithm(QCryptographicHash const * this_ptr) {
  return this_ptr->algorithm();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCryptographicHash_addData(QCryptographicHash * this_ptr, char const * data, long long length) {
  this_ptr->addData(data, length);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCryptographicHash_addData1(QCryptographicHash * this_ptr, QByteArrayView const * data) {
  this_ptr->addData(*data);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCryptographicHash_addData2(QCryptographicHash * this_ptr, QIODevice * device) {
  return this_ptr->addData(device);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCryptographicHash_result(QCryptographicHash const * this_ptr) {
  return new QByteArray(this_ptr->result());
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QCryptographicHash_resultView(QCryptographicHash const * this_ptr) {
  return new QByteArrayView(this_ptr->resultView());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCryptographicHash_hash(QByteArrayView const * data, QCryptographicHash::Algorithm method) {
  return new QByteArray(QCryptographicHash::hash(*data, method));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCryptographicHash_hashLength(QCryptographicHash::Algorithm method) {
  return QCryptographicHash::hashLength(method);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCryptographicHash_supportsAlgorithm(QCryptographicHash::Algorithm method) {
  return QCryptographicHash::supportsAlgorithm(method);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QFileDevice_metaObject(QFileDevice const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QFileDevice_qt_metacast(QFileDevice * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QFileDevice_qt_metacall(QFileDevice * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileDevice_tr(char const * s, char const * c, int n) {
  return new QString(QFileDevice::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFileDevice_dQFileDevice(QFileDevice * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QFileDevice::FileError ctr_qt_core_ffi_QFileDevice_error(QFileDevice const * this_ptr) {
  return this_ptr->error();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFileDevice_unsetError(QFileDevice * this_ptr) {
  this_ptr->unsetError();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFileDevice_close(QFileDevice * this_ptr) {
  this_ptr->close();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileDevice_isSequential(QFileDevice const * this_ptr) {
  return this_ptr->isSequential();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QFileDevice_handle(QFileDevice const * this_ptr) {
  return this_ptr->handle();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileDevice_fileName(QFileDevice const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QFileDevice_pos(QFileDevice const * this_ptr) {
  return this_ptr->pos();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileDevice_seek(QFileDevice * this_ptr, long long offset) {
  return this_ptr->seek(offset);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileDevice_atEnd(QFileDevice const * this_ptr) {
  return this_ptr->atEnd();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileDevice_flush(QFileDevice * this_ptr) {
  return this_ptr->flush();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QFileDevice_size(QFileDevice const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileDevice_resize(QFileDevice * this_ptr, long long sz) {
  return this_ptr->resize(sz);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QFileDevice_permissions(QFileDevice const * this_ptr) {
  return int(this_ptr->permissions());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileDevice_setPermissions(QFileDevice * this_ptr, int permissionSpec) {
  return this_ptr->setPermissions(QFlags< QFileDevice::Permission >(permissionSpec));
}


RITUAL_EXPORT unsigned char * ctr_qt_core_ffi_QFileDevice_map(QFileDevice * this_ptr, long long offset, long long size, int flags) {
  return this_ptr->map(offset, size, QFlags< QFileDevice::MemoryMapFlag >(flags));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileDevice_unmap(QFileDevice * this_ptr, unsigned char * address) {
  return this_ptr->unmap(address);
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QFileDevice_fileTime(QFileDevice const * this_ptr, QFileDevice::FileTime time) {
  return new QDateTime(this_ptr->fileTime(time));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileDevice_setFileTime(QFileDevice * this_ptr, QDateTime const * newDate, QFileDevice::FileTime fileTime) {
  return this_ptr->setFileTime(*newDate, fileTime);
}


RITUAL_EXPORT QDirListing * ctr_qt_core_ffi_QDirListing_QDirListing(QString const * path, int flags) {
  return new QDirListing(*path, QFlags< QDirListing::IteratorFlag >(flags));
}


RITUAL_EXPORT QDirListing * ctr_qt_core_ffi_QDirListing_QDirListing1(QString const * path, QList< QString > const * nameFilters, int flags) {
  return new QDirListing(*path, *nameFilters, QFlags< QDirListing::IteratorFlag >(flags));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDirListing_swap(QDirListing * this_ptr, QDirListing * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDirListing_dQDirListing(QDirListing * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDirListing_iteratorPath(QDirListing const * this_ptr) {
  return new QString(this_ptr->iteratorPath());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDirListing_iteratorFlags(QDirListing const * this_ptr) {
  return int(this_ptr->iteratorFlags());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QDirListing_nameFilters(QDirListing const * this_ptr) {
  return new QList< QString >(this_ptr->nameFilters());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDirListing_DirEntry_fileName(QDirListing::DirEntry const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDirListing_DirEntry_baseName(QDirListing::DirEntry const * this_ptr) {
  return new QString(this_ptr->baseName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDirListing_DirEntry_completeBaseName(QDirListing::DirEntry const * this_ptr) {
  return new QString(this_ptr->completeBaseName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDirListing_DirEntry_suffix(QDirListing::DirEntry const * this_ptr) {
  return new QString(this_ptr->suffix());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDirListing_DirEntry_bundleName(QDirListing::DirEntry const * this_ptr) {
  return new QString(this_ptr->bundleName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDirListing_DirEntry_completeSuffix(QDirListing::DirEntry const * this_ptr) {
  return new QString(this_ptr->completeSuffix());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDirListing_DirEntry_filePath(QDirListing::DirEntry const * this_ptr) {
  return new QString(this_ptr->filePath());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDirListing_DirEntry_isDir(QDirListing::DirEntry const * this_ptr) {
  return this_ptr->isDir();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDirListing_DirEntry_isFile(QDirListing::DirEntry const * this_ptr) {
  return this_ptr->isFile();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDirListing_DirEntry_isSymLink(QDirListing::DirEntry const * this_ptr) {
  return this_ptr->isSymLink();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDirListing_DirEntry_exists(QDirListing::DirEntry const * this_ptr) {
  return this_ptr->exists();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDirListing_DirEntry_isHidden(QDirListing::DirEntry const * this_ptr) {
  return this_ptr->isHidden();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDirListing_DirEntry_isReadable(QDirListing::DirEntry const * this_ptr) {
  return this_ptr->isReadable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDirListing_DirEntry_isWritable(QDirListing::DirEntry const * this_ptr) {
  return this_ptr->isWritable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDirListing_DirEntry_isExecutable(QDirListing::DirEntry const * this_ptr) {
  return this_ptr->isExecutable();
}


RITUAL_EXPORT QFileInfo * ctr_qt_core_ffi_QDirListing_DirEntry_fileInfo(QDirListing::DirEntry const * this_ptr) {
  return new QFileInfo(this_ptr->fileInfo());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDirListing_DirEntry_canonicalFilePath(QDirListing::DirEntry const * this_ptr) {
  return new QString(this_ptr->canonicalFilePath());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDirListing_DirEntry_absoluteFilePath(QDirListing::DirEntry const * this_ptr) {
  return new QString(this_ptr->absoluteFilePath());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDirListing_DirEntry_absolutePath(QDirListing::DirEntry const * this_ptr) {
  return new QString(this_ptr->absolutePath());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDirListing_DirEntry_size(QDirListing::DirEntry const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDirListing_DirEntry_birthTime(QDirListing::DirEntry const * this_ptr, QTimeZone const * tz) {
  return new QDateTime(this_ptr->birthTime(*tz));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDirListing_DirEntry_metadataChangeTime(QDirListing::DirEntry const * this_ptr, QTimeZone const * tz) {
  return new QDateTime(this_ptr->metadataChangeTime(*tz));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDirListing_DirEntry_lastModified(QDirListing::DirEntry const * this_ptr, QTimeZone const * tz) {
  return new QDateTime(this_ptr->lastModified(*tz));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDirListing_DirEntry_lastRead(QDirListing::DirEntry const * this_ptr, QTimeZone const * tz) {
  return new QDateTime(this_ptr->lastRead(*tz));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDirListing_DirEntry_fileTime(QDirListing::DirEntry const * this_ptr, QFileDevice::FileTime type, QTimeZone const * tz) {
  return new QDateTime(this_ptr->fileTime(type, *tz));
}


RITUAL_EXPORT QDirListing::const_iterator * ctr_qt_core_ffi_QDirListing_const_iterator_const_iterator() {
  return new QDirListing::const_iterator();
}


RITUAL_EXPORT QDirListing::DirEntry const * ctr_qt_core_ffi_QDirListing_const_iterator_operator_1(QDirListing::const_iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QDirListing::DirEntry const * ctr_qt_core_ffi_QDirListing_const_iterator_operator__(QDirListing::const_iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QDirListing::const_iterator * ctr_qt_core_ffi_QDirListing_const_iterator_operator__1(QDirListing::const_iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDirListing_const_iterator_operator__2(QDirListing::const_iterator * this_ptr, int arg1) {
  this_ptr->operator++(arg1);
}


RITUAL_EXPORT QDirListing::const_iterator * ctr_qt_core_ffi_QDirListing_begin(QDirListing const * this_ptr) {
  return new QDirListing::const_iterator(this_ptr->begin());
}


RITUAL_EXPORT QDirListing::const_iterator * ctr_qt_core_ffi_QDirListing_cbegin(QDirListing const * this_ptr) {
  return new QDirListing::const_iterator(this_ptr->cbegin());
}


RITUAL_EXPORT QDirListing::sentinel * ctr_qt_core_ffi_QDirListing_end(QDirListing const * this_ptr) {
  return new QDirListing::sentinel(this_ptr->end());
}


RITUAL_EXPORT QDirListing::sentinel * ctr_qt_core_ffi_QDirListing_cend(QDirListing const * this_ptr) {
  return new QDirListing::sentinel(this_ptr->cend());
}


RITUAL_EXPORT QDirListing::const_iterator * ctr_qt_core_ffi_QDirListing_constBegin(QDirListing const * this_ptr) {
  return new QDirListing::const_iterator(this_ptr->constBegin());
}


RITUAL_EXPORT QDirListing::sentinel * ctr_qt_core_ffi_QDirListing_constEnd(QDirListing const * this_ptr) {
  return new QDirListing::sentinel(this_ptr->constEnd());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QFile_metaObject(QFile const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QFile_qt_metacast(QFile * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QFile_qt_metacall(QFile * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFile_tr(char const * s, char const * c, int n) {
  return new QString(QFile::tr(s, c, n));
}


RITUAL_EXPORT QFile * ctr_qt_core_ffi_QFile_QFile() {
  return new QFile();
}


RITUAL_EXPORT QFile * ctr_qt_core_ffi_QFile_QFile1(QString const * name) {
  return new QFile(*name);
}


RITUAL_EXPORT QFile * ctr_qt_core_ffi_QFile_QFile2(QObject * parent) {
  return new QFile(parent);
}


RITUAL_EXPORT QFile * ctr_qt_core_ffi_QFile_QFile3(QString const * name, QObject * parent) {
  return new QFile(*name, parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFile_dQFile(QFile * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFile_fileName(QFile const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFile_setFileName(QFile * this_ptr, QString const * name) {
  this_ptr->setFileName(*name);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QFile_encodeName(QString const * fileName) {
  return new QByteArray(QFile::encodeName(*fileName));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFile_decodeName(QByteArray const * localFileName) {
  return new QString(QFile::decodeName(*localFileName));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFile_decodeName1(char const * localFileName) {
  return new QString(QFile::decodeName(localFileName));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_exists(QFile const * this_ptr) {
  return this_ptr->exists();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_exists1(QString const * fileName) {
  return QFile::exists(*fileName);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFile_symLinkTarget(QFile const * this_ptr) {
  return new QString(this_ptr->symLinkTarget());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFile_symLinkTarget1(QString const * fileName) {
  return new QString(QFile::symLinkTarget(*fileName));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_remove(QFile * this_ptr) {
  return this_ptr->remove();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_remove1(QString const * fileName) {
  return QFile::remove(*fileName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_supportsMoveToTrash() {
  return QFile::supportsMoveToTrash();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_moveToTrash(QFile * this_ptr) {
  return this_ptr->moveToTrash();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_moveToTrash1(QString const * fileName, QString * pathInTrash) {
  return QFile::moveToTrash(*fileName, pathInTrash);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_rename(QFile * this_ptr, QString const * newName) {
  return this_ptr->rename(*newName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_rename1(QString const * oldName, QString const * newName) {
  return QFile::rename(*oldName, *newName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_link(QFile * this_ptr, QString const * newName) {
  return this_ptr->link(*newName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_link1(QString const * fileName, QString const * newName) {
  return QFile::link(*fileName, *newName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_copy(QFile * this_ptr, QString const * newName) {
  return this_ptr->copy(*newName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_copy1(QString const * fileName, QString const * newName) {
  return QFile::copy(*fileName, *newName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_open(QFile * this_ptr, int flags) {
  return this_ptr->open(QFlags< QIODeviceBase::OpenModeFlag >(flags));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_open1(QFile * this_ptr, int flags, int permissions) {
  return this_ptr->open(QFlags< QIODeviceBase::OpenModeFlag >(flags), QFlags< QFileDevice::Permission >(permissions));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_open2(QFile * this_ptr, int fd, int ioFlags, int handleFlags) {
  return this_ptr->open(fd, QFlags< QIODeviceBase::OpenModeFlag >(ioFlags), QFlags< QFileDevice::FileHandleFlag >(handleFlags));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QFile_size(QFile const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_resize(QFile * this_ptr, long long sz) {
  return this_ptr->resize(sz);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_resize1(QString const * filename, long long sz) {
  return QFile::resize(*filename, sz);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QFile_permissions(QFile const * this_ptr) {
  return int(this_ptr->permissions());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QFile_permissions1(QString const * filename) {
  return int(QFile::permissions(*filename));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_setPermissions(QFile * this_ptr, int permissionSpec) {
  return this_ptr->setPermissions(QFlags< QFileDevice::Permission >(permissionSpec));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFile_setPermissions1(QString const * filename, int permissionSpec) {
  return QFile::setPermissions(*filename, QFlags< QFileDevice::Permission >(permissionSpec));
}


RITUAL_EXPORT QTimeZone * ctr_qt_core_ffi_QTimeZone_QTimeZone() {
  return new QTimeZone();
}


RITUAL_EXPORT QTimeZone * ctr_qt_core_ffi_QTimeZone_QTimeZone1(QTimeZone::Initialization spec) {
  return new QTimeZone(spec);
}


RITUAL_EXPORT QTimeZone * ctr_qt_core_ffi_QTimeZone_QTimeZone2(int offsetSeconds) {
  return new QTimeZone(offsetSeconds);
}


RITUAL_EXPORT QTimeZone * ctr_qt_core_ffi_QTimeZone_QTimeZone3(QByteArray const * ianaId) {
  return new QTimeZone(*ianaId);
}


RITUAL_EXPORT QTimeZone * ctr_qt_core_ffi_QTimeZone_QTimeZone4(QByteArray const * zoneId, int offsetSeconds, QString const * name, QString const * abbreviation, QLocale::Country territory, QString const * comment) {
  return new QTimeZone(*zoneId, offsetSeconds, *name, *abbreviation, territory, *comment);
}


RITUAL_EXPORT QTimeZone * ctr_qt_core_ffi_QTimeZone_QTimeZone5(QTimeZone const * other) {
  return new QTimeZone(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeZone_dQTimeZone(QTimeZone * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTimeZone * ctr_qt_core_ffi_QTimeZone_operator_(QTimeZone * this_ptr, QTimeZone const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeZone_swap(QTimeZone * this_ptr, QTimeZone * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTimeZone_isValid(QTimeZone const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QTimeZone * ctr_qt_core_ffi_QTimeZone_fromSecondsAheadOfUtc(int offset) {
  return new QTimeZone(QTimeZone::fromSecondsAheadOfUtc(offset));
}


RITUAL_EXPORT Qt::TimeSpec ctr_qt_core_ffi_QTimeZone_timeSpec(QTimeZone const * this_ptr) {
  return this_ptr->timeSpec();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeZone_fixedSecondsAheadOfUtc(QTimeZone const * this_ptr) {
  return this_ptr->fixedSecondsAheadOfUtc();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTimeZone_isUtcOrFixedOffset(Qt::TimeSpec spec) {
  return QTimeZone::isUtcOrFixedOffset(spec);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTimeZone_isUtcOrFixedOffset1(QTimeZone const * this_ptr) {
  return this_ptr->isUtcOrFixedOffset();
}


RITUAL_EXPORT QTimeZone * ctr_qt_core_ffi_QTimeZone_asBackendZone(QTimeZone const * this_ptr) {
  return new QTimeZone(this_ptr->asBackendZone());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTimeZone_hasAlternativeName(QTimeZone const * this_ptr, QByteArrayView const * alias) {
  return this_ptr->hasAlternativeName(*alias);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QTimeZone_id(QTimeZone const * this_ptr) {
  return new QByteArray(this_ptr->id());
}


RITUAL_EXPORT QLocale::Country ctr_qt_core_ffi_QTimeZone_territory(QTimeZone const * this_ptr) {
  return this_ptr->territory();
}


RITUAL_EXPORT QLocale::Country ctr_qt_core_ffi_QTimeZone_country(QTimeZone const * this_ptr) {
  return this_ptr->country();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTimeZone_comment(QTimeZone const * this_ptr) {
  return new QString(this_ptr->comment());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTimeZone_displayName(QTimeZone const * this_ptr, QDateTime const * atDateTime, QTimeZone::NameType nameType, QLocale const * locale) {
  return new QString(this_ptr->displayName(*atDateTime, nameType, *locale));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTimeZone_displayName1(QTimeZone const * this_ptr, QTimeZone::TimeType timeType, QTimeZone::NameType nameType, QLocale const * locale) {
  return new QString(this_ptr->displayName(timeType, nameType, *locale));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTimeZone_abbreviation(QTimeZone const * this_ptr, QDateTime const * atDateTime) {
  return new QString(this_ptr->abbreviation(*atDateTime));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeZone_offsetFromUtc(QTimeZone const * this_ptr, QDateTime const * atDateTime) {
  return this_ptr->offsetFromUtc(*atDateTime);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeZone_standardTimeOffset(QTimeZone const * this_ptr, QDateTime const * atDateTime) {
  return this_ptr->standardTimeOffset(*atDateTime);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeZone_daylightTimeOffset(QTimeZone const * this_ptr, QDateTime const * atDateTime) {
  return this_ptr->daylightTimeOffset(*atDateTime);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTimeZone_hasDaylightTime(QTimeZone const * this_ptr) {
  return this_ptr->hasDaylightTime();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTimeZone_isDaylightTime(QTimeZone const * this_ptr, QDateTime const * atDateTime) {
  return this_ptr->isDaylightTime(*atDateTime);
}


RITUAL_EXPORT QTimeZone::OffsetData * ctr_qt_core_ffi_QTimeZone_offsetData(QTimeZone const * this_ptr, QDateTime const * forDateTime) {
  return new QTimeZone::OffsetData(this_ptr->offsetData(*forDateTime));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTimeZone_hasTransitions(QTimeZone const * this_ptr) {
  return this_ptr->hasTransitions();
}


RITUAL_EXPORT QTimeZone::OffsetData * ctr_qt_core_ffi_QTimeZone_nextTransition(QTimeZone const * this_ptr, QDateTime const * afterDateTime) {
  return new QTimeZone::OffsetData(this_ptr->nextTransition(*afterDateTime));
}


RITUAL_EXPORT QTimeZone::OffsetData * ctr_qt_core_ffi_QTimeZone_previousTransition(QTimeZone const * this_ptr, QDateTime const * beforeDateTime) {
  return new QTimeZone::OffsetData(this_ptr->previousTransition(*beforeDateTime));
}


RITUAL_EXPORT QList< QTimeZone::OffsetData > * ctr_qt_core_ffi_QTimeZone_transitions(QTimeZone const * this_ptr, QDateTime const * fromDateTime, QDateTime const * toDateTime) {
  return new QList< QTimeZone::OffsetData >(this_ptr->transitions(*fromDateTime, *toDateTime));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QTimeZone_systemTimeZoneId() {
  return new QByteArray(QTimeZone::systemTimeZoneId());
}


RITUAL_EXPORT QTimeZone * ctr_qt_core_ffi_QTimeZone_systemTimeZone() {
  return new QTimeZone(QTimeZone::systemTimeZone());
}


RITUAL_EXPORT QTimeZone * ctr_qt_core_ffi_QTimeZone_utc() {
  return new QTimeZone(QTimeZone::utc());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTimeZone_isTimeZoneIdAvailable(QByteArray const * ianaId) {
  return QTimeZone::isTimeZoneIdAvailable(*ianaId);
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_core_ffi_QTimeZone_availableTimeZoneIds() {
  return new QList< QByteArray >(QTimeZone::availableTimeZoneIds());
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_core_ffi_QTimeZone_availableTimeZoneIds1(QLocale::Country territory) {
  return new QList< QByteArray >(QTimeZone::availableTimeZoneIds(territory));
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_core_ffi_QTimeZone_availableTimeZoneIds2(int offsetSeconds) {
  return new QList< QByteArray >(QTimeZone::availableTimeZoneIds(offsetSeconds));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QTimeZone_ianaIdToWindowsId(QByteArray const * ianaId) {
  return new QByteArray(QTimeZone::ianaIdToWindowsId(*ianaId));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QTimeZone_windowsIdToDefaultIanaId(QByteArray const * windowsId) {
  return new QByteArray(QTimeZone::windowsIdToDefaultIanaId(*windowsId));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QTimeZone_windowsIdToDefaultIanaId1(QByteArray const * windowsId, QLocale::Country territory) {
  return new QByteArray(QTimeZone::windowsIdToDefaultIanaId(*windowsId, territory));
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_core_ffi_QTimeZone_windowsIdToIanaIds(QByteArray const * windowsId) {
  return new QList< QByteArray >(QTimeZone::windowsIdToIanaIds(*windowsId));
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_core_ffi_QTimeZone_windowsIdToIanaIds1(QByteArray const * windowsId, QLocale::Country territory) {
  return new QList< QByteArray >(QTimeZone::windowsIdToIanaIds(*windowsId, territory));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__64(QDataStream * ds, QTimeZone const * tz) {
  return &operator<<(*ds, *tz);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__65(QDataStream * ds, QTimeZone * tz) {
  return &operator>>(*ds, *tz);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__66(QDebug const * dbg, QTimeZone const * tz) {
  return new QDebug(operator<<(*dbg, *tz));
}


RITUAL_EXPORT QFileInfo * ctr_qt_core_ffi_QFileInfo_QFileInfo1() {
  return new QFileInfo();
}


RITUAL_EXPORT QFileInfo * ctr_qt_core_ffi_QFileInfo_QFileInfo2(QString const * file) {
  return new QFileInfo(*file);
}


RITUAL_EXPORT QFileInfo * ctr_qt_core_ffi_QFileInfo_QFileInfo3(QFileDevice const * file) {
  return new QFileInfo(*file);
}


RITUAL_EXPORT QFileInfo * ctr_qt_core_ffi_QFileInfo_QFileInfo4(QDir const * dir, QString const * file) {
  return new QFileInfo(*dir, *file);
}


RITUAL_EXPORT QFileInfo * ctr_qt_core_ffi_QFileInfo_QFileInfo5(QFileInfo const * fileinfo) {
  return new QFileInfo(*fileinfo);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFileInfo_dQFileInfo(QFileInfo * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QFileInfo * ctr_qt_core_ffi_QFileInfo_operator_(QFileInfo * this_ptr, QFileInfo const * fileinfo) {
  return &this_ptr->operator=(*fileinfo);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFileInfo_swap(QFileInfo * this_ptr, QFileInfo * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFileInfo_setFile(QFileInfo * this_ptr, QString const * file) {
  this_ptr->setFile(*file);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFileInfo_setFile1(QFileInfo * this_ptr, QFileDevice const * file) {
  this_ptr->setFile(*file);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFileInfo_setFile2(QFileInfo * this_ptr, QDir const * dir, QString const * file) {
  this_ptr->setFile(*dir, *file);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_exists(QFileInfo const * this_ptr) {
  return this_ptr->exists();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_exists1(QString const * file) {
  return QFileInfo::exists(*file);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFileInfo_refresh(QFileInfo * this_ptr) {
  this_ptr->refresh();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_filePath(QFileInfo const * this_ptr) {
  return new QString(this_ptr->filePath());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_absoluteFilePath(QFileInfo const * this_ptr) {
  return new QString(this_ptr->absoluteFilePath());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_canonicalFilePath(QFileInfo const * this_ptr) {
  return new QString(this_ptr->canonicalFilePath());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_fileName(QFileInfo const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_baseName(QFileInfo const * this_ptr) {
  return new QString(this_ptr->baseName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_completeBaseName(QFileInfo const * this_ptr) {
  return new QString(this_ptr->completeBaseName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_suffix(QFileInfo const * this_ptr) {
  return new QString(this_ptr->suffix());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_bundleName(QFileInfo const * this_ptr) {
  return new QString(this_ptr->bundleName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_completeSuffix(QFileInfo const * this_ptr) {
  return new QString(this_ptr->completeSuffix());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_path(QFileInfo const * this_ptr) {
  return new QString(this_ptr->path());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_absolutePath(QFileInfo const * this_ptr) {
  return new QString(this_ptr->absolutePath());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_canonicalPath(QFileInfo const * this_ptr) {
  return new QString(this_ptr->canonicalPath());
}


RITUAL_EXPORT QDir * ctr_qt_core_ffi_QFileInfo_dir(QFileInfo const * this_ptr) {
  return new QDir(this_ptr->dir());
}


RITUAL_EXPORT QDir * ctr_qt_core_ffi_QFileInfo_absoluteDir(QFileInfo const * this_ptr) {
  return new QDir(this_ptr->absoluteDir());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isReadable(QFileInfo const * this_ptr) {
  return this_ptr->isReadable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isWritable(QFileInfo const * this_ptr) {
  return this_ptr->isWritable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isExecutable(QFileInfo const * this_ptr) {
  return this_ptr->isExecutable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isHidden(QFileInfo const * this_ptr) {
  return this_ptr->isHidden();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isNativePath(QFileInfo const * this_ptr) {
  return this_ptr->isNativePath();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isRelative(QFileInfo const * this_ptr) {
  return this_ptr->isRelative();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isAbsolute(QFileInfo const * this_ptr) {
  return this_ptr->isAbsolute();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_makeAbsolute(QFileInfo * this_ptr) {
  return this_ptr->makeAbsolute();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isFile(QFileInfo const * this_ptr) {
  return this_ptr->isFile();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isDir(QFileInfo const * this_ptr) {
  return this_ptr->isDir();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isSymLink(QFileInfo const * this_ptr) {
  return this_ptr->isSymLink();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isSymbolicLink(QFileInfo const * this_ptr) {
  return this_ptr->isSymbolicLink();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isOther(QFileInfo const * this_ptr) {
  return this_ptr->isOther();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isShortcut(QFileInfo const * this_ptr) {
  return this_ptr->isShortcut();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isAlias(QFileInfo const * this_ptr) {
  return this_ptr->isAlias();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isJunction(QFileInfo const * this_ptr) {
  return this_ptr->isJunction();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isRoot(QFileInfo const * this_ptr) {
  return this_ptr->isRoot();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_isBundle(QFileInfo const * this_ptr) {
  return this_ptr->isBundle();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_symLinkTarget(QFileInfo const * this_ptr) {
  return new QString(this_ptr->symLinkTarget());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_readSymLink(QFileInfo const * this_ptr) {
  return new QString(this_ptr->readSymLink());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_junctionTarget(QFileInfo const * this_ptr) {
  return new QString(this_ptr->junctionTarget());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_owner(QFileInfo const * this_ptr) {
  return new QString(this_ptr->owner());
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QFileInfo_ownerId(QFileInfo const * this_ptr) {
  return this_ptr->ownerId();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileInfo_group(QFileInfo const * this_ptr) {
  return new QString(this_ptr->group());
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QFileInfo_groupId(QFileInfo const * this_ptr) {
  return this_ptr->groupId();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_permission(QFileInfo const * this_ptr, int permissions) {
  return this_ptr->permission(QFlags< QFileDevice::Permission >(permissions));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QFileInfo_permissions(QFileInfo const * this_ptr) {
  return int(this_ptr->permissions());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QFileInfo_size(QFileInfo const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QFileInfo_birthTime(QFileInfo const * this_ptr) {
  return new QDateTime(this_ptr->birthTime());
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QFileInfo_metadataChangeTime(QFileInfo const * this_ptr) {
  return new QDateTime(this_ptr->metadataChangeTime());
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QFileInfo_lastModified(QFileInfo const * this_ptr) {
  return new QDateTime(this_ptr->lastModified());
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QFileInfo_lastRead(QFileInfo const * this_ptr) {
  return new QDateTime(this_ptr->lastRead());
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QFileInfo_fileTime(QFileInfo const * this_ptr, QFileDevice::FileTime time) {
  return new QDateTime(this_ptr->fileTime(time));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QFileInfo_birthTime1(QFileInfo const * this_ptr, QTimeZone const * tz) {
  return new QDateTime(this_ptr->birthTime(*tz));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QFileInfo_metadataChangeTime1(QFileInfo const * this_ptr, QTimeZone const * tz) {
  return new QDateTime(this_ptr->metadataChangeTime(*tz));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QFileInfo_lastModified1(QFileInfo const * this_ptr, QTimeZone const * tz) {
  return new QDateTime(this_ptr->lastModified(*tz));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QFileInfo_lastRead1(QFileInfo const * this_ptr, QTimeZone const * tz) {
  return new QDateTime(this_ptr->lastRead(*tz));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QFileInfo_fileTime1(QFileInfo const * this_ptr, QFileDevice::FileTime time, QTimeZone const * tz) {
  return new QDateTime(this_ptr->fileTime(time, *tz));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileInfo_caching(QFileInfo const * this_ptr) {
  return this_ptr->caching();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFileInfo_setCaching(QFileInfo * this_ptr, bool on) {
  this_ptr->setCaching(on);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFileInfo_stat(QFileInfo * this_ptr) {
  this_ptr->stat();
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__67(QDebug const * arg1, QFileInfo const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRegisterNormalizedMetaType_QFileInfo(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QFileInfo(*arg1);
}


RITUAL_EXPORT QDir * ctr_qt_core_ffi_QDir_QDir(QDir const * arg1) {
  return new QDir(*arg1);
}


RITUAL_EXPORT QDir * ctr_qt_core_ffi_QDir_QDir1(QString const * path) {
  return new QDir(*path);
}


RITUAL_EXPORT QDir * ctr_qt_core_ffi_QDir_QDir2(QString const * path, QString const * nameFilter, int sort, int filter) {
  return new QDir(*path, *nameFilter, QFlags< QDir::SortFlag >(sort), QFlags< QDir::Filter >(filter));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDir_dQDir(QDir * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QDir * ctr_qt_core_ffi_QDir_operator_(QDir * this_ptr, QDir const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDir_swap(QDir * this_ptr, QDir * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDir_setPath(QDir * this_ptr, QString const * path) {
  this_ptr->setPath(*path);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDir_path(QDir const * this_ptr) {
  return new QString(this_ptr->path());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDir_absolutePath(QDir const * this_ptr) {
  return new QString(this_ptr->absolutePath());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDir_canonicalPath(QDir const * this_ptr) {
  return new QString(this_ptr->canonicalPath());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDir_setSearchPaths(QString const * prefix, QList< QString > const * searchPaths) {
  QDir::setSearchPaths(*prefix, *searchPaths);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDir_addSearchPath(QString const * prefix, QString const * path) {
  QDir::addSearchPath(*prefix, *path);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QDir_searchPaths(QString const * prefix) {
  return new QList< QString >(QDir::searchPaths(*prefix));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDir_dirName(QDir const * this_ptr) {
  return new QString(this_ptr->dirName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDir_filePath(QDir const * this_ptr, QString const * fileName) {
  return new QString(this_ptr->filePath(*fileName));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDir_absoluteFilePath(QDir const * this_ptr, QString const * fileName) {
  return new QString(this_ptr->absoluteFilePath(*fileName));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDir_relativeFilePath(QDir const * this_ptr, QString const * fileName) {
  return new QString(this_ptr->relativeFilePath(*fileName));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDir_toNativeSeparators(QString const * pathName) {
  return new QString(QDir::toNativeSeparators(*pathName));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDir_fromNativeSeparators(QString const * pathName) {
  return new QString(QDir::fromNativeSeparators(*pathName));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_cd(QDir * this_ptr, QString const * dirName) {
  return this_ptr->cd(*dirName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_cdUp(QDir * this_ptr) {
  return this_ptr->cdUp();
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QDir_nameFilters(QDir const * this_ptr) {
  return new QList< QString >(this_ptr->nameFilters());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDir_setNameFilters(QDir * this_ptr, QList< QString > const * nameFilters) {
  this_ptr->setNameFilters(*nameFilters);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDir_filter(QDir const * this_ptr) {
  return int(this_ptr->filter());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDir_setFilter(QDir * this_ptr, int filter) {
  this_ptr->setFilter(QFlags< QDir::Filter >(filter));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDir_sorting(QDir const * this_ptr) {
  return int(this_ptr->sorting());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDir_setSorting(QDir * this_ptr, int sort) {
  this_ptr->setSorting(QFlags< QDir::SortFlag >(sort));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDir_count(QDir const * this_ptr, Qt::Disambiguated_t const * arg1) {
  return this_ptr->count(*arg1);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_isEmpty(QDir const * this_ptr, int filters) {
  return this_ptr->isEmpty(QFlags< QDir::Filter >(filters));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDir_operator__(QDir const * this_ptr, long long arg1) {
  return new QString(this_ptr->operator[](arg1));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QDir_nameFiltersFromString(QString const * nameFilter) {
  return new QList< QString >(QDir::nameFiltersFromString(*nameFilter));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QDir_entryList(QDir const * this_ptr, int filters, int sort) {
  return new QList< QString >(this_ptr->entryList(QFlags< QDir::Filter >(filters), QFlags< QDir::SortFlag >(sort)));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QDir_entryList1(QDir const * this_ptr, QList< QString > const * nameFilters, int filters, int sort) {
  return new QList< QString >(this_ptr->entryList(*nameFilters, QFlags< QDir::Filter >(filters), QFlags< QDir::SortFlag >(sort)));
}


RITUAL_EXPORT QList< QFileInfo > * ctr_qt_core_ffi_QDir_entryInfoList(QDir const * this_ptr, int filters, int sort) {
  return new QList< QFileInfo >(this_ptr->entryInfoList(QFlags< QDir::Filter >(filters), QFlags< QDir::SortFlag >(sort)));
}


RITUAL_EXPORT QList< QFileInfo > * ctr_qt_core_ffi_QDir_entryInfoList1(QDir const * this_ptr, QList< QString > const * nameFilters, int filters, int sort) {
  return new QList< QFileInfo >(this_ptr->entryInfoList(*nameFilters, QFlags< QDir::Filter >(filters), QFlags< QDir::SortFlag >(sort)));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_rmdir(QDir const * this_ptr, QString const * dirName) {
  return this_ptr->rmdir(*dirName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_rmpath(QDir const * this_ptr, QString const * dirPath) {
  return this_ptr->rmpath(*dirPath);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_removeRecursively(QDir * this_ptr) {
  return this_ptr->removeRecursively();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_isReadable(QDir const * this_ptr) {
  return this_ptr->isReadable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_exists(QDir const * this_ptr) {
  return this_ptr->exists();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_isRoot(QDir const * this_ptr) {
  return this_ptr->isRoot();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_isRelativePath(QString const * path) {
  return QDir::isRelativePath(*path);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_isAbsolutePath(QString const * path) {
  return QDir::isAbsolutePath(*path);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_isRelative(QDir const * this_ptr) {
  return this_ptr->isRelative();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_isAbsolute(QDir const * this_ptr) {
  return this_ptr->isAbsolute();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_makeAbsolute(QDir * this_ptr) {
  return this_ptr->makeAbsolute();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_remove(QDir * this_ptr, QString const * fileName) {
  return this_ptr->remove(*fileName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_rename(QDir * this_ptr, QString const * oldName, QString const * newName) {
  return this_ptr->rename(*oldName, *newName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_exists1(QDir const * this_ptr, QString const * name) {
  return this_ptr->exists(*name);
}


RITUAL_EXPORT QList< QFileInfo > * ctr_qt_core_ffi_QDir_drives() {
  return new QList< QFileInfo >(QDir::drives());
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QDir_listSeparator() {
  return new QChar(QDir::listSeparator());
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QDir_separator() {
  return new QChar(QDir::separator());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_setCurrent(QString const * path) {
  return QDir::setCurrent(*path);
}


RITUAL_EXPORT QDir * ctr_qt_core_ffi_QDir_current() {
  return new QDir(QDir::current());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDir_currentPath() {
  return new QString(QDir::currentPath());
}


RITUAL_EXPORT QDir * ctr_qt_core_ffi_QDir_home() {
  return new QDir(QDir::home());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDir_homePath() {
  return new QString(QDir::homePath());
}


RITUAL_EXPORT QDir * ctr_qt_core_ffi_QDir_root() {
  return new QDir(QDir::root());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDir_rootPath() {
  return new QString(QDir::rootPath());
}


RITUAL_EXPORT QDir * ctr_qt_core_ffi_QDir_temp() {
  return new QDir(QDir::temp());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDir_tempPath() {
  return new QString(QDir::tempPath());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_match(QList< QString > const * filters, QString const * fileName) {
  return QDir::match(*filters, *fileName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDir_match1(QString const * filter, QString const * fileName) {
  return QDir::match(*filter, *fileName);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDir_cleanPath(QString const * path) {
  return new QString(QDir::cleanPath(*path));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDir_refresh(QDir const * this_ptr) {
  this_ptr->refresh();
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__68(QDebug const * debug, QDir const * dir) {
  return new QDebug(operator<<(*debug, *dir));
}


RITUAL_EXPORT QDirIterator * ctr_qt_core_ffi_QDirIterator_QDirIterator(QDir const * dir, int flags) {
  return new QDirIterator(*dir, QFlags< QDirIterator::IteratorFlag >(flags));
}


RITUAL_EXPORT QDirIterator * ctr_qt_core_ffi_QDirIterator_QDirIterator1(QString const * path, int flags) {
  return new QDirIterator(*path, QFlags< QDirIterator::IteratorFlag >(flags));
}


RITUAL_EXPORT QDirIterator * ctr_qt_core_ffi_QDirIterator_QDirIterator2(QString const * path, int filter, int flags) {
  return new QDirIterator(*path, QFlags< QDir::Filter >(filter), QFlags< QDirIterator::IteratorFlag >(flags));
}


RITUAL_EXPORT QDirIterator * ctr_qt_core_ffi_QDirIterator_QDirIterator3(QString const * path, QList< QString > const * nameFilters, int filters, int flags) {
  return new QDirIterator(*path, *nameFilters, QFlags< QDir::Filter >(filters), QFlags< QDirIterator::IteratorFlag >(flags));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDirIterator_dQDirIterator(QDirIterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDirIterator_next(QDirIterator * this_ptr) {
  return new QString(this_ptr->next());
}


RITUAL_EXPORT QFileInfo * ctr_qt_core_ffi_QDirIterator_nextFileInfo(QDirIterator * this_ptr) {
  return new QFileInfo(this_ptr->nextFileInfo());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDirIterator_hasNext(QDirIterator const * this_ptr) {
  return this_ptr->hasNext();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDirIterator_fileName(QDirIterator const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDirIterator_filePath(QDirIterator const * this_ptr) {
  return new QString(this_ptr->filePath());
}


RITUAL_EXPORT QFileInfo * ctr_qt_core_ffi_QDirIterator_fileInfo(QDirIterator const * this_ptr) {
  return new QFileInfo(this_ptr->fileInfo());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDirIterator_path(QDirIterator const * this_ptr) {
  return new QString(this_ptr->path());
}


RITUAL_EXPORT QEasingCurve * ctr_qt_core_ffi_QEasingCurve_QEasingCurve(QEasingCurve::Type type) {
  return new QEasingCurve(type);
}


RITUAL_EXPORT QEasingCurve * ctr_qt_core_ffi_QEasingCurve_QEasingCurve1(QEasingCurve const * other) {
  return new QEasingCurve(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEasingCurve_dQEasingCurve(QEasingCurve * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QEasingCurve * ctr_qt_core_ffi_QEasingCurve_operator_(QEasingCurve * this_ptr, QEasingCurve const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEasingCurve_swap(QEasingCurve * this_ptr, QEasingCurve * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QEasingCurve_amplitude(QEasingCurve const * this_ptr) {
  return this_ptr->amplitude();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEasingCurve_setAmplitude(QEasingCurve * this_ptr, double amplitude) {
  this_ptr->setAmplitude(amplitude);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QEasingCurve_period(QEasingCurve const * this_ptr) {
  return this_ptr->period();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEasingCurve_setPeriod(QEasingCurve * this_ptr, double period) {
  this_ptr->setPeriod(period);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QEasingCurve_overshoot(QEasingCurve const * this_ptr) {
  return this_ptr->overshoot();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEasingCurve_setOvershoot(QEasingCurve * this_ptr, double overshoot) {
  this_ptr->setOvershoot(overshoot);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEasingCurve_addCubicBezierSegment(QEasingCurve * this_ptr, QPointF const * c1, QPointF const * c2, QPointF const * endPoint) {
  this_ptr->addCubicBezierSegment(*c1, *c2, *endPoint);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEasingCurve_addTCBSegment(QEasingCurve * this_ptr, QPointF const * nextPoint, double t, double c, double b) {
  this_ptr->addTCBSegment(*nextPoint, t, c, b);
}


RITUAL_EXPORT QList< QPointF > * ctr_qt_core_ffi_QEasingCurve_toCubicSpline(QEasingCurve const * this_ptr) {
  return new QList< QPointF >(this_ptr->toCubicSpline());
}


RITUAL_EXPORT QEasingCurve::Type ctr_qt_core_ffi_QEasingCurve_type(QEasingCurve const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEasingCurve_setType(QEasingCurve * this_ptr, QEasingCurve::Type type) {
  this_ptr->setType(type);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEasingCurve_setCustomType(QEasingCurve * this_ptr, double (*func)(double)) {
  this_ptr->setCustomType(func);
}


RITUAL_EXPORT double (*ctr_qt_core_ffi_QEasingCurve_customType(QEasingCurve const * this_ptr))(double) {
  return this_ptr->customType();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QEasingCurve_valueForProgress(QEasingCurve const * this_ptr, double progress) {
  return this_ptr->valueForProgress(progress);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__69(QDebug const * debug, QEasingCurve const * item) {
  return new QDebug(operator<<(*debug, *item));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__70(QDataStream * arg1, QEasingCurve const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__71(QDataStream * arg1, QEasingCurve * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QElapsedTimer * ctr_qt_core_ffi_QElapsedTimer_QElapsedTimer() {
  return new QElapsedTimer();
}


RITUAL_EXPORT QElapsedTimer::ClockType ctr_qt_core_ffi_QElapsedTimer_clockType() {
  return QElapsedTimer::clockType();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QElapsedTimer_isMonotonic() {
  return QElapsedTimer::isMonotonic();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QElapsedTimer_start(QElapsedTimer * this_ptr) {
  this_ptr->start();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QElapsedTimer_restart(QElapsedTimer * this_ptr) {
  return this_ptr->restart();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QElapsedTimer_invalidate(QElapsedTimer * this_ptr) {
  this_ptr->invalidate();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QElapsedTimer_isValid(QElapsedTimer const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QElapsedTimer_nsecsElapsed(QElapsedTimer const * this_ptr) {
  return this_ptr->nsecsElapsed();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QElapsedTimer_elapsed(QElapsedTimer const * this_ptr) {
  return this_ptr->elapsed();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QElapsedTimer_hasExpired(QElapsedTimer const * this_ptr, long long timeout) {
  return this_ptr->hasExpired(timeout);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QElapsedTimer_msecsSinceReference(QElapsedTimer const * this_ptr) {
  return this_ptr->msecsSinceReference();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QElapsedTimer_msecsTo(QElapsedTimer const * this_ptr, QElapsedTimer const * other) {
  return this_ptr->msecsTo(*other);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QElapsedTimer_secsTo(QElapsedTimer const * this_ptr, QElapsedTimer const * other) {
  return this_ptr->secsTo(*other);
}


RITUAL_EXPORT QException * ctr_qt_core_ffi_QException_QException() {
  return new QException();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QException_dQException(QException * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QException * ctr_qt_core_ffi_QException_QException1(QException const * arg1) {
  return new QException(*arg1);
}


RITUAL_EXPORT QException * ctr_qt_core_ffi_QException_operator_(QException * this_ptr, QException const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QException_raise(QException const * this_ptr) {
  this_ptr->raise();
}


RITUAL_EXPORT QException * ctr_qt_core_ffi_QException_clone(QException const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUnhandledException_dQUnhandledException(QUnhandledException * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QUnhandledException * ctr_qt_core_ffi_QUnhandledException_QUnhandledException1(QUnhandledException const * other) {
  return new QUnhandledException(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUnhandledException_swap(QUnhandledException * this_ptr, QUnhandledException * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QUnhandledException * ctr_qt_core_ffi_QUnhandledException_operator_1(QUnhandledException * this_ptr, QUnhandledException const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUnhandledException_raise(QUnhandledException const * this_ptr) {
  this_ptr->raise();
}


RITUAL_EXPORT QUnhandledException * ctr_qt_core_ffi_QUnhandledException_clone(QUnhandledException const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFactoryInterface_dQFactoryInterface(QFactoryInterface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QFactoryInterface_keys(QFactoryInterface const * this_ptr) {
  return new QList< QString >(this_ptr->keys());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QFileSelector_metaObject(QFileSelector const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QFileSelector_qt_metacast(QFileSelector * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QFileSelector_qt_metacall(QFileSelector * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileSelector_tr(char const * s, char const * c, int n) {
  return new QString(QFileSelector::tr(s, c, n));
}


RITUAL_EXPORT QFileSelector * ctr_qt_core_ffi_QFileSelector_QFileSelector(QObject * parent) {
  return new QFileSelector(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFileSelector_dQFileSelector(QFileSelector * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileSelector_select(QFileSelector const * this_ptr, QString const * filePath) {
  return new QString(this_ptr->select(*filePath));
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QFileSelector_select1(QFileSelector const * this_ptr, QUrl const * filePath) {
  return new QUrl(this_ptr->select(*filePath));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QFileSelector_extraSelectors(QFileSelector const * this_ptr) {
  return new QList< QString >(this_ptr->extraSelectors());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFileSelector_setExtraSelectors(QFileSelector * this_ptr, QList< QString > const * list) {
  this_ptr->setExtraSelectors(*list);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QFileSelector_allSelectors(QFileSelector const * this_ptr) {
  return new QList< QString >(this_ptr->allSelectors());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QFileSystemWatcher_metaObject(QFileSystemWatcher const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QFileSystemWatcher_qt_metacast(QFileSystemWatcher * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QFileSystemWatcher_qt_metacall(QFileSystemWatcher * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFileSystemWatcher_tr(char const * s, char const * c, int n) {
  return new QString(QFileSystemWatcher::tr(s, c, n));
}


RITUAL_EXPORT QFileSystemWatcher * ctr_qt_core_ffi_QFileSystemWatcher_QFileSystemWatcher(QObject * parent) {
  return new QFileSystemWatcher(parent);
}


RITUAL_EXPORT QFileSystemWatcher * ctr_qt_core_ffi_QFileSystemWatcher_QFileSystemWatcher1(QList< QString > const * paths, QObject * parent) {
  return new QFileSystemWatcher(*paths, parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFileSystemWatcher_dQFileSystemWatcher(QFileSystemWatcher * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileSystemWatcher_addPath(QFileSystemWatcher * this_ptr, QString const * file) {
  return this_ptr->addPath(*file);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QFileSystemWatcher_addPaths(QFileSystemWatcher * this_ptr, QList< QString > const * files) {
  return new QList< QString >(this_ptr->addPaths(*files));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFileSystemWatcher_removePath(QFileSystemWatcher * this_ptr, QString const * file) {
  return this_ptr->removePath(*file);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QFileSystemWatcher_removePaths(QFileSystemWatcher * this_ptr, QList< QString > const * files) {
  return new QList< QString >(this_ptr->removePaths(*files));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QFileSystemWatcher_files(QFileSystemWatcher const * this_ptr) {
  return new QList< QString >(this_ptr->files());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QFileSystemWatcher_directories(QFileSystemWatcher const * this_ptr) {
  return new QList< QString >(this_ptr->directories());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QThread_metaObject(QThread const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QThread_qt_metacast(QThread * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QThread_qt_metacall(QThread * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QThread_tr(char const * s, char const * c, int n) {
  return new QString(QThread::tr(s, c, n));
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QThread_currentThreadId() {
  return QThread::currentThreadId();
}


RITUAL_EXPORT QThread * ctr_qt_core_ffi_QThread_currentThread() {
  return QThread::currentThread();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QThread_isMainThread() {
  return QThread::isMainThread();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QThread_idealThreadCount() {
  return QThread::idealThreadCount();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_yieldCurrentThread() {
  QThread::yieldCurrentThread();
}


RITUAL_EXPORT QThread * ctr_qt_core_ffi_QThread_QThread(QObject * parent) {
  return new QThread(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_dQThread(QThread * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_setPriority(QThread * this_ptr, QThread::Priority priority) {
  this_ptr->setPriority(priority);
}


RITUAL_EXPORT QThread::Priority ctr_qt_core_ffi_QThread_priority(QThread const * this_ptr) {
  return this_ptr->priority();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QThread_isFinished(QThread const * this_ptr) {
  return this_ptr->isFinished();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QThread_isRunning(QThread const * this_ptr) {
  return this_ptr->isRunning();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_requestInterruption(QThread * this_ptr) {
  this_ptr->requestInterruption();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QThread_isInterruptionRequested(QThread const * this_ptr) {
  return this_ptr->isInterruptionRequested();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_setStackSize(QThread * this_ptr, unsigned int stackSize) {
  this_ptr->setStackSize(stackSize);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QThread_stackSize(QThread const * this_ptr) {
  return this_ptr->stackSize();
}


RITUAL_EXPORT QAbstractEventDispatcher * ctr_qt_core_ffi_QThread_eventDispatcher(QThread const * this_ptr) {
  return this_ptr->eventDispatcher();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_setEventDispatcher(QThread * this_ptr, QAbstractEventDispatcher * eventDispatcher) {
  this_ptr->setEventDispatcher(eventDispatcher);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QThread_event(QThread * this_ptr, QEvent * event) {
  return this_ptr->event(event);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QThread_loopLevel(QThread const * this_ptr) {
  return this_ptr->loopLevel();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QThread_isCurrentThread(QThread const * this_ptr) {
  return this_ptr->isCurrentThread();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_setServiceLevel(QThread * this_ptr, QThread::QualityOfService serviceLevel) {
  this_ptr->setServiceLevel(serviceLevel);
}


RITUAL_EXPORT QThread::QualityOfService ctr_qt_core_ffi_QThread_serviceLevel(QThread const * this_ptr) {
  return this_ptr->serviceLevel();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_start(QThread * this_ptr, QThread::Priority arg1) {
  this_ptr->start(arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_terminate(QThread * this_ptr) {
  this_ptr->terminate();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_exit(QThread * this_ptr, int retcode) {
  this_ptr->exit(retcode);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_quit(QThread * this_ptr) {
  this_ptr->quit();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QThread_wait(QThread * this_ptr, QDeadlineTimer const * deadline) {
  return this_ptr->wait(*deadline);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QThread_wait1(QThread * this_ptr, unsigned long time) {
  return this_ptr->wait(time);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_sleep(unsigned long arg1) {
  QThread::sleep(arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_msleep(unsigned long arg1) {
  QThread::msleep(arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThread_usleep(unsigned long arg1) {
  QThread::usleep(arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRunnable_run(QRunnable * this_ptr) {
  this_ptr->run();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRunnable_dQRunnable(QRunnable * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRunnable_autoDelete(QRunnable const * this_ptr) {
  return this_ptr->autoDelete();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRunnable_setAutoDelete(QRunnable * this_ptr, bool autoDelete) {
  this_ptr->setAutoDelete(autoDelete);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QThreadPool_metaObject(QThreadPool const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QThreadPool_qt_metacast(QThreadPool * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QThreadPool_qt_metacall(QThreadPool * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QThreadPool_tr(char const * s, char const * c, int n) {
  return new QString(QThreadPool::tr(s, c, n));
}


RITUAL_EXPORT QThreadPool * ctr_qt_core_ffi_QThreadPool_QThreadPool(QObject * parent) {
  return new QThreadPool(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThreadPool_dQThreadPool(QThreadPool * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QThreadPool * ctr_qt_core_ffi_QThreadPool_globalInstance() {
  return QThreadPool::globalInstance();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThreadPool_start(QThreadPool * this_ptr, QRunnable * runnable, int priority) {
  this_ptr->start(runnable, priority);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QThreadPool_tryStart(QThreadPool * this_ptr, QRunnable * runnable) {
  return this_ptr->tryStart(runnable);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThreadPool_startOnReservedThread(QThreadPool * this_ptr, QRunnable * runnable) {
  this_ptr->startOnReservedThread(runnable);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QThreadPool_expiryTimeout(QThreadPool const * this_ptr) {
  return this_ptr->expiryTimeout();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThreadPool_setExpiryTimeout(QThreadPool * this_ptr, int expiryTimeout) {
  this_ptr->setExpiryTimeout(expiryTimeout);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QThreadPool_maxThreadCount(QThreadPool const * this_ptr) {
  return this_ptr->maxThreadCount();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThreadPool_setMaxThreadCount(QThreadPool * this_ptr, int maxThreadCount) {
  this_ptr->setMaxThreadCount(maxThreadCount);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QThreadPool_activeThreadCount(QThreadPool const * this_ptr) {
  return this_ptr->activeThreadCount();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThreadPool_setStackSize(QThreadPool * this_ptr, unsigned int stackSize) {
  this_ptr->setStackSize(stackSize);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QThreadPool_stackSize(QThreadPool const * this_ptr) {
  return this_ptr->stackSize();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThreadPool_setThreadPriority(QThreadPool * this_ptr, QThread::Priority priority) {
  this_ptr->setThreadPriority(priority);
}


RITUAL_EXPORT QThread::Priority ctr_qt_core_ffi_QThreadPool_threadPriority(QThreadPool const * this_ptr) {
  return this_ptr->threadPriority();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThreadPool_reserveThread(QThreadPool * this_ptr) {
  this_ptr->reserveThread();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThreadPool_releaseThread(QThreadPool * this_ptr) {
  this_ptr->releaseThread();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThreadPool_setServiceLevel(QThreadPool * this_ptr, QThread::QualityOfService serviceLevel) {
  this_ptr->setServiceLevel(serviceLevel);
}


RITUAL_EXPORT QThread::QualityOfService ctr_qt_core_ffi_QThreadPool_serviceLevel(QThreadPool const * this_ptr) {
  return this_ptr->serviceLevel();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QThreadPool_waitForDone(QThreadPool * this_ptr, int msecs) {
  return this_ptr->waitForDone(msecs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QThreadPool_waitForDone1(QThreadPool * this_ptr, QDeadlineTimer const * deadline) {
  return this_ptr->waitForDone(*deadline);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QThreadPool_clear(QThreadPool * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QThreadPool_contains(QThreadPool const * this_ptr, QThread const * thread) {
  return this_ptr->contains(thread);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QThreadPool_tryTake(QThreadPool * this_ptr, QRunnable * runnable) {
  return this_ptr->tryTake(runnable);
}


RITUAL_EXPORT QFuture< void > * ctr_qt_core_ffi_QtFuture_makeReadyVoidFuture() {
  return new QFuture< void >(QtFuture::makeReadyVoidFuture());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QFutureWatcherBase_metaObject(QFutureWatcherBase const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QFutureWatcherBase_qt_metacast(QFutureWatcherBase * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QFutureWatcherBase_qt_metacall(QFutureWatcherBase * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFutureWatcherBase_tr(char const * s, char const * c, int n) {
  return new QString(QFutureWatcherBase::tr(s, c, n));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QFutureWatcherBase_progressValue(QFutureWatcherBase const * this_ptr) {
  return this_ptr->progressValue();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QFutureWatcherBase_progressMinimum(QFutureWatcherBase const * this_ptr) {
  return this_ptr->progressMinimum();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QFutureWatcherBase_progressMaximum(QFutureWatcherBase const * this_ptr) {
  return this_ptr->progressMaximum();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QFutureWatcherBase_progressText(QFutureWatcherBase const * this_ptr) {
  return new QString(this_ptr->progressText());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFutureWatcherBase_isStarted(QFutureWatcherBase const * this_ptr) {
  return this_ptr->isStarted();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFutureWatcherBase_isFinished(QFutureWatcherBase const * this_ptr) {
  return this_ptr->isFinished();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFutureWatcherBase_isRunning(QFutureWatcherBase const * this_ptr) {
  return this_ptr->isRunning();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFutureWatcherBase_isCanceled(QFutureWatcherBase const * this_ptr) {
  return this_ptr->isCanceled();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFutureWatcherBase_isPaused(QFutureWatcherBase const * this_ptr) {
  return this_ptr->isPaused();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFutureWatcherBase_isSuspending(QFutureWatcherBase const * this_ptr) {
  return this_ptr->isSuspending();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFutureWatcherBase_isSuspended(QFutureWatcherBase const * this_ptr) {
  return this_ptr->isSuspended();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFutureWatcherBase_waitForFinished(QFutureWatcherBase * this_ptr) {
  this_ptr->waitForFinished();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFutureWatcherBase_setPendingResultsLimit(QFutureWatcherBase * this_ptr, int limit) {
  this_ptr->setPendingResultsLimit(limit);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QFutureWatcherBase_event(QFutureWatcherBase * this_ptr, QEvent * event) {
  return this_ptr->event(event);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFutureWatcherBase_cancel(QFutureWatcherBase * this_ptr) {
  this_ptr->cancel();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFutureWatcherBase_setSuspended(QFutureWatcherBase * this_ptr, bool suspend) {
  this_ptr->setSuspended(suspend);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFutureWatcherBase_suspend(QFutureWatcherBase * this_ptr) {
  this_ptr->suspend();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFutureWatcherBase_resume(QFutureWatcherBase * this_ptr) {
  this_ptr->resume();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFutureWatcherBase_toggleSuspended(QFutureWatcherBase * this_ptr) {
  this_ptr->toggleSuspended();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFutureWatcherBase_setPaused(QFutureWatcherBase * this_ptr, bool paused) {
  this_ptr->setPaused(paused);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFutureWatcherBase_pause(QFutureWatcherBase * this_ptr) {
  this_ptr->pause();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFutureWatcherBase_togglePaused(QFutureWatcherBase * this_ptr) {
  this_ptr->togglePaused();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QIdentityProxyModel_metaObject(QIdentityProxyModel const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QIdentityProxyModel_qt_metacast(QIdentityProxyModel * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QIdentityProxyModel_qt_metacall(QIdentityProxyModel * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QIdentityProxyModel_tr(char const * s, char const * c, int n) {
  return new QString(QIdentityProxyModel::tr(s, c, n));
}


RITUAL_EXPORT QIdentityProxyModel * ctr_qt_core_ffi_QIdentityProxyModel_QIdentityProxyModel(QObject * parent) {
  return new QIdentityProxyModel(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QIdentityProxyModel_dQIdentityProxyModel(QIdentityProxyModel * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QIdentityProxyModel_columnCount(QIdentityProxyModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->columnCount(*parent);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QIdentityProxyModel_index(QIdentityProxyModel const * this_ptr, int row, int column, QModelIndex const * parent) {
  return new QModelIndex(this_ptr->index(row, column, *parent));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QIdentityProxyModel_mapFromSource(QIdentityProxyModel const * this_ptr, QModelIndex const * sourceIndex) {
  return new QModelIndex(this_ptr->mapFromSource(*sourceIndex));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QIdentityProxyModel_mapToSource(QIdentityProxyModel const * this_ptr, QModelIndex const * proxyIndex) {
  return new QModelIndex(this_ptr->mapToSource(*proxyIndex));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QIdentityProxyModel_parent(QIdentityProxyModel const * this_ptr, QModelIndex const * child) {
  return new QModelIndex(this_ptr->parent(*child));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QIdentityProxyModel_rowCount(QIdentityProxyModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->rowCount(*parent);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QIdentityProxyModel_headerData(QIdentityProxyModel const * this_ptr, int section, Qt::Orientation orientation, int role) {
  return new QVariant(this_ptr->headerData(section, orientation, role));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIdentityProxyModel_dropMimeData(QIdentityProxyModel * this_ptr, QMimeData const * data, Qt::DropAction action, int row, int column, QModelIndex const * parent) {
  return this_ptr->dropMimeData(data, action, row, column, *parent);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QIdentityProxyModel_sibling(QIdentityProxyModel const * this_ptr, int row, int column, QModelIndex const * idx) {
  return new QModelIndex(this_ptr->sibling(row, column, *idx));
}


RITUAL_EXPORT QItemSelection * ctr_qt_core_ffi_QIdentityProxyModel_mapSelectionFromSource(QIdentityProxyModel const * this_ptr, QItemSelection const * selection) {
  return new QItemSelection(this_ptr->mapSelectionFromSource(*selection));
}


RITUAL_EXPORT QItemSelection * ctr_qt_core_ffi_QIdentityProxyModel_mapSelectionToSource(QIdentityProxyModel const * this_ptr, QItemSelection const * selection) {
  return new QItemSelection(this_ptr->mapSelectionToSource(*selection));
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QIdentityProxyModel_match(QIdentityProxyModel const * this_ptr, QModelIndex const * start, int role, QVariant const * value, int hits, int flags) {
  return new QList< QModelIndex >(this_ptr->match(*start, role, *value, hits, QFlags< Qt::MatchFlag >(flags)));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QIdentityProxyModel_setSourceModel(QIdentityProxyModel * this_ptr, QAbstractItemModel * sourceModel) {
  this_ptr->setSourceModel(sourceModel);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIdentityProxyModel_insertColumns(QIdentityProxyModel * this_ptr, int column, int count, QModelIndex const * parent) {
  return this_ptr->insertColumns(column, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIdentityProxyModel_insertRows(QIdentityProxyModel * this_ptr, int row, int count, QModelIndex const * parent) {
  return this_ptr->insertRows(row, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIdentityProxyModel_removeColumns(QIdentityProxyModel * this_ptr, int column, int count, QModelIndex const * parent) {
  return this_ptr->removeColumns(column, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIdentityProxyModel_removeRows(QIdentityProxyModel * this_ptr, int row, int count, QModelIndex const * parent) {
  return this_ptr->removeRows(row, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIdentityProxyModel_moveRows(QIdentityProxyModel * this_ptr, QModelIndex const * sourceParent, int sourceRow, int count, QModelIndex const * destinationParent, int destinationChild) {
  return this_ptr->moveRows(*sourceParent, sourceRow, count, *destinationParent, destinationChild);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIdentityProxyModel_moveColumns(QIdentityProxyModel * this_ptr, QModelIndex const * sourceParent, int sourceColumn, int count, QModelIndex const * destinationParent, int destinationChild) {
  return this_ptr->moveColumns(*sourceParent, sourceColumn, count, *destinationParent, destinationChild);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIdentityProxyModel_handleSourceLayoutChanges(QIdentityProxyModel const * this_ptr) {
  return this_ptr->handleSourceLayoutChanges();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIdentityProxyModel_handleSourceDataChanges(QIdentityProxyModel const * this_ptr) {
  return this_ptr->handleSourceDataChanges();
}


RITUAL_EXPORT QItemSelectionRange * ctr_qt_core_ffi_QItemSelectionRange_QItemSelectionRange() {
  return new QItemSelectionRange();
}


RITUAL_EXPORT QItemSelectionRange * ctr_qt_core_ffi_QItemSelectionRange_QItemSelectionRange1(QModelIndex const * topL, QModelIndex const * bottomR) {
  return new QItemSelectionRange(*topL, *bottomR);
}


RITUAL_EXPORT QItemSelectionRange * ctr_qt_core_ffi_QItemSelectionRange_QItemSelectionRange2(QModelIndex const * index) {
  return new QItemSelectionRange(*index);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QItemSelectionRange_swap(QItemSelectionRange * this_ptr, QItemSelectionRange * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QItemSelectionRange_top(QItemSelectionRange const * this_ptr) {
  return this_ptr->top();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QItemSelectionRange_left(QItemSelectionRange const * this_ptr) {
  return this_ptr->left();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QItemSelectionRange_bottom(QItemSelectionRange const * this_ptr) {
  return this_ptr->bottom();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QItemSelectionRange_right(QItemSelectionRange const * this_ptr) {
  return this_ptr->right();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QItemSelectionRange_width(QItemSelectionRange const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QItemSelectionRange_height(QItemSelectionRange const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT QPersistentModelIndex const * ctr_qt_core_ffi_QItemSelectionRange_topLeft(QItemSelectionRange const * this_ptr) {
  return &this_ptr->topLeft();
}


RITUAL_EXPORT QPersistentModelIndex const * ctr_qt_core_ffi_QItemSelectionRange_bottomRight(QItemSelectionRange const * this_ptr) {
  return &this_ptr->bottomRight();
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QItemSelectionRange_parent(QItemSelectionRange const * this_ptr) {
  return new QModelIndex(this_ptr->parent());
}


RITUAL_EXPORT QAbstractItemModel const * ctr_qt_core_ffi_QItemSelectionRange_model(QItemSelectionRange const * this_ptr) {
  return this_ptr->model();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelectionRange_contains(QItemSelectionRange const * this_ptr, QModelIndex const * index) {
  return this_ptr->contains(*index);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelectionRange_contains1(QItemSelectionRange const * this_ptr, int row, int column, QModelIndex const * parentIndex) {
  return this_ptr->contains(row, column, *parentIndex);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelectionRange_intersects(QItemSelectionRange const * this_ptr, QItemSelectionRange const * other) {
  return this_ptr->intersects(*other);
}


RITUAL_EXPORT QItemSelectionRange * ctr_qt_core_ffi_QItemSelectionRange_intersected(QItemSelectionRange const * this_ptr, QItemSelectionRange const * other) {
  return new QItemSelectionRange(this_ptr->intersected(*other));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelectionRange_isValid(QItemSelectionRange const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelectionRange_isEmpty(QItemSelectionRange const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QItemSelectionRange_indexes(QItemSelectionRange const * this_ptr) {
  return new QList< QModelIndex >(this_ptr->indexes());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QItemSelectionModel_metaObject(QItemSelectionModel const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QItemSelectionModel_qt_metacast(QItemSelectionModel * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QItemSelectionModel_qt_metacall(QItemSelectionModel * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QItemSelectionModel_tr(char const * s, char const * c, int n) {
  return new QString(QItemSelectionModel::tr(s, c, n));
}


RITUAL_EXPORT QItemSelectionModel * ctr_qt_core_ffi_QItemSelectionModel_QItemSelectionModel(QAbstractItemModel * model) {
  return new QItemSelectionModel(model);
}


RITUAL_EXPORT QItemSelectionModel * ctr_qt_core_ffi_QItemSelectionModel_QItemSelectionModel1(QAbstractItemModel * model, QObject * parent) {
  return new QItemSelectionModel(model, parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QItemSelectionModel_dQItemSelectionModel(QItemSelectionModel * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QItemSelectionModel_currentIndex(QItemSelectionModel const * this_ptr) {
  return new QModelIndex(this_ptr->currentIndex());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelectionModel_isSelected(QItemSelectionModel const * this_ptr, QModelIndex const * index) {
  return this_ptr->isSelected(*index);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelectionModel_isRowSelected(QItemSelectionModel const * this_ptr, int row, QModelIndex const * parent) {
  return this_ptr->isRowSelected(row, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelectionModel_isColumnSelected(QItemSelectionModel const * this_ptr, int column, QModelIndex const * parent) {
  return this_ptr->isColumnSelected(column, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelectionModel_rowIntersectsSelection(QItemSelectionModel const * this_ptr, int row, QModelIndex const * parent) {
  return this_ptr->rowIntersectsSelection(row, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelectionModel_columnIntersectsSelection(QItemSelectionModel const * this_ptr, int column, QModelIndex const * parent) {
  return this_ptr->columnIntersectsSelection(column, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelectionModel_hasSelection(QItemSelectionModel const * this_ptr) {
  return this_ptr->hasSelection();
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QItemSelectionModel_selectedIndexes(QItemSelectionModel const * this_ptr) {
  return new QList< QModelIndex >(this_ptr->selectedIndexes());
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QItemSelectionModel_selectedRows(QItemSelectionModel const * this_ptr, int column) {
  return new QList< QModelIndex >(this_ptr->selectedRows(column));
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QItemSelectionModel_selectedColumns(QItemSelectionModel const * this_ptr, int row) {
  return new QList< QModelIndex >(this_ptr->selectedColumns(row));
}


RITUAL_EXPORT QItemSelection * ctr_qt_core_ffi_QItemSelectionModel_selection(QItemSelectionModel const * this_ptr) {
  return new QItemSelection(this_ptr->selection());
}


RITUAL_EXPORT QAbstractItemModel const * ctr_qt_core_ffi_QItemSelectionModel_model(QItemSelectionModel const * this_ptr) {
  return this_ptr->model();
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_core_ffi_QItemSelectionModel_model1(QItemSelectionModel * this_ptr) {
  return this_ptr->model();
}


RITUAL_EXPORT QBindable< QAbstractItemModel * > * ctr_qt_core_ffi_QItemSelectionModel_bindableModel(QItemSelectionModel * this_ptr) {
  return new QBindable< QAbstractItemModel * >(this_ptr->bindableModel());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QItemSelectionModel_setModel(QItemSelectionModel * this_ptr, QAbstractItemModel * model) {
  this_ptr->setModel(model);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QItemSelectionModel_setCurrentIndex(QItemSelectionModel * this_ptr, QModelIndex const * index, int command) {
  this_ptr->setCurrentIndex(*index, QFlags< QItemSelectionModel::SelectionFlag >(command));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QItemSelectionModel_select(QItemSelectionModel * this_ptr, QModelIndex const * index, int command) {
  this_ptr->select(*index, QFlags< QItemSelectionModel::SelectionFlag >(command));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QItemSelectionModel_select1(QItemSelectionModel * this_ptr, QItemSelection const * selection, int command) {
  this_ptr->select(*selection, QFlags< QItemSelectionModel::SelectionFlag >(command));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QItemSelectionModel_clear(QItemSelectionModel * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QItemSelectionModel_reset(QItemSelectionModel * this_ptr) {
  this_ptr->reset();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QItemSelectionModel_clearSelection(QItemSelectionModel * this_ptr) {
  this_ptr->clearSelection();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QItemSelectionModel_clearCurrentIndex(QItemSelectionModel * this_ptr) {
  this_ptr->clearCurrentIndex();
}


RITUAL_EXPORT QItemSelection * ctr_qt_core_ffi_QItemSelection_QItemSelection(QModelIndex const * topLeft, QModelIndex const * bottomRight) {
  return new QItemSelection(*topLeft, *bottomRight);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QItemSelection_select(QItemSelection * this_ptr, QModelIndex const * topLeft, QModelIndex const * bottomRight) {
  this_ptr->select(*topLeft, *bottomRight);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QItemSelection_contains(QItemSelection const * this_ptr, QModelIndex const * index) {
  return this_ptr->contains(*index);
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QItemSelection_indexes(QItemSelection const * this_ptr) {
  return new QList< QModelIndex >(this_ptr->indexes());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QItemSelection_merge(QItemSelection * this_ptr, QItemSelection const * other, int command) {
  this_ptr->merge(*other, QFlags< QItemSelectionModel::SelectionFlag >(command));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QItemSelection_split(QItemSelectionRange const * range, QItemSelectionRange const * other, QItemSelection * result) {
  QItemSelection::split(*range, *other, result);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__72(QDebug const * arg1, QItemSelectionRange const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRegisterNormalizedMetaType_QItemSelectionRange(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QItemSelectionRange(*arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRegisterNormalizedMetaType_QItemSelection(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QItemSelection(*arg1);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QJsonParseError_errorString(QJsonParseError const * this_ptr) {
  return new QString(this_ptr->errorString());
}


RITUAL_EXPORT QJsonDocument * ctr_qt_core_ffi_QJsonDocument_QJsonDocument() {
  return new QJsonDocument();
}


RITUAL_EXPORT QJsonDocument * ctr_qt_core_ffi_QJsonDocument_QJsonDocument1(QJsonObject const * object) {
  return new QJsonDocument(*object);
}


RITUAL_EXPORT QJsonDocument * ctr_qt_core_ffi_QJsonDocument_QJsonDocument2(QJsonArray const * array) {
  return new QJsonDocument(*array);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonDocument_dQJsonDocument(QJsonDocument * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QJsonDocument * ctr_qt_core_ffi_QJsonDocument_QJsonDocument3(QJsonDocument const * other) {
  return new QJsonDocument(*other);
}


RITUAL_EXPORT QJsonDocument * ctr_qt_core_ffi_QJsonDocument_operator_(QJsonDocument * this_ptr, QJsonDocument const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonDocument_swap(QJsonDocument * this_ptr, QJsonDocument * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QJsonDocument * ctr_qt_core_ffi_QJsonDocument_fromVariant(QVariant const * variant) {
  return new QJsonDocument(QJsonDocument::fromVariant(*variant));
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QJsonDocument_toVariant(QJsonDocument const * this_ptr) {
  return new QVariant(this_ptr->toVariant());
}


RITUAL_EXPORT QJsonDocument * ctr_qt_core_ffi_QJsonDocument_fromJson(QByteArray const * json, QJsonParseError * error) {
  return new QJsonDocument(QJsonDocument::fromJson(*json, error));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QJsonDocument_toJson(QJsonDocument const * this_ptr, QJsonDocument::JsonFormat format) {
  return new QByteArray(this_ptr->toJson(format));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonDocument_isEmpty(QJsonDocument const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonDocument_isArray(QJsonDocument const * this_ptr) {
  return this_ptr->isArray();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonDocument_isObject(QJsonDocument const * this_ptr) {
  return this_ptr->isObject();
}


RITUAL_EXPORT QJsonObject * ctr_qt_core_ffi_QJsonDocument_object(QJsonDocument const * this_ptr) {
  return new QJsonObject(this_ptr->object());
}


RITUAL_EXPORT QJsonArray * ctr_qt_core_ffi_QJsonDocument_array(QJsonDocument const * this_ptr) {
  return new QJsonArray(this_ptr->array());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonDocument_setObject(QJsonDocument * this_ptr, QJsonObject const * object) {
  this_ptr->setObject(*object);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonDocument_setArray(QJsonDocument * this_ptr, QJsonArray const * array) {
  this_ptr->setArray(*array);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonDocument_operator__(QJsonDocument const * this_ptr, QString const * key) {
  return new QJsonValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonDocument_operator__1(QJsonDocument const * this_ptr, QStringView const * key) {
  return new QJsonValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonDocument_operator__2(QJsonDocument const * this_ptr, QLatin1String const * key) {
  return new QJsonValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonDocument_operator__3(QJsonDocument const * this_ptr, long long i) {
  return new QJsonValue(this_ptr->operator[](i));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonDocument_isNull(QJsonDocument const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__73(QDebug const * arg1, QJsonDocument const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__74(QDataStream * arg1, QJsonDocument const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__75(QDataStream * arg1, QJsonDocument * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_QJsonValue(QJsonValue::Type arg1) {
  return new QJsonValue(arg1);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_QJsonValue1(bool b) {
  return new QJsonValue(b);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_QJsonValue2(double n) {
  return new QJsonValue(n);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_QJsonValue3(int n) {
  return new QJsonValue(n);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_QJsonValue4(long long v) {
  return new QJsonValue(v);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_QJsonValue5(QString const * s) {
  return new QJsonValue(*s);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_QJsonValue6(QLatin1String const * s) {
  return new QJsonValue(*s);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_QJsonValue7(char const * s) {
  return new QJsonValue(s);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_QJsonValue8(QJsonArray const * a) {
  return new QJsonValue(*a);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_QJsonValue10(QJsonObject const * o) {
  return new QJsonValue(*o);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonValue_dQJsonValue(QJsonValue * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_QJsonValue12(QJsonValue const * other) {
  return new QJsonValue(*other);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_operator_(QJsonValue * this_ptr, QJsonValue const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonValue_swap(QJsonValue * this_ptr, QJsonValue * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_fromVariant(QVariant const * variant) {
  return new QJsonValue(QJsonValue::fromVariant(*variant));
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QJsonValue_toVariant(QJsonValue const * this_ptr) {
  return new QVariant(this_ptr->toVariant());
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_fromJson(QByteArrayView const * json, QJsonParseError * error) {
  return new QJsonValue(QJsonValue::fromJson(*json, error));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QJsonValue_toJson(QJsonValue const * this_ptr, QJsonDocument::JsonFormat format) {
  return new QByteArray(this_ptr->toJson(format));
}


RITUAL_EXPORT QJsonValue::Type ctr_qt_core_ffi_QJsonValue_type(QJsonValue const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValue_isNull(QJsonValue const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValue_isBool(QJsonValue const * this_ptr) {
  return this_ptr->isBool();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValue_isDouble(QJsonValue const * this_ptr) {
  return this_ptr->isDouble();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValue_isString(QJsonValue const * this_ptr) {
  return this_ptr->isString();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValue_isArray(QJsonValue const * this_ptr) {
  return this_ptr->isArray();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValue_isObject(QJsonValue const * this_ptr) {
  return this_ptr->isObject();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValue_isUndefined(QJsonValue const * this_ptr) {
  return this_ptr->isUndefined();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValue_toBool(QJsonValue const * this_ptr, bool defaultValue) {
  return this_ptr->toBool(defaultValue);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QJsonValue_toInt(QJsonValue const * this_ptr, int defaultValue) {
  return this_ptr->toInt(defaultValue);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QJsonValue_toInteger(QJsonValue const * this_ptr, long long defaultValue) {
  return this_ptr->toInteger(defaultValue);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QJsonValue_toDouble(QJsonValue const * this_ptr, double defaultValue) {
  return this_ptr->toDouble(defaultValue);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QJsonValue_toString(QJsonValue const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QJsonValue_toString1(QJsonValue const * this_ptr, QString const * defaultValue) {
  return new QString(this_ptr->toString(*defaultValue));
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QJsonValue_toStringView(QJsonValue const * this_ptr, QAnyStringView const * defaultValue) {
  return new QAnyStringView(this_ptr->toStringView(*defaultValue));
}


RITUAL_EXPORT QJsonArray * ctr_qt_core_ffi_QJsonValue_toArray(QJsonValue const * this_ptr) {
  return new QJsonArray(this_ptr->toArray());
}


RITUAL_EXPORT QJsonArray * ctr_qt_core_ffi_QJsonValue_toArray1(QJsonValue const * this_ptr, QJsonArray const * defaultValue) {
  return new QJsonArray(this_ptr->toArray(*defaultValue));
}


RITUAL_EXPORT QJsonObject * ctr_qt_core_ffi_QJsonValue_toObject(QJsonValue const * this_ptr) {
  return new QJsonObject(this_ptr->toObject());
}


RITUAL_EXPORT QJsonObject * ctr_qt_core_ffi_QJsonValue_toObject1(QJsonValue const * this_ptr, QJsonObject const * defaultValue) {
  return new QJsonObject(this_ptr->toObject(*defaultValue));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_operator__(QJsonValue const * this_ptr, QString const * key) {
  return new QJsonValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_operator__1(QJsonValue const * this_ptr, QStringView const * key) {
  return new QJsonValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_operator__2(QJsonValue const * this_ptr, QLatin1String const * key) {
  return new QJsonValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_operator__3(QJsonValue const * this_ptr, long long i) {
  return new QJsonValue(this_ptr->operator[](i));
}


RITUAL_EXPORT QJsonValueConstRef * ctr_qt_core_ffi_QJsonValueConstRef_QJsonValueConstRef(QJsonValueConstRef const * arg1) {
  return new QJsonValueConstRef(*arg1);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValueConstRef_operator_QJsonValue(QJsonValueConstRef const * this_ptr) {
  return new QJsonValue(this_ptr->operator QJsonValue());
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QJsonValueConstRef_toVariant(QJsonValueConstRef const * this_ptr) {
  return new QVariant(this_ptr->toVariant());
}


RITUAL_EXPORT QJsonValue::Type ctr_qt_core_ffi_QJsonValueConstRef_type(QJsonValueConstRef const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueConstRef_isNull(QJsonValueConstRef const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueConstRef_isBool(QJsonValueConstRef const * this_ptr) {
  return this_ptr->isBool();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueConstRef_isDouble(QJsonValueConstRef const * this_ptr) {
  return this_ptr->isDouble();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueConstRef_isString(QJsonValueConstRef const * this_ptr) {
  return this_ptr->isString();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueConstRef_isArray(QJsonValueConstRef const * this_ptr) {
  return this_ptr->isArray();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueConstRef_isObject(QJsonValueConstRef const * this_ptr) {
  return this_ptr->isObject();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueConstRef_isUndefined(QJsonValueConstRef const * this_ptr) {
  return this_ptr->isUndefined();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueConstRef_toBool(QJsonValueConstRef const * this_ptr, bool defaultValue) {
  return this_ptr->toBool(defaultValue);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QJsonValueConstRef_toInt(QJsonValueConstRef const * this_ptr, int defaultValue) {
  return this_ptr->toInt(defaultValue);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QJsonValueConstRef_toInteger(QJsonValueConstRef const * this_ptr, long long defaultValue) {
  return this_ptr->toInteger(defaultValue);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QJsonValueConstRef_toDouble(QJsonValueConstRef const * this_ptr, double defaultValue) {
  return this_ptr->toDouble(defaultValue);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QJsonValueConstRef_toString(QJsonValueConstRef const * this_ptr, QString const * defaultValue) {
  return new QString(this_ptr->toString(*defaultValue));
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QJsonValueConstRef_toStringView(QJsonValueConstRef const * this_ptr, QAnyStringView const * defaultValue) {
  return new QAnyStringView(this_ptr->toStringView(*defaultValue));
}


RITUAL_EXPORT QJsonArray * ctr_qt_core_ffi_QJsonValueConstRef_toArray(QJsonValueConstRef const * this_ptr) {
  return new QJsonArray(this_ptr->toArray());
}


RITUAL_EXPORT QJsonObject * ctr_qt_core_ffi_QJsonValueConstRef_toObject(QJsonValueConstRef const * this_ptr) {
  return new QJsonObject(this_ptr->toObject());
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValueConstRef_operator__(QJsonValueConstRef const * this_ptr, QStringView const * key) {
  return new QJsonValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValueConstRef_operator__1(QJsonValueConstRef const * this_ptr, QLatin1String const * key) {
  return new QJsonValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValueConstRef_operator__2(QJsonValueConstRef const * this_ptr, long long i) {
  return new QJsonValue(this_ptr->operator[](i));
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonValueRef_QJsonValueRef(QJsonValueRef const * arg1) {
  return new QJsonValueRef(*arg1);
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonValueRef_operator_(QJsonValueRef * this_ptr, QJsonValue const * val) {
  return &this_ptr->operator=(*val);
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonValueRef_operator_1(QJsonValueRef * this_ptr, QJsonValueRef const * val) {
  return &this_ptr->operator=(*val);
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonValueRef_QJsonValueRef1(QJsonArray * array, long long idx) {
  return new QJsonValueRef(array, idx);
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonValueRef_QJsonValueRef2(QJsonObject * object, long long idx) {
  return new QJsonValueRef(object, idx);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValueRef_operator_QJsonValue(QJsonValueRef const * this_ptr) {
  return new QJsonValue(this_ptr->operator QJsonValue());
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QJsonValueRef_toVariant(QJsonValueRef const * this_ptr) {
  return new QVariant(this_ptr->toVariant());
}


RITUAL_EXPORT QJsonValue::Type ctr_qt_core_ffi_QJsonValueRef_type(QJsonValueRef const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueRef_isNull(QJsonValueRef const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueRef_isBool(QJsonValueRef const * this_ptr) {
  return this_ptr->isBool();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueRef_isDouble(QJsonValueRef const * this_ptr) {
  return this_ptr->isDouble();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueRef_isString(QJsonValueRef const * this_ptr) {
  return this_ptr->isString();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueRef_isArray(QJsonValueRef const * this_ptr) {
  return this_ptr->isArray();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueRef_isObject(QJsonValueRef const * this_ptr) {
  return this_ptr->isObject();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueRef_isUndefined(QJsonValueRef const * this_ptr) {
  return this_ptr->isUndefined();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonValueRef_toBool(QJsonValueRef const * this_ptr, bool defaultValue) {
  return this_ptr->toBool(defaultValue);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QJsonValueRef_toInt(QJsonValueRef const * this_ptr, int defaultValue) {
  return this_ptr->toInt(defaultValue);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QJsonValueRef_toInteger(QJsonValueRef const * this_ptr, long long defaultValue) {
  return this_ptr->toInteger(defaultValue);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QJsonValueRef_toDouble(QJsonValueRef const * this_ptr, double defaultValue) {
  return this_ptr->toDouble(defaultValue);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QJsonValueRef_toString(QJsonValueRef const * this_ptr, QString const * defaultValue) {
  return new QString(this_ptr->toString(*defaultValue));
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QJsonValueRef_toStringView(QJsonValueRef const * this_ptr, QAnyStringView const * defaultValue) {
  return new QAnyStringView(this_ptr->toStringView(*defaultValue));
}


RITUAL_EXPORT QJsonArray * ctr_qt_core_ffi_QJsonValueRef_toArray(QJsonValueRef const * this_ptr) {
  return new QJsonArray(this_ptr->toArray());
}


RITUAL_EXPORT QJsonObject * ctr_qt_core_ffi_QJsonValueRef_toObject(QJsonValueRef const * this_ptr) {
  return new QJsonObject(this_ptr->toObject());
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValueRef_operator__(QJsonValueRef const * this_ptr, QStringView const * key) {
  return new QJsonValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValueRef_operator__1(QJsonValueRef const * this_ptr, QLatin1String const * key) {
  return new QJsonValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValueRef_operator__2(QJsonValueRef const * this_ptr, long long i) {
  return new QJsonValue(this_ptr->operator[](i));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash43(QJsonValue const * value, unsigned long seed) {
  return qHash(*value, seed);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__76(QDebug const * arg1, QJsonValue const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__77(QDataStream * arg1, QJsonValue const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__78(QDataStream * arg1, QJsonValue * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QJsonArray * ctr_qt_core_ffi_QJsonArray_QJsonArray() {
  return new QJsonArray();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonArray_dQJsonArray(QJsonArray * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QJsonArray * ctr_qt_core_ffi_QJsonArray_QJsonArray2(QJsonArray const * other) {
  return new QJsonArray(*other);
}


RITUAL_EXPORT QJsonArray * ctr_qt_core_ffi_QJsonArray_operator_(QJsonArray * this_ptr, QJsonArray const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QJsonArray * ctr_qt_core_ffi_QJsonArray_fromStringList(QList< QString > const * list) {
  return new QJsonArray(QJsonArray::fromStringList(*list));
}


RITUAL_EXPORT QJsonArray * ctr_qt_core_ffi_QJsonArray_fromVariantList(QList< QVariant > const * list) {
  return new QJsonArray(QJsonArray::fromVariantList(*list));
}


RITUAL_EXPORT QList< QVariant > * ctr_qt_core_ffi_QJsonArray_toVariantList(QJsonArray const * this_ptr) {
  return new QList< QVariant >(this_ptr->toVariantList());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QJsonArray_size(QJsonArray const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QJsonArray_count(QJsonArray const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonArray_isEmpty(QJsonArray const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonArray_at(QJsonArray const * this_ptr, long long i) {
  return new QJsonValue(this_ptr->at(i));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonArray_first(QJsonArray const * this_ptr) {
  return new QJsonValue(this_ptr->first());
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonArray_last(QJsonArray const * this_ptr) {
  return new QJsonValue(this_ptr->last());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonArray_prepend(QJsonArray * this_ptr, QJsonValue const * value) {
  this_ptr->prepend(*value);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonArray_append(QJsonArray * this_ptr, QJsonValue const * value) {
  this_ptr->append(*value);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonArray_removeAt(QJsonArray * this_ptr, long long i) {
  this_ptr->removeAt(i);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonArray_takeAt(QJsonArray * this_ptr, long long i) {
  return new QJsonValue(this_ptr->takeAt(i));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonArray_removeFirst(QJsonArray * this_ptr) {
  this_ptr->removeFirst();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonArray_removeLast(QJsonArray * this_ptr) {
  this_ptr->removeLast();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonArray_insert(QJsonArray * this_ptr, long long i, QJsonValue const * value) {
  this_ptr->insert(i, *value);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonArray_replace(QJsonArray * this_ptr, long long i, QJsonValue const * value) {
  this_ptr->replace(i, *value);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonArray_contains(QJsonArray const * this_ptr, QJsonValue const * element) {
  return this_ptr->contains(*element);
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonArray_operator__(QJsonArray * this_ptr, long long i) {
  return new QJsonValueRef(this_ptr->operator[](i));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonArray_operator__1(QJsonArray const * this_ptr, long long i) {
  return new QJsonValue(this_ptr->operator[](i));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonArray_swap(QJsonArray * this_ptr, QJsonArray * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_iterator_iterator() {
  return new QJsonArray::iterator();
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_iterator_iterator1(QJsonArray * array, long long index) {
  return new QJsonArray::iterator(array, index);
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_iterator_iterator2(QJsonArray::iterator const * other) {
  return new QJsonArray::iterator(*other);
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_iterator_operator_(QJsonArray::iterator * this_ptr, QJsonArray::iterator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonArray_iterator_operator_1(QJsonArray::iterator const * this_ptr) {
  return new QJsonValueRef(this_ptr->operator*());
}


RITUAL_EXPORT QJsonValueConstRef const * ctr_qt_core_ffi_QJsonArray_iterator_operator__(QJsonArray::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonArray_iterator_operator__1(QJsonArray::iterator * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonArray_iterator_operator__2(QJsonArray::iterator const * this_ptr, long long j) {
  return new QJsonValueRef(this_ptr->operator[](j));
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_iterator_operator__3(QJsonArray::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_iterator_operator__4(QJsonArray::iterator * this_ptr, int arg1) {
  return new QJsonArray::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_iterator_operator__5(QJsonArray::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_iterator_operator__6(QJsonArray::iterator * this_ptr, int arg1) {
  return new QJsonArray::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_iterator_operator__7(QJsonArray::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_iterator_operator__8(QJsonArray::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_iterator_operator_2(QJsonArray::iterator const * this_ptr, long long j) {
  return new QJsonArray::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_iterator_operator_3(QJsonArray::iterator const * this_ptr, long long j) {
  return new QJsonArray::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QJsonArray_iterator_operator_4(QJsonArray::iterator const * this_ptr, QJsonArray::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_const_iterator_const_iterator() {
  return new QJsonArray::const_iterator();
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_const_iterator_const_iterator1(QJsonArray const * array, long long index) {
  return new QJsonArray::const_iterator(array, index);
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_const_iterator_const_iterator2(QJsonArray::iterator const * o) {
  return new QJsonArray::const_iterator(*o);
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_const_iterator_const_iterator3(QJsonArray::const_iterator const * other) {
  return new QJsonArray::const_iterator(*other);
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_const_iterator_operator_(QJsonArray::const_iterator * this_ptr, QJsonArray::const_iterator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QJsonValueConstRef * ctr_qt_core_ffi_QJsonArray_const_iterator_operator_1(QJsonArray::const_iterator const * this_ptr) {
  return new QJsonValueConstRef(this_ptr->operator*());
}


RITUAL_EXPORT QJsonValueConstRef const * ctr_qt_core_ffi_QJsonArray_const_iterator_operator__(QJsonArray::const_iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QJsonValueConstRef * ctr_qt_core_ffi_QJsonArray_const_iterator_operator__1(QJsonArray::const_iterator const * this_ptr, long long j) {
  return new QJsonValueConstRef(this_ptr->operator[](j));
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_const_iterator_operator__2(QJsonArray::const_iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_const_iterator_operator__3(QJsonArray::const_iterator * this_ptr, int arg1) {
  return new QJsonArray::const_iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_const_iterator_operator__4(QJsonArray::const_iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_const_iterator_operator__5(QJsonArray::const_iterator * this_ptr, int arg1) {
  return new QJsonArray::const_iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_const_iterator_operator__6(QJsonArray::const_iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_const_iterator_operator__7(QJsonArray::const_iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_const_iterator_operator_2(QJsonArray::const_iterator const * this_ptr, long long j) {
  return new QJsonArray::const_iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_const_iterator_operator_3(QJsonArray::const_iterator const * this_ptr, long long j) {
  return new QJsonArray::const_iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QJsonArray_const_iterator_operator_4(QJsonArray::const_iterator const * this_ptr, QJsonArray::const_iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_begin(QJsonArray * this_ptr) {
  return new QJsonArray::iterator(this_ptr->begin());
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_begin1(QJsonArray const * this_ptr) {
  return new QJsonArray::const_iterator(this_ptr->begin());
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_constBegin(QJsonArray const * this_ptr) {
  return new QJsonArray::const_iterator(this_ptr->constBegin());
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_cbegin(QJsonArray const * this_ptr) {
  return new QJsonArray::const_iterator(this_ptr->cbegin());
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_end(QJsonArray * this_ptr) {
  return new QJsonArray::iterator(this_ptr->end());
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_end1(QJsonArray const * this_ptr) {
  return new QJsonArray::const_iterator(this_ptr->end());
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_constEnd(QJsonArray const * this_ptr) {
  return new QJsonArray::const_iterator(this_ptr->constEnd());
}


RITUAL_EXPORT QJsonArray::const_iterator * ctr_qt_core_ffi_QJsonArray_cend(QJsonArray const * this_ptr) {
  return new QJsonArray::const_iterator(this_ptr->cend());
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_insert1(QJsonArray * this_ptr, QJsonArray::iterator const * before, QJsonValue const * value) {
  return new QJsonArray::iterator(this_ptr->insert(*before, *value));
}


RITUAL_EXPORT QJsonArray::iterator * ctr_qt_core_ffi_QJsonArray_erase(QJsonArray * this_ptr, QJsonArray::iterator const * it) {
  return new QJsonArray::iterator(this_ptr->erase(*it));
}


RITUAL_EXPORT QJsonArray * ctr_qt_core_ffi_QJsonArray_operator_2(QJsonArray const * this_ptr, QJsonValue const * v) {
  return new QJsonArray(this_ptr->operator+(*v));
}


RITUAL_EXPORT QJsonArray * ctr_qt_core_ffi_QJsonArray_operator__2(QJsonArray * this_ptr, QJsonValue const * v) {
  return &this_ptr->operator+=(*v);
}


RITUAL_EXPORT QJsonArray * ctr_qt_core_ffi_QJsonArray_operator__3(QJsonArray * this_ptr, QJsonValue const * v) {
  return &this_ptr->operator<<(*v);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonArray_push_back(QJsonArray * this_ptr, QJsonValue const * t) {
  this_ptr->push_back(*t);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonArray_push_front(QJsonArray * this_ptr, QJsonValue const * t) {
  this_ptr->push_front(*t);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonArray_pop_front(QJsonArray * this_ptr) {
  this_ptr->pop_front();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonArray_pop_back(QJsonArray * this_ptr) {
  this_ptr->pop_back();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonArray_empty(QJsonArray const * this_ptr) {
  return this_ptr->empty();
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash44(QJsonArray const * array, unsigned long seed) {
  return qHash(*array, seed);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__79(QDebug const * arg1, QJsonArray const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__80(QDataStream * arg1, QJsonArray const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__81(QDataStream * arg1, QJsonArray * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QJsonObject * ctr_qt_core_ffi_QJsonObject_QJsonObject() {
  return new QJsonObject();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonObject_dQJsonObject(QJsonObject * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QJsonObject * ctr_qt_core_ffi_QJsonObject_QJsonObject2(QJsonObject const * other) {
  return new QJsonObject(*other);
}


RITUAL_EXPORT QJsonObject * ctr_qt_core_ffi_QJsonObject_operator_(QJsonObject * this_ptr, QJsonObject const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonObject_swap(QJsonObject * this_ptr, QJsonObject * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QJsonObject * ctr_qt_core_ffi_QJsonObject_fromVariantMap(QMap< QString, QVariant > const * map) {
  return new QJsonObject(QJsonObject::fromVariantMap(*map));
}


RITUAL_EXPORT QMap< QString, QVariant > * ctr_qt_core_ffi_QJsonObject_toVariantMap(QJsonObject const * this_ptr) {
  return new QMap< QString, QVariant >(this_ptr->toVariantMap());
}


RITUAL_EXPORT QJsonObject * ctr_qt_core_ffi_QJsonObject_fromVariantHash(QHash< QString, QVariant > const * map) {
  return new QJsonObject(QJsonObject::fromVariantHash(*map));
}


RITUAL_EXPORT QHash< QString, QVariant > * ctr_qt_core_ffi_QJsonObject_toVariantHash(QJsonObject const * this_ptr) {
  return new QHash< QString, QVariant >(this_ptr->toVariantHash());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QJsonObject_keys(QJsonObject const * this_ptr) {
  return new QList< QString >(this_ptr->keys());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QJsonObject_size(QJsonObject const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QJsonObject_count(QJsonObject const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QJsonObject_length(QJsonObject const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonObject_isEmpty(QJsonObject const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonObject_value(QJsonObject const * this_ptr, QString const * key) {
  return new QJsonValue(this_ptr->value(*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonObject_operator__(QJsonObject const * this_ptr, QString const * key) {
  return new QJsonValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonObject_operator__1(QJsonObject * this_ptr, QString const * key) {
  return new QJsonValueRef(this_ptr->operator[](*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonObject_value1(QJsonObject const * this_ptr, QStringView const * key) {
  return new QJsonValue(this_ptr->value(*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonObject_value2(QJsonObject const * this_ptr, QLatin1String const * key) {
  return new QJsonValue(this_ptr->value(*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonObject_operator__2(QJsonObject const * this_ptr, QStringView const * key) {
  return new QJsonValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonObject_operator__3(QJsonObject const * this_ptr, QLatin1String const * key) {
  return new QJsonValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonObject_operator__4(QJsonObject * this_ptr, QStringView const * key) {
  return new QJsonValueRef(this_ptr->operator[](*key));
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonObject_operator__5(QJsonObject * this_ptr, QLatin1String const * key) {
  return new QJsonValueRef(this_ptr->operator[](*key));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonObject_remove(QJsonObject * this_ptr, QString const * key) {
  this_ptr->remove(*key);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonObject_take(QJsonObject * this_ptr, QString const * key) {
  return new QJsonValue(this_ptr->take(*key));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonObject_contains(QJsonObject const * this_ptr, QString const * key) {
  return this_ptr->contains(*key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonObject_remove1(QJsonObject * this_ptr, QStringView const * key) {
  this_ptr->remove(*key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonObject_remove2(QJsonObject * this_ptr, QLatin1String const * key) {
  this_ptr->remove(*key);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonObject_take1(QJsonObject * this_ptr, QStringView const * key) {
  return new QJsonValue(this_ptr->take(*key));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonObject_take2(QJsonObject * this_ptr, QLatin1String const * key) {
  return new QJsonValue(this_ptr->take(*key));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonObject_contains1(QJsonObject const * this_ptr, QStringView const * key) {
  return this_ptr->contains(*key);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonObject_contains2(QJsonObject const * this_ptr, QLatin1String const * key) {
  return this_ptr->contains(*key);
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_iterator_iterator() {
  return new QJsonObject::iterator();
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_iterator_iterator1(QJsonObject * obj, long long index) {
  return new QJsonObject::iterator(obj, index);
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_iterator_iterator2(QJsonObject::iterator const * other) {
  return new QJsonObject::iterator(*other);
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_iterator_operator_(QJsonObject::iterator * this_ptr, QJsonObject::iterator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QJsonObject_iterator_key(QJsonObject::iterator const * this_ptr) {
  return new QString(this_ptr->key());
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QJsonObject_iterator_keyView(QJsonObject::iterator const * this_ptr) {
  return new QAnyStringView(this_ptr->keyView());
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonObject_iterator_value(QJsonObject::iterator const * this_ptr) {
  return new QJsonValueRef(this_ptr->value());
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonObject_iterator_operator_1(QJsonObject::iterator const * this_ptr) {
  return new QJsonValueRef(this_ptr->operator*());
}


RITUAL_EXPORT QJsonValueConstRef const * ctr_qt_core_ffi_QJsonObject_iterator_operator__(QJsonObject::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonObject_iterator_operator__1(QJsonObject::iterator * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QJsonValueRef * ctr_qt_core_ffi_QJsonObject_iterator_operator__2(QJsonObject::iterator const * this_ptr, long long j) {
  return new QJsonValueRef(this_ptr->operator[](j));
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_iterator_operator__3(QJsonObject::iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_iterator_operator__4(QJsonObject::iterator * this_ptr, int arg1) {
  return new QJsonObject::iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_iterator_operator__5(QJsonObject::iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_iterator_operator__6(QJsonObject::iterator * this_ptr, int arg1) {
  return new QJsonObject::iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_iterator_operator_2(QJsonObject::iterator const * this_ptr, long long j) {
  return new QJsonObject::iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_iterator_operator_3(QJsonObject::iterator const * this_ptr, long long j) {
  return new QJsonObject::iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_iterator_operator__7(QJsonObject::iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_iterator_operator__8(QJsonObject::iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QJsonObject_iterator_operator_4(QJsonObject::iterator const * this_ptr, QJsonObject::iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_const_iterator_const_iterator() {
  return new QJsonObject::const_iterator();
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_const_iterator_const_iterator1(QJsonObject const * obj, long long index) {
  return new QJsonObject::const_iterator(obj, index);
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_const_iterator_const_iterator2(QJsonObject::iterator const * other) {
  return new QJsonObject::const_iterator(*other);
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_const_iterator_const_iterator3(QJsonObject::const_iterator const * other) {
  return new QJsonObject::const_iterator(*other);
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_const_iterator_operator_(QJsonObject::const_iterator * this_ptr, QJsonObject::const_iterator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QJsonObject_const_iterator_key(QJsonObject::const_iterator const * this_ptr) {
  return new QString(this_ptr->key());
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QJsonObject_const_iterator_keyView(QJsonObject::const_iterator const * this_ptr) {
  return new QAnyStringView(this_ptr->keyView());
}


RITUAL_EXPORT QJsonValueConstRef * ctr_qt_core_ffi_QJsonObject_const_iterator_value(QJsonObject::const_iterator const * this_ptr) {
  return new QJsonValueConstRef(this_ptr->value());
}


RITUAL_EXPORT QJsonValueConstRef * ctr_qt_core_ffi_QJsonObject_const_iterator_operator_1(QJsonObject::const_iterator const * this_ptr) {
  return new QJsonValueConstRef(this_ptr->operator*());
}


RITUAL_EXPORT QJsonValueConstRef const * ctr_qt_core_ffi_QJsonObject_const_iterator_operator__(QJsonObject::const_iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QJsonValueConstRef * ctr_qt_core_ffi_QJsonObject_const_iterator_operator__1(QJsonObject::const_iterator const * this_ptr, long long j) {
  return new QJsonValueConstRef(this_ptr->operator[](j));
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_const_iterator_operator__2(QJsonObject::const_iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_const_iterator_operator__3(QJsonObject::const_iterator * this_ptr, int arg1) {
  return new QJsonObject::const_iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_const_iterator_operator__4(QJsonObject::const_iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_const_iterator_operator__5(QJsonObject::const_iterator * this_ptr, int arg1) {
  return new QJsonObject::const_iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_const_iterator_operator_2(QJsonObject::const_iterator const * this_ptr, long long j) {
  return new QJsonObject::const_iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_const_iterator_operator_3(QJsonObject::const_iterator const * this_ptr, long long j) {
  return new QJsonObject::const_iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_const_iterator_operator__6(QJsonObject::const_iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_const_iterator_operator__7(QJsonObject::const_iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QJsonObject_const_iterator_operator_4(QJsonObject::const_iterator const * this_ptr, QJsonObject::const_iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_begin(QJsonObject * this_ptr) {
  return new QJsonObject::iterator(this_ptr->begin());
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_begin1(QJsonObject const * this_ptr) {
  return new QJsonObject::const_iterator(this_ptr->begin());
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_constBegin(QJsonObject const * this_ptr) {
  return new QJsonObject::const_iterator(this_ptr->constBegin());
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_end(QJsonObject * this_ptr) {
  return new QJsonObject::iterator(this_ptr->end());
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_end1(QJsonObject const * this_ptr) {
  return new QJsonObject::const_iterator(this_ptr->end());
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_constEnd(QJsonObject const * this_ptr) {
  return new QJsonObject::const_iterator(this_ptr->constEnd());
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_erase(QJsonObject * this_ptr, QJsonObject::iterator const * it) {
  return new QJsonObject::iterator(this_ptr->erase(*it));
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_find(QJsonObject * this_ptr, QString const * key) {
  return new QJsonObject::iterator(this_ptr->find(*key));
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_find1(QJsonObject const * this_ptr, QString const * key) {
  return new QJsonObject::const_iterator(this_ptr->find(*key));
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_constFind(QJsonObject const * this_ptr, QString const * key) {
  return new QJsonObject::const_iterator(this_ptr->constFind(*key));
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_insert(QJsonObject * this_ptr, QString const * key, QJsonValue const * value) {
  return new QJsonObject::iterator(this_ptr->insert(*key, *value));
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_find2(QJsonObject * this_ptr, QStringView const * key) {
  return new QJsonObject::iterator(this_ptr->find(*key));
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_find3(QJsonObject * this_ptr, QLatin1String const * key) {
  return new QJsonObject::iterator(this_ptr->find(*key));
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_find4(QJsonObject const * this_ptr, QStringView const * key) {
  return new QJsonObject::const_iterator(this_ptr->find(*key));
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_find5(QJsonObject const * this_ptr, QLatin1String const * key) {
  return new QJsonObject::const_iterator(this_ptr->find(*key));
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_constFind1(QJsonObject const * this_ptr, QStringView const * key) {
  return new QJsonObject::const_iterator(this_ptr->constFind(*key));
}


RITUAL_EXPORT QJsonObject::const_iterator * ctr_qt_core_ffi_QJsonObject_constFind2(QJsonObject const * this_ptr, QLatin1String const * key) {
  return new QJsonObject::const_iterator(this_ptr->constFind(*key));
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_insert1(QJsonObject * this_ptr, QStringView const * key, QJsonValue const * value) {
  return new QJsonObject::iterator(this_ptr->insert(*key, *value));
}


RITUAL_EXPORT QJsonObject::iterator * ctr_qt_core_ffi_QJsonObject_insert2(QJsonObject * this_ptr, QLatin1String const * key, QJsonValue const * value) {
  return new QJsonObject::iterator(this_ptr->insert(*key, *value));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QJsonObject_empty(QJsonObject const * this_ptr) {
  return this_ptr->empty();
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash45(QJsonObject const * object, unsigned long seed) {
  return qHash(*object, seed);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__82(QDebug const * arg1, QJsonObject const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__83(QDataStream * arg1, QJsonObject const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__84(QDataStream * arg1, QJsonObject * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QLatin1StringMatcher * ctr_qt_core_ffi_QLatin1StringMatcher_QLatin1StringMatcher() {
  return new QLatin1StringMatcher();
}


RITUAL_EXPORT QLatin1StringMatcher * ctr_qt_core_ffi_QLatin1StringMatcher_QLatin1StringMatcher1(QLatin1String const * pattern, Qt::CaseSensitivity cs) {
  return new QLatin1StringMatcher(*pattern, cs);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLatin1StringMatcher_dQLatin1StringMatcher(QLatin1StringMatcher * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLatin1StringMatcher_setPattern(QLatin1StringMatcher * this_ptr, QLatin1String const * pattern) {
  this_ptr->setPattern(*pattern);
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1StringMatcher_pattern(QLatin1StringMatcher const * this_ptr) {
  return new QLatin1String(this_ptr->pattern());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLatin1StringMatcher_setCaseSensitivity(QLatin1StringMatcher * this_ptr, Qt::CaseSensitivity cs) {
  this_ptr->setCaseSensitivity(cs);
}


RITUAL_EXPORT Qt::CaseSensitivity ctr_qt_core_ffi_QLatin1StringMatcher_caseSensitivity(QLatin1StringMatcher const * this_ptr) {
  return this_ptr->caseSensitivity();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1StringMatcher_indexIn(QLatin1StringMatcher const * this_ptr, QLatin1String const * haystack, long long from) {
  return this_ptr->indexIn(*haystack, from);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1StringMatcher_indexIn1(QLatin1StringMatcher const * this_ptr, QStringView const * haystack, long long from) {
  return this_ptr->indexIn(*haystack, from);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QLibrary_metaObject(QLibrary const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QLibrary_qt_metacast(QLibrary * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLibrary_qt_metacall(QLibrary * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLibrary_tr(char const * s, char const * c, int n) {
  return new QString(QLibrary::tr(s, c, n));
}


RITUAL_EXPORT QLibrary * ctr_qt_core_ffi_QLibrary_QLibrary(QObject * parent) {
  return new QLibrary(parent);
}


RITUAL_EXPORT QLibrary * ctr_qt_core_ffi_QLibrary_QLibrary1(QString const * fileName, QObject * parent) {
  return new QLibrary(*fileName, parent);
}


RITUAL_EXPORT QLibrary * ctr_qt_core_ffi_QLibrary_QLibrary2(QString const * fileName, int verNum, QObject * parent) {
  return new QLibrary(*fileName, verNum, parent);
}


RITUAL_EXPORT QLibrary * ctr_qt_core_ffi_QLibrary_QLibrary3(QString const * fileName, QString const * version, QObject * parent) {
  return new QLibrary(*fileName, *version, parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLibrary_dQLibrary(QLibrary * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QLibrary_resolve(QLibrary * this_ptr, char const * symbol))() {
  return this_ptr->resolve(symbol);
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QLibrary_resolve1(QString const * fileName, char const * symbol))() {
  return QLibrary::resolve(*fileName, symbol);
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QLibrary_resolve2(QString const * fileName, int verNum, char const * symbol))() {
  return QLibrary::resolve(*fileName, verNum, symbol);
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QLibrary_resolve3(QString const * fileName, QString const * version, char const * symbol))() {
  return QLibrary::resolve(*fileName, *version, symbol);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLibrary_load(QLibrary * this_ptr) {
  return this_ptr->load();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLibrary_unload(QLibrary * this_ptr) {
  return this_ptr->unload();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLibrary_isLoaded(QLibrary const * this_ptr) {
  return this_ptr->isLoaded();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLibrary_isLibrary(QString const * fileName) {
  return QLibrary::isLibrary(*fileName);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLibrary_setFileName(QLibrary * this_ptr, QString const * fileName) {
  this_ptr->setFileName(*fileName);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLibrary_fileName(QLibrary const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLibrary_setFileNameAndVersion(QLibrary * this_ptr, QString const * fileName, int verNum) {
  this_ptr->setFileNameAndVersion(*fileName, verNum);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLibrary_setFileNameAndVersion1(QLibrary * this_ptr, QString const * fileName, QString const * version) {
  this_ptr->setFileNameAndVersion(*fileName, *version);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLibrary_errorString(QLibrary const * this_ptr) {
  return new QString(this_ptr->errorString());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLibrary_setLoadHints(QLibrary * this_ptr, int hints) {
  this_ptr->setLoadHints(QFlags< QLibrary::LoadHint >(hints));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLibrary_loadHints(QLibrary const * this_ptr) {
  return int(this_ptr->loadHints());
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash46(QTypeRevision const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__85(QDataStream * out, QTypeRevision const * revision) {
  return &operator<<(*out, *revision);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__86(QDataStream * in, QTypeRevision * revision) {
  return &operator>>(*in, *revision);
}


RITUAL_EXPORT QTypeRevision * ctr_qt_core_ffi_QTypeRevision_zero() {
  return new QTypeRevision(QTypeRevision::zero());
}


RITUAL_EXPORT QTypeRevision * ctr_qt_core_ffi_QTypeRevision_QTypeRevision() {
  return new QTypeRevision();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTypeRevision_hasMajorVersion(QTypeRevision const * this_ptr) {
  return this_ptr->hasMajorVersion();
}


RITUAL_EXPORT unsigned char ctr_qt_core_ffi_QTypeRevision_majorVersion(QTypeRevision const * this_ptr) {
  return this_ptr->majorVersion();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTypeRevision_hasMinorVersion(QTypeRevision const * this_ptr) {
  return this_ptr->hasMinorVersion();
}


RITUAL_EXPORT unsigned char ctr_qt_core_ffi_QTypeRevision_minorVersion(QTypeRevision const * this_ptr) {
  return this_ptr->minorVersion();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTypeRevision_isValid(QTypeRevision const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__87(QDebug const * arg1, QTypeRevision const * revision) {
  return new QDebug(operator<<(*arg1, *revision));
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRegisterNormalizedMetaType_QTypeRevision(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QTypeRevision(*arg1);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash47(QVersionNumber const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__88(QDataStream * out, QVersionNumber const * version) {
  return &operator<<(*out, *version);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__89(QDataStream * in, QVersionNumber * version) {
  return &operator>>(*in, *version);
}


RITUAL_EXPORT QVersionNumber * ctr_qt_core_ffi_QVersionNumber_QVersionNumber() {
  return new QVersionNumber();
}


RITUAL_EXPORT QVersionNumber * ctr_qt_core_ffi_QVersionNumber_QVersionNumber2(int maj) {
  return new QVersionNumber(maj);
}


RITUAL_EXPORT QVersionNumber * ctr_qt_core_ffi_QVersionNumber_QVersionNumber3(int maj, int min) {
  return new QVersionNumber(maj, min);
}


RITUAL_EXPORT QVersionNumber * ctr_qt_core_ffi_QVersionNumber_QVersionNumber4(int maj, int min, int mic) {
  return new QVersionNumber(maj, min, mic);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QVersionNumber_isNull(QVersionNumber const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QVersionNumber_isNormalized(QVersionNumber const * this_ptr) {
  return this_ptr->isNormalized();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QVersionNumber_majorVersion(QVersionNumber const * this_ptr) {
  return this_ptr->majorVersion();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QVersionNumber_minorVersion(QVersionNumber const * this_ptr) {
  return this_ptr->minorVersion();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QVersionNumber_microVersion(QVersionNumber const * this_ptr) {
  return this_ptr->microVersion();
}


RITUAL_EXPORT QVersionNumber * ctr_qt_core_ffi_QVersionNumber_normalized(QVersionNumber const * this_ptr) {
  return new QVersionNumber(this_ptr->normalized());
}


RITUAL_EXPORT QList< int > * ctr_qt_core_ffi_QVersionNumber_segments(QVersionNumber const * this_ptr) {
  return new QList< int >(this_ptr->segments());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QVersionNumber_segmentAt(QVersionNumber const * this_ptr, long long index) {
  return this_ptr->segmentAt(index);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QVersionNumber_segmentCount(QVersionNumber const * this_ptr) {
  return this_ptr->segmentCount();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QVersionNumber_isPrefixOf(QVersionNumber const * this_ptr, QVersionNumber const * other) {
  return this_ptr->isPrefixOf(*other);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QVersionNumber_compare(QVersionNumber const * v1, QVersionNumber const * v2) {
  return QVersionNumber::compare(*v1, *v2);
}


RITUAL_EXPORT QVersionNumber * ctr_qt_core_ffi_QVersionNumber_commonPrefix(QVersionNumber const * v1, QVersionNumber const * v2) {
  return new QVersionNumber(QVersionNumber::commonPrefix(*v1, *v2));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QVersionNumber_toString(QVersionNumber const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QVersionNumber * ctr_qt_core_ffi_QVersionNumber_fromString(QAnyStringView const * string, long long * suffixIndex) {
  return new QVersionNumber(QVersionNumber::fromString(*string, suffixIndex));
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__90(QDebug const * arg1, QVersionNumber const * version) {
  return new QDebug(operator<<(*arg1, *version));
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRegisterNormalizedMetaType_QVersionNumber(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QVersionNumber(*arg1);
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QLibraryInfo_build() {
  return QLibraryInfo::build();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLibraryInfo_isDebugBuild() {
  return QLibraryInfo::isDebugBuild();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLibraryInfo_isSharedBuild() {
  return QLibraryInfo::isSharedBuild();
}


RITUAL_EXPORT QVersionNumber * ctr_qt_core_ffi_QLibraryInfo_version() {
  return new QVersionNumber(QLibraryInfo::version());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLibraryInfo_path(QLibraryInfo::LibraryPath p) {
  return new QString(QLibraryInfo::path(p));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QLibraryInfo_paths(QLibraryInfo::LibraryPath p) {
  return new QList< QString >(QLibraryInfo::paths(p));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLibraryInfo_location(QLibraryInfo::LibraryPath location) {
  return new QString(QLibraryInfo::location(location));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QLibraryInfo_platformPluginArguments(QString const * platformName) {
  return new QList< QString >(QLibraryInfo::platformPluginArguments(*platformName));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qSharedBuild() {
  return qSharedBuild();
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QPoint_QPoint() {
  return new QPoint();
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QPoint_QPoint1(int xpos, int ypos) {
  return new QPoint(xpos, ypos);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QPoint_isNull(QPoint const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QPoint_x(QPoint const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QPoint_y(QPoint const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPoint_setX(QPoint * this_ptr, int x) {
  this_ptr->setX(x);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPoint_setY(QPoint * this_ptr, int y) {
  this_ptr->setY(y);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QPoint_manhattanLength(QPoint const * this_ptr) {
  return this_ptr->manhattanLength();
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QPoint_transposed(QPoint const * this_ptr) {
  return new QPoint(this_ptr->transposed());
}


RITUAL_EXPORT int * ctr_qt_core_ffi_QPoint_rx(QPoint * this_ptr) {
  return &this_ptr->rx();
}


RITUAL_EXPORT int * ctr_qt_core_ffi_QPoint_ry(QPoint * this_ptr) {
  return &this_ptr->ry();
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QPoint_operator__(QPoint * this_ptr, QPoint const * p) {
  return &this_ptr->operator+=(*p);
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QPoint_operator__1(QPoint * this_ptr, QPoint const * p) {
  return &this_ptr->operator-=(*p);
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QPoint_operator__2(QPoint * this_ptr, float factor) {
  return &this_ptr->operator*=(factor);
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QPoint_operator__3(QPoint * this_ptr, double factor) {
  return &this_ptr->operator*=(factor);
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QPoint_operator__4(QPoint * this_ptr, int factor) {
  return &this_ptr->operator*=(factor);
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QPoint_operator__5(QPoint * this_ptr, double divisor) {
  return &this_ptr->operator/=(divisor);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QPoint_dotProduct(QPoint const * p1, QPoint const * p2) {
  return QPoint::dotProduct(*p1, *p2);
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QPoint_toPointF(QPoint const * this_ptr) {
  return new QPointF(this_ptr->toPointF());
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__91(QDataStream * arg1, QPoint const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__92(QDataStream * arg1, QPoint * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__93(QDebug const * arg1, QPoint const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash48(QPoint const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QPointF_QPointF() {
  return new QPointF();
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QPointF_QPointF1(QPoint const * p) {
  return new QPointF(*p);
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QPointF_QPointF2(double xpos, double ypos) {
  return new QPointF(xpos, ypos);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QPointF_manhattanLength(QPointF const * this_ptr) {
  return this_ptr->manhattanLength();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QPointF_isNull(QPointF const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QPointF_x(QPointF const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QPointF_y(QPointF const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPointF_setX(QPointF * this_ptr, double x) {
  this_ptr->setX(x);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPointF_setY(QPointF * this_ptr, double y) {
  this_ptr->setY(y);
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QPointF_transposed(QPointF const * this_ptr) {
  return new QPointF(this_ptr->transposed());
}


RITUAL_EXPORT double * ctr_qt_core_ffi_QPointF_rx(QPointF * this_ptr) {
  return &this_ptr->rx();
}


RITUAL_EXPORT double * ctr_qt_core_ffi_QPointF_ry(QPointF * this_ptr) {
  return &this_ptr->ry();
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QPointF_operator__(QPointF * this_ptr, QPointF const * p) {
  return &this_ptr->operator+=(*p);
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QPointF_operator__1(QPointF * this_ptr, QPointF const * p) {
  return &this_ptr->operator-=(*p);
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QPointF_operator__2(QPointF * this_ptr, double c) {
  return &this_ptr->operator*=(c);
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QPointF_operator__3(QPointF * this_ptr, double c) {
  return &this_ptr->operator/=(c);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QPointF_dotProduct(QPointF const * p1, QPointF const * p2) {
  return QPointF::dotProduct(*p1, *p2);
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QPointF_toPoint(QPointF const * this_ptr) {
  return new QPoint(this_ptr->toPoint());
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__94(QDataStream * arg1, QPointF const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__95(QDataStream * arg1, QPointF * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__96(QDebug const * d, QPointF const * p) {
  return new QDebug(operator<<(*d, *p));
}


RITUAL_EXPORT QLine * ctr_qt_core_ffi_QLine_QLine() {
  return new QLine();
}


RITUAL_EXPORT QLine * ctr_qt_core_ffi_QLine_QLine1(QPoint const * pt1, QPoint const * pt2) {
  return new QLine(*pt1, *pt2);
}


RITUAL_EXPORT QLine * ctr_qt_core_ffi_QLine_QLine2(int x1, int y1, int x2, int y2) {
  return new QLine(x1, y1, x2, y2);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLine_isNull(QLine const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QLine_p1(QLine const * this_ptr) {
  return new QPoint(this_ptr->p1());
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QLine_p2(QLine const * this_ptr) {
  return new QPoint(this_ptr->p2());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLine_x1(QLine const * this_ptr) {
  return this_ptr->x1();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLine_y1(QLine const * this_ptr) {
  return this_ptr->y1();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLine_x2(QLine const * this_ptr) {
  return this_ptr->x2();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLine_y2(QLine const * this_ptr) {
  return this_ptr->y2();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLine_dx(QLine const * this_ptr) {
  return this_ptr->dx();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLine_dy(QLine const * this_ptr) {
  return this_ptr->dy();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLine_translate(QLine * this_ptr, QPoint const * p) {
  this_ptr->translate(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLine_translate1(QLine * this_ptr, int dx, int dy) {
  this_ptr->translate(dx, dy);
}


RITUAL_EXPORT QLine * ctr_qt_core_ffi_QLine_translated(QLine const * this_ptr, QPoint const * p) {
  return new QLine(this_ptr->translated(*p));
}


RITUAL_EXPORT QLine * ctr_qt_core_ffi_QLine_translated1(QLine const * this_ptr, int dx, int dy) {
  return new QLine(this_ptr->translated(dx, dy));
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QLine_center(QLine const * this_ptr) {
  return new QPoint(this_ptr->center());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLine_setP1(QLine * this_ptr, QPoint const * p1) {
  this_ptr->setP1(*p1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLine_setP2(QLine * this_ptr, QPoint const * p2) {
  this_ptr->setP2(*p2);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLine_setPoints(QLine * this_ptr, QPoint const * p1, QPoint const * p2) {
  this_ptr->setPoints(*p1, *p2);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLine_setLine(QLine * this_ptr, int x1, int y1, int x2, int y2) {
  this_ptr->setLine(x1, y1, x2, y2);
}


RITUAL_EXPORT QLineF * ctr_qt_core_ffi_QLine_toLineF(QLine const * this_ptr) {
  return new QLineF(this_ptr->toLineF());
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__97(QDebug const * d, QLine const * p) {
  return new QDebug(operator<<(*d, *p));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__98(QDataStream * arg1, QLine const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__99(QDataStream * arg1, QLine * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QLineF * ctr_qt_core_ffi_QLineF_QLineF() {
  return new QLineF();
}


RITUAL_EXPORT QLineF * ctr_qt_core_ffi_QLineF_QLineF1(QPointF const * pt1, QPointF const * pt2) {
  return new QLineF(*pt1, *pt2);
}


RITUAL_EXPORT QLineF * ctr_qt_core_ffi_QLineF_QLineF2(double x1, double y1, double x2, double y2) {
  return new QLineF(x1, y1, x2, y2);
}


RITUAL_EXPORT QLineF * ctr_qt_core_ffi_QLineF_QLineF3(QLine const * line) {
  return new QLineF(*line);
}


RITUAL_EXPORT QLineF * ctr_qt_core_ffi_QLineF_fromPolar(double length, double angle) {
  return new QLineF(QLineF::fromPolar(length, angle));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLineF_isNull(QLineF const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QLineF_p1(QLineF const * this_ptr) {
  return new QPointF(this_ptr->p1());
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QLineF_p2(QLineF const * this_ptr) {
  return new QPointF(this_ptr->p2());
}


RITUAL_EXPORT double ctr_qt_core_ffi_QLineF_x1(QLineF const * this_ptr) {
  return this_ptr->x1();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QLineF_y1(QLineF const * this_ptr) {
  return this_ptr->y1();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QLineF_x2(QLineF const * this_ptr) {
  return this_ptr->x2();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QLineF_y2(QLineF const * this_ptr) {
  return this_ptr->y2();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QLineF_dx(QLineF const * this_ptr) {
  return this_ptr->dx();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QLineF_dy(QLineF const * this_ptr) {
  return this_ptr->dy();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QLineF_length(QLineF const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLineF_setLength(QLineF * this_ptr, double len) {
  this_ptr->setLength(len);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QLineF_angle(QLineF const * this_ptr) {
  return this_ptr->angle();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLineF_setAngle(QLineF * this_ptr, double angle) {
  this_ptr->setAngle(angle);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QLineF_angleTo(QLineF const * this_ptr, QLineF const * l) {
  return this_ptr->angleTo(*l);
}


RITUAL_EXPORT QLineF * ctr_qt_core_ffi_QLineF_unitVector(QLineF const * this_ptr) {
  return new QLineF(this_ptr->unitVector());
}


RITUAL_EXPORT QLineF * ctr_qt_core_ffi_QLineF_normalVector(QLineF const * this_ptr) {
  return new QLineF(this_ptr->normalVector());
}


RITUAL_EXPORT QLineF::IntersectionType ctr_qt_core_ffi_QLineF_intersects(QLineF const * this_ptr, QLineF const * l, QPointF * intersectionPoint) {
  return this_ptr->intersects(*l, intersectionPoint);
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QLineF_pointAt(QLineF const * this_ptr, double t) {
  return new QPointF(this_ptr->pointAt(t));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLineF_translate(QLineF * this_ptr, QPointF const * p) {
  this_ptr->translate(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLineF_translate1(QLineF * this_ptr, double dx, double dy) {
  this_ptr->translate(dx, dy);
}


RITUAL_EXPORT QLineF * ctr_qt_core_ffi_QLineF_translated(QLineF const * this_ptr, QPointF const * p) {
  return new QLineF(this_ptr->translated(*p));
}


RITUAL_EXPORT QLineF * ctr_qt_core_ffi_QLineF_translated1(QLineF const * this_ptr, double dx, double dy) {
  return new QLineF(this_ptr->translated(dx, dy));
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QLineF_center(QLineF const * this_ptr) {
  return new QPointF(this_ptr->center());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLineF_setP1(QLineF * this_ptr, QPointF const * p1) {
  this_ptr->setP1(*p1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLineF_setP2(QLineF * this_ptr, QPointF const * p2) {
  this_ptr->setP2(*p2);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLineF_setPoints(QLineF * this_ptr, QPointF const * p1, QPointF const * p2) {
  this_ptr->setPoints(*p1, *p2);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLineF_setLine(QLineF * this_ptr, double x1, double y1, double x2, double y2) {
  this_ptr->setLine(x1, y1, x2, y2);
}


RITUAL_EXPORT QLine * ctr_qt_core_ffi_QLineF_toLine(QLineF const * this_ptr) {
  return new QLine(this_ptr->toLine());
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__100(QDebug const * d, QLineF const * p) {
  return new QDebug(operator<<(*d, *p));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__101(QDataStream * arg1, QLineF const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__102(QDataStream * arg1, QLineF * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QLockFile * ctr_qt_core_ffi_QLockFile_QLockFile(QString const * fileName) {
  return new QLockFile(*fileName);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLockFile_dQLockFile(QLockFile * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLockFile_fileName(QLockFile const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLockFile_lock(QLockFile * this_ptr) {
  return this_ptr->lock();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLockFile_tryLock(QLockFile * this_ptr, int timeout) {
  return this_ptr->tryLock(timeout);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLockFile_unlock(QLockFile * this_ptr) {
  this_ptr->unlock();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLockFile_setStaleLockTime(QLockFile * this_ptr, int arg1) {
  this_ptr->setStaleLockTime(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLockFile_staleLockTime(QLockFile const * this_ptr) {
  return this_ptr->staleLockTime();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLockFile_isLocked(QLockFile const * this_ptr) {
  return this_ptr->isLocked();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLockFile_getLockInfo(QLockFile const * this_ptr, long long * pid, QString * hostname, QString * appname) {
  return this_ptr->getLockInfo(pid, hostname, appname);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLockFile_removeStaleLockFile(QLockFile * this_ptr) {
  return this_ptr->removeStaleLockFile();
}


RITUAL_EXPORT QLockFile::LockError ctr_qt_core_ffi_QLockFile_error(QLockFile const * this_ptr) {
  return this_ptr->error();
}


RITUAL_EXPORT QLoggingCategory * ctr_qt_core_ffi_QLoggingCategory_QLoggingCategory(char const * category, QtMsgType severityLevel) {
  return new QLoggingCategory(category, severityLevel);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLoggingCategory_dQLoggingCategory(QLoggingCategory * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLoggingCategory_isEnabled(QLoggingCategory const * this_ptr, QtMsgType type) {
  return this_ptr->isEnabled(type);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLoggingCategory_setEnabled(QLoggingCategory * this_ptr, QtMsgType type, bool enable) {
  this_ptr->setEnabled(type, enable);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLoggingCategory_isDebugEnabled(QLoggingCategory const * this_ptr) {
  return this_ptr->isDebugEnabled();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLoggingCategory_isInfoEnabled(QLoggingCategory const * this_ptr) {
  return this_ptr->isInfoEnabled();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLoggingCategory_isWarningEnabled(QLoggingCategory const * this_ptr) {
  return this_ptr->isWarningEnabled();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLoggingCategory_isCriticalEnabled(QLoggingCategory const * this_ptr) {
  return this_ptr->isCriticalEnabled();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QLoggingCategory_categoryName(QLoggingCategory const * this_ptr) {
  return this_ptr->categoryName();
}


RITUAL_EXPORT QLoggingCategory * ctr_qt_core_ffi_QLoggingCategory_operator__(QLoggingCategory * this_ptr) {
  return &this_ptr->operator()();
}


RITUAL_EXPORT QLoggingCategory const * ctr_qt_core_ffi_QLoggingCategory_operator__1(QLoggingCategory const * this_ptr) {
  return &this_ptr->operator()();
}


RITUAL_EXPORT QLoggingCategory * ctr_qt_core_ffi_QLoggingCategory_defaultCategory() {
  return QLoggingCategory::defaultCategory();
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QLoggingCategory_installFilter(void (*arg1)(QLoggingCategory *)))(QLoggingCategory *) {
  return QLoggingCategory::installFilter(arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLoggingCategory_setFilterRules(QString const * rules) {
  QLoggingCategory::setFilterRules(*rules);
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_QMargins_QMargins() {
  return new QMargins();
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_QMargins_QMargins1(int left, int top, int right, int bottom) {
  return new QMargins(left, top, right, bottom);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMargins_isNull(QMargins const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMargins_left(QMargins const * this_ptr) {
  return this_ptr->left();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMargins_top(QMargins const * this_ptr) {
  return this_ptr->top();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMargins_right(QMargins const * this_ptr) {
  return this_ptr->right();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMargins_bottom(QMargins const * this_ptr) {
  return this_ptr->bottom();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMargins_setLeft(QMargins * this_ptr, int left) {
  this_ptr->setLeft(left);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMargins_setTop(QMargins * this_ptr, int top) {
  this_ptr->setTop(top);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMargins_setRight(QMargins * this_ptr, int right) {
  this_ptr->setRight(right);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMargins_setBottom(QMargins * this_ptr, int bottom) {
  this_ptr->setBottom(bottom);
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_QMargins_operator__(QMargins * this_ptr, QMargins const * margins) {
  return &this_ptr->operator+=(*margins);
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_QMargins_operator__1(QMargins * this_ptr, QMargins const * margins) {
  return &this_ptr->operator-=(*margins);
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_QMargins_operator__2(QMargins * this_ptr, int arg1) {
  return &this_ptr->operator+=(arg1);
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_QMargins_operator__3(QMargins * this_ptr, int arg1) {
  return &this_ptr->operator-=(arg1);
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_QMargins_operator__4(QMargins * this_ptr, int arg1) {
  return &this_ptr->operator*=(arg1);
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_QMargins_operator__5(QMargins * this_ptr, int arg1) {
  return &this_ptr->operator/=(arg1);
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_QMargins_operator__6(QMargins * this_ptr, double arg1) {
  return &this_ptr->operator*=(arg1);
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_QMargins_operator__7(QMargins * this_ptr, double arg1) {
  return &this_ptr->operator/=(arg1);
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_QMargins_toMarginsF(QMargins const * this_ptr) {
  return new QMarginsF(this_ptr->toMarginsF());
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__103(QDataStream * arg1, QMargins const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__104(QDataStream * arg1, QMargins * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_operator_302(QMargins const * m1, QMargins const * m2) {
  return new QMargins(operator+(*m1, *m2));
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_operator_303(QMargins const * m1, QMargins const * m2) {
  return new QMargins(operator-(*m1, *m2));
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_operator_304(QMargins const * lhs, int rhs) {
  return new QMargins(operator+(*lhs, rhs));
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_operator_305(int lhs, QMargins const * rhs) {
  return new QMargins(operator+(lhs, *rhs));
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_operator_306(QMargins const * lhs, int rhs) {
  return new QMargins(operator-(*lhs, rhs));
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_operator_307(QMargins const * margins, int factor) {
  return new QMargins(operator*(*margins, factor));
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_operator_308(int factor, QMargins const * margins) {
  return new QMargins(operator*(factor, *margins));
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_operator_309(QMargins const * margins, double factor) {
  return new QMargins(operator*(*margins, factor));
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_operator_310(double factor, QMargins const * margins) {
  return new QMargins(operator*(factor, *margins));
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_operator_311(QMargins const * margins, int divisor) {
  return new QMargins(operator/(*margins, divisor));
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_operator_312(QMargins const * margins, double divisor) {
  return new QMargins(operator/(*margins, divisor));
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_operator_313(QMargins const * m1, QMargins const * m2) {
  return new QMargins(operator|(*m1, *m2));
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_operator_314(QMargins const * margins) {
  return new QMargins(operator+(*margins));
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_operator_315(QMargins const * margins) {
  return new QMargins(operator-(*margins));
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__105(QDebug const * arg1, QMargins const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_QMarginsF_QMarginsF() {
  return new QMarginsF();
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_QMarginsF_QMarginsF1(double left, double top, double right, double bottom) {
  return new QMarginsF(left, top, right, bottom);
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_QMarginsF_QMarginsF2(QMargins const * margins) {
  return new QMarginsF(*margins);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMarginsF_isNull(QMarginsF const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QMarginsF_left(QMarginsF const * this_ptr) {
  return this_ptr->left();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QMarginsF_top(QMarginsF const * this_ptr) {
  return this_ptr->top();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QMarginsF_right(QMarginsF const * this_ptr) {
  return this_ptr->right();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QMarginsF_bottom(QMarginsF const * this_ptr) {
  return this_ptr->bottom();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMarginsF_setLeft(QMarginsF * this_ptr, double aleft) {
  this_ptr->setLeft(aleft);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMarginsF_setTop(QMarginsF * this_ptr, double atop) {
  this_ptr->setTop(atop);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMarginsF_setRight(QMarginsF * this_ptr, double aright) {
  this_ptr->setRight(aright);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMarginsF_setBottom(QMarginsF * this_ptr, double abottom) {
  this_ptr->setBottom(abottom);
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_QMarginsF_operator__(QMarginsF * this_ptr, QMarginsF const * margins) {
  return &this_ptr->operator+=(*margins);
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_QMarginsF_operator__1(QMarginsF * this_ptr, QMarginsF const * margins) {
  return &this_ptr->operator-=(*margins);
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_QMarginsF_operator__2(QMarginsF * this_ptr, double addend) {
  return &this_ptr->operator+=(addend);
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_QMarginsF_operator__3(QMarginsF * this_ptr, double subtrahend) {
  return &this_ptr->operator-=(subtrahend);
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_QMarginsF_operator__4(QMarginsF * this_ptr, double factor) {
  return &this_ptr->operator*=(factor);
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_QMarginsF_operator__5(QMarginsF * this_ptr, double divisor) {
  return &this_ptr->operator/=(divisor);
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_QMarginsF_toMargins(QMarginsF const * this_ptr) {
  return new QMargins(this_ptr->toMargins());
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__106(QDataStream * arg1, QMarginsF const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__107(QDataStream * arg1, QMarginsF * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_operator_316(QMarginsF const * lhs, QMarginsF const * rhs) {
  return new QMarginsF(operator+(*lhs, *rhs));
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_operator_317(QMarginsF const * lhs, QMarginsF const * rhs) {
  return new QMarginsF(operator-(*lhs, *rhs));
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_operator_318(QMarginsF const * lhs, double rhs) {
  return new QMarginsF(operator+(*lhs, rhs));
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_operator_319(double lhs, QMarginsF const * rhs) {
  return new QMarginsF(operator+(lhs, *rhs));
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_operator_320(QMarginsF const * lhs, double rhs) {
  return new QMarginsF(operator-(*lhs, rhs));
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_operator_321(QMarginsF const * lhs, double rhs) {
  return new QMarginsF(operator*(*lhs, rhs));
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_operator_322(double lhs, QMarginsF const * rhs) {
  return new QMarginsF(operator*(lhs, *rhs));
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_operator_323(QMarginsF const * lhs, double divisor) {
  return new QMarginsF(operator/(*lhs, divisor));
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_operator_324(QMarginsF const * m1, QMarginsF const * m2) {
  return new QMarginsF(operator|(*m1, *m2));
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_operator_325(QMarginsF const * margins) {
  return new QMarginsF(operator+(*margins));
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_operator_326(QMarginsF const * margins) {
  return new QMarginsF(operator-(*margins));
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__108(QDebug const * arg1, QMarginsF const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QMessageAuthenticationCode * ctr_qt_core_ffi_QMessageAuthenticationCode_QMessageAuthenticationCode(QCryptographicHash::Algorithm method, QByteArrayView const * key) {
  return new QMessageAuthenticationCode(method, *key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMessageAuthenticationCode_dQMessageAuthenticationCode(QMessageAuthenticationCode * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMessageAuthenticationCode_swap(QMessageAuthenticationCode * this_ptr, QMessageAuthenticationCode * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMessageAuthenticationCode_reset(QMessageAuthenticationCode * this_ptr) {
  this_ptr->reset();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMessageAuthenticationCode_setKey(QMessageAuthenticationCode * this_ptr, QByteArrayView const * key) {
  this_ptr->setKey(*key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMessageAuthenticationCode_addData(QMessageAuthenticationCode * this_ptr, char const * data, long long length) {
  this_ptr->addData(data, length);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMessageAuthenticationCode_addData1(QMessageAuthenticationCode * this_ptr, QByteArrayView const * data) {
  this_ptr->addData(*data);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMessageAuthenticationCode_addData2(QMessageAuthenticationCode * this_ptr, QIODevice * device) {
  return this_ptr->addData(device);
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QMessageAuthenticationCode_resultView(QMessageAuthenticationCode const * this_ptr) {
  return new QByteArrayView(this_ptr->resultView());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QMessageAuthenticationCode_result(QMessageAuthenticationCode const * this_ptr) {
  return new QByteArray(this_ptr->result());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QMessageAuthenticationCode_hash(QByteArrayView const * message, QByteArrayView const * key, QCryptographicHash::Algorithm method) {
  return new QByteArray(QMessageAuthenticationCode::hash(*message, *key, method));
}


RITUAL_EXPORT QMetaMethod * ctr_qt_core_ffi_QMetaMethod_QMetaMethod() {
  return new QMetaMethod();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QMetaMethod_methodSignature(QMetaMethod const * this_ptr) {
  return new QByteArray(this_ptr->methodSignature());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QMetaMethod_name(QMetaMethod const * this_ptr) {
  return new QByteArray(this_ptr->name());
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QMetaMethod_nameView(QMetaMethod const * this_ptr) {
  return new QByteArrayView(this_ptr->nameView());
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaMethod_typeName(QMetaMethod const * this_ptr) {
  return this_ptr->typeName();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaMethod_returnType(QMetaMethod const * this_ptr) {
  return this_ptr->returnType();
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QMetaMethod_returnMetaType(QMetaMethod const * this_ptr) {
  return new QMetaType(this_ptr->returnMetaType());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaMethod_parameterCount(QMetaMethod const * this_ptr) {
  return this_ptr->parameterCount();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaMethod_parameterType(QMetaMethod const * this_ptr, int index) {
  return this_ptr->parameterType(index);
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QMetaMethod_parameterMetaType(QMetaMethod const * this_ptr, int index) {
  return new QMetaType(this_ptr->parameterMetaType(index));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaMethod_getParameterTypes(QMetaMethod const * this_ptr, int * types) {
  this_ptr->getParameterTypes(types);
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_core_ffi_QMetaMethod_parameterTypes(QMetaMethod const * this_ptr) {
  return new QList< QByteArray >(this_ptr->parameterTypes());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QMetaMethod_parameterTypeName(QMetaMethod const * this_ptr, int index) {
  return new QByteArray(this_ptr->parameterTypeName(index));
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_core_ffi_QMetaMethod_parameterNames(QMetaMethod const * this_ptr) {
  return new QList< QByteArray >(this_ptr->parameterNames());
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaMethod_tag(QMetaMethod const * this_ptr) {
  return this_ptr->tag();
}


RITUAL_EXPORT QMetaMethod::Access ctr_qt_core_ffi_QMetaMethod_access(QMetaMethod const * this_ptr) {
  return this_ptr->access();
}


RITUAL_EXPORT QMetaMethod::MethodType ctr_qt_core_ffi_QMetaMethod_methodType(QMetaMethod const * this_ptr) {
  return this_ptr->methodType();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaMethod_attributes(QMetaMethod const * this_ptr) {
  return this_ptr->attributes();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaMethod_methodIndex(QMetaMethod const * this_ptr) {
  return this_ptr->methodIndex();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaMethod_relativeMethodIndex(QMetaMethod const * this_ptr) {
  return this_ptr->relativeMethodIndex();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaMethod_revision(QMetaMethod const * this_ptr) {
  return this_ptr->revision();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaMethod_isConst(QMetaMethod const * this_ptr) {
  return this_ptr->isConst();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QMetaMethod_enclosingMetaObject(QMetaMethod const * this_ptr) {
  return this_ptr->enclosingMetaObject();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaMethod_isValid(QMetaMethod const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QMetaEnum * ctr_qt_core_ffi_QMetaEnum_QMetaEnum() {
  return new QMetaEnum();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaEnum_name(QMetaEnum const * this_ptr) {
  return this_ptr->name();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaEnum_enumName(QMetaEnum const * this_ptr) {
  return this_ptr->enumName();
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QMetaEnum_metaType(QMetaEnum const * this_ptr) {
  return new QMetaType(this_ptr->metaType());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaEnum_isFlag(QMetaEnum const * this_ptr) {
  return this_ptr->isFlag();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaEnum_isScoped(QMetaEnum const * this_ptr) {
  return this_ptr->isScoped();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaEnum_is64Bit(QMetaEnum const * this_ptr) {
  return this_ptr->is64Bit();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaEnum_keyCount(QMetaEnum const * this_ptr) {
  return this_ptr->keyCount();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaEnum_key(QMetaEnum const * this_ptr, int index) {
  return this_ptr->key(index);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaEnum_value(QMetaEnum const * this_ptr, int index) {
  return this_ptr->value(index);
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaEnum_scope(QMetaEnum const * this_ptr) {
  return this_ptr->scope();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaEnum_keyToValue(QMetaEnum const * this_ptr, char const * key, bool * ok) {
  return this_ptr->keyToValue(key, ok);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaEnum_keysToValue(QMetaEnum const * this_ptr, char const * keys, bool * ok) {
  return this_ptr->keysToValue(keys, ok);
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaEnum_valueToKey(QMetaEnum const * this_ptr, unsigned long long value) {
  return this_ptr->valueToKey(value);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QMetaEnum_valueToKeys(QMetaEnum const * this_ptr, unsigned long long value) {
  return new QByteArray(this_ptr->valueToKeys(value));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QMetaEnum_enclosingMetaObject(QMetaEnum const * this_ptr) {
  return this_ptr->enclosingMetaObject();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaEnum_isValid(QMetaEnum const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QMetaProperty * ctr_qt_core_ffi_QMetaProperty_QMetaProperty() {
  return new QMetaProperty();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaProperty_name(QMetaProperty const * this_ptr) {
  return this_ptr->name();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaProperty_typeName(QMetaProperty const * this_ptr) {
  return this_ptr->typeName();
}


RITUAL_EXPORT QVariant::Type ctr_qt_core_ffi_QMetaProperty_type(QMetaProperty const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaProperty_userType(QMetaProperty const * this_ptr) {
  return this_ptr->userType();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaProperty_typeId(QMetaProperty const * this_ptr) {
  return this_ptr->typeId();
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QMetaProperty_metaType(QMetaProperty const * this_ptr) {
  return new QMetaType(this_ptr->metaType());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaProperty_propertyIndex(QMetaProperty const * this_ptr) {
  return this_ptr->propertyIndex();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaProperty_relativePropertyIndex(QMetaProperty const * this_ptr) {
  return this_ptr->relativePropertyIndex();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_isReadable(QMetaProperty const * this_ptr) {
  return this_ptr->isReadable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_isWritable(QMetaProperty const * this_ptr) {
  return this_ptr->isWritable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_isResettable(QMetaProperty const * this_ptr) {
  return this_ptr->isResettable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_isDesignable(QMetaProperty const * this_ptr) {
  return this_ptr->isDesignable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_isScriptable(QMetaProperty const * this_ptr) {
  return this_ptr->isScriptable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_isStored(QMetaProperty const * this_ptr) {
  return this_ptr->isStored();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_isUser(QMetaProperty const * this_ptr) {
  return this_ptr->isUser();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_isConstant(QMetaProperty const * this_ptr) {
  return this_ptr->isConstant();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_isFinal(QMetaProperty const * this_ptr) {
  return this_ptr->isFinal();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_isRequired(QMetaProperty const * this_ptr) {
  return this_ptr->isRequired();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_isBindable(QMetaProperty const * this_ptr) {
  return this_ptr->isBindable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_isFlagType(QMetaProperty const * this_ptr) {
  return this_ptr->isFlagType();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_isEnumType(QMetaProperty const * this_ptr) {
  return this_ptr->isEnumType();
}


RITUAL_EXPORT QMetaEnum * ctr_qt_core_ffi_QMetaProperty_enumerator(QMetaProperty const * this_ptr) {
  return new QMetaEnum(this_ptr->enumerator());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_hasNotifySignal(QMetaProperty const * this_ptr) {
  return this_ptr->hasNotifySignal();
}


RITUAL_EXPORT QMetaMethod * ctr_qt_core_ffi_QMetaProperty_notifySignal(QMetaProperty const * this_ptr) {
  return new QMetaMethod(this_ptr->notifySignal());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaProperty_notifySignalIndex(QMetaProperty const * this_ptr) {
  return this_ptr->notifySignalIndex();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaProperty_revision(QMetaProperty const * this_ptr) {
  return this_ptr->revision();
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QMetaProperty_read(QMetaProperty const * this_ptr, QObject const * obj) {
  return new QVariant(this_ptr->read(obj));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_write(QMetaProperty const * this_ptr, QObject * obj, QVariant const * value) {
  return this_ptr->write(obj, *value);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_reset(QMetaProperty const * this_ptr, QObject * obj) {
  return this_ptr->reset(obj);
}


RITUAL_EXPORT QUntypedBindable * ctr_qt_core_ffi_QMetaProperty_bindable(QMetaProperty const * this_ptr, QObject * object) {
  return new QUntypedBindable(this_ptr->bindable(object));
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QMetaProperty_readOnGadget(QMetaProperty const * this_ptr, void const * gadget) {
  return new QVariant(this_ptr->readOnGadget(gadget));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_writeOnGadget(QMetaProperty const * this_ptr, void * gadget, QVariant const * value) {
  return this_ptr->writeOnGadget(gadget, *value);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_resetOnGadget(QMetaProperty const * this_ptr, void * gadget) {
  return this_ptr->resetOnGadget(gadget);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_hasStdCppSet(QMetaProperty const * this_ptr) {
  return this_ptr->hasStdCppSet();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_isAlias(QMetaProperty const * this_ptr) {
  return this_ptr->isAlias();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaProperty_isValid(QMetaProperty const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QMetaProperty_enclosingMetaObject(QMetaProperty const * this_ptr) {
  return this_ptr->enclosingMetaObject();
}


RITUAL_EXPORT QMetaClassInfo * ctr_qt_core_ffi_QMetaClassInfo_QMetaClassInfo() {
  return new QMetaClassInfo();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaClassInfo_name(QMetaClassInfo const * this_ptr) {
  return this_ptr->name();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaClassInfo_value(QMetaClassInfo const * this_ptr) {
  return this_ptr->value();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QMetaClassInfo_enclosingMetaObject(QMetaClassInfo const * this_ptr) {
  return this_ptr->enclosingMetaObject();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QMimeData_metaObject(QMimeData const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QMimeData_qt_metacast(QMimeData * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMimeData_qt_metacall(QMimeData * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QMimeData_tr(char const * s, char const * c, int n) {
  return new QString(QMimeData::tr(s, c, n));
}


RITUAL_EXPORT QMimeData * ctr_qt_core_ffi_QMimeData_QMimeData() {
  return new QMimeData();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMimeData_dQMimeData(QMimeData * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QList< QUrl > * ctr_qt_core_ffi_QMimeData_urls(QMimeData const * this_ptr) {
  return new QList< QUrl >(this_ptr->urls());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMimeData_setUrls(QMimeData * this_ptr, QList< QUrl > const * urls) {
  this_ptr->setUrls(*urls);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMimeData_hasUrls(QMimeData const * this_ptr) {
  return this_ptr->hasUrls();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QMimeData_text(QMimeData const * this_ptr) {
  return new QString(this_ptr->text());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMimeData_setText(QMimeData * this_ptr, QString const * text) {
  this_ptr->setText(*text);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMimeData_hasText(QMimeData const * this_ptr) {
  return this_ptr->hasText();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QMimeData_html(QMimeData const * this_ptr) {
  return new QString(this_ptr->html());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMimeData_setHtml(QMimeData * this_ptr, QString const * html) {
  this_ptr->setHtml(*html);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMimeData_hasHtml(QMimeData const * this_ptr) {
  return this_ptr->hasHtml();
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QMimeData_imageData(QMimeData const * this_ptr) {
  return new QVariant(this_ptr->imageData());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMimeData_setImageData(QMimeData * this_ptr, QVariant const * image) {
  this_ptr->setImageData(*image);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMimeData_hasImage(QMimeData const * this_ptr) {
  return this_ptr->hasImage();
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QMimeData_colorData(QMimeData const * this_ptr) {
  return new QVariant(this_ptr->colorData());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMimeData_setColorData(QMimeData * this_ptr, QVariant const * color) {
  this_ptr->setColorData(*color);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMimeData_hasColor(QMimeData const * this_ptr) {
  return this_ptr->hasColor();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QMimeData_data(QMimeData const * this_ptr, QString const * mimetype) {
  return new QByteArray(this_ptr->data(*mimetype));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMimeData_setData(QMimeData * this_ptr, QString const * mimetype, QByteArray const * data) {
  this_ptr->setData(*mimetype, *data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMimeData_removeFormat(QMimeData * this_ptr, QString const * mimetype) {
  this_ptr->removeFormat(*mimetype);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMimeData_hasFormat(QMimeData const * this_ptr, QString const * mimetype) {
  return this_ptr->hasFormat(*mimetype);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QMimeData_formats(QMimeData const * this_ptr) {
  return new QList< QString >(this_ptr->formats());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMimeData_clear(QMimeData * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash50(QMimeType const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QMimeType_QMimeType() {
  return new QMimeType();
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QMimeType_QMimeType1(QMimeType const * other) {
  return new QMimeType(*other);
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QMimeType_operator_(QMimeType * this_ptr, QMimeType const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMimeType_swap(QMimeType * this_ptr, QMimeType * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMimeType_dQMimeType(QMimeType * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMimeType_isValid(QMimeType const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMimeType_isDefault(QMimeType const * this_ptr) {
  return this_ptr->isDefault();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QMimeType_name(QMimeType const * this_ptr) {
  return new QString(this_ptr->name());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QMimeType_comment(QMimeType const * this_ptr) {
  return new QString(this_ptr->comment());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QMimeType_genericIconName(QMimeType const * this_ptr) {
  return new QString(this_ptr->genericIconName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QMimeType_iconName(QMimeType const * this_ptr) {
  return new QString(this_ptr->iconName());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QMimeType_globPatterns(QMimeType const * this_ptr) {
  return new QList< QString >(this_ptr->globPatterns());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QMimeType_parentMimeTypes(QMimeType const * this_ptr) {
  return new QList< QString >(this_ptr->parentMimeTypes());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QMimeType_allAncestors(QMimeType const * this_ptr) {
  return new QList< QString >(this_ptr->allAncestors());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QMimeType_aliases(QMimeType const * this_ptr) {
  return new QList< QString >(this_ptr->aliases());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QMimeType_suffixes(QMimeType const * this_ptr) {
  return new QList< QString >(this_ptr->suffixes());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QMimeType_preferredSuffix(QMimeType const * this_ptr) {
  return new QString(this_ptr->preferredSuffix());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMimeType_inherits(QMimeType const * this_ptr, QString const * mimeTypeName) {
  return this_ptr->inherits(*mimeTypeName);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QMimeType_filterString(QMimeType const * this_ptr) {
  return new QString(this_ptr->filterString());
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__109(QDebug const * debug, QMimeType const * mime) {
  return new QDebug(operator<<(*debug, *mime));
}


RITUAL_EXPORT QMimeDatabase * ctr_qt_core_ffi_QMimeDatabase_QMimeDatabase() {
  return new QMimeDatabase();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMimeDatabase_dQMimeDatabase(QMimeDatabase * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QMimeDatabase_mimeTypeForName(QMimeDatabase const * this_ptr, QString const * nameOrAlias) {
  return new QMimeType(this_ptr->mimeTypeForName(*nameOrAlias));
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QMimeDatabase_mimeTypeForFile(QMimeDatabase const * this_ptr, QString const * fileName, QMimeDatabase::MatchMode mode) {
  return new QMimeType(this_ptr->mimeTypeForFile(*fileName, mode));
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QMimeDatabase_mimeTypeForFile1(QMimeDatabase const * this_ptr, QFileInfo const * fileInfo, QMimeDatabase::MatchMode mode) {
  return new QMimeType(this_ptr->mimeTypeForFile(*fileInfo, mode));
}


RITUAL_EXPORT QList< QMimeType > * ctr_qt_core_ffi_QMimeDatabase_mimeTypesForFileName(QMimeDatabase const * this_ptr, QString const * fileName) {
  return new QList< QMimeType >(this_ptr->mimeTypesForFileName(*fileName));
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QMimeDatabase_mimeTypeForData(QMimeDatabase const * this_ptr, QByteArray const * data) {
  return new QMimeType(this_ptr->mimeTypeForData(*data));
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QMimeDatabase_mimeTypeForData1(QMimeDatabase const * this_ptr, QIODevice * device) {
  return new QMimeType(this_ptr->mimeTypeForData(device));
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QMimeDatabase_mimeTypeForUrl(QMimeDatabase const * this_ptr, QUrl const * url) {
  return new QMimeType(this_ptr->mimeTypeForUrl(*url));
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QMimeDatabase_mimeTypeForFileNameAndData(QMimeDatabase const * this_ptr, QString const * fileName, QIODevice * device) {
  return new QMimeType(this_ptr->mimeTypeForFileNameAndData(*fileName, device));
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QMimeDatabase_mimeTypeForFileNameAndData1(QMimeDatabase const * this_ptr, QString const * fileName, QByteArray const * data) {
  return new QMimeType(this_ptr->mimeTypeForFileNameAndData(*fileName, *data));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QMimeDatabase_suffixForFileName(QMimeDatabase const * this_ptr, QString const * fileName) {
  return new QString(this_ptr->suffixForFileName(*fileName));
}


RITUAL_EXPORT QList< QMimeType > * ctr_qt_core_ffi_QMimeDatabase_allMimeTypes(QMimeDatabase const * this_ptr) {
  return new QList< QMimeType >(this_ptr->allMimeTypes());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QObjectCleanupHandler_metaObject(QObjectCleanupHandler const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QObjectCleanupHandler_qt_metacast(QObjectCleanupHandler * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QObjectCleanupHandler_qt_metacall(QObjectCleanupHandler * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QObjectCleanupHandler_tr(char const * s, char const * c, int n) {
  return new QString(QObjectCleanupHandler::tr(s, c, n));
}


RITUAL_EXPORT QObjectCleanupHandler * ctr_qt_core_ffi_QObjectCleanupHandler_QObjectCleanupHandler() {
  return new QObjectCleanupHandler();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QObjectCleanupHandler_dQObjectCleanupHandler(QObjectCleanupHandler * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_QObjectCleanupHandler_add(QObjectCleanupHandler * this_ptr, QObject * object) {
  return this_ptr->add(object);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QObjectCleanupHandler_remove(QObjectCleanupHandler * this_ptr, QObject * object) {
  this_ptr->remove(object);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObjectCleanupHandler_isEmpty(QObjectCleanupHandler const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QObjectCleanupHandler_clear(QObjectCleanupHandler * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QOperatingSystemVersionBase * ctr_qt_core_ffi_QOperatingSystemVersionBase_QOperatingSystemVersionBase(QOperatingSystemVersionBase::OSType osType, int vmajor, int vminor, int vmicro) {
  return new QOperatingSystemVersionBase(osType, vmajor, vminor, vmicro);
}


RITUAL_EXPORT QOperatingSystemVersionBase * ctr_qt_core_ffi_QOperatingSystemVersionBase_current() {
  return new QOperatingSystemVersionBase(QOperatingSystemVersionBase::current());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QOperatingSystemVersionBase_name(QOperatingSystemVersionBase const * osversion) {
  return new QString(QOperatingSystemVersionBase::name(*osversion));
}


RITUAL_EXPORT QOperatingSystemVersionBase::OSType ctr_qt_core_ffi_QOperatingSystemVersionBase_currentType() {
  return QOperatingSystemVersionBase::currentType();
}


RITUAL_EXPORT QVersionNumber * ctr_qt_core_ffi_QOperatingSystemVersionBase_version(QOperatingSystemVersionBase const * this_ptr) {
  return new QVersionNumber(this_ptr->version());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QOperatingSystemVersionBase_majorVersion(QOperatingSystemVersionBase const * this_ptr) {
  return this_ptr->majorVersion();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QOperatingSystemVersionBase_minorVersion(QOperatingSystemVersionBase const * this_ptr) {
  return this_ptr->minorVersion();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QOperatingSystemVersionBase_microVersion(QOperatingSystemVersionBase const * this_ptr) {
  return this_ptr->microVersion();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QOperatingSystemVersionBase_segmentCount(QOperatingSystemVersionBase const * this_ptr) {
  return this_ptr->segmentCount();
}


RITUAL_EXPORT QOperatingSystemVersionBase::OSType ctr_qt_core_ffi_QOperatingSystemVersionBase_type(QOperatingSystemVersionBase const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QOperatingSystemVersionBase_name1(QOperatingSystemVersionBase const * this_ptr) {
  return new QString(this_ptr->name());
}


RITUAL_EXPORT QOperatingSystemVersionUnexported * ctr_qt_core_ffi_QOperatingSystemVersionUnexported_QOperatingSystemVersionUnexported(QOperatingSystemVersionBase const * other) {
  return new QOperatingSystemVersionUnexported(*other);
}


RITUAL_EXPORT QOperatingSystemVersion * ctr_qt_core_ffi_QOperatingSystemVersion_QOperatingSystemVersion(QOperatingSystemVersionBase const * osversion) {
  return new QOperatingSystemVersion(*osversion);
}


RITUAL_EXPORT QOperatingSystemVersion * ctr_qt_core_ffi_QOperatingSystemVersion_QOperatingSystemVersion1(QOperatingSystemVersion::OSType osType, int vmajor, int vminor, int vmicro) {
  return new QOperatingSystemVersion(osType, vmajor, vminor, vmicro);
}


RITUAL_EXPORT QOperatingSystemVersion::OSType ctr_qt_core_ffi_QOperatingSystemVersion_currentType() {
  return QOperatingSystemVersion::currentType();
}


RITUAL_EXPORT QOperatingSystemVersion::OSType ctr_qt_core_ffi_QOperatingSystemVersion_type(QOperatingSystemVersion const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__110(QDebug const * debug, QOperatingSystemVersion const * ov) {
  return new QDebug(operator<<(*debug, *ov));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QParallelAnimationGroup_metaObject(QParallelAnimationGroup const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QParallelAnimationGroup_qt_metacast(QParallelAnimationGroup * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QParallelAnimationGroup_qt_metacall(QParallelAnimationGroup * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QParallelAnimationGroup_tr(char const * s, char const * c, int n) {
  return new QString(QParallelAnimationGroup::tr(s, c, n));
}


RITUAL_EXPORT QParallelAnimationGroup * ctr_qt_core_ffi_QParallelAnimationGroup_QParallelAnimationGroup(QObject * parent) {
  return new QParallelAnimationGroup(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QParallelAnimationGroup_dQParallelAnimationGroup(QParallelAnimationGroup * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QParallelAnimationGroup_duration(QParallelAnimationGroup const * this_ptr) {
  return this_ptr->duration();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QPauseAnimation_metaObject(QPauseAnimation const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QPauseAnimation_qt_metacast(QPauseAnimation * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QPauseAnimation_qt_metacall(QPauseAnimation * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QPauseAnimation_tr(char const * s, char const * c, int n) {
  return new QString(QPauseAnimation::tr(s, c, n));
}


RITUAL_EXPORT QPauseAnimation * ctr_qt_core_ffi_QPauseAnimation_QPauseAnimation(QObject * parent) {
  return new QPauseAnimation(parent);
}


RITUAL_EXPORT QPauseAnimation * ctr_qt_core_ffi_QPauseAnimation_QPauseAnimation1(int msecs, QObject * parent) {
  return new QPauseAnimation(msecs, parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPauseAnimation_dQPauseAnimation(QPauseAnimation * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QPauseAnimation_duration(QPauseAnimation const * this_ptr) {
  return this_ptr->duration();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPauseAnimation_setDuration(QPauseAnimation * this_ptr, int msecs) {
  this_ptr->setDuration(msecs);
}


RITUAL_EXPORT QBindable< int > * ctr_qt_core_ffi_QPauseAnimation_bindableDuration(QPauseAnimation * this_ptr) {
  return new QBindable< int >(this_ptr->bindableDuration());
}


RITUAL_EXPORT QPermission * ctr_qt_core_ffi_QPermission_QPermission() {
  return new QPermission();
}


RITUAL_EXPORT Qt::PermissionStatus ctr_qt_core_ffi_QPermission_status(QPermission const * this_ptr) {
  return this_ptr->status();
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QPermission_type(QPermission const * this_ptr) {
  return new QMetaType(this_ptr->type());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLocationPermission_setAccuracy(QLocationPermission * this_ptr, QLocationPermission::Accuracy accuracy) {
  this_ptr->setAccuracy(accuracy);
}


RITUAL_EXPORT QLocationPermission::Accuracy ctr_qt_core_ffi_QLocationPermission_accuracy(QLocationPermission const * this_ptr) {
  return this_ptr->accuracy();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLocationPermission_setAvailability(QLocationPermission * this_ptr, QLocationPermission::Availability availability) {
  this_ptr->setAvailability(availability);
}


RITUAL_EXPORT QLocationPermission::Availability ctr_qt_core_ffi_QLocationPermission_availability(QLocationPermission const * this_ptr) {
  return this_ptr->availability();
}


RITUAL_EXPORT QLocationPermission * ctr_qt_core_ffi_QLocationPermission_QLocationPermission() {
  return new QLocationPermission();
}


RITUAL_EXPORT QLocationPermission * ctr_qt_core_ffi_QLocationPermission_QLocationPermission1(QLocationPermission const * other) {
  return new QLocationPermission(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLocationPermission_dQLocationPermission(QLocationPermission * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QLocationPermission * ctr_qt_core_ffi_QLocationPermission_operator_(QLocationPermission * this_ptr, QLocationPermission const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLocationPermission_swap(QLocationPermission * this_ptr, QLocationPermission * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCalendarPermission_setAccessMode(QCalendarPermission * this_ptr, QCalendarPermission::AccessMode mode) {
  this_ptr->setAccessMode(mode);
}


RITUAL_EXPORT QCalendarPermission::AccessMode ctr_qt_core_ffi_QCalendarPermission_accessMode(QCalendarPermission const * this_ptr) {
  return this_ptr->accessMode();
}


RITUAL_EXPORT QCalendarPermission * ctr_qt_core_ffi_QCalendarPermission_QCalendarPermission() {
  return new QCalendarPermission();
}


RITUAL_EXPORT QCalendarPermission * ctr_qt_core_ffi_QCalendarPermission_QCalendarPermission1(QCalendarPermission const * other) {
  return new QCalendarPermission(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCalendarPermission_dQCalendarPermission(QCalendarPermission * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QCalendarPermission * ctr_qt_core_ffi_QCalendarPermission_operator_(QCalendarPermission * this_ptr, QCalendarPermission const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCalendarPermission_swap(QCalendarPermission * this_ptr, QCalendarPermission * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QContactsPermission_setAccessMode(QContactsPermission * this_ptr, QContactsPermission::AccessMode mode) {
  this_ptr->setAccessMode(mode);
}


RITUAL_EXPORT QContactsPermission::AccessMode ctr_qt_core_ffi_QContactsPermission_accessMode(QContactsPermission const * this_ptr) {
  return this_ptr->accessMode();
}


RITUAL_EXPORT QContactsPermission * ctr_qt_core_ffi_QContactsPermission_QContactsPermission() {
  return new QContactsPermission();
}


RITUAL_EXPORT QContactsPermission * ctr_qt_core_ffi_QContactsPermission_QContactsPermission1(QContactsPermission const * other) {
  return new QContactsPermission(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QContactsPermission_dQContactsPermission(QContactsPermission * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QContactsPermission * ctr_qt_core_ffi_QContactsPermission_operator_(QContactsPermission * this_ptr, QContactsPermission const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QContactsPermission_swap(QContactsPermission * this_ptr, QContactsPermission * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBluetoothPermission_setCommunicationModes(QBluetoothPermission * this_ptr, int modes) {
  this_ptr->setCommunicationModes(QFlags< QBluetoothPermission::CommunicationMode >(modes));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QBluetoothPermission_communicationModes(QBluetoothPermission const * this_ptr) {
  return int(this_ptr->communicationModes());
}


RITUAL_EXPORT QBluetoothPermission * ctr_qt_core_ffi_QBluetoothPermission_QBluetoothPermission() {
  return new QBluetoothPermission();
}


RITUAL_EXPORT QBluetoothPermission * ctr_qt_core_ffi_QBluetoothPermission_QBluetoothPermission1(QBluetoothPermission const * other) {
  return new QBluetoothPermission(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBluetoothPermission_dQBluetoothPermission(QBluetoothPermission * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QBluetoothPermission * ctr_qt_core_ffi_QBluetoothPermission_operator_(QBluetoothPermission * this_ptr, QBluetoothPermission const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBluetoothPermission_swap(QBluetoothPermission * this_ptr, QBluetoothPermission * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QCameraPermission * ctr_qt_core_ffi_QCameraPermission_QCameraPermission() {
  return new QCameraPermission();
}


RITUAL_EXPORT QCameraPermission * ctr_qt_core_ffi_QCameraPermission_QCameraPermission1(QCameraPermission const * other) {
  return new QCameraPermission(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCameraPermission_dQCameraPermission(QCameraPermission * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QCameraPermission * ctr_qt_core_ffi_QCameraPermission_operator_(QCameraPermission * this_ptr, QCameraPermission const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCameraPermission_swap(QCameraPermission * this_ptr, QCameraPermission * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QMicrophonePermission * ctr_qt_core_ffi_QMicrophonePermission_QMicrophonePermission() {
  return new QMicrophonePermission();
}


RITUAL_EXPORT QMicrophonePermission * ctr_qt_core_ffi_QMicrophonePermission_QMicrophonePermission1(QMicrophonePermission const * other) {
  return new QMicrophonePermission(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMicrophonePermission_dQMicrophonePermission(QMicrophonePermission * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMicrophonePermission * ctr_qt_core_ffi_QMicrophonePermission_operator_(QMicrophonePermission * this_ptr, QMicrophonePermission const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMicrophonePermission_swap(QMicrophonePermission * this_ptr, QMicrophonePermission * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT unsigned char ctr_qt_core_ffi_qPluginArchRequirements() {
  return qPluginArchRequirements();
}


RITUAL_EXPORT unsigned char ctr_qt_core_ffi_QPluginMetaData_archRequirements() {
  return QPluginMetaData::archRequirements();
}


RITUAL_EXPORT QPluginMetaData::MagicHeader * ctr_qt_core_ffi_QPluginMetaData_MagicHeader_MagicHeader() {
  return new QPluginMetaData::MagicHeader();
}


RITUAL_EXPORT QPluginMetaData::ElfNoteHeader * ctr_qt_core_ffi_QPluginMetaData_ElfNoteHeader_ElfNoteHeader(unsigned int payloadSize) {
  return new QPluginMetaData::ElfNoteHeader(payloadSize);
}


RITUAL_EXPORT QJsonObject * ctr_qt_core_ffi_QStaticPlugin_metaData(QStaticPlugin const * this_ptr) {
  return new QJsonObject(this_ptr->metaData());
}


RITUAL_EXPORT void ctr_qt_core_ffi_qRegisterStaticPluginFunction(QStaticPlugin const * staticPlugin) {
  qRegisterStaticPluginFunction(*staticPlugin);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QPluginLoader_metaObject(QPluginLoader const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QPluginLoader_qt_metacast(QPluginLoader * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QPluginLoader_qt_metacall(QPluginLoader * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QPluginLoader_tr(char const * s, char const * c, int n) {
  return new QString(QPluginLoader::tr(s, c, n));
}


RITUAL_EXPORT QPluginLoader * ctr_qt_core_ffi_QPluginLoader_QPluginLoader(QObject * parent) {
  return new QPluginLoader(parent);
}


RITUAL_EXPORT QPluginLoader * ctr_qt_core_ffi_QPluginLoader_QPluginLoader1(QString const * fileName, QObject * parent) {
  return new QPluginLoader(*fileName, parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPluginLoader_dQPluginLoader(QPluginLoader * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_QPluginLoader_instance(QPluginLoader * this_ptr) {
  return this_ptr->instance();
}


RITUAL_EXPORT QJsonObject * ctr_qt_core_ffi_QPluginLoader_metaData(QPluginLoader const * this_ptr) {
  return new QJsonObject(this_ptr->metaData());
}


RITUAL_EXPORT QList< QObject * > * ctr_qt_core_ffi_QPluginLoader_staticInstances() {
  return new QList< QObject * >(QPluginLoader::staticInstances());
}


RITUAL_EXPORT QList< QStaticPlugin > * ctr_qt_core_ffi_QPluginLoader_staticPlugins() {
  return new QList< QStaticPlugin >(QPluginLoader::staticPlugins());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QPluginLoader_load(QPluginLoader * this_ptr) {
  return this_ptr->load();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QPluginLoader_unload(QPluginLoader * this_ptr) {
  return this_ptr->unload();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QPluginLoader_isLoaded(QPluginLoader const * this_ptr) {
  return this_ptr->isLoaded();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPluginLoader_setFileName(QPluginLoader * this_ptr, QString const * fileName) {
  this_ptr->setFileName(*fileName);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QPluginLoader_fileName(QPluginLoader const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QPluginLoader_errorString(QPluginLoader const * this_ptr) {
  return new QString(this_ptr->errorString());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPluginLoader_setLoadHints(QPluginLoader * this_ptr, int loadHints) {
  this_ptr->setLoadHints(QFlags< QLibrary::LoadHint >(loadHints));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QPluginLoader_loadHints(QPluginLoader const * this_ptr) {
  return int(this_ptr->loadHints());
}


RITUAL_EXPORT QProcessEnvironment * ctr_qt_core_ffi_QProcessEnvironment_QProcessEnvironment() {
  return new QProcessEnvironment();
}


RITUAL_EXPORT QProcessEnvironment * ctr_qt_core_ffi_QProcessEnvironment_QProcessEnvironment1(QProcessEnvironment::Initialization arg1) {
  return new QProcessEnvironment(arg1);
}


RITUAL_EXPORT QProcessEnvironment * ctr_qt_core_ffi_QProcessEnvironment_QProcessEnvironment2(QProcessEnvironment const * other) {
  return new QProcessEnvironment(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcessEnvironment_dQProcessEnvironment(QProcessEnvironment * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QProcessEnvironment * ctr_qt_core_ffi_QProcessEnvironment_operator_1(QProcessEnvironment * this_ptr, QProcessEnvironment const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcessEnvironment_swap(QProcessEnvironment * this_ptr, QProcessEnvironment * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcessEnvironment_isEmpty(QProcessEnvironment const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcessEnvironment_inheritsFromParent(QProcessEnvironment const * this_ptr) {
  return this_ptr->inheritsFromParent();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcessEnvironment_clear(QProcessEnvironment * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcessEnvironment_contains(QProcessEnvironment const * this_ptr, QString const * name) {
  return this_ptr->contains(*name);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcessEnvironment_insert(QProcessEnvironment * this_ptr, QString const * name, QString const * value) {
  this_ptr->insert(*name, *value);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcessEnvironment_remove(QProcessEnvironment * this_ptr, QString const * name) {
  this_ptr->remove(*name);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QProcessEnvironment_value(QProcessEnvironment const * this_ptr, QString const * name, QString const * defaultValue) {
  return new QString(this_ptr->value(*name, *defaultValue));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QProcessEnvironment_toStringList(QProcessEnvironment const * this_ptr) {
  return new QList< QString >(this_ptr->toStringList());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QProcessEnvironment_keys(QProcessEnvironment const * this_ptr) {
  return new QList< QString >(this_ptr->keys());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcessEnvironment_insert1(QProcessEnvironment * this_ptr, QProcessEnvironment const * e) {
  this_ptr->insert(*e);
}


RITUAL_EXPORT QProcessEnvironment * ctr_qt_core_ffi_QProcessEnvironment_systemEnvironment() {
  return new QProcessEnvironment(QProcessEnvironment::systemEnvironment());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QProcess_metaObject(QProcess const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QProcess_qt_metacast(QProcess * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QProcess_qt_metacall(QProcess * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QProcess_tr(char const * s, char const * c, int n) {
  return new QString(QProcess::tr(s, c, n));
}


RITUAL_EXPORT QProcess * ctr_qt_core_ffi_QProcess_QProcess(QObject * parent) {
  return new QProcess(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_dQProcess(QProcess * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_start(QProcess * this_ptr, QString const * program, QList< QString > const * arguments, int mode) {
  this_ptr->start(*program, *arguments, QFlags< QIODeviceBase::OpenModeFlag >(mode));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_start1(QProcess * this_ptr, int mode) {
  this_ptr->start(QFlags< QIODeviceBase::OpenModeFlag >(mode));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_startCommand(QProcess * this_ptr, QString const * command, int mode) {
  this_ptr->startCommand(*command, QFlags< QIODeviceBase::OpenModeFlag >(mode));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_startDetached(QProcess * this_ptr, long long * pid) {
  return this_ptr->startDetached(pid);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_open(QProcess * this_ptr, int mode) {
  return this_ptr->open(QFlags< QIODeviceBase::OpenModeFlag >(mode));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QProcess_program(QProcess const * this_ptr) {
  return new QString(this_ptr->program());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setProgram(QProcess * this_ptr, QString const * program) {
  this_ptr->setProgram(*program);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QProcess_arguments(QProcess const * this_ptr) {
  return new QList< QString >(this_ptr->arguments());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setArguments(QProcess * this_ptr, QList< QString > const * arguments) {
  this_ptr->setArguments(*arguments);
}


RITUAL_EXPORT QProcess::ProcessChannelMode ctr_qt_core_ffi_QProcess_processChannelMode(QProcess const * this_ptr) {
  return this_ptr->processChannelMode();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setProcessChannelMode(QProcess * this_ptr, QProcess::ProcessChannelMode mode) {
  this_ptr->setProcessChannelMode(mode);
}


RITUAL_EXPORT QProcess::InputChannelMode ctr_qt_core_ffi_QProcess_inputChannelMode(QProcess const * this_ptr) {
  return this_ptr->inputChannelMode();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setInputChannelMode(QProcess * this_ptr, QProcess::InputChannelMode mode) {
  this_ptr->setInputChannelMode(mode);
}


RITUAL_EXPORT QProcess::ProcessChannel ctr_qt_core_ffi_QProcess_readChannel(QProcess const * this_ptr) {
  return this_ptr->readChannel();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setReadChannel(QProcess * this_ptr, QProcess::ProcessChannel channel) {
  this_ptr->setReadChannel(channel);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_closeReadChannel(QProcess * this_ptr, QProcess::ProcessChannel channel) {
  this_ptr->closeReadChannel(channel);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_closeWriteChannel(QProcess * this_ptr) {
  this_ptr->closeWriteChannel();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setStandardInputFile(QProcess * this_ptr, QString const * fileName) {
  this_ptr->setStandardInputFile(*fileName);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setStandardOutputFile(QProcess * this_ptr, QString const * fileName, int mode) {
  this_ptr->setStandardOutputFile(*fileName, QFlags< QIODeviceBase::OpenModeFlag >(mode));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setStandardErrorFile(QProcess * this_ptr, QString const * fileName, int mode) {
  this_ptr->setStandardErrorFile(*fileName, QFlags< QIODeviceBase::OpenModeFlag >(mode));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setStandardOutputProcess(QProcess * this_ptr, QProcess * destination) {
  this_ptr->setStandardOutputProcess(destination);
}


#ifndef _WIN32
RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_failChildProcessModifier(QProcess * this_ptr, char const * description, int error) {
  this_ptr->failChildProcessModifier(description, error);
}


RITUAL_EXPORT QProcess::UnixProcessParameters * ctr_qt_core_ffi_QProcess_unixProcessParameters(QProcess const * this_ptr) {
  return new QProcess::UnixProcessParameters(this_ptr->unixProcessParameters());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setUnixProcessParameters(QProcess * this_ptr, QProcess::UnixProcessParameters const * params) {
  this_ptr->setUnixProcessParameters(*params);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setUnixProcessParameters1(QProcess * this_ptr, int flagsOnly) {
  this_ptr->setUnixProcessParameters(QFlags< QProcess::UnixProcessFlag >(flagsOnly));
}
#endif


RITUAL_EXPORT QString * ctr_qt_core_ffi_QProcess_workingDirectory(QProcess const * this_ptr) {
  return new QString(this_ptr->workingDirectory());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setWorkingDirectory(QProcess * this_ptr, QString const * dir) {
  this_ptr->setWorkingDirectory(*dir);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setEnvironment(QProcess * this_ptr, QList< QString > const * environment) {
  this_ptr->setEnvironment(*environment);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QProcess_environment(QProcess const * this_ptr) {
  return new QList< QString >(this_ptr->environment());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_setProcessEnvironment(QProcess * this_ptr, QProcessEnvironment const * environment) {
  this_ptr->setProcessEnvironment(*environment);
}


RITUAL_EXPORT QProcessEnvironment * ctr_qt_core_ffi_QProcess_processEnvironment(QProcess const * this_ptr) {
  return new QProcessEnvironment(this_ptr->processEnvironment());
}


RITUAL_EXPORT QProcess::ProcessError ctr_qt_core_ffi_QProcess_error(QProcess const * this_ptr) {
  return this_ptr->error();
}


RITUAL_EXPORT QProcess::ProcessState ctr_qt_core_ffi_QProcess_state(QProcess const * this_ptr) {
  return this_ptr->state();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QProcess_processId(QProcess const * this_ptr) {
  return this_ptr->processId();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_waitForStarted(QProcess * this_ptr, int msecs) {
  return this_ptr->waitForStarted(msecs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_waitForReadyRead(QProcess * this_ptr, int msecs) {
  return this_ptr->waitForReadyRead(msecs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_waitForBytesWritten(QProcess * this_ptr, int msecs) {
  return this_ptr->waitForBytesWritten(msecs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_waitForFinished(QProcess * this_ptr, int msecs) {
  return this_ptr->waitForFinished(msecs);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QProcess_readAllStandardOutput(QProcess * this_ptr) {
  return new QByteArray(this_ptr->readAllStandardOutput());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QProcess_readAllStandardError(QProcess * this_ptr) {
  return new QByteArray(this_ptr->readAllStandardError());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QProcess_exitCode(QProcess const * this_ptr) {
  return this_ptr->exitCode();
}


RITUAL_EXPORT QProcess::ExitStatus ctr_qt_core_ffi_QProcess_exitStatus(QProcess const * this_ptr) {
  return this_ptr->exitStatus();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QProcess_bytesToWrite(QProcess const * this_ptr) {
  return this_ptr->bytesToWrite();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_isSequential(QProcess const * this_ptr) {
  return this_ptr->isSequential();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_close(QProcess * this_ptr) {
  this_ptr->close();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QProcess_execute(QString const * program, QList< QString > const * arguments) {
  return QProcess::execute(*program, *arguments);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QProcess_startDetached1(QString const * program, QList< QString > const * arguments, QString const * workingDirectory, long long * pid) {
  return QProcess::startDetached(*program, *arguments, *workingDirectory, pid);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QProcess_systemEnvironment() {
  return new QList< QString >(QProcess::systemEnvironment());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QProcess_nullDevice() {
  return new QString(QProcess::nullDevice());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QProcess_splitCommand(QStringView const * command) {
  return new QList< QString >(QProcess::splitCommand(*command));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_terminate(QProcess * this_ptr) {
  this_ptr->terminate();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_kill(QProcess * this_ptr) {
  this_ptr->kill();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QVariantAnimation_metaObject(QVariantAnimation const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QVariantAnimation_qt_metacast(QVariantAnimation * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QVariantAnimation_qt_metacall(QVariantAnimation * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QVariantAnimation_tr(char const * s, char const * c, int n) {
  return new QString(QVariantAnimation::tr(s, c, n));
}


RITUAL_EXPORT QVariantAnimation * ctr_qt_core_ffi_QVariantAnimation_QVariantAnimation(QObject * parent) {
  return new QVariantAnimation(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QVariantAnimation_dQVariantAnimation(QVariantAnimation * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariantAnimation_startValue(QVariantAnimation const * this_ptr) {
  return new QVariant(this_ptr->startValue());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QVariantAnimation_setStartValue(QVariantAnimation * this_ptr, QVariant const * value) {
  this_ptr->setStartValue(*value);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariantAnimation_endValue(QVariantAnimation const * this_ptr) {
  return new QVariant(this_ptr->endValue());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QVariantAnimation_setEndValue(QVariantAnimation * this_ptr, QVariant const * value) {
  this_ptr->setEndValue(*value);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariantAnimation_keyValueAt(QVariantAnimation const * this_ptr, double step) {
  return new QVariant(this_ptr->keyValueAt(step));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QVariantAnimation_setKeyValueAt(QVariantAnimation * this_ptr, double step, QVariant const * value) {
  this_ptr->setKeyValueAt(step, *value);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariantAnimation_currentValue(QVariantAnimation const * this_ptr) {
  return new QVariant(this_ptr->currentValue());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QVariantAnimation_duration(QVariantAnimation const * this_ptr) {
  return this_ptr->duration();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QVariantAnimation_setDuration(QVariantAnimation * this_ptr, int msecs) {
  this_ptr->setDuration(msecs);
}


RITUAL_EXPORT QBindable< int > * ctr_qt_core_ffi_QVariantAnimation_bindableDuration(QVariantAnimation * this_ptr) {
  return new QBindable< int >(this_ptr->bindableDuration());
}


RITUAL_EXPORT QEasingCurve * ctr_qt_core_ffi_QVariantAnimation_easingCurve(QVariantAnimation const * this_ptr) {
  return new QEasingCurve(this_ptr->easingCurve());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QVariantAnimation_setEasingCurve(QVariantAnimation * this_ptr, QEasingCurve const * easing) {
  this_ptr->setEasingCurve(*easing);
}


RITUAL_EXPORT QBindable< QEasingCurve > * ctr_qt_core_ffi_QVariantAnimation_bindableEasingCurve(QVariantAnimation * this_ptr) {
  return new QBindable< QEasingCurve >(this_ptr->bindableEasingCurve());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QPropertyAnimation_metaObject(QPropertyAnimation const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QPropertyAnimation_qt_metacast(QPropertyAnimation * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QPropertyAnimation_qt_metacall(QPropertyAnimation * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QPropertyAnimation_tr(char const * s, char const * c, int n) {
  return new QString(QPropertyAnimation::tr(s, c, n));
}


RITUAL_EXPORT QPropertyAnimation * ctr_qt_core_ffi_QPropertyAnimation_QPropertyAnimation(QObject * parent) {
  return new QPropertyAnimation(parent);
}


RITUAL_EXPORT QPropertyAnimation * ctr_qt_core_ffi_QPropertyAnimation_QPropertyAnimation1(QObject * target, QByteArray const * propertyName, QObject * parent) {
  return new QPropertyAnimation(target, *propertyName, parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPropertyAnimation_dQPropertyAnimation(QPropertyAnimation * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_QPropertyAnimation_targetObject(QPropertyAnimation const * this_ptr) {
  return this_ptr->targetObject();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPropertyAnimation_setTargetObject(QPropertyAnimation * this_ptr, QObject * target) {
  this_ptr->setTargetObject(target);
}


RITUAL_EXPORT QBindable< QObject * > * ctr_qt_core_ffi_QPropertyAnimation_bindableTargetObject(QPropertyAnimation * this_ptr) {
  return new QBindable< QObject * >(this_ptr->bindableTargetObject());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QPropertyAnimation_propertyName(QPropertyAnimation const * this_ptr) {
  return new QByteArray(this_ptr->propertyName());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPropertyAnimation_setPropertyName(QPropertyAnimation * this_ptr, QByteArray const * propertyName) {
  this_ptr->setPropertyName(*propertyName);
}


RITUAL_EXPORT QBindable< QByteArray > * ctr_qt_core_ffi_QPropertyAnimation_bindablePropertyName(QPropertyAnimation * this_ptr) {
  return new QBindable< QByteArray >(this_ptr->bindablePropertyName());
}


RITUAL_EXPORT QRandomGenerator * ctr_qt_core_ffi_QRandomGenerator_QRandomGenerator(unsigned int seedValue) {
  return new QRandomGenerator(seedValue);
}


RITUAL_EXPORT QRandomGenerator * ctr_qt_core_ffi_QRandomGenerator_QRandomGenerator1(unsigned int const * seedBuffer, long long len) {
  return new QRandomGenerator(seedBuffer, len);
}


RITUAL_EXPORT QRandomGenerator * ctr_qt_core_ffi_QRandomGenerator_QRandomGenerator3(unsigned int const * begin, unsigned int const * end) {
  return new QRandomGenerator(begin, end);
}


RITUAL_EXPORT QRandomGenerator * ctr_qt_core_ffi_QRandomGenerator_QRandomGenerator4(QRandomGenerator const * other) {
  return new QRandomGenerator(*other);
}


RITUAL_EXPORT QRandomGenerator * ctr_qt_core_ffi_QRandomGenerator_operator_(QRandomGenerator * this_ptr, QRandomGenerator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRandomGenerator_dQRandomGenerator(QRandomGenerator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QRandomGenerator_generate(QRandomGenerator * this_ptr) {
  return this_ptr->generate();
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QRandomGenerator_generate64(QRandomGenerator * this_ptr) {
  return this_ptr->generate64();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QRandomGenerator_generateDouble(QRandomGenerator * this_ptr) {
  return this_ptr->generateDouble();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QRandomGenerator_bounded(QRandomGenerator * this_ptr, double highest) {
  return this_ptr->bounded(highest);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QRandomGenerator_bounded1(QRandomGenerator * this_ptr, unsigned int highest) {
  return this_ptr->bounded(highest);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QRandomGenerator_bounded2(QRandomGenerator * this_ptr, unsigned int lowest, unsigned int highest) {
  return this_ptr->bounded(lowest, highest);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRandomGenerator_bounded3(QRandomGenerator * this_ptr, int highest) {
  return this_ptr->bounded(highest);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRandomGenerator_bounded4(QRandomGenerator * this_ptr, int lowest, int highest) {
  return this_ptr->bounded(lowest, highest);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QRandomGenerator_bounded5(QRandomGenerator * this_ptr, unsigned long long highest) {
  return this_ptr->bounded(highest);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QRandomGenerator_bounded6(QRandomGenerator * this_ptr, unsigned long long lowest, unsigned long long highest) {
  return this_ptr->bounded(lowest, highest);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QRandomGenerator_bounded7(QRandomGenerator * this_ptr, long long highest) {
  return this_ptr->bounded(highest);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QRandomGenerator_bounded8(QRandomGenerator * this_ptr, long long lowest, long long highest) {
  return this_ptr->bounded(lowest, highest);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QRandomGenerator_bounded9(QRandomGenerator * this_ptr, int lowest, long long highest) {
  return this_ptr->bounded(lowest, highest);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QRandomGenerator_bounded10(QRandomGenerator * this_ptr, long long lowest, int highest) {
  return this_ptr->bounded(lowest, highest);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QRandomGenerator_bounded11(QRandomGenerator * this_ptr, unsigned int lowest, unsigned long long highest) {
  return this_ptr->bounded(lowest, highest);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QRandomGenerator_bounded12(QRandomGenerator * this_ptr, unsigned long long lowest, unsigned int highest) {
  return this_ptr->bounded(lowest, highest);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRandomGenerator_generate1(QRandomGenerator * this_ptr, unsigned int * begin, unsigned int * end) {
  this_ptr->generate(begin, end);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QRandomGenerator_operator__(QRandomGenerator * this_ptr) {
  return this_ptr->operator()();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRandomGenerator_seed(QRandomGenerator * this_ptr, unsigned int s) {
  this_ptr->seed(s);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRandomGenerator_discard(QRandomGenerator * this_ptr, unsigned long long z) {
  this_ptr->discard(z);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QRandomGenerator_min() {
  return QRandomGenerator::min();
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QRandomGenerator_max() {
  return QRandomGenerator::max();
}


RITUAL_EXPORT QRandomGenerator * ctr_qt_core_ffi_QRandomGenerator_system() {
  return QRandomGenerator::system();
}


RITUAL_EXPORT QRandomGenerator * ctr_qt_core_ffi_QRandomGenerator_global() {
  return QRandomGenerator::global();
}


} // extern "C"
