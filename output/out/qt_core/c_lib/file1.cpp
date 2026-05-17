#include "qt_core_c_global.h"
#include "file1.h"
extern "C" {
RITUAL_EXPORT int ctr_qt_core_ffi_QMessageLogContext_CurrentVersion() {
  return QMessageLogContext::CurrentVersion;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMessageLogContext_version(QMessageLogContext const * this_ptr) {
  return this_ptr->version;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMessageLogContext_version(QMessageLogContext * this_ptr, int value) {
  this_ptr->version = value;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMessageLogContext_line(QMessageLogContext const * this_ptr) {
  return this_ptr->line;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMessageLogContext_line(QMessageLogContext * this_ptr, int value) {
  this_ptr->line = value;
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMessageLogContext_file(QMessageLogContext const * this_ptr) {
  return this_ptr->file;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMessageLogContext_file(QMessageLogContext * this_ptr, char const * value) {
  this_ptr->file = value;
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMessageLogContext_function(QMessageLogContext const * this_ptr) {
  return this_ptr->function;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMessageLogContext_function(QMessageLogContext * this_ptr, char const * value) {
  this_ptr->function = value;
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMessageLogContext_category(QMessageLogContext const * this_ptr) {
  return this_ptr->category;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMessageLogContext_category(QMessageLogContext * this_ptr, char const * value) {
  this_ptr->category = value;
}


RITUAL_EXPORT Qt::partial_ordering const * ctr_qt_core_ffi_Qt_partial_ordering_less() {
  return &Qt::partial_ordering::less;
}


RITUAL_EXPORT Qt::partial_ordering const * ctr_qt_core_ffi_Qt_partial_ordering_equivalent() {
  return &Qt::partial_ordering::equivalent;
}


RITUAL_EXPORT Qt::partial_ordering const * ctr_qt_core_ffi_Qt_partial_ordering_greater() {
  return &Qt::partial_ordering::greater;
}


RITUAL_EXPORT Qt::partial_ordering const * ctr_qt_core_ffi_Qt_partial_ordering_unordered() {
  return &Qt::partial_ordering::unordered;
}


RITUAL_EXPORT Qt::weak_ordering const * ctr_qt_core_ffi_Qt_weak_ordering_less() {
  return &Qt::weak_ordering::less;
}


RITUAL_EXPORT Qt::weak_ordering const * ctr_qt_core_ffi_Qt_weak_ordering_equivalent() {
  return &Qt::weak_ordering::equivalent;
}


RITUAL_EXPORT Qt::weak_ordering const * ctr_qt_core_ffi_Qt_weak_ordering_greater() {
  return &Qt::weak_ordering::greater;
}


RITUAL_EXPORT Qt::strong_ordering const * ctr_qt_core_ffi_Qt_strong_ordering_less() {
  return &Qt::strong_ordering::less;
}


RITUAL_EXPORT Qt::strong_ordering const * ctr_qt_core_ffi_Qt_strong_ordering_equivalent() {
  return &Qt::strong_ordering::equivalent;
}


RITUAL_EXPORT Qt::strong_ordering const * ctr_qt_core_ffi_Qt_strong_ordering_equal() {
  return &Qt::strong_ordering::equal;
}


RITUAL_EXPORT Qt::strong_ordering const * ctr_qt_core_ffi_Qt_strong_ordering_greater() {
  return &Qt::strong_ordering::greater;
}


RITUAL_EXPORT QPartialOrdering const * ctr_qt_core_ffi_QPartialOrdering_Less() {
  return &QPartialOrdering::Less;
}


RITUAL_EXPORT QPartialOrdering const * ctr_qt_core_ffi_QPartialOrdering_Equivalent() {
  return &QPartialOrdering::Equivalent;
}


RITUAL_EXPORT QPartialOrdering const * ctr_qt_core_ffi_QPartialOrdering_Greater() {
  return &QPartialOrdering::Greater;
}


RITUAL_EXPORT QPartialOrdering const * ctr_qt_core_ffi_QPartialOrdering_Unordered() {
  return &QPartialOrdering::Unordered;
}


RITUAL_EXPORT QPartialOrdering const * ctr_qt_core_ffi_QPartialOrdering_less() {
  return &QPartialOrdering::less;
}


RITUAL_EXPORT QPartialOrdering const * ctr_qt_core_ffi_QPartialOrdering_equivalent() {
  return &QPartialOrdering::equivalent;
}


RITUAL_EXPORT QPartialOrdering const * ctr_qt_core_ffi_QPartialOrdering_greater() {
  return &QPartialOrdering::greater;
}


RITUAL_EXPORT QPartialOrdering const * ctr_qt_core_ffi_QPartialOrdering_unordered() {
  return &QPartialOrdering::unordered;
}


RITUAL_EXPORT void * * ctr_qt_core_ffi_QMethodRawArguments_arguments(QMethodRawArguments const * this_ptr) {
  return this_ptr->arguments;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMethodRawArguments_arguments(QMethodRawArguments * this_ptr, void * * value) {
  this_ptr->arguments = value;
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaMethodArgument_name(QMetaMethodArgument const * this_ptr) {
  return this_ptr->name;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMetaMethodArgument_name(QMetaMethodArgument * this_ptr, char const * value) {
  this_ptr->name = value;
}


RITUAL_EXPORT void const * ctr_qt_core_ffi_QMetaMethodArgument_data(QMetaMethodArgument const * this_ptr) {
  return this_ptr->data;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMetaMethodArgument_data(QMetaMethodArgument * this_ptr, void const * value) {
  this_ptr->data = value;
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaMethodReturnArgument_name(QMetaMethodReturnArgument const * this_ptr) {
  return this_ptr->name;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMetaMethodReturnArgument_name(QMetaMethodReturnArgument * this_ptr, char const * value) {
  this_ptr->name = value;
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QMetaMethodReturnArgument_data(QMetaMethodReturnArgument const * this_ptr) {
  return this_ptr->data;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMetaMethodReturnArgument_data(QMetaMethodReturnArgument * this_ptr, void * value) {
  this_ptr->data = value;
}


RITUAL_EXPORT QMetaObject::Data const * ctr_qt_core_ffi_QMetaObject_d(QMetaObject const * this_ptr) {
  return &this_ptr->d;
}


RITUAL_EXPORT QMetaObject::Data * ctr_qt_core_ffi_QMetaObject_d_mut(QMetaObject * this_ptr) {
  return &this_ptr->d;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMetaObject_d(QMetaObject * this_ptr, QMetaObject::Data const * value) {
  this_ptr->d = *value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QMetaObject_SuperData_direct(QMetaObject::SuperData const * this_ptr) {
  return this_ptr->direct;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMetaObject_SuperData_direct(QMetaObject::SuperData * this_ptr, QMetaObject const * value) {
  this_ptr->direct = value;
}


RITUAL_EXPORT QMetaObject::SuperData const * ctr_qt_core_ffi_QMetaObject_Data_superdata(QMetaObject::Data const * this_ptr) {
  return &this_ptr->superdata;
}


RITUAL_EXPORT QMetaObject::SuperData * ctr_qt_core_ffi_QMetaObject_Data_superdata_mut(QMetaObject::Data * this_ptr) {
  return &this_ptr->superdata;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMetaObject_Data_superdata(QMetaObject::Data * this_ptr, QMetaObject::SuperData const * value) {
  this_ptr->superdata = *value;
}


RITUAL_EXPORT unsigned int const * ctr_qt_core_ffi_QMetaObject_Data_stringdata(QMetaObject::Data const * this_ptr) {
  return this_ptr->stringdata;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMetaObject_Data_stringdata(QMetaObject::Data * this_ptr, unsigned int const * value) {
  this_ptr->stringdata = value;
}


RITUAL_EXPORT unsigned int const * ctr_qt_core_ffi_QMetaObject_Data_data(QMetaObject::Data const * this_ptr) {
  return this_ptr->data;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMetaObject_Data_data(QMetaObject::Data * this_ptr, unsigned int const * value) {
  this_ptr->data = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QMetaObject_Data_static_metacall(QMetaObject::Data const * this_ptr))(QObject *, QMetaObject::Call, int, void * *) {
  return this_ptr->static_metacall;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMetaObject_Data_static_metacall(QMetaObject::Data * this_ptr, void (*value)(QObject *, QMetaObject::Call, int, void * *)) {
  this_ptr->static_metacall = value;
}


RITUAL_EXPORT QMetaObject::SuperData const * ctr_qt_core_ffi_QMetaObject_Data_relatedMetaObjects(QMetaObject::Data const * this_ptr) {
  return this_ptr->relatedMetaObjects;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMetaObject_Data_relatedMetaObjects(QMetaObject::Data * this_ptr, QMetaObject::SuperData const * value) {
  this_ptr->relatedMetaObjects = value;
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QMetaObject_Data_extradata(QMetaObject::Data const * this_ptr) {
  return this_ptr->extradata;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QMetaObject_Data_extradata(QMetaObject::Data * this_ptr, void * value) {
  this_ptr->extradata = value;
}


RITUAL_EXPORT QByteArray const * ctr_qt_core_ffi_QByteArray_FromBase64Result_decoded(QByteArray::FromBase64Result const * this_ptr) {
  return &this_ptr->decoded;
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_FromBase64Result_decoded_mut(QByteArray::FromBase64Result * this_ptr) {
  return &this_ptr->decoded;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QByteArray_FromBase64Result_decoded(QByteArray::FromBase64Result * this_ptr, QByteArray const * value) {
  this_ptr->decoded = *value;
}


RITUAL_EXPORT QByteArray::Base64DecodingStatus ctr_qt_core_ffi_QByteArray_FromBase64Result_decodingStatus(QByteArray::FromBase64Result const * this_ptr) {
  return this_ptr->decodingStatus;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QByteArray_FromBase64Result_decodingStatus(QByteArray::FromBase64Result * this_ptr, QByteArray::Base64DecodingStatus value) {
  this_ptr->decodingStatus = value;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAnyStringView_detects_US_ASCII_at_compile_time() {
  return QAnyStringView::detects_US_ASCII_at_compile_time;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QStringConverterBase_State_flags(QStringConverterBase::State const * this_ptr) {
  return int(this_ptr->flags);
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QStringConverterBase_State_flags(QStringConverterBase::State * this_ptr, int value) {
  this_ptr->flags = QFlags< QStringConverterBase::Flag >(value);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QStringConverterBase_State_internalState(QStringConverterBase::State const * this_ptr) {
  return this_ptr->internalState;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QStringConverterBase_State_internalState(QStringConverterBase::State * this_ptr, int value) {
  this_ptr->internalState = value;
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringConverterBase_State_remainingChars(QStringConverterBase::State const * this_ptr) {
  return this_ptr->remainingChars;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QStringConverterBase_State_remainingChars(QStringConverterBase::State * this_ptr, long long value) {
  this_ptr->remainingChars = value;
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringConverterBase_State_invalidChars(QStringConverterBase::State const * this_ptr) {
  return this_ptr->invalidChars;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QStringConverterBase_State_invalidChars(QStringConverterBase::State * this_ptr, long long value) {
  this_ptr->invalidChars = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QStringConverterBase_State_clearFn(QStringConverterBase::State const * this_ptr))(QStringConverterBase::State *) {
  return this_ptr->clearFn;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qfloat16_IsNative() {
  return qfloat16::IsNative;
}


RITUAL_EXPORT unsigned short ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_revision(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr) {
  return this_ptr->revision;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_revision(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, unsigned short value) {
  this_ptr->revision = value;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_iteratorCapabilities(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr) {
  return int(this_ptr->iteratorCapabilities);
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_iteratorCapabilities(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, int value) {
  this_ptr->iteratorCapabilities = QFlags< QtMetaContainerPrivate::IteratorCapability >(value);
}


RITUAL_EXPORT long long (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_sizeFn(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr))(void const *) {
  return this_ptr->sizeFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_sizeFn(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, long long (*value)(void const *)) {
  this_ptr->sizeFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_clearFn(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr))(void *) {
  return this_ptr->clearFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_clearFn(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, void (*value)(void *)) {
  this_ptr->clearFn = value;
}


RITUAL_EXPORT void * (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_createIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr))(void *, QtMetaContainerPrivate::QMetaContainerInterface::Position) {
  return this_ptr->createIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_createIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, void * (*value)(void *, QtMetaContainerPrivate::QMetaContainerInterface::Position)) {
  this_ptr->createIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_destroyIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr))(void const *) {
  return this_ptr->destroyIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_destroyIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, void (*value)(void const *)) {
  this_ptr->destroyIteratorFn = value;
}


RITUAL_EXPORT bool (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_compareIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr))(void const *, void const *) {
  return this_ptr->compareIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_compareIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, bool (*value)(void const *, void const *)) {
  this_ptr->compareIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_copyIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr))(void *, void const *) {
  return this_ptr->copyIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_copyIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, void (*value)(void *, void const *)) {
  this_ptr->copyIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_advanceIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr))(void *, long long) {
  return this_ptr->advanceIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_advanceIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, void (*value)(void *, long long)) {
  this_ptr->advanceIteratorFn = value;
}


RITUAL_EXPORT long long (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_diffIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr))(void const *, void const *) {
  return this_ptr->diffIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_diffIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, long long (*value)(void const *, void const *)) {
  this_ptr->diffIteratorFn = value;
}


RITUAL_EXPORT void * (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_createConstIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr))(void const *, QtMetaContainerPrivate::QMetaContainerInterface::Position) {
  return this_ptr->createConstIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_createConstIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, void * (*value)(void const *, QtMetaContainerPrivate::QMetaContainerInterface::Position)) {
  this_ptr->createConstIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_destroyConstIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr))(void const *) {
  return this_ptr->destroyConstIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_destroyConstIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, void (*value)(void const *)) {
  this_ptr->destroyConstIteratorFn = value;
}


RITUAL_EXPORT bool (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_compareConstIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr))(void const *, void const *) {
  return this_ptr->compareConstIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_compareConstIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, bool (*value)(void const *, void const *)) {
  this_ptr->compareConstIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_copyConstIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr))(void *, void const *) {
  return this_ptr->copyConstIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_copyConstIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, void (*value)(void *, void const *)) {
  this_ptr->copyConstIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_advanceConstIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr))(void *, long long) {
  return this_ptr->advanceConstIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_advanceConstIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, void (*value)(void *, long long)) {
  this_ptr->advanceConstIteratorFn = value;
}


RITUAL_EXPORT long long (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_diffConstIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface const * this_ptr))(void const *, void const *) {
  return this_ptr->diffConstIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_diffConstIteratorFn(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, long long (*value)(void const *, void const *)) {
  this_ptr->diffConstIteratorFn = value;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_addRemoveCapabilities(QtMetaContainerPrivate::QMetaSequenceInterface const * this_ptr) {
  return int(this_ptr->addRemoveCapabilities);
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_addRemoveCapabilities(QtMetaContainerPrivate::QMetaSequenceInterface * this_ptr, int value) {
  this_ptr->addRemoveCapabilities = QFlags< QtMetaContainerPrivate::AddRemoveCapability >(value);
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_valueAtIndexFn(QtMetaContainerPrivate::QMetaSequenceInterface const * this_ptr))(void const *, long long, void *) {
  return this_ptr->valueAtIndexFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_valueAtIndexFn(QtMetaContainerPrivate::QMetaSequenceInterface * this_ptr, void (*value)(void const *, long long, void *)) {
  this_ptr->valueAtIndexFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_setValueAtIndexFn(QtMetaContainerPrivate::QMetaSequenceInterface const * this_ptr))(void *, long long, void const *) {
  return this_ptr->setValueAtIndexFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_setValueAtIndexFn(QtMetaContainerPrivate::QMetaSequenceInterface * this_ptr, void (*value)(void *, long long, void const *)) {
  this_ptr->setValueAtIndexFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_addValueFn(QtMetaContainerPrivate::QMetaSequenceInterface const * this_ptr))(void *, void const *, QtMetaContainerPrivate::QMetaContainerInterface::Position) {
  return this_ptr->addValueFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_addValueFn(QtMetaContainerPrivate::QMetaSequenceInterface * this_ptr, void (*value)(void *, void const *, QtMetaContainerPrivate::QMetaContainerInterface::Position)) {
  this_ptr->addValueFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_removeValueFn(QtMetaContainerPrivate::QMetaSequenceInterface const * this_ptr))(void *, QtMetaContainerPrivate::QMetaContainerInterface::Position) {
  return this_ptr->removeValueFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_removeValueFn(QtMetaContainerPrivate::QMetaSequenceInterface * this_ptr, void (*value)(void *, QtMetaContainerPrivate::QMetaContainerInterface::Position)) {
  this_ptr->removeValueFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_valueAtIteratorFn(QtMetaContainerPrivate::QMetaSequenceInterface const * this_ptr))(void const *, void *) {
  return this_ptr->valueAtIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_valueAtIteratorFn(QtMetaContainerPrivate::QMetaSequenceInterface * this_ptr, void (*value)(void const *, void *)) {
  this_ptr->valueAtIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_setValueAtIteratorFn(QtMetaContainerPrivate::QMetaSequenceInterface const * this_ptr))(void const *, void const *) {
  return this_ptr->setValueAtIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_setValueAtIteratorFn(QtMetaContainerPrivate::QMetaSequenceInterface * this_ptr, void (*value)(void const *, void const *)) {
  this_ptr->setValueAtIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_insertValueAtIteratorFn(QtMetaContainerPrivate::QMetaSequenceInterface const * this_ptr))(void *, void const *, void const *) {
  return this_ptr->insertValueAtIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_insertValueAtIteratorFn(QtMetaContainerPrivate::QMetaSequenceInterface * this_ptr, void (*value)(void *, void const *, void const *)) {
  this_ptr->insertValueAtIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_valueAtConstIteratorFn(QtMetaContainerPrivate::QMetaSequenceInterface const * this_ptr))(void const *, void *) {
  return this_ptr->valueAtConstIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_valueAtConstIteratorFn(QtMetaContainerPrivate::QMetaSequenceInterface * this_ptr, void (*value)(void const *, void *)) {
  this_ptr->valueAtConstIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_eraseValueAtIteratorFn(QtMetaContainerPrivate::QMetaSequenceInterface const * this_ptr))(void *, void const *) {
  return this_ptr->eraseValueAtIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_eraseValueAtIteratorFn(QtMetaContainerPrivate::QMetaSequenceInterface * this_ptr, void (*value)(void *, void const *)) {
  this_ptr->eraseValueAtIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_eraseRangeAtIteratorFn(QtMetaContainerPrivate::QMetaSequenceInterface const * this_ptr))(void *, void const *, void const *) {
  return this_ptr->eraseRangeAtIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_eraseRangeAtIteratorFn(QtMetaContainerPrivate::QMetaSequenceInterface * this_ptr, void (*value)(void *, void const *, void const *)) {
  this_ptr->eraseRangeAtIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_insertKeyFn(QtMetaContainerPrivate::QMetaAssociationInterface const * this_ptr))(void *, void const *) {
  return this_ptr->insertKeyFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_insertKeyFn(QtMetaContainerPrivate::QMetaAssociationInterface * this_ptr, void (*value)(void *, void const *)) {
  this_ptr->insertKeyFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_removeKeyFn(QtMetaContainerPrivate::QMetaAssociationInterface const * this_ptr))(void *, void const *) {
  return this_ptr->removeKeyFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_removeKeyFn(QtMetaContainerPrivate::QMetaAssociationInterface * this_ptr, void (*value)(void *, void const *)) {
  this_ptr->removeKeyFn = value;
}


RITUAL_EXPORT bool (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_containsKeyFn(QtMetaContainerPrivate::QMetaAssociationInterface const * this_ptr))(void const *, void const *) {
  return this_ptr->containsKeyFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_containsKeyFn(QtMetaContainerPrivate::QMetaAssociationInterface * this_ptr, bool (*value)(void const *, void const *)) {
  this_ptr->containsKeyFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_mappedAtKeyFn(QtMetaContainerPrivate::QMetaAssociationInterface const * this_ptr))(void const *, void const *, void *) {
  return this_ptr->mappedAtKeyFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_mappedAtKeyFn(QtMetaContainerPrivate::QMetaAssociationInterface * this_ptr, void (*value)(void const *, void const *, void *)) {
  this_ptr->mappedAtKeyFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_setMappedAtKeyFn(QtMetaContainerPrivate::QMetaAssociationInterface const * this_ptr))(void *, void const *, void const *) {
  return this_ptr->setMappedAtKeyFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_setMappedAtKeyFn(QtMetaContainerPrivate::QMetaAssociationInterface * this_ptr, void (*value)(void *, void const *, void const *)) {
  this_ptr->setMappedAtKeyFn = value;
}


RITUAL_EXPORT void * (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_createIteratorAtKeyFn(QtMetaContainerPrivate::QMetaAssociationInterface const * this_ptr))(void *, void const *) {
  return this_ptr->createIteratorAtKeyFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_createIteratorAtKeyFn(QtMetaContainerPrivate::QMetaAssociationInterface * this_ptr, void * (*value)(void *, void const *)) {
  this_ptr->createIteratorAtKeyFn = value;
}


RITUAL_EXPORT void * (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_createConstIteratorAtKeyFn(QtMetaContainerPrivate::QMetaAssociationInterface const * this_ptr))(void const *, void const *) {
  return this_ptr->createConstIteratorAtKeyFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_createConstIteratorAtKeyFn(QtMetaContainerPrivate::QMetaAssociationInterface * this_ptr, void * (*value)(void const *, void const *)) {
  this_ptr->createConstIteratorAtKeyFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_keyAtIteratorFn(QtMetaContainerPrivate::QMetaAssociationInterface const * this_ptr))(void const *, void *) {
  return this_ptr->keyAtIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_keyAtIteratorFn(QtMetaContainerPrivate::QMetaAssociationInterface * this_ptr, void (*value)(void const *, void *)) {
  this_ptr->keyAtIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_keyAtConstIteratorFn(QtMetaContainerPrivate::QMetaAssociationInterface const * this_ptr))(void const *, void *) {
  return this_ptr->keyAtConstIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_keyAtConstIteratorFn(QtMetaContainerPrivate::QMetaAssociationInterface * this_ptr, void (*value)(void const *, void *)) {
  this_ptr->keyAtConstIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_mappedAtIteratorFn(QtMetaContainerPrivate::QMetaAssociationInterface const * this_ptr))(void const *, void *) {
  return this_ptr->mappedAtIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_mappedAtIteratorFn(QtMetaContainerPrivate::QMetaAssociationInterface * this_ptr, void (*value)(void const *, void *)) {
  this_ptr->mappedAtIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_mappedAtConstIteratorFn(QtMetaContainerPrivate::QMetaAssociationInterface const * this_ptr))(void const *, void *) {
  return this_ptr->mappedAtConstIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_mappedAtConstIteratorFn(QtMetaContainerPrivate::QMetaAssociationInterface * this_ptr, void (*value)(void const *, void *)) {
  this_ptr->mappedAtConstIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_setMappedAtIteratorFn(QtMetaContainerPrivate::QMetaAssociationInterface const * this_ptr))(void const *, void const *) {
  return this_ptr->setMappedAtIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_setMappedAtIteratorFn(QtMetaContainerPrivate::QMetaAssociationInterface * this_ptr, void (*value)(void const *, void const *)) {
  this_ptr->setMappedAtIteratorFn = value;
}


RITUAL_EXPORT void (*ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_eraseKeyAtIteratorFn(QtMetaContainerPrivate::QMetaAssociationInterface const * this_ptr))(void *, void const *) {
  return this_ptr->eraseKeyAtIteratorFn;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_eraseKeyAtIteratorFn(QtMetaContainerPrivate::QMetaAssociationInterface * this_ptr, void (*value)(void *, void const *)) {
  this_ptr->eraseKeyAtIteratorFn = value;
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QBindingStatus_threadId(QBindingStatus const * this_ptr) {
  return this_ptr->threadId;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QBindingStatus_threadId(QBindingStatus * this_ptr, void * value) {
  this_ptr->threadId = value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QObject_staticMetaObject() {
  return &QObject::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAbstractAnimation_staticMetaObject() {
  return &QAbstractAnimation::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAnimationDriver_staticMetaObject() {
  return &QAnimationDriver::staticMetaObject;
}


RITUAL_EXPORT QDeadlineTimer::ForeverConstant ctr_qt_core_ffi_QDeadlineTimer_Forever() {
  return QDeadlineTimer::Forever;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QEventLoop_staticMetaObject() {
  return &QEventLoop::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAbstractEventDispatcher_staticMetaObject() {
  return &QAbstractEventDispatcher::staticMetaObject;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractEventDispatcher_TimerInfo_timerId(QAbstractEventDispatcher::TimerInfo const * this_ptr) {
  return this_ptr->timerId;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QAbstractEventDispatcher_TimerInfo_timerId(QAbstractEventDispatcher::TimerInfo * this_ptr, int value) {
  this_ptr->timerId = value;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractEventDispatcher_TimerInfo_interval(QAbstractEventDispatcher::TimerInfo const * this_ptr) {
  return this_ptr->interval;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QAbstractEventDispatcher_TimerInfo_interval(QAbstractEventDispatcher::TimerInfo * this_ptr, int value) {
  this_ptr->interval = value;
}


RITUAL_EXPORT Qt::TimerType ctr_qt_core_ffi_QAbstractEventDispatcher_TimerInfo_timerType(QAbstractEventDispatcher::TimerInfo const * this_ptr) {
  return this_ptr->timerType;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QAbstractEventDispatcher_TimerInfo_timerType(QAbstractEventDispatcher::TimerInfo * this_ptr, Qt::TimerType value) {
  this_ptr->timerType = value;
}


RITUAL_EXPORT Qt::TimerId ctr_qt_core_ffi_QAbstractEventDispatcher_TimerInfoV2_timerId(QAbstractEventDispatcher::TimerInfoV2 const * this_ptr) {
  return this_ptr->timerId;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QAbstractEventDispatcher_TimerInfoV2_timerId(QAbstractEventDispatcher::TimerInfoV2 * this_ptr, Qt::TimerId value) {
  this_ptr->timerId = value;
}


RITUAL_EXPORT Qt::TimerType ctr_qt_core_ffi_QAbstractEventDispatcher_TimerInfoV2_timerType(QAbstractEventDispatcher::TimerInfoV2 const * this_ptr) {
  return this_ptr->timerType;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QAbstractEventDispatcher_TimerInfoV2_timerType(QAbstractEventDispatcher::TimerInfoV2 * this_ptr, Qt::TimerType value) {
  this_ptr->timerType = value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAbstractEventDispatcherV2_staticMetaObject() {
  return &QAbstractEventDispatcherV2::staticMetaObject;
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QHashPrivate_SpanConstants_SpanShift() {
  return QHashPrivate::SpanConstants::SpanShift;
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QHashPrivate_SpanConstants_NEntries() {
  return QHashPrivate::SpanConstants::NEntries;
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QHashPrivate_SpanConstants_LocalBucketMask() {
  return QHashPrivate::SpanConstants::LocalBucketMask;
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QHashPrivate_SpanConstants_UnusedEntry() {
  return QHashPrivate::SpanConstants::UnusedEntry;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAbstractItemModel_staticMetaObject() {
  return &QAbstractItemModel::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAbstractTableModel_staticMetaObject() {
  return &QAbstractTableModel::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAbstractListModel_staticMetaObject() {
  return &QAbstractListModel::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAbstractProxyModel_staticMetaObject() {
  return &QAbstractProxyModel::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAnimationGroup_staticMetaObject() {
  return &QAnimationGroup::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QEvent_staticMetaObject() {
  return &QEvent::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QCoreApplication_staticMetaObject() {
  return &QCoreApplication::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QIODevice_staticMetaObject() {
  return &QIODevice::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QBuffer_staticMetaObject() {
  return &QBuffer::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QLocale_staticMetaObject() {
  return &QLocale::staticMetaObject;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLocale_DefaultTwoDigitBaseYear() {
  return QLocale::DefaultTwoDigitBaseYear;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QCalendar_staticMetaObject() {
  return &QCalendar::staticMetaObject;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCalendar_YearMonthDay_year(QCalendar::YearMonthDay const * this_ptr) {
  return this_ptr->year;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QCalendar_YearMonthDay_year(QCalendar::YearMonthDay * this_ptr, int value) {
  this_ptr->year = value;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCalendar_YearMonthDay_month(QCalendar::YearMonthDay const * this_ptr) {
  return this_ptr->month;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QCalendar_YearMonthDay_month(QCalendar::YearMonthDay * this_ptr, int value) {
  this_ptr->month = value;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCalendar_YearMonthDay_day(QCalendar::YearMonthDay const * this_ptr) {
  return this_ptr->day;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QCalendar_YearMonthDay_day(QCalendar::YearMonthDay * this_ptr, int value) {
  this_ptr->day = value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QCborError_staticMetaObject() {
  return &QCborError::staticMetaObject;
}


RITUAL_EXPORT QCborError::Code ctr_qt_core_ffi_QCborError_c(QCborError const * this_ptr) {
  return this_ptr->c;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QCborError_c(QCborError * this_ptr, QCborError::Code value) {
  this_ptr->c = value;
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QUuid_data1(QUuid const * this_ptr) {
  return this_ptr->data1;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QUuid_data1(QUuid * this_ptr, unsigned int value) {
  this_ptr->data1 = value;
}


RITUAL_EXPORT unsigned short ctr_qt_core_ffi_QUuid_data2(QUuid const * this_ptr) {
  return this_ptr->data2;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QUuid_data2(QUuid * this_ptr, unsigned short value) {
  this_ptr->data2 = value;
}


RITUAL_EXPORT unsigned short ctr_qt_core_ffi_QUuid_data3(QUuid const * this_ptr) {
  return this_ptr->data3;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QUuid_data3(QUuid * this_ptr, unsigned short value) {
  this_ptr->data3 = value;
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborParserError_offset(QCborParserError const * this_ptr) {
  return this_ptr->offset;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QCborParserError_offset(QCborParserError * this_ptr, long long value) {
  this_ptr->offset = value;
}


RITUAL_EXPORT QCborError const * ctr_qt_core_ffi_QCborParserError_error(QCborParserError const * this_ptr) {
  return &this_ptr->error;
}


RITUAL_EXPORT QCborError * ctr_qt_core_ffi_QCborParserError_error_mut(QCborParserError * this_ptr) {
  return &this_ptr->error;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QCborParserError_error(QCborParserError * this_ptr, QCborError const * value) {
  this_ptr->error = *value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QCborValue_staticMetaObject() {
  return &QCborValue::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QCborStreamReader_staticMetaObject() {
  return &QCborStreamReader::staticMetaObject;
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QPropertyProxyBindingData_d_ptr(QPropertyProxyBindingData const * this_ptr) {
  return this_ptr->d_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPropertyProxyBindingData_d_ptr(QPropertyProxyBindingData * this_ptr, unsigned long long value) {
  this_ptr->d_ptr = value;
}


RITUAL_EXPORT QUntypedPropertyData * ctr_qt_core_ffi_QPropertyProxyBindingData_propertyData(QPropertyProxyBindingData const * this_ptr) {
  return this_ptr->propertyData;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPropertyProxyBindingData_propertyData(QPropertyProxyBindingData * this_ptr, QUntypedPropertyData * value) {
  this_ptr->propertyData = value;
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QPropertyBindingSourceLocation_fileName(QPropertyBindingSourceLocation const * this_ptr) {
  return this_ptr->fileName;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPropertyBindingSourceLocation_fileName(QPropertyBindingSourceLocation * this_ptr, char const * value) {
  this_ptr->fileName = value;
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QPropertyBindingSourceLocation_functionName(QPropertyBindingSourceLocation const * this_ptr) {
  return this_ptr->functionName;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPropertyBindingSourceLocation_functionName(QPropertyBindingSourceLocation * this_ptr, char const * value) {
  this_ptr->functionName = value;
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QPropertyBindingSourceLocation_line(QPropertyBindingSourceLocation const * this_ptr) {
  return this_ptr->line;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPropertyBindingSourceLocation_line(QPropertyBindingSourceLocation * this_ptr, unsigned int value) {
  this_ptr->line = value;
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QPropertyBindingSourceLocation_column(QPropertyBindingSourceLocation const * this_ptr) {
  return this_ptr->column;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPropertyBindingSourceLocation_column(QPropertyBindingSourceLocation * this_ptr, unsigned int value) {
  this_ptr->column = value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QTimer_staticMetaObject() {
  return &QTimer::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QChronoTimer_staticMetaObject() {
  return &QChronoTimer::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QConcatenateTablesProxyModel_staticMetaObject() {
  return &QConcatenateTablesProxyModel::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QCryptographicHash_staticMetaObject() {
  return &QCryptographicHash::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QFileDevice_staticMetaObject() {
  return &QFileDevice::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QFile_staticMetaObject() {
  return &QFile::staticMetaObject;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeZone_MinUtcOffsetSecs() {
  return QTimeZone::MinUtcOffsetSecs;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeZone_MaxUtcOffsetSecs() {
  return QTimeZone::MaxUtcOffsetSecs;
}


RITUAL_EXPORT QString const * ctr_qt_core_ffi_QTimeZone_OffsetData_abbreviation(QTimeZone::OffsetData const * this_ptr) {
  return &this_ptr->abbreviation;
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTimeZone_OffsetData_abbreviation_mut(QTimeZone::OffsetData * this_ptr) {
  return &this_ptr->abbreviation;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QTimeZone_OffsetData_abbreviation(QTimeZone::OffsetData * this_ptr, QString const * value) {
  this_ptr->abbreviation = *value;
}


RITUAL_EXPORT QDateTime const * ctr_qt_core_ffi_QTimeZone_OffsetData_atUtc(QTimeZone::OffsetData const * this_ptr) {
  return &this_ptr->atUtc;
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QTimeZone_OffsetData_atUtc_mut(QTimeZone::OffsetData * this_ptr) {
  return &this_ptr->atUtc;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QTimeZone_OffsetData_atUtc(QTimeZone::OffsetData * this_ptr, QDateTime const * value) {
  this_ptr->atUtc = *value;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeZone_OffsetData_offsetFromUtc(QTimeZone::OffsetData const * this_ptr) {
  return this_ptr->offsetFromUtc;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QTimeZone_OffsetData_offsetFromUtc(QTimeZone::OffsetData * this_ptr, int value) {
  this_ptr->offsetFromUtc = value;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeZone_OffsetData_standardTimeOffset(QTimeZone::OffsetData const * this_ptr) {
  return this_ptr->standardTimeOffset;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QTimeZone_OffsetData_standardTimeOffset(QTimeZone::OffsetData * this_ptr, int value) {
  this_ptr->standardTimeOffset = value;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeZone_OffsetData_daylightTimeOffset(QTimeZone::OffsetData const * this_ptr) {
  return this_ptr->daylightTimeOffset;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QTimeZone_OffsetData_daylightTimeOffset(QTimeZone::OffsetData * this_ptr, int value) {
  this_ptr->daylightTimeOffset = value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QEasingCurve_staticMetaObject() {
  return &QEasingCurve::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QFileSelector_staticMetaObject() {
  return &QFileSelector::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QFileSystemWatcher_staticMetaObject() {
  return &QFileSystemWatcher::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QThread_staticMetaObject() {
  return &QThread::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QThreadPool_staticMetaObject() {
  return &QThreadPool::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QFutureWatcherBase_staticMetaObject() {
  return &QFutureWatcherBase::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QIdentityProxyModel_staticMetaObject() {
  return &QIdentityProxyModel::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QItemSelectionModel_staticMetaObject() {
  return &QItemSelectionModel::staticMetaObject;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QJsonParseError_offset(QJsonParseError const * this_ptr) {
  return this_ptr->offset;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QJsonParseError_offset(QJsonParseError * this_ptr, int value) {
  this_ptr->offset = value;
}


RITUAL_EXPORT QJsonParseError::ParseError ctr_qt_core_ffi_QJsonParseError_error(QJsonParseError const * this_ptr) {
  return this_ptr->error;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QJsonParseError_error(QJsonParseError * this_ptr, QJsonParseError::ParseError value) {
  this_ptr->error = value;
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QJsonDocument_BinaryFormatTag() {
  return QJsonDocument::BinaryFormatTag;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QLibrary_staticMetaObject() {
  return &QLibrary::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QMimeData_staticMetaObject() {
  return &QMimeData::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QMimeType_staticMetaObject() {
  return &QMimeType::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QObjectCleanupHandler_staticMetaObject() {
  return &QObjectCleanupHandler::staticMetaObject;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersionUnexported_MacOSSonoma() {
  return &QOperatingSystemVersionUnexported::MacOSSonoma;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersionUnexported_MacOSSequoia() {
  return &QOperatingSystemVersionUnexported::MacOSSequoia;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersionUnexported_MacOSTahoe() {
  return &QOperatingSystemVersionUnexported::MacOSTahoe;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersionUnexported_Android14() {
  return &QOperatingSystemVersionUnexported::Android14;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersionUnexported_Windows11_23H2() {
  return &QOperatingSystemVersionUnexported::Windows11_23H2;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersionUnexported_Windows11_24H2() {
  return &QOperatingSystemVersionUnexported::Windows11_24H2;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_Windows7() {
  return &QOperatingSystemVersion::Windows7;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_Windows8() {
  return &QOperatingSystemVersion::Windows8;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_Windows8_1() {
  return &QOperatingSystemVersion::Windows8_1;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_Windows10() {
  return &QOperatingSystemVersion::Windows10;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_OSXMavericks() {
  return &QOperatingSystemVersion::OSXMavericks;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_OSXYosemite() {
  return &QOperatingSystemVersion::OSXYosemite;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_OSXElCapitan() {
  return &QOperatingSystemVersion::OSXElCapitan;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_MacOSSierra() {
  return &QOperatingSystemVersion::MacOSSierra;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_MacOSHighSierra() {
  return &QOperatingSystemVersion::MacOSHighSierra;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_MacOSMojave() {
  return &QOperatingSystemVersion::MacOSMojave;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_MacOSCatalina() {
  return &QOperatingSystemVersion::MacOSCatalina;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_MacOSBigSur() {
  return &QOperatingSystemVersion::MacOSBigSur;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_MacOSMonterey() {
  return &QOperatingSystemVersion::MacOSMonterey;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_AndroidJellyBean() {
  return &QOperatingSystemVersion::AndroidJellyBean;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_AndroidJellyBean_MR1() {
  return &QOperatingSystemVersion::AndroidJellyBean_MR1;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_AndroidJellyBean_MR2() {
  return &QOperatingSystemVersion::AndroidJellyBean_MR2;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_AndroidKitKat() {
  return &QOperatingSystemVersion::AndroidKitKat;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_AndroidLollipop() {
  return &QOperatingSystemVersion::AndroidLollipop;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_AndroidLollipop_MR1() {
  return &QOperatingSystemVersion::AndroidLollipop_MR1;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_AndroidMarshmallow() {
  return &QOperatingSystemVersion::AndroidMarshmallow;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_AndroidNougat() {
  return &QOperatingSystemVersion::AndroidNougat;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_AndroidNougat_MR1() {
  return &QOperatingSystemVersion::AndroidNougat_MR1;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_AndroidOreo() {
  return &QOperatingSystemVersion::AndroidOreo;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_AndroidOreo_MR1() {
  return &QOperatingSystemVersion::AndroidOreo_MR1;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_AndroidPie() {
  return &QOperatingSystemVersion::AndroidPie;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_Android10() {
  return &QOperatingSystemVersion::Android10;
}


RITUAL_EXPORT QOperatingSystemVersion const * ctr_qt_core_ffi_QOperatingSystemVersion_Android11() {
  return &QOperatingSystemVersion::Android11;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersion_Windows10_1809() {
  return &QOperatingSystemVersion::Windows10_1809;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersion_Windows10_1903() {
  return &QOperatingSystemVersion::Windows10_1903;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersion_Windows10_1909() {
  return &QOperatingSystemVersion::Windows10_1909;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersion_Windows10_2004() {
  return &QOperatingSystemVersion::Windows10_2004;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersion_Windows10_20H2() {
  return &QOperatingSystemVersion::Windows10_20H2;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersion_Windows10_21H1() {
  return &QOperatingSystemVersion::Windows10_21H1;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersion_Windows10_21H2() {
  return &QOperatingSystemVersion::Windows10_21H2;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersion_Windows10_22H2() {
  return &QOperatingSystemVersion::Windows10_22H2;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersion_Windows11() {
  return &QOperatingSystemVersion::Windows11;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersion_Windows11_21H2() {
  return &QOperatingSystemVersion::Windows11_21H2;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersion_Windows11_22H2() {
  return &QOperatingSystemVersion::Windows11_22H2;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersion_Android12() {
  return &QOperatingSystemVersion::Android12;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersion_Android12L() {
  return &QOperatingSystemVersion::Android12L;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersion_Android13() {
  return &QOperatingSystemVersion::Android13;
}


RITUAL_EXPORT QOperatingSystemVersionBase const * ctr_qt_core_ffi_QOperatingSystemVersion_MacOSVentura() {
  return &QOperatingSystemVersion::MacOSVentura;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QParallelAnimationGroup_staticMetaObject() {
  return &QParallelAnimationGroup::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QPauseAnimation_staticMetaObject() {
  return &QPauseAnimation::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QLocationPermission_staticMetaObject() {
  return &QLocationPermission::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QCalendarPermission_staticMetaObject() {
  return &QCalendarPermission::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QContactsPermission_staticMetaObject() {
  return &QContactsPermission::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QBluetoothPermission_staticMetaObject() {
  return &QBluetoothPermission::staticMetaObject;
}


RITUAL_EXPORT unsigned char ctr_qt_core_ffi_QPluginMetaData_CurrentMetaDataVersion() {
  return QPluginMetaData::CurrentMetaDataVersion;
}


RITUAL_EXPORT void const * ctr_qt_core_ffi_QPluginMetaData_data(QPluginMetaData const * this_ptr) {
  return this_ptr->data;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPluginMetaData_data(QPluginMetaData * this_ptr, void const * value) {
  this_ptr->data = value;
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QPluginMetaData_size(QPluginMetaData const * this_ptr) {
  return this_ptr->size;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPluginMetaData_size(QPluginMetaData * this_ptr, unsigned long value) {
  this_ptr->size = value;
}


RITUAL_EXPORT unsigned char ctr_qt_core_ffi_QPluginMetaData_Header_version(QPluginMetaData::Header const * this_ptr) {
  return this_ptr->version;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPluginMetaData_Header_version(QPluginMetaData::Header * this_ptr, unsigned char value) {
  this_ptr->version = value;
}


RITUAL_EXPORT unsigned char ctr_qt_core_ffi_QPluginMetaData_Header_qt_major_version(QPluginMetaData::Header const * this_ptr) {
  return this_ptr->qt_major_version;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPluginMetaData_Header_qt_major_version(QPluginMetaData::Header * this_ptr, unsigned char value) {
  this_ptr->qt_major_version = value;
}


RITUAL_EXPORT unsigned char ctr_qt_core_ffi_QPluginMetaData_Header_qt_minor_version(QPluginMetaData::Header const * this_ptr) {
  return this_ptr->qt_minor_version;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPluginMetaData_Header_qt_minor_version(QPluginMetaData::Header * this_ptr, unsigned char value) {
  this_ptr->qt_minor_version = value;
}


RITUAL_EXPORT unsigned char ctr_qt_core_ffi_QPluginMetaData_Header_plugin_arch_requirements(QPluginMetaData::Header const * this_ptr) {
  return this_ptr->plugin_arch_requirements;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPluginMetaData_Header_plugin_arch_requirements(QPluginMetaData::Header * this_ptr, unsigned char value) {
  this_ptr->plugin_arch_requirements = value;
}


RITUAL_EXPORT QPluginMetaData::Header const * ctr_qt_core_ffi_QPluginMetaData_MagicHeader_header(QPluginMetaData::MagicHeader const * this_ptr) {
  return &this_ptr->header;
}


RITUAL_EXPORT QPluginMetaData::Header * ctr_qt_core_ffi_QPluginMetaData_MagicHeader_header_mut(QPluginMetaData::MagicHeader * this_ptr) {
  return &this_ptr->header;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPluginMetaData_MagicHeader_header(QPluginMetaData::MagicHeader * this_ptr, QPluginMetaData::Header const * value) {
  this_ptr->header = *value;
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QPluginMetaData_ElfNoteHeader_NoteType() {
  return QPluginMetaData::ElfNoteHeader::NoteType;
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QPluginMetaData_ElfNoteHeader_n_namesz(QPluginMetaData::ElfNoteHeader const * this_ptr) {
  return this_ptr->n_namesz;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPluginMetaData_ElfNoteHeader_n_namesz(QPluginMetaData::ElfNoteHeader * this_ptr, unsigned int value) {
  this_ptr->n_namesz = value;
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QPluginMetaData_ElfNoteHeader_n_descsz(QPluginMetaData::ElfNoteHeader const * this_ptr) {
  return this_ptr->n_descsz;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPluginMetaData_ElfNoteHeader_n_descsz(QPluginMetaData::ElfNoteHeader * this_ptr, unsigned int value) {
  this_ptr->n_descsz = value;
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QPluginMetaData_ElfNoteHeader_n_type(QPluginMetaData::ElfNoteHeader const * this_ptr) {
  return this_ptr->n_type;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPluginMetaData_ElfNoteHeader_n_type(QPluginMetaData::ElfNoteHeader * this_ptr, unsigned int value) {
  this_ptr->n_type = value;
}


RITUAL_EXPORT QPluginMetaData::Header const * ctr_qt_core_ffi_QPluginMetaData_ElfNoteHeader_header(QPluginMetaData::ElfNoteHeader const * this_ptr) {
  return &this_ptr->header;
}


RITUAL_EXPORT QPluginMetaData::Header * ctr_qt_core_ffi_QPluginMetaData_ElfNoteHeader_header_mut(QPluginMetaData::ElfNoteHeader * this_ptr) {
  return &this_ptr->header;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QPluginMetaData_ElfNoteHeader_header(QPluginMetaData::ElfNoteHeader * this_ptr, QPluginMetaData::Header const * value) {
  this_ptr->header = *value;
}


RITUAL_EXPORT QObject * (*ctr_qt_core_ffi_QStaticPlugin_instance(QStaticPlugin const * this_ptr))() {
  return this_ptr->instance;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QStaticPlugin_instance(QStaticPlugin * this_ptr, QObject * (*value)()) {
  this_ptr->instance = value;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QPluginLoader_staticMetaObject() {
  return &QPluginLoader::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QProcess_staticMetaObject() {
  return &QProcess::staticMetaObject;
}


#ifndef _WIN32
RITUAL_EXPORT int ctr_qt_core_ffi_QProcess_UnixProcessParameters_flags(QProcess::UnixProcessParameters const * this_ptr) {
  return int(this_ptr->flags);
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QProcess_UnixProcessParameters_flags(QProcess::UnixProcessParameters * this_ptr, int value) {
  this_ptr->flags = QFlags< QProcess::UnixProcessFlag >(value);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QProcess_UnixProcessParameters_lowestFileDescriptorToClose(QProcess::UnixProcessParameters const * this_ptr) {
  return this_ptr->lowestFileDescriptorToClose;
}


RITUAL_EXPORT void ctr_qt_core_ffi_set_QProcess_UnixProcessParameters_lowestFileDescriptorToClose(QProcess::UnixProcessParameters * this_ptr, int value) {
  this_ptr->lowestFileDescriptorToClose = value;
}
#endif


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QVariantAnimation_staticMetaObject() {
  return &QVariantAnimation::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QPropertyAnimation_staticMetaObject() {
  return &QPropertyAnimation::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QRangeModel_staticMetaObject() {
  return &QRangeModel::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QSaveFile_staticMetaObject() {
  return &QSaveFile::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QSequentialAnimationGroup_staticMetaObject() {
  return &QSequentialAnimationGroup::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QSettings_staticMetaObject() {
  return &QSettings::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QNativeIpcKey_staticMetaObject() {
  return &QNativeIpcKey::staticMetaObject;
}


RITUAL_EXPORT QNativeIpcKey::Type ctr_qt_core_ffi_QNativeIpcKey_DefaultTypeForOs() {
  return QNativeIpcKey::DefaultTypeForOs;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QSharedMemory_staticMetaObject() {
  return &QSharedMemory::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QSignalMapper_staticMetaObject() {
  return &QSignalMapper::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QSocketNotifier_staticMetaObject() {
  return &QSocketNotifier::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QSortFilterProxyModel_staticMetaObject() {
  return &QSortFilterProxyModel::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QStandardPaths_staticMetaObject() {
  return &QStandardPaths::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QStringListModel_staticMetaObject() {
  return &QStringListModel::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QSystemSemaphore_staticMetaObject() {
  return &QSystemSemaphore::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QTemporaryFile_staticMetaObject() {
  return &QTemporaryFile::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QTimeLine_staticMetaObject() {
  return &QTimeLine::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QTranslator_staticMetaObject() {
  return &QTranslator::staticMetaObject;
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QTransposeProxyModel_staticMetaObject() {
  return &QTransposeProxyModel::staticMetaObject;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qt_no_assert_x(bool arg1, char const * arg2, char const * arg3) {
  return qt_no_assert_x(arg1, arg2, arg3);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qt_assume_is_deprecated(bool cond) {
  return qt_assume_is_deprecated(cond);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSysInfo_buildCpuArchitecture() {
  return new QString(QSysInfo::buildCpuArchitecture());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSysInfo_currentCpuArchitecture() {
  return new QString(QSysInfo::currentCpuArchitecture());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSysInfo_buildAbi() {
  return new QString(QSysInfo::buildAbi());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSysInfo_kernelType() {
  return new QString(QSysInfo::kernelType());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSysInfo_kernelVersion() {
  return new QString(QSysInfo::kernelVersion());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSysInfo_productType() {
  return new QString(QSysInfo::productType());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSysInfo_productVersion() {
  return new QString(QSysInfo::productVersion());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSysInfo_prettyProductName() {
  return new QString(QSysInfo::prettyProductName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSysInfo_machineHostName() {
  return new QString(QSysInfo::machineHostName());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QSysInfo_machineUniqueId() {
  return new QByteArray(QSysInfo::machineUniqueId());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QSysInfo_bootUniqueId() {
  return new QByteArray(QSysInfo::bootUniqueId());
}


RITUAL_EXPORT QMessageLogContext * ctr_qt_core_ffi_QMessageLogContext_QMessageLogContext() {
  return new QMessageLogContext();
}


RITUAL_EXPORT QMessageLogContext * ctr_qt_core_ffi_QMessageLogContext_QMessageLogContext1(char const * fileName, int lineNumber, char const * functionName, char const * categoryName) {
  return new QMessageLogContext(fileName, lineNumber, functionName, categoryName);
}


RITUAL_EXPORT QMessageLogger * ctr_qt_core_ffi_QMessageLogger_QMessageLogger() {
  return new QMessageLogger();
}


RITUAL_EXPORT QMessageLogger * ctr_qt_core_ffi_QMessageLogger_QMessageLogger1(char const * file, int line, char const * function) {
  return new QMessageLogger(file, line, function);
}


RITUAL_EXPORT QMessageLogger * ctr_qt_core_ffi_QMessageLogger_QMessageLogger2(char const * file, int line, char const * function, char const * category) {
  return new QMessageLogger(file, line, function, category);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QMessageLogger_debug3(QMessageLogger const * this_ptr) {
  return new QDebug(this_ptr->debug());
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QMessageLogger_debug4(QMessageLogger const * this_ptr, QLoggingCategory const * cat) {
  return new QDebug(this_ptr->debug(*cat));
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QMessageLogger_info3(QMessageLogger const * this_ptr) {
  return new QDebug(this_ptr->info());
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QMessageLogger_info4(QMessageLogger const * this_ptr, QLoggingCategory const * cat) {
  return new QDebug(this_ptr->info(*cat));
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QMessageLogger_warning3(QMessageLogger const * this_ptr) {
  return new QDebug(this_ptr->warning());
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QMessageLogger_warning4(QMessageLogger const * this_ptr, QLoggingCategory const * cat) {
  return new QDebug(this_ptr->warning(*cat));
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QMessageLogger_critical3(QMessageLogger const * this_ptr) {
  return new QDebug(this_ptr->critical());
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QMessageLogger_critical4(QMessageLogger const * this_ptr, QLoggingCategory const * cat) {
  return new QDebug(this_ptr->critical(*cat));
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QMessageLogger_fatal3(QMessageLogger const * this_ptr) {
  return new QDebug(this_ptr->fatal());
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QMessageLogger_fatal4(QMessageLogger const * this_ptr, QLoggingCategory const * cat) {
  return new QDebug(this_ptr->fatal(*cat));
}


RITUAL_EXPORT void ctr_qt_core_ffi_qt_message_output(QtMsgType arg1, QMessageLogContext const * context, QString const * message) {
  qt_message_output(arg1, *context, *message);
}


RITUAL_EXPORT void ctr_qt_core_ffi_qSetMessagePattern(QString const * messagePattern) {
  qSetMessagePattern(*messagePattern);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_qFormatLogMessage(QtMsgType type, QMessageLogContext const * context, QString const * buf) {
  return new QString(qFormatLogMessage(type, *context, *buf));
}


RITUAL_EXPORT void ctr_qt_core_ffi_qYieldCpu() {
  qYieldCpu();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_qMallocAligned(unsigned long size, unsigned long alignment) {
  return qMallocAligned(size, alignment);
}


RITUAL_EXPORT void * ctr_qt_core_ffi_qReallocAligned(void * ptr, unsigned long size, unsigned long oldsize, unsigned long alignment) {
  return qReallocAligned(ptr, size, oldsize, alignment);
}


RITUAL_EXPORT void ctr_qt_core_ffi_qFreeAligned(void * ptr) {
  qFreeAligned(ptr);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_q20_is_constant_evaluated() {
  return q20::is_constant_evaluated();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qIsInf(double d) {
  return qIsInf(d);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qIsNaN(double d) {
  return qIsNaN(d);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qIsFinite(double d) {
  return qIsFinite(d);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qFpClassify(double val) {
  return qFpClassify(val);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qIsInf1(float f) {
  return qIsInf(f);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qIsNaN1(float f) {
  return qIsNaN(f);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qIsFinite1(float f) {
  return qIsFinite(f);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qFpClassify1(float val) {
  return qFpClassify(val);
}


RITUAL_EXPORT double ctr_qt_core_ffi_qSNaN() {
  return qSNaN();
}


RITUAL_EXPORT double ctr_qt_core_ffi_qQNaN() {
  return qQNaN();
}


RITUAL_EXPORT double ctr_qt_core_ffi_qInf() {
  return qInf();
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qFloatDistance(float a, float b) {
  return qFloatDistance(a, b);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_qFloatDistance1(double a, double b) {
  return qFloatDistance(a, b);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRound(double d) {
  return qRound(d);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRound1(float f) {
  return qRound(f);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_qRound64(double d) {
  return qRound64(d);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_qRound641(float f) {
  return qRound64(f);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qFuzzyCompare(double p1, double p2) {
  return qFuzzyCompare(p1, p2);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qFuzzyCompare1(float p1, float p2) {
  return qFuzzyCompare(p1, p2);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qFuzzyIsNull(double d) {
  return qFuzzyIsNull(d);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qFuzzyIsNull1(float f) {
  return qFuzzyIsNull(f);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qIsNull(double d) {
  return qIsNull(d);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qIsNull1(float f) {
  return qIsNull(f);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qIntCast(double f) {
  return qIntCast(f);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qIntCast1(float f) {
  return qIntCast(f);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_qgetenv(char const * varName) {
  return new QByteArray(qgetenv(varName));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_qEnvironmentVariable(char const * varName) {
  return new QString(qEnvironmentVariable(varName));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_qEnvironmentVariable1(char const * varName, QString const * defaultValue) {
  return new QString(qEnvironmentVariable(varName, *defaultValue));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qputenv(char const * varName, QByteArrayView const * value) {
  return qputenv(varName, *value);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qunsetenv(char const * varName) {
  return qunsetenv(varName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qEnvironmentVariableIsEmpty(char const * varName) {
  return qEnvironmentVariableIsEmpty(varName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qEnvironmentVariableIsSet(char const * varName) {
  return qEnvironmentVariableIsSet(varName);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qEnvironmentVariableIntValue(char const * varName, bool * ok) {
  return qEnvironmentVariableIntValue(varName, ok);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_qtTrId(char const * id, int n) {
  return new QString(qtTrId(id, n));
}


RITUAL_EXPORT Qt::partial_ordering * ctr_qt_core_ffi_Qt_weak_ordering_operator_Qt__partial_ordering(Qt::weak_ordering const * this_ptr) {
  return new Qt::partial_ordering(this_ptr->operator Qt::partial_ordering());
}


RITUAL_EXPORT Qt::partial_ordering * ctr_qt_core_ffi_Qt_strong_ordering_operator_Qt__partial_ordering(Qt::strong_ordering const * this_ptr) {
  return new Qt::partial_ordering(this_ptr->operator Qt::partial_ordering());
}


RITUAL_EXPORT Qt::weak_ordering * ctr_qt_core_ffi_Qt_strong_ordering_operator_Qt__weak_ordering(Qt::strong_ordering const * this_ptr) {
  return new Qt::weak_ordering(this_ptr->operator Qt::weak_ordering());
}


RITUAL_EXPORT QPartialOrdering * ctr_qt_core_ffi_QPartialOrdering_QPartialOrdering(Qt::partial_ordering const * order) {
  return new QPartialOrdering(*order);
}


RITUAL_EXPORT QPartialOrdering * ctr_qt_core_ffi_QPartialOrdering_QPartialOrdering1(Qt::weak_ordering const * stdorder) {
  return new QPartialOrdering(*stdorder);
}


RITUAL_EXPORT QPartialOrdering * ctr_qt_core_ffi_QPartialOrdering_QPartialOrdering2(Qt::strong_ordering const * stdorder) {
  return new QPartialOrdering(*stdorder);
}


RITUAL_EXPORT Qt::partial_ordering * ctr_qt_core_ffi_QPartialOrdering_operator_Qt__partial_ordering(QPartialOrdering const * this_ptr) {
  return new Qt::partial_ordering(this_ptr->operator Qt::partial_ordering());
}


RITUAL_EXPORT int ctr_qt_core_ffi_Qt_operator_40(Qt::AlignmentFlag lhs, Qt::TextFlag rhs) {
  return Qt::operator|(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_Qt_operator_41(Qt::AlignmentFlag lhs, Qt::TextFlag rhs) {
  return Qt::operator&(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_Qt_operator_42(Qt::AlignmentFlag lhs, Qt::TextFlag rhs) {
  return Qt::operator^(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_Qt_operator_43(Qt::TextFlag lhs, Qt::AlignmentFlag rhs) {
  return Qt::operator|(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_Qt_operator_44(Qt::TextFlag lhs, Qt::AlignmentFlag rhs) {
  return Qt::operator&(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_Qt_operator_45(Qt::TextFlag lhs, Qt::AlignmentFlag rhs) {
  return Qt::operator^(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_Qt_operator_46(Qt::TextElideMode lhs, Qt::TextFlag rhs) {
  return Qt::operator|(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_Qt_operator_47(Qt::TextElideMode lhs, Qt::TextFlag rhs) {
  return Qt::operator&(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_Qt_operator_48(Qt::TextElideMode lhs, Qt::TextFlag rhs) {
  return Qt::operator^(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_Qt_operator_49(Qt::TextFlag lhs, Qt::TextElideMode rhs) {
  return Qt::operator|(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_Qt_operator_50(Qt::TextFlag lhs, Qt::TextElideMode rhs) {
  return Qt::operator&(lhs, rhs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_Qt_operator_51(Qt::TextFlag lhs, Qt::TextElideMode rhs) {
  return Qt::operator^(lhs, rhs);
}


RITUAL_EXPORT Qt::Disambiguated_t * ctr_qt_core_ffi_Qt_Disambiguated_t_Disambiguated_t() {
  return new Qt::Disambiguated_t();
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_QKeyCombination_QKeyCombination(Qt::Key key) {
  return new QKeyCombination(key);
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_QKeyCombination_QKeyCombination1(int modifiers, Qt::Key key) {
  return new QKeyCombination(QFlags< Qt::Modifier >(modifiers), key);
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_QKeyCombination_QKeyCombination2(int modifiers, Qt::Key key) {
  return new QKeyCombination(QFlags< Qt::KeyboardModifier >(modifiers), key);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QKeyCombination_keyboardModifiers(QKeyCombination const * this_ptr) {
  return int(this_ptr->keyboardModifiers());
}


RITUAL_EXPORT Qt::Key ctr_qt_core_ffi_QKeyCombination_key(QKeyCombination const * this_ptr) {
  return this_ptr->key();
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_QKeyCombination_fromCombined(int combined) {
  return new QKeyCombination(QKeyCombination::fromCombined(combined));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QKeyCombination_toCombined(QKeyCombination const * this_ptr) {
  return this_ptr->toCombined();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QKeyCombination_operator_int(QKeyCombination const * this_ptr) {
  return this_ptr->operator int();
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_232(Qt::Modifier modifier, Qt::Key key) {
  return new QKeyCombination(Qt::operator|(modifier, key));
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_233(int modifiers, Qt::Key key) {
  return new QKeyCombination(Qt::operator|(QFlags< Qt::Modifier >(modifiers), key));
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_234(Qt::KeyboardModifier modifier, Qt::Key key) {
  return new QKeyCombination(Qt::operator|(modifier, key));
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_235(int modifiers, Qt::Key key) {
  return new QKeyCombination(Qt::operator|(QFlags< Qt::KeyboardModifier >(modifiers), key));
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_236(Qt::Key key, Qt::Modifier modifier) {
  return new QKeyCombination(Qt::operator|(key, modifier));
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_237(Qt::Key key, int modifiers) {
  return new QKeyCombination(Qt::operator|(key, QFlags< Qt::Modifier >(modifiers)));
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_238(Qt::Key key, Qt::KeyboardModifier modifier) {
  return new QKeyCombination(Qt::operator|(key, modifier));
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_239(Qt::Key key, int modifiers) {
  return new QKeyCombination(Qt::operator|(key, QFlags< Qt::KeyboardModifier >(modifiers)));
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_240(Qt::Modifier modifier, Qt::Key key) {
  return new QKeyCombination(Qt::operator+(modifier, key));
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_241(int modifiers, Qt::Key key) {
  return new QKeyCombination(Qt::operator+(QFlags< Qt::Modifier >(modifiers), key));
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_242(Qt::KeyboardModifier modifier, Qt::Key key) {
  return new QKeyCombination(Qt::operator+(modifier, key));
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_243(int modifiers, Qt::Key key) {
  return new QKeyCombination(Qt::operator+(QFlags< Qt::KeyboardModifier >(modifiers), key));
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_244(Qt::Key key, Qt::Modifier modifier) {
  return new QKeyCombination(Qt::operator+(key, modifier));
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_245(Qt::Key key, int modifiers) {
  return new QKeyCombination(Qt::operator+(key, QFlags< Qt::Modifier >(modifiers)));
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_246(Qt::Key key, Qt::KeyboardModifier modifier) {
  return new QKeyCombination(Qt::operator+(key, modifier));
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_Qt_operator_247(Qt::Key key, int modifiers) {
  return new QKeyCombination(Qt::operator+(key, QFlags< Qt::KeyboardModifier >(modifiers)));
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaObject_className(QMetaObject const * this_ptr) {
  return this_ptr->className();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QMetaObject_superClass(QMetaObject const * this_ptr) {
  return this_ptr->superClass();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaObject_inherits(QMetaObject const * this_ptr, QMetaObject const * metaObject) {
  return this_ptr->inherits(metaObject);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_QMetaObject_cast(QMetaObject const * this_ptr, QObject * obj) {
  return this_ptr->cast(obj);
}


RITUAL_EXPORT QObject const * ctr_qt_core_ffi_QMetaObject_cast1(QMetaObject const * this_ptr, QObject const * obj) {
  return this_ptr->cast(obj);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QMetaObject_tr(QMetaObject const * this_ptr, char const * s, char const * c, int n) {
  return new QString(this_ptr->tr(s, c, n));
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QMetaObject_metaType(QMetaObject const * this_ptr) {
  return new QMetaType(this_ptr->metaType());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_methodOffset(QMetaObject const * this_ptr) {
  return this_ptr->methodOffset();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_enumeratorOffset(QMetaObject const * this_ptr) {
  return this_ptr->enumeratorOffset();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_propertyOffset(QMetaObject const * this_ptr) {
  return this_ptr->propertyOffset();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_classInfoOffset(QMetaObject const * this_ptr) {
  return this_ptr->classInfoOffset();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_constructorCount(QMetaObject const * this_ptr) {
  return this_ptr->constructorCount();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_methodCount(QMetaObject const * this_ptr) {
  return this_ptr->methodCount();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_enumeratorCount(QMetaObject const * this_ptr) {
  return this_ptr->enumeratorCount();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_propertyCount(QMetaObject const * this_ptr) {
  return this_ptr->propertyCount();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_classInfoCount(QMetaObject const * this_ptr) {
  return this_ptr->classInfoCount();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_indexOfConstructor(QMetaObject const * this_ptr, char const * constructor) {
  return this_ptr->indexOfConstructor(constructor);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_indexOfMethod(QMetaObject const * this_ptr, char const * method) {
  return this_ptr->indexOfMethod(method);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_indexOfSignal(QMetaObject const * this_ptr, char const * signal) {
  return this_ptr->indexOfSignal(signal);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_indexOfSlot(QMetaObject const * this_ptr, char const * slot) {
  return this_ptr->indexOfSlot(slot);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_indexOfEnumerator(QMetaObject const * this_ptr, char const * name) {
  return this_ptr->indexOfEnumerator(name);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_indexOfProperty(QMetaObject const * this_ptr, char const * name) {
  return this_ptr->indexOfProperty(name);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_indexOfClassInfo(QMetaObject const * this_ptr, char const * name) {
  return this_ptr->indexOfClassInfo(name);
}


RITUAL_EXPORT QMetaMethod * ctr_qt_core_ffi_QMetaObject_constructor(QMetaObject const * this_ptr, int index) {
  return new QMetaMethod(this_ptr->constructor(index));
}


RITUAL_EXPORT QMetaMethod * ctr_qt_core_ffi_QMetaObject_method(QMetaObject const * this_ptr, int index) {
  return new QMetaMethod(this_ptr->method(index));
}


RITUAL_EXPORT QMetaEnum * ctr_qt_core_ffi_QMetaObject_enumerator(QMetaObject const * this_ptr, int index) {
  return new QMetaEnum(this_ptr->enumerator(index));
}


RITUAL_EXPORT QMetaProperty * ctr_qt_core_ffi_QMetaObject_property(QMetaObject const * this_ptr, int index) {
  return new QMetaProperty(this_ptr->property(index));
}


RITUAL_EXPORT QMetaClassInfo * ctr_qt_core_ffi_QMetaObject_classInfo(QMetaObject const * this_ptr, int index) {
  return new QMetaClassInfo(this_ptr->classInfo(index));
}


RITUAL_EXPORT QMetaProperty * ctr_qt_core_ffi_QMetaObject_userProperty(QMetaObject const * this_ptr) {
  return new QMetaProperty(this_ptr->userProperty());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaObject_checkConnectArgs(char const * signal, char const * method) {
  return QMetaObject::checkConnectArgs(signal, method);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaObject_checkConnectArgs1(QMetaMethod const * signal, QMetaMethod const * method) {
  return QMetaObject::checkConnectArgs(*signal, *method);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QMetaObject_normalizedSignature(char const * method) {
  return new QByteArray(QMetaObject::normalizedSignature(method));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QMetaObject_normalizedType(char const * type) {
  return new QByteArray(QMetaObject::normalizedType(type));
}


RITUAL_EXPORT QMetaObject::Connection * ctr_qt_core_ffi_QMetaObject_connect(QObject const * sender, int signal_index, QObject const * receiver, int method_index, int type, int * types) {
  return new QMetaObject::Connection(QMetaObject::connect(sender, signal_index, receiver, method_index, type, types));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaObject_disconnect(QObject const * sender, int signal_index, QObject const * receiver, int method_index) {
  return QMetaObject::disconnect(sender, signal_index, receiver, method_index);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaObject_disconnectOne(QObject const * sender, int signal_index, QObject const * receiver, int method_index) {
  return QMetaObject::disconnectOne(sender, signal_index, receiver, method_index);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaObject_connectSlotsByName(QObject * o) {
  QMetaObject::connectSlotsByName(o);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaObject_activate(QObject * sender, int signal_index, void * * argv) {
  QMetaObject::activate(sender, signal_index, argv);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaObject_activate1(QObject * sender, QMetaObject const * arg2, int local_signal_index, void * * argv) {
  QMetaObject::activate(sender, arg2, local_signal_index, argv);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaObject_activate2(QObject * sender, int signal_offset, int local_signal_index, void * * argv) {
  QMetaObject::activate(sender, signal_offset, local_signal_index, argv);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_static_metacall(QMetaObject const * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->static_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaObject_metacall(QObject * arg1, QMetaObject::Call arg2, int arg3, void * * arg4) {
  return QMetaObject::metacall(arg1, arg2, arg3, arg4);
}


RITUAL_EXPORT QMetaObject::SuperData * ctr_qt_core_ffi_QMetaObject_SuperData_SuperData() {
  return new QMetaObject::SuperData();
}


RITUAL_EXPORT QMetaObject::SuperData * ctr_qt_core_ffi_QMetaObject_SuperData_SuperData1(QMetaObject const * mo) {
  return new QMetaObject::SuperData(mo);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QMetaObject_SuperData_operator__(QMetaObject::SuperData const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QMetaObject::SuperData * ctr_qt_core_ffi_QMetaObject_SuperData_SuperData2(QMetaObject const * (*g)()) {
  return new QMetaObject::SuperData(g);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QMetaObject_SuperData_operator_QMetaObject_const__(QMetaObject::SuperData const * this_ptr) {
  return this_ptr->operator QMetaObject const *();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaObject_Connection_dConnection(QMetaObject::Connection * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaObject::Connection * ctr_qt_core_ffi_QMetaObject_Connection_Connection() {
  return new QMetaObject::Connection();
}


RITUAL_EXPORT QMetaObject::Connection * ctr_qt_core_ffi_QMetaObject_Connection_Connection1(QMetaObject::Connection const * other) {
  return new QMetaObject::Connection(*other);
}


RITUAL_EXPORT QMetaObject::Connection * ctr_qt_core_ffi_QMetaObject_Connection_operator_(QMetaObject::Connection * this_ptr, QMetaObject::Connection const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaObject_Connection_swap(QMetaObject::Connection * this_ptr, QMetaObject::Connection * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QLatin1Char * ctr_qt_core_ffi_QLatin1Char_QLatin1Char(char c) {
  return new QLatin1Char(c);
}


RITUAL_EXPORT char ctr_qt_core_ffi_QLatin1Char_toLatin1(QLatin1Char const * this_ptr) {
  return this_ptr->toLatin1();
}


RITUAL_EXPORT char16_t ctr_qt_core_ffi_QLatin1Char_unicode(QLatin1Char const * this_ptr) {
  return this_ptr->unicode();
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QChar_QChar() {
  return new QChar();
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QChar_QChar1(unsigned char c, unsigned char r) {
  return new QChar(c, r);
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QChar_fromUcs2(char16_t c) {
  return new QChar(QChar::fromUcs2(c));
}


RITUAL_EXPORT QChar::Category ctr_qt_core_ffi_QChar_category(QChar const * this_ptr) {
  return this_ptr->category();
}


RITUAL_EXPORT QChar::Direction ctr_qt_core_ffi_QChar_direction(QChar const * this_ptr) {
  return this_ptr->direction();
}


RITUAL_EXPORT QChar::JoiningType ctr_qt_core_ffi_QChar_joiningType(QChar const * this_ptr) {
  return this_ptr->joiningType();
}


RITUAL_EXPORT unsigned char ctr_qt_core_ffi_QChar_combiningClass(QChar const * this_ptr) {
  return this_ptr->combiningClass();
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QChar_mirroredChar(QChar const * this_ptr) {
  return new QChar(this_ptr->mirroredChar());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_hasMirrored(QChar const * this_ptr) {
  return this_ptr->hasMirrored();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QChar_decomposition(QChar const * this_ptr) {
  return new QString(this_ptr->decomposition());
}


RITUAL_EXPORT QChar::Decomposition ctr_qt_core_ffi_QChar_decompositionTag(QChar const * this_ptr) {
  return this_ptr->decompositionTag();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QChar_digitValue(QChar const * this_ptr) {
  return this_ptr->digitValue();
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QChar_toLower(QChar const * this_ptr) {
  return new QChar(this_ptr->toLower());
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QChar_toUpper(QChar const * this_ptr) {
  return new QChar(this_ptr->toUpper());
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QChar_toTitleCase(QChar const * this_ptr) {
  return new QChar(this_ptr->toTitleCase());
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QChar_toCaseFolded(QChar const * this_ptr) {
  return new QChar(this_ptr->toCaseFolded());
}


RITUAL_EXPORT QChar::Script ctr_qt_core_ffi_QChar_script(QChar const * this_ptr) {
  return this_ptr->script();
}


RITUAL_EXPORT QChar::UnicodeVersion ctr_qt_core_ffi_QChar_unicodeVersion(QChar const * this_ptr) {
  return this_ptr->unicodeVersion();
}


RITUAL_EXPORT char ctr_qt_core_ffi_QChar_toLatin1(QChar const * this_ptr) {
  return this_ptr->toLatin1();
}


RITUAL_EXPORT char16_t ctr_qt_core_ffi_QChar_unicode(QChar const * this_ptr) {
  return this_ptr->unicode();
}


RITUAL_EXPORT char16_t * ctr_qt_core_ffi_QChar_unicode1(QChar * this_ptr) {
  return &this_ptr->unicode();
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QChar_fromLatin1(char c) {
  return new QChar(QChar::fromLatin1(c));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isNull(QChar const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isPrint(QChar const * this_ptr) {
  return this_ptr->isPrint();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isSpace(QChar const * this_ptr) {
  return this_ptr->isSpace();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isMark(QChar const * this_ptr) {
  return this_ptr->isMark();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isPunct(QChar const * this_ptr) {
  return this_ptr->isPunct();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isSymbol(QChar const * this_ptr) {
  return this_ptr->isSymbol();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isLetter(QChar const * this_ptr) {
  return this_ptr->isLetter();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isNumber(QChar const * this_ptr) {
  return this_ptr->isNumber();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isLetterOrNumber(QChar const * this_ptr) {
  return this_ptr->isLetterOrNumber();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isDigit(QChar const * this_ptr) {
  return this_ptr->isDigit();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isLower(QChar const * this_ptr) {
  return this_ptr->isLower();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isUpper(QChar const * this_ptr) {
  return this_ptr->isUpper();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isTitleCase(QChar const * this_ptr) {
  return this_ptr->isTitleCase();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isNonCharacter(QChar const * this_ptr) {
  return this_ptr->isNonCharacter();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isHighSurrogate(QChar const * this_ptr) {
  return this_ptr->isHighSurrogate();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isLowSurrogate(QChar const * this_ptr) {
  return this_ptr->isLowSurrogate();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isSurrogate(QChar const * this_ptr) {
  return this_ptr->isSurrogate();
}


RITUAL_EXPORT unsigned char ctr_qt_core_ffi_QChar_cell(QChar const * this_ptr) {
  return this_ptr->cell();
}


RITUAL_EXPORT unsigned char ctr_qt_core_ffi_QChar_row(QChar const * this_ptr) {
  return this_ptr->row();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QChar_setCell(QChar * this_ptr, unsigned char acell) {
  this_ptr->setCell(acell);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QChar_setRow(QChar * this_ptr, unsigned char arow) {
  this_ptr->setRow(arow);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isNonCharacter1(char32_t ucs4) {
  return QChar::isNonCharacter(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isHighSurrogate1(char32_t ucs4) {
  return QChar::isHighSurrogate(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isLowSurrogate1(char32_t ucs4) {
  return QChar::isLowSurrogate(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isSurrogate1(char32_t ucs4) {
  return QChar::isSurrogate(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_requiresSurrogates(char32_t ucs4) {
  return QChar::requiresSurrogates(ucs4);
}


RITUAL_EXPORT char32_t ctr_qt_core_ffi_QChar_surrogateToUcs4(char16_t high, char16_t low) {
  return QChar::surrogateToUcs4(high, low);
}


RITUAL_EXPORT char32_t ctr_qt_core_ffi_QChar_surrogateToUcs41(QChar const * high, QChar const * low) {
  return QChar::surrogateToUcs4(*high, *low);
}


RITUAL_EXPORT char16_t ctr_qt_core_ffi_QChar_highSurrogate(char32_t ucs4) {
  return QChar::highSurrogate(ucs4);
}


RITUAL_EXPORT char16_t ctr_qt_core_ffi_QChar_lowSurrogate(char32_t ucs4) {
  return QChar::lowSurrogate(ucs4);
}


RITUAL_EXPORT QChar::Category ctr_qt_core_ffi_QChar_category1(char32_t ucs4) {
  return QChar::category(ucs4);
}


RITUAL_EXPORT QChar::Direction ctr_qt_core_ffi_QChar_direction1(char32_t ucs4) {
  return QChar::direction(ucs4);
}


RITUAL_EXPORT QChar::JoiningType ctr_qt_core_ffi_QChar_joiningType1(char32_t ucs4) {
  return QChar::joiningType(ucs4);
}


RITUAL_EXPORT unsigned char ctr_qt_core_ffi_QChar_combiningClass1(char32_t ucs4) {
  return QChar::combiningClass(ucs4);
}


RITUAL_EXPORT char32_t ctr_qt_core_ffi_QChar_mirroredChar1(char32_t ucs4) {
  return QChar::mirroredChar(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_hasMirrored1(char32_t ucs4) {
  return QChar::hasMirrored(ucs4);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QChar_decomposition1(char32_t ucs4) {
  return new QString(QChar::decomposition(ucs4));
}


RITUAL_EXPORT QChar::Decomposition ctr_qt_core_ffi_QChar_decompositionTag1(char32_t ucs4) {
  return QChar::decompositionTag(ucs4);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QChar_digitValue1(char32_t ucs4) {
  return QChar::digitValue(ucs4);
}


RITUAL_EXPORT char32_t ctr_qt_core_ffi_QChar_toLower1(char32_t ucs4) {
  return QChar::toLower(ucs4);
}


RITUAL_EXPORT char32_t ctr_qt_core_ffi_QChar_toUpper1(char32_t ucs4) {
  return QChar::toUpper(ucs4);
}


RITUAL_EXPORT char32_t ctr_qt_core_ffi_QChar_toTitleCase1(char32_t ucs4) {
  return QChar::toTitleCase(ucs4);
}


RITUAL_EXPORT char32_t ctr_qt_core_ffi_QChar_toCaseFolded1(char32_t ucs4) {
  return QChar::toCaseFolded(ucs4);
}


RITUAL_EXPORT QChar::Script ctr_qt_core_ffi_QChar_script1(char32_t ucs4) {
  return QChar::script(ucs4);
}


RITUAL_EXPORT QChar::UnicodeVersion ctr_qt_core_ffi_QChar_unicodeVersion1(char32_t ucs4) {
  return QChar::unicodeVersion(ucs4);
}


RITUAL_EXPORT QChar::UnicodeVersion ctr_qt_core_ffi_QChar_currentUnicodeVersion() {
  return QChar::currentUnicodeVersion();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isPrint1(char32_t ucs4) {
  return QChar::isPrint(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isSpace1(char32_t ucs4) {
  return QChar::isSpace(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isMark1(char32_t ucs4) {
  return QChar::isMark(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isPunct1(char32_t ucs4) {
  return QChar::isPunct(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isSymbol1(char32_t ucs4) {
  return QChar::isSymbol(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isLetter1(char32_t ucs4) {
  return QChar::isLetter(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isNumber1(char32_t ucs4) {
  return QChar::isNumber(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isLetterOrNumber1(char32_t ucs4) {
  return QChar::isLetterOrNumber(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isDigit1(char32_t ucs4) {
  return QChar::isDigit(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isLower1(char32_t ucs4) {
  return QChar::isLower(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isUpper1(char32_t ucs4) {
  return QChar::isUpper(ucs4);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChar_isTitleCase1(char32_t ucs4) {
  return QChar::isTitleCase(ucs4);
}


RITUAL_EXPORT void const * ctr_qt_core_ffi_qmemrchr(void const * s, int needle, unsigned long n) {
  return qmemrchr(s, needle, n);
}


RITUAL_EXPORT char * ctr_qt_core_ffi_qstrdup(char const * arg1) {
  return qstrdup(arg1);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qstrlen(char const * str) {
  return qstrlen(str);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qstrnlen(char const * str, unsigned long maxlen) {
  return qstrnlen(str, maxlen);
}


RITUAL_EXPORT char * ctr_qt_core_ffi_qstrcpy(char * dst, char const * src) {
  return qstrcpy(dst, src);
}


RITUAL_EXPORT char * ctr_qt_core_ffi_qstrncpy(char * dst, char const * src, unsigned long len) {
  return qstrncpy(dst, src, len);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qstrcmp(char const * str1, char const * str2) {
  return qstrcmp(str1, str2);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qstrncmp(char const * str1, char const * str2, unsigned long len) {
  return qstrncmp(str1, str2, len);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qstricmp(char const * arg1, char const * arg2) {
  return qstricmp(arg1, arg2);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qstrnicmp(char const * arg1, char const * arg2, unsigned long len) {
  return qstrnicmp(arg1, arg2, len);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qstrnicmp1(char const * arg1, long long arg2, char const * arg3, long long arg4) {
  return qstrnicmp(arg1, arg2, arg3, arg4);
}


RITUAL_EXPORT unsigned short ctr_qt_core_ffi_qChecksum(QByteArrayView const * data, Qt::ChecksumType standard) {
  return qChecksum(*data, standard);
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QByteArrayView_QByteArrayView() {
  return new QByteArrayView();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArrayView_toByteArray(QByteArrayView const * this_ptr) {
  return new QByteArray(this_ptr->toByteArray());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArrayView_size(QByteArrayView const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QByteArrayView_data(QByteArrayView const * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QByteArrayView_constData(QByteArrayView const * this_ptr) {
  return this_ptr->constData();
}


RITUAL_EXPORT char ctr_qt_core_ffi_QByteArrayView_operator__(QByteArrayView const * this_ptr, long long n) {
  return this_ptr->operator[](n);
}


RITUAL_EXPORT char ctr_qt_core_ffi_QByteArrayView_at(QByteArrayView const * this_ptr, long long n) {
  return this_ptr->at(n);
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QByteArrayView_first(QByteArrayView const * this_ptr, long long n) {
  return new QByteArrayView(this_ptr->first(n));
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QByteArrayView_last(QByteArrayView const * this_ptr, long long n) {
  return new QByteArrayView(this_ptr->last(n));
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QByteArrayView_sliced(QByteArrayView const * this_ptr, long long pos) {
  return new QByteArrayView(this_ptr->sliced(pos));
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QByteArrayView_sliced1(QByteArrayView const * this_ptr, long long pos, long long n) {
  return new QByteArrayView(this_ptr->sliced(pos, n));
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QByteArrayView_slice(QByteArrayView * this_ptr, long long pos) {
  return &this_ptr->slice(pos);
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QByteArrayView_slice1(QByteArrayView * this_ptr, long long pos, long long n) {
  return &this_ptr->slice(pos, n);
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QByteArrayView_chopped(QByteArrayView const * this_ptr, long long len) {
  return new QByteArrayView(this_ptr->chopped(len));
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QByteArrayView_left(QByteArrayView const * this_ptr, long long n) {
  return new QByteArrayView(this_ptr->left(n));
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QByteArrayView_right(QByteArrayView const * this_ptr, long long n) {
  return new QByteArrayView(this_ptr->right(n));
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QByteArrayView_mid(QByteArrayView const * this_ptr, long long pos, long long n) {
  return new QByteArrayView(this_ptr->mid(pos, n));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArrayView_truncate(QByteArrayView * this_ptr, long long n) {
  this_ptr->truncate(n);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArrayView_chop(QByteArrayView * this_ptr, long long n) {
  this_ptr->chop(n);
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QByteArrayView_trimmed(QByteArrayView const * this_ptr) {
  return new QByteArrayView(this_ptr->trimmed());
}


RITUAL_EXPORT short ctr_qt_core_ffi_QByteArrayView_toShort(QByteArrayView const * this_ptr, bool * ok, int base) {
  return this_ptr->toShort(ok, base);
}


RITUAL_EXPORT unsigned short ctr_qt_core_ffi_QByteArrayView_toUShort(QByteArrayView const * this_ptr, bool * ok, int base) {
  return this_ptr->toUShort(ok, base);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QByteArrayView_toInt(QByteArrayView const * this_ptr, bool * ok, int base) {
  return this_ptr->toInt(ok, base);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QByteArrayView_toUInt(QByteArrayView const * this_ptr, bool * ok, int base) {
  return this_ptr->toUInt(ok, base);
}


RITUAL_EXPORT long ctr_qt_core_ffi_QByteArrayView_toLong(QByteArrayView const * this_ptr, bool * ok, int base) {
  return this_ptr->toLong(ok, base);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QByteArrayView_toULong(QByteArrayView const * this_ptr, bool * ok, int base) {
  return this_ptr->toULong(ok, base);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArrayView_toLongLong(QByteArrayView const * this_ptr, bool * ok, int base) {
  return this_ptr->toLongLong(ok, base);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QByteArrayView_toULongLong(QByteArrayView const * this_ptr, bool * ok, int base) {
  return this_ptr->toULongLong(ok, base);
}


RITUAL_EXPORT float ctr_qt_core_ffi_QByteArrayView_toFloat(QByteArrayView const * this_ptr, bool * ok) {
  return this_ptr->toFloat(ok);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QByteArrayView_toDouble(QByteArrayView const * this_ptr, bool * ok) {
  return this_ptr->toDouble(ok);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArrayView_startsWith(QByteArrayView const * this_ptr, QByteArrayView const * other) {
  return this_ptr->startsWith(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArrayView_startsWith1(QByteArrayView const * this_ptr, char c) {
  return this_ptr->startsWith(c);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArrayView_endsWith(QByteArrayView const * this_ptr, QByteArrayView const * other) {
  return this_ptr->endsWith(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArrayView_endsWith1(QByteArrayView const * this_ptr, char c) {
  return this_ptr->endsWith(c);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArrayView_indexOf(QByteArrayView const * this_ptr, QByteArrayView const * a, long long from) {
  return this_ptr->indexOf(*a, from);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArrayView_indexOf1(QByteArrayView const * this_ptr, char ch, long long from) {
  return this_ptr->indexOf(ch, from);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArrayView_contains(QByteArrayView const * this_ptr, QByteArrayView const * a) {
  return this_ptr->contains(*a);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArrayView_contains1(QByteArrayView const * this_ptr, char c) {
  return this_ptr->contains(c);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArrayView_lastIndexOf(QByteArrayView const * this_ptr, QByteArrayView const * a) {
  return this_ptr->lastIndexOf(*a);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArrayView_lastIndexOf1(QByteArrayView const * this_ptr, QByteArrayView const * a, long long from) {
  return this_ptr->lastIndexOf(*a, from);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArrayView_lastIndexOf2(QByteArrayView const * this_ptr, char ch, long long from) {
  return this_ptr->lastIndexOf(ch, from);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArrayView_count(QByteArrayView const * this_ptr, QByteArrayView const * a) {
  return this_ptr->count(*a);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArrayView_count1(QByteArrayView const * this_ptr, char ch) {
  return this_ptr->count(ch);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QByteArrayView_compare(QByteArrayView const * this_ptr, QByteArrayView const * a, Qt::CaseSensitivity cs) {
  return this_ptr->compare(*a, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArrayView_isValidUtf8(QByteArrayView const * this_ptr) {
  return this_ptr->isValidUtf8();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QByteArrayView_begin(QByteArrayView const * this_ptr) {
  return this_ptr->begin();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QByteArrayView_end(QByteArrayView const * this_ptr) {
  return this_ptr->end();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QByteArrayView_cbegin(QByteArrayView const * this_ptr) {
  return this_ptr->cbegin();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QByteArrayView_cend(QByteArrayView const * this_ptr) {
  return this_ptr->cend();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArrayView_empty(QByteArrayView const * this_ptr) {
  return this_ptr->empty();
}


RITUAL_EXPORT char ctr_qt_core_ffi_QByteArrayView_front(QByteArrayView const * this_ptr) {
  return this_ptr->front();
}


RITUAL_EXPORT char ctr_qt_core_ffi_QByteArrayView_back(QByteArrayView const * this_ptr) {
  return this_ptr->back();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArrayView_max_size(QByteArrayView const * this_ptr) {
  return this_ptr->max_size();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArrayView_isNull(QByteArrayView const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArrayView_isEmpty(QByteArrayView const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArrayView_length(QByteArrayView const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT char ctr_qt_core_ffi_QByteArrayView_first1(QByteArrayView const * this_ptr) {
  return this_ptr->first();
}


RITUAL_EXPORT char ctr_qt_core_ffi_QByteArrayView_last1(QByteArrayView const * this_ptr) {
  return this_ptr->last();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArrayView_maxSize() {
  return QByteArrayView::maxSize();
}


RITUAL_EXPORT unsigned short ctr_qt_core_ffi_qChecksum1(char const * s, long long len, Qt::ChecksumType standard) {
  return qChecksum(s, len, standard);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_QByteArray() {
  return new QByteArray();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_QByteArray1(char const * arg1, long long size) {
  return new QByteArray(arg1, size);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_QByteArray2(long long size, char c) {
  return new QByteArray(size, c);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_QByteArray3(QByteArrayView const * v) {
  return new QByteArray(*v);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_QByteArray4(QByteArray const * arg1) {
  return new QByteArray(*arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_dQByteArray(QByteArray * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_operator_(QByteArray * this_ptr, QByteArray const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_operator_1(QByteArray * this_ptr, char const * str) {
  return &this_ptr->operator=(str);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_swap(QByteArray * this_ptr, QByteArray * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArray_isEmpty(QByteArray const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_resize(QByteArray * this_ptr, long long size) {
  this_ptr->resize(size);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_resize1(QByteArray * this_ptr, long long size, char c) {
  this_ptr->resize(size, c);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_resizeForOverwrite(QByteArray * this_ptr, long long size) {
  this_ptr->resizeForOverwrite(size);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_fill(QByteArray * this_ptr, char c, long long size) {
  return &this_ptr->fill(c, size);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArray_capacity(QByteArray const * this_ptr) {
  return this_ptr->capacity();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_reserve(QByteArray * this_ptr, long long size) {
  this_ptr->reserve(size);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_squeeze(QByteArray * this_ptr) {
  this_ptr->squeeze();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QByteArray_operator_char_const__(QByteArray const * this_ptr) {
  return this_ptr->operator char const *();
}


RITUAL_EXPORT void const * ctr_qt_core_ffi_QByteArray_operator_void_const__(QByteArray const * this_ptr) {
  return this_ptr->operator void const *();
}


RITUAL_EXPORT char * ctr_qt_core_ffi_QByteArray_data(QByteArray * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QByteArray_data1(QByteArray const * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QByteArray_constData(QByteArray const * this_ptr) {
  return this_ptr->constData();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_detach(QByteArray * this_ptr) {
  this_ptr->detach();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArray_isDetached(QByteArray const * this_ptr) {
  return this_ptr->isDetached();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArray_isSharedWith(QByteArray const * this_ptr, QByteArray const * other) {
  return this_ptr->isSharedWith(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_clear(QByteArray * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT char ctr_qt_core_ffi_QByteArray_at(QByteArray const * this_ptr, long long i) {
  return this_ptr->at(i);
}


RITUAL_EXPORT char ctr_qt_core_ffi_QByteArray_operator__(QByteArray const * this_ptr, long long i) {
  return this_ptr->operator[](i);
}


RITUAL_EXPORT char * ctr_qt_core_ffi_QByteArray_operator__1(QByteArray * this_ptr, long long i) {
  return &this_ptr->operator[](i);
}


RITUAL_EXPORT char ctr_qt_core_ffi_QByteArray_front(QByteArray const * this_ptr) {
  return this_ptr->front();
}


RITUAL_EXPORT char * ctr_qt_core_ffi_QByteArray_front1(QByteArray * this_ptr) {
  return &this_ptr->front();
}


RITUAL_EXPORT char ctr_qt_core_ffi_QByteArray_back(QByteArray const * this_ptr) {
  return this_ptr->back();
}


RITUAL_EXPORT char * ctr_qt_core_ffi_QByteArray_back1(QByteArray * this_ptr) {
  return &this_ptr->back();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArray_indexOf(QByteArray const * this_ptr, char c, long long from) {
  return this_ptr->indexOf(c, from);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArray_indexOf1(QByteArray const * this_ptr, QByteArrayView const * bv, long long from) {
  return this_ptr->indexOf(*bv, from);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArray_lastIndexOf(QByteArray const * this_ptr, char c, long long from) {
  return this_ptr->lastIndexOf(c, from);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArray_lastIndexOf1(QByteArray const * this_ptr, QByteArrayView const * bv) {
  return this_ptr->lastIndexOf(*bv);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArray_lastIndexOf2(QByteArray const * this_ptr, QByteArrayView const * bv, long long from) {
  return this_ptr->lastIndexOf(*bv, from);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArray_contains(QByteArray const * this_ptr, char c) {
  return this_ptr->contains(c);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArray_contains1(QByteArray const * this_ptr, QByteArrayView const * bv) {
  return this_ptr->contains(*bv);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArray_count(QByteArray const * this_ptr, char c) {
  return this_ptr->count(c);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArray_count1(QByteArray const * this_ptr, QByteArrayView const * bv) {
  return this_ptr->count(*bv);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QByteArray_compare(QByteArray const * this_ptr, QByteArrayView const * a, Qt::CaseSensitivity cs) {
  return this_ptr->compare(*a, cs);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_left(QByteArray const * this_ptr, long long n) {
  return new QByteArray(this_ptr->left(n));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_left1(QByteArray * this_ptr, long long n) {
  return new QByteArray(this_ptr->left(n));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_right(QByteArray const * this_ptr, long long n) {
  return new QByteArray(this_ptr->right(n));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_right1(QByteArray * this_ptr, long long n) {
  return new QByteArray(this_ptr->right(n));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_mid(QByteArray const * this_ptr, long long index, long long len) {
  return new QByteArray(this_ptr->mid(index, len));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_mid1(QByteArray * this_ptr, long long index, long long len) {
  return new QByteArray(this_ptr->mid(index, len));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_first(QByteArray const * this_ptr, long long n) {
  return new QByteArray(this_ptr->first(n));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_last(QByteArray const * this_ptr, long long n) {
  return new QByteArray(this_ptr->last(n));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_sliced(QByteArray const * this_ptr, long long pos) {
  return new QByteArray(this_ptr->sliced(pos));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_sliced1(QByteArray const * this_ptr, long long pos, long long n) {
  return new QByteArray(this_ptr->sliced(pos, n));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_chopped(QByteArray const * this_ptr, long long len) {
  return new QByteArray(this_ptr->chopped(len));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_first1(QByteArray * this_ptr, long long n) {
  return new QByteArray(this_ptr->first(n));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_last1(QByteArray * this_ptr, long long n) {
  return new QByteArray(this_ptr->last(n));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_sliced2(QByteArray * this_ptr, long long pos) {
  return new QByteArray(this_ptr->sliced(pos));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_sliced3(QByteArray * this_ptr, long long pos, long long n) {
  return new QByteArray(this_ptr->sliced(pos, n));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_chopped1(QByteArray * this_ptr, long long len) {
  return new QByteArray(this_ptr->chopped(len));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArray_startsWith(QByteArray const * this_ptr, QByteArrayView const * bv) {
  return this_ptr->startsWith(*bv);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArray_startsWith1(QByteArray const * this_ptr, char c) {
  return this_ptr->startsWith(c);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArray_endsWith(QByteArray const * this_ptr, char c) {
  return this_ptr->endsWith(c);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArray_endsWith1(QByteArray const * this_ptr, QByteArrayView const * bv) {
  return this_ptr->endsWith(*bv);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArray_isUpper(QByteArray const * this_ptr) {
  return this_ptr->isUpper();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArray_isLower(QByteArray const * this_ptr) {
  return this_ptr->isLower();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArray_isValidUtf8(QByteArray const * this_ptr) {
  return this_ptr->isValidUtf8();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_truncate(QByteArray * this_ptr, long long pos) {
  this_ptr->truncate(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_chop(QByteArray * this_ptr, long long n) {
  this_ptr->chop(n);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_slice(QByteArray * this_ptr, long long pos) {
  return &this_ptr->slice(pos);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_slice1(QByteArray * this_ptr, long long pos, long long n) {
  return &this_ptr->slice(pos, n);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_toLower(QByteArray const * this_ptr) {
  return new QByteArray(this_ptr->toLower());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_toLower1(QByteArray * this_ptr) {
  return new QByteArray(this_ptr->toLower());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_toUpper(QByteArray const * this_ptr) {
  return new QByteArray(this_ptr->toUpper());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_toUpper1(QByteArray * this_ptr) {
  return new QByteArray(this_ptr->toUpper());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_trimmed(QByteArray const * this_ptr) {
  return new QByteArray(this_ptr->trimmed());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_trimmed1(QByteArray * this_ptr) {
  return new QByteArray(this_ptr->trimmed());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_simplified(QByteArray const * this_ptr) {
  return new QByteArray(this_ptr->simplified());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_simplified1(QByteArray * this_ptr) {
  return new QByteArray(this_ptr->simplified());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_leftJustified(QByteArray const * this_ptr, long long width, char fill, bool truncate) {
  return new QByteArray(this_ptr->leftJustified(width, fill, truncate));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_rightJustified(QByteArray const * this_ptr, long long width, char fill, bool truncate) {
  return new QByteArray(this_ptr->rightJustified(width, fill, truncate));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_prepend(QByteArray * this_ptr, char c) {
  return &this_ptr->prepend(c);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_prepend1(QByteArray * this_ptr, long long count, char c) {
  return &this_ptr->prepend(count, c);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_prepend2(QByteArray * this_ptr, char const * s) {
  return &this_ptr->prepend(s);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_prepend3(QByteArray * this_ptr, char const * s, long long len) {
  return &this_ptr->prepend(s, len);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_prepend4(QByteArray * this_ptr, QByteArray const * a) {
  return &this_ptr->prepend(*a);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_prepend5(QByteArray * this_ptr, QByteArrayView const * a) {
  return &this_ptr->prepend(*a);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_append(QByteArray * this_ptr, char c) {
  return &this_ptr->append(c);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_append1(QByteArray * this_ptr, long long count, char c) {
  return &this_ptr->append(count, c);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_append2(QByteArray * this_ptr, char const * s) {
  return &this_ptr->append(s);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_append3(QByteArray * this_ptr, char const * s, long long len) {
  return &this_ptr->append(s, len);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_append4(QByteArray * this_ptr, QByteArray const * a) {
  return &this_ptr->append(*a);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_append5(QByteArray * this_ptr, QByteArrayView const * a) {
  return &this_ptr->append(*a);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_assign(QByteArray * this_ptr, QByteArrayView const * v) {
  return &this_ptr->assign(*v);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_assign1(QByteArray * this_ptr, long long n, char c) {
  return &this_ptr->assign(n, c);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_insert(QByteArray * this_ptr, long long i, QByteArrayView const * data) {
  return &this_ptr->insert(i, *data);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_insert1(QByteArray * this_ptr, long long i, char const * s) {
  return &this_ptr->insert(i, s);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_insert2(QByteArray * this_ptr, long long i, QByteArray const * data) {
  return &this_ptr->insert(i, *data);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_insert3(QByteArray * this_ptr, long long i, long long count, char c) {
  return &this_ptr->insert(i, count, c);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_insert4(QByteArray * this_ptr, long long i, char c) {
  return &this_ptr->insert(i, c);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_insert5(QByteArray * this_ptr, long long i, char const * s, long long len) {
  return &this_ptr->insert(i, s, len);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_remove(QByteArray * this_ptr, long long index, long long len) {
  return &this_ptr->remove(index, len);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_removeAt(QByteArray * this_ptr, long long pos) {
  return &this_ptr->removeAt(pos);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_removeFirst(QByteArray * this_ptr) {
  return &this_ptr->removeFirst();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_removeLast(QByteArray * this_ptr) {
  return &this_ptr->removeLast();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_replace(QByteArray * this_ptr, long long index, long long len, char const * s, long long alen) {
  return &this_ptr->replace(index, len, s, alen);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_replace1(QByteArray * this_ptr, long long index, long long len, QByteArrayView const * s) {
  return &this_ptr->replace(index, len, *s);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_replace2(QByteArray * this_ptr, char before, QByteArrayView const * after) {
  return &this_ptr->replace(before, *after);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_replace3(QByteArray * this_ptr, char const * before, long long bsize, char const * after, long long asize) {
  return &this_ptr->replace(before, bsize, after, asize);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_replace4(QByteArray * this_ptr, QByteArrayView const * before, QByteArrayView const * after) {
  return &this_ptr->replace(*before, *after);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_replace5(QByteArray * this_ptr, char before, char after) {
  return &this_ptr->replace(before, after);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_operator__2(QByteArray * this_ptr, char c) {
  return &this_ptr->operator+=(c);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_operator__3(QByteArray * this_ptr, char const * s) {
  return &this_ptr->operator+=(s);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_operator__4(QByteArray * this_ptr, QByteArray const * a) {
  return &this_ptr->operator+=(*a);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_operator__5(QByteArray * this_ptr, QByteArrayView const * a) {
  return &this_ptr->operator+=(*a);
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_core_ffi_QByteArray_split(QByteArray const * this_ptr, char sep) {
  return new QList< QByteArray >(this_ptr->split(sep));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_repeated(QByteArray const * this_ptr, long long times) {
  return new QByteArray(this_ptr->repeated(times));
}


RITUAL_EXPORT short ctr_qt_core_ffi_QByteArray_toShort(QByteArray const * this_ptr, bool * ok, int base) {
  return this_ptr->toShort(ok, base);
}


RITUAL_EXPORT unsigned short ctr_qt_core_ffi_QByteArray_toUShort(QByteArray const * this_ptr, bool * ok, int base) {
  return this_ptr->toUShort(ok, base);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QByteArray_toInt(QByteArray const * this_ptr, bool * ok, int base) {
  return this_ptr->toInt(ok, base);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QByteArray_toUInt(QByteArray const * this_ptr, bool * ok, int base) {
  return this_ptr->toUInt(ok, base);
}


RITUAL_EXPORT long ctr_qt_core_ffi_QByteArray_toLong(QByteArray const * this_ptr, bool * ok, int base) {
  return this_ptr->toLong(ok, base);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QByteArray_toULong(QByteArray const * this_ptr, bool * ok, int base) {
  return this_ptr->toULong(ok, base);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArray_toLongLong(QByteArray const * this_ptr, bool * ok, int base) {
  return this_ptr->toLongLong(ok, base);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QByteArray_toULongLong(QByteArray const * this_ptr, bool * ok, int base) {
  return this_ptr->toULongLong(ok, base);
}


RITUAL_EXPORT float ctr_qt_core_ffi_QByteArray_toFloat(QByteArray const * this_ptr, bool * ok) {
  return this_ptr->toFloat(ok);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QByteArray_toDouble(QByteArray const * this_ptr, bool * ok) {
  return this_ptr->toDouble(ok);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_toBase64(QByteArray const * this_ptr, int options) {
  return new QByteArray(this_ptr->toBase64(QFlags< QByteArray::Base64Option >(options)));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_toHex(QByteArray const * this_ptr, char separator) {
  return new QByteArray(this_ptr->toHex(separator));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_toPercentEncoding(QByteArray const * this_ptr, QByteArray const * exclude, QByteArray const * include, char percent) {
  return new QByteArray(this_ptr->toPercentEncoding(*exclude, *include, percent));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_percentDecoded(QByteArray const * this_ptr, char percent) {
  return new QByteArray(this_ptr->percentDecoded(percent));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_setNum(QByteArray * this_ptr, short arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_setNum1(QByteArray * this_ptr, unsigned short arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_setNum2(QByteArray * this_ptr, int arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_setNum3(QByteArray * this_ptr, unsigned int arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_setNum4(QByteArray * this_ptr, long arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_setNum5(QByteArray * this_ptr, unsigned long arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_setNum6(QByteArray * this_ptr, long long arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_setNum7(QByteArray * this_ptr, unsigned long long arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_setNum8(QByteArray * this_ptr, float arg1, char format, int precision) {
  return &this_ptr->setNum(arg1, format, precision);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_setNum9(QByteArray * this_ptr, double arg1, char format, int precision) {
  return &this_ptr->setNum(arg1, format, precision);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_setRawData(QByteArray * this_ptr, char const * a, long long n) {
  return &this_ptr->setRawData(a, n);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_number(int arg1, int base) {
  return new QByteArray(QByteArray::number(arg1, base));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_number1(unsigned int arg1, int base) {
  return new QByteArray(QByteArray::number(arg1, base));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_number2(long arg1, int base) {
  return new QByteArray(QByteArray::number(arg1, base));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_number3(unsigned long arg1, int base) {
  return new QByteArray(QByteArray::number(arg1, base));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_number4(long long arg1, int base) {
  return new QByteArray(QByteArray::number(arg1, base));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_number5(unsigned long long arg1, int base) {
  return new QByteArray(QByteArray::number(arg1, base));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_number6(double arg1, char format, int precision) {
  return new QByteArray(QByteArray::number(arg1, format, precision));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_fromRawData(char const * data, long long size) {
  return new QByteArray(QByteArray::fromRawData(data, size));
}


RITUAL_EXPORT QByteArray::FromBase64Result * ctr_qt_core_ffi_QByteArray_fromBase64Encoding1(QByteArray const * base64, int options) {
  return new QByteArray::FromBase64Result(QByteArray::fromBase64Encoding(*base64, QFlags< QByteArray::Base64Option >(options)));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_fromBase64(QByteArray const * base64, int options) {
  return new QByteArray(QByteArray::fromBase64(*base64, QFlags< QByteArray::Base64Option >(options)));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_fromHex(QByteArray const * hexEncoded) {
  return new QByteArray(QByteArray::fromHex(*hexEncoded));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_fromPercentEncoding(QByteArray const * pctEncoded, char percent) {
  return new QByteArray(QByteArray::fromPercentEncoding(*pctEncoded, percent));
}


RITUAL_EXPORT char * ctr_qt_core_ffi_QByteArray_begin(QByteArray * this_ptr) {
  return this_ptr->begin();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QByteArray_begin1(QByteArray const * this_ptr) {
  return this_ptr->begin();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QByteArray_cbegin(QByteArray const * this_ptr) {
  return this_ptr->cbegin();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QByteArray_constBegin(QByteArray const * this_ptr) {
  return this_ptr->constBegin();
}


RITUAL_EXPORT char * ctr_qt_core_ffi_QByteArray_end(QByteArray * this_ptr) {
  return this_ptr->end();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QByteArray_end1(QByteArray const * this_ptr) {
  return this_ptr->end();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QByteArray_cend(QByteArray const * this_ptr) {
  return this_ptr->cend();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QByteArray_constEnd(QByteArray const * this_ptr) {
  return this_ptr->constEnd();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_push_back(QByteArray * this_ptr, char c) {
  this_ptr->push_back(c);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_push_back1(QByteArray * this_ptr, char const * s) {
  this_ptr->push_back(s);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_push_back2(QByteArray * this_ptr, QByteArray const * a) {
  this_ptr->push_back(*a);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_push_back3(QByteArray * this_ptr, QByteArrayView const * a) {
  this_ptr->push_back(*a);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_push_front(QByteArray * this_ptr, char c) {
  this_ptr->push_front(c);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_push_front1(QByteArray * this_ptr, char const * c) {
  this_ptr->push_front(c);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_push_front2(QByteArray * this_ptr, QByteArray const * a) {
  this_ptr->push_front(*a);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_push_front3(QByteArray * this_ptr, QByteArrayView const * a) {
  this_ptr->push_front(*a);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_shrink_to_fit(QByteArray * this_ptr) {
  this_ptr->shrink_to_fit();
}


RITUAL_EXPORT char * ctr_qt_core_ffi_QByteArray_erase(QByteArray * this_ptr, char const * first, char const * last) {
  return this_ptr->erase(first, last);
}


RITUAL_EXPORT char * ctr_qt_core_ffi_QByteArray_erase1(QByteArray * this_ptr, char const * it) {
  return this_ptr->erase(it);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArray_max_size(QByteArray const * this_ptr) {
  return this_ptr->max_size();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArray_maxSize() {
  return QByteArray::maxSize();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArray_size(QByteArray const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArray_count2(QByteArray const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArray_length(QByteArray const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArray_isNull(QByteArray const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_nullTerminated(QByteArray const * this_ptr) {
  return new QByteArray(this_ptr->nullTerminated());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_nullTerminated1(QByteArray * this_ptr) {
  return new QByteArray(this_ptr->nullTerminated());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_nullTerminate(QByteArray * this_ptr) {
  return &this_ptr->nullTerminate();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_operator_12(QByteArray const * a1, QByteArray const * a2) {
  return new QByteArray(operator+(*a1, *a2));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_operator_14(QByteArray const * a1, char const * a2) {
  return new QByteArray(operator+(*a1, a2));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_operator_16(QByteArray const * a1, char a2) {
  return new QByteArray(operator+(*a1, a2));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_operator_18(char const * a1, QByteArray const * a2) {
  return new QByteArray(operator+(a1, *a2));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_operator_19(char a1, QByteArray const * a2) {
  return new QByteArray(operator+(a1, *a2));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__(QDataStream * arg1, QByteArray const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__1(QDataStream * arg1, QByteArray * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_qCompress(unsigned char const * data, long long nbytes, int compressionLevel) {
  return new QByteArray(qCompress(data, nbytes, compressionLevel));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_qUncompress(unsigned char const * data, long long nbytes) {
  return new QByteArray(qUncompress(data, nbytes));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_qCompress1(QByteArray const * data, int compressionLevel) {
  return new QByteArray(qCompress(*data, compressionLevel));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_qUncompress1(QByteArray const * data) {
  return new QByteArray(qUncompress(*data));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_FromBase64Result_swap(QByteArray::FromBase64Result * this_ptr, QByteArray::FromBase64Result * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QByteArray_FromBase64Result_operator_bool(QByteArray::FromBase64Result const * this_ptr) {
  return this_ptr->operator bool();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArray_FromBase64Result_operator_(QByteArray::FromBase64Result * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QByteArray const * ctr_qt_core_ffi_QByteArray_FromBase64Result_operator_1(QByteArray::FromBase64Result const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash(QByteArray::FromBase64Result const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QStringView_QStringView() {
  return new QStringView();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QStringView_toString(QStringView const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_size(QStringView const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QStringView_data(QStringView const * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QStringView_constData(QStringView const * this_ptr) {
  return this_ptr->constData();
}


RITUAL_EXPORT char16_t const * ctr_qt_core_ffi_QStringView_utf16(QStringView const * this_ptr) {
  return this_ptr->utf16();
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QStringView_operator__(QStringView const * this_ptr, long long n) {
  return new QChar(this_ptr->operator[](n));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QStringView_toLatin1(QStringView const * this_ptr) {
  return new QByteArray(this_ptr->toLatin1());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QStringView_toUtf8(QStringView const * this_ptr) {
  return new QByteArray(this_ptr->toUtf8());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QStringView_toLocal8Bit(QStringView const * this_ptr) {
  return new QByteArray(this_ptr->toLocal8Bit());
}


RITUAL_EXPORT QList< unsigned int > * ctr_qt_core_ffi_QStringView_toUcs4(QStringView const * this_ptr) {
  return new QList< unsigned int >(this_ptr->toUcs4());
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QStringView_at(QStringView const * this_ptr, long long n) {
  return new QChar(this_ptr->at(n));
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QStringView_mid(QStringView const * this_ptr, long long pos, long long n) {
  return new QStringView(this_ptr->mid(pos, n));
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QStringView_left(QStringView const * this_ptr, long long n) {
  return new QStringView(this_ptr->left(n));
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QStringView_right(QStringView const * this_ptr, long long n) {
  return new QStringView(this_ptr->right(n));
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QStringView_first(QStringView const * this_ptr, long long n) {
  return new QStringView(this_ptr->first(n));
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QStringView_last(QStringView const * this_ptr, long long n) {
  return new QStringView(this_ptr->last(n));
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QStringView_sliced(QStringView const * this_ptr, long long pos) {
  return new QStringView(this_ptr->sliced(pos));
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QStringView_sliced1(QStringView const * this_ptr, long long pos, long long n) {
  return new QStringView(this_ptr->sliced(pos, n));
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QStringView_chopped(QStringView const * this_ptr, long long n) {
  return new QStringView(this_ptr->chopped(n));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringView_truncate(QStringView * this_ptr, long long n) {
  this_ptr->truncate(n);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringView_chop(QStringView * this_ptr, long long n) {
  this_ptr->chop(n);
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QStringView_trimmed(QStringView const * this_ptr) {
  return new QStringView(this_ptr->trimmed());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QStringView_slice(QStringView * this_ptr, long long pos) {
  return &this_ptr->slice(pos);
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QStringView_slice1(QStringView * this_ptr, long long pos, long long n) {
  return &this_ptr->slice(pos, n);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QStringView_compare(QStringView const * this_ptr, QStringView const * other, Qt::CaseSensitivity cs) {
  return this_ptr->compare(*other, cs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QStringView_compare1(QStringView const * this_ptr, QLatin1String const * other, Qt::CaseSensitivity cs) {
  return this_ptr->compare(*other, cs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QStringView_compare2(QStringView const * this_ptr, QChar const * c) {
  return this_ptr->compare(*c);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QStringView_compare3(QStringView const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->compare(*c, cs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QStringView_localeAwareCompare(QStringView const * this_ptr, QStringView const * other) {
  return this_ptr->localeAwareCompare(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_startsWith(QStringView const * this_ptr, QStringView const * s, Qt::CaseSensitivity cs) {
  return this_ptr->startsWith(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_startsWith1(QStringView const * this_ptr, QLatin1String const * s, Qt::CaseSensitivity cs) {
  return this_ptr->startsWith(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_startsWith2(QStringView const * this_ptr, QChar const * c) {
  return this_ptr->startsWith(*c);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_startsWith3(QStringView const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->startsWith(*c, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_endsWith(QStringView const * this_ptr, QStringView const * s, Qt::CaseSensitivity cs) {
  return this_ptr->endsWith(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_endsWith1(QStringView const * this_ptr, QLatin1String const * s, Qt::CaseSensitivity cs) {
  return this_ptr->endsWith(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_endsWith2(QStringView const * this_ptr, QChar const * c) {
  return this_ptr->endsWith(*c);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_endsWith3(QStringView const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->endsWith(*c, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_indexOf(QStringView const * this_ptr, QChar const * c, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->indexOf(*c, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_indexOf1(QStringView const * this_ptr, QStringView const * s, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->indexOf(*s, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_indexOf2(QStringView const * this_ptr, QLatin1String const * s, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->indexOf(*s, from, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_contains(QStringView const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->contains(*c, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_contains1(QStringView const * this_ptr, QStringView const * s, Qt::CaseSensitivity cs) {
  return this_ptr->contains(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_contains2(QStringView const * this_ptr, QLatin1String const * s, Qt::CaseSensitivity cs) {
  return this_ptr->contains(*s, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_count(QStringView const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->count(*c, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_count1(QStringView const * this_ptr, QStringView const * s, Qt::CaseSensitivity cs) {
  return this_ptr->count(*s, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_count2(QStringView const * this_ptr, QLatin1String const * s, Qt::CaseSensitivity cs) {
  return this_ptr->count(*s, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_lastIndexOf(QStringView const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*c, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_lastIndexOf1(QStringView const * this_ptr, QChar const * c, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*c, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_lastIndexOf2(QStringView const * this_ptr, QStringView const * s, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*s, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_lastIndexOf3(QStringView const * this_ptr, QStringView const * s, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*s, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_lastIndexOf4(QStringView const * this_ptr, QLatin1String const * s, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*s, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_lastIndexOf5(QStringView const * this_ptr, QLatin1String const * s, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*s, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_indexOf3(QStringView const * this_ptr, QRegularExpression const * re, long long from, QRegularExpressionMatch * rmatch) {
  return this_ptr->indexOf(*re, from, rmatch);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_lastIndexOf6(QStringView const * this_ptr, QRegularExpression const * re, long long from, QRegularExpressionMatch * rmatch) {
  return this_ptr->lastIndexOf(*re, from, rmatch);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_contains3(QStringView const * this_ptr, QRegularExpression const * re, QRegularExpressionMatch * rmatch) {
  return this_ptr->contains(*re, rmatch);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_count3(QStringView const * this_ptr, QRegularExpression const * re) {
  return this_ptr->count(*re);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_isRightToLeft(QStringView const * this_ptr) {
  return this_ptr->isRightToLeft();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_isValidUtf16(QStringView const * this_ptr) {
  return this_ptr->isValidUtf16();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_isUpper(QStringView const * this_ptr) {
  return this_ptr->isUpper();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_isLower(QStringView const * this_ptr) {
  return this_ptr->isLower();
}


RITUAL_EXPORT short ctr_qt_core_ffi_QStringView_toShort(QStringView const * this_ptr, bool * ok, int base) {
  return this_ptr->toShort(ok, base);
}


RITUAL_EXPORT unsigned short ctr_qt_core_ffi_QStringView_toUShort(QStringView const * this_ptr, bool * ok, int base) {
  return this_ptr->toUShort(ok, base);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QStringView_toInt(QStringView const * this_ptr, bool * ok, int base) {
  return this_ptr->toInt(ok, base);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QStringView_toUInt(QStringView const * this_ptr, bool * ok, int base) {
  return this_ptr->toUInt(ok, base);
}


RITUAL_EXPORT long ctr_qt_core_ffi_QStringView_toLong(QStringView const * this_ptr, bool * ok, int base) {
  return this_ptr->toLong(ok, base);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QStringView_toULong(QStringView const * this_ptr, bool * ok, int base) {
  return this_ptr->toULong(ok, base);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_toLongLong(QStringView const * this_ptr, bool * ok, int base) {
  return this_ptr->toLongLong(ok, base);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QStringView_toULongLong(QStringView const * this_ptr, bool * ok, int base) {
  return this_ptr->toULongLong(ok, base);
}


RITUAL_EXPORT float ctr_qt_core_ffi_QStringView_toFloat(QStringView const * this_ptr, bool * ok) {
  return this_ptr->toFloat(ok);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QStringView_toDouble(QStringView const * this_ptr, bool * ok) {
  return this_ptr->toDouble(ok);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_toWCharArray(QStringView const * this_ptr, wchar_t * array) {
  return this_ptr->toWCharArray(array);
}


RITUAL_EXPORT QList< QStringView > * ctr_qt_core_ffi_QStringView_split(QStringView const * this_ptr, QStringView const * sep, int behavior, Qt::CaseSensitivity cs) {
  return new QList< QStringView >(this_ptr->split(*sep, QFlags< Qt::SplitBehaviorFlags >(behavior), cs));
}


RITUAL_EXPORT QList< QStringView > * ctr_qt_core_ffi_QStringView_split1(QStringView const * this_ptr, QChar const * sep, int behavior, Qt::CaseSensitivity cs) {
  return new QList< QStringView >(this_ptr->split(*sep, QFlags< Qt::SplitBehaviorFlags >(behavior), cs));
}


RITUAL_EXPORT QList< QStringView > * ctr_qt_core_ffi_QStringView_split2(QStringView const * this_ptr, QRegularExpression const * sep, int behavior) {
  return new QList< QStringView >(this_ptr->split(*sep, QFlags< Qt::SplitBehaviorFlags >(behavior)));
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QStringView_begin(QStringView const * this_ptr) {
  return this_ptr->begin();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QStringView_end(QStringView const * this_ptr) {
  return this_ptr->end();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QStringView_cbegin(QStringView const * this_ptr) {
  return this_ptr->cbegin();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QStringView_cend(QStringView const * this_ptr) {
  return this_ptr->cend();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_empty(QStringView const * this_ptr) {
  return this_ptr->empty();
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QStringView_front(QStringView const * this_ptr) {
  return new QChar(this_ptr->front());
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QStringView_back(QStringView const * this_ptr) {
  return new QChar(this_ptr->back());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_max_size(QStringView const * this_ptr) {
  return this_ptr->max_size();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QStringView_constBegin(QStringView const * this_ptr) {
  return this_ptr->constBegin();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QStringView_constEnd(QStringView const * this_ptr) {
  return this_ptr->constEnd();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_isNull(QStringView const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringView_isEmpty(QStringView const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_length(QStringView const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QStringView_first1(QStringView const * this_ptr) {
  return new QChar(this_ptr->first());
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QStringView_last1(QStringView const * this_ptr) {
  return new QChar(this_ptr->last());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringView_maxSize() {
  return QStringView::maxSize();
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_QLatin1String() {
  return new QLatin1String();
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_QLatin1String1(char const * s) {
  return new QLatin1String(s);
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_QLatin1String2(char const * f, char const * l) {
  return new QLatin1String(f, l);
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_QLatin1String3(char const * s, long long sz) {
  return new QLatin1String(s, sz);
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_QLatin1String4(QByteArray const * s) {
  return new QLatin1String(*s);
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_QLatin1String5(QByteArrayView const * s) {
  return new QLatin1String(*s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLatin1String_toString(QLatin1String const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QLatin1String_toUtf8(QLatin1String const * this_ptr) {
  return new QByteArray(this_ptr->toUtf8());
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QLatin1String_latin1(QLatin1String const * this_ptr) {
  return this_ptr->latin1();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_size(QLatin1String const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QLatin1String_data(QLatin1String const * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QLatin1String_constData(QLatin1String const * this_ptr) {
  return this_ptr->constData();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QLatin1String_constBegin(QLatin1String const * this_ptr) {
  return this_ptr->constBegin();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QLatin1String_constEnd(QLatin1String const * this_ptr) {
  return this_ptr->constEnd();
}


RITUAL_EXPORT QLatin1Char * ctr_qt_core_ffi_QLatin1String_first(QLatin1String const * this_ptr) {
  return new QLatin1Char(this_ptr->first());
}


RITUAL_EXPORT QLatin1Char * ctr_qt_core_ffi_QLatin1String_last(QLatin1String const * this_ptr) {
  return new QLatin1Char(this_ptr->last());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_length(QLatin1String const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLatin1String_isNull(QLatin1String const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLatin1String_isEmpty(QLatin1String const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLatin1String_empty(QLatin1String const * this_ptr) {
  return this_ptr->empty();
}


RITUAL_EXPORT QLatin1Char * ctr_qt_core_ffi_QLatin1String_at(QLatin1String const * this_ptr, long long i) {
  return new QLatin1Char(this_ptr->at(i));
}


RITUAL_EXPORT QLatin1Char * ctr_qt_core_ffi_QLatin1String_operator__(QLatin1String const * this_ptr, long long i) {
  return new QLatin1Char(this_ptr->operator[](i));
}


RITUAL_EXPORT QLatin1Char * ctr_qt_core_ffi_QLatin1String_front(QLatin1String const * this_ptr) {
  return new QLatin1Char(this_ptr->front());
}


RITUAL_EXPORT QLatin1Char * ctr_qt_core_ffi_QLatin1String_back(QLatin1String const * this_ptr) {
  return new QLatin1Char(this_ptr->back());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLatin1String_compare(QLatin1String const * this_ptr, QStringView const * other, Qt::CaseSensitivity cs) {
  return this_ptr->compare(*other, cs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLatin1String_compare1(QLatin1String const * this_ptr, QLatin1String const * other, Qt::CaseSensitivity cs) {
  return this_ptr->compare(*other, cs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLatin1String_compare2(QLatin1String const * this_ptr, QChar const * c) {
  return this_ptr->compare(*c);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLatin1String_compare3(QLatin1String const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->compare(*c, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLatin1String_startsWith(QLatin1String const * this_ptr, QStringView const * s, Qt::CaseSensitivity cs) {
  return this_ptr->startsWith(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLatin1String_startsWith1(QLatin1String const * this_ptr, QLatin1String const * s, Qt::CaseSensitivity cs) {
  return this_ptr->startsWith(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLatin1String_startsWith2(QLatin1String const * this_ptr, QChar const * c) {
  return this_ptr->startsWith(*c);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLatin1String_startsWith3(QLatin1String const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->startsWith(*c, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLatin1String_endsWith(QLatin1String const * this_ptr, QStringView const * s, Qt::CaseSensitivity cs) {
  return this_ptr->endsWith(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLatin1String_endsWith1(QLatin1String const * this_ptr, QLatin1String const * s, Qt::CaseSensitivity cs) {
  return this_ptr->endsWith(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLatin1String_endsWith2(QLatin1String const * this_ptr, QChar const * c) {
  return this_ptr->endsWith(*c);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLatin1String_endsWith3(QLatin1String const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->endsWith(*c, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_indexOf(QLatin1String const * this_ptr, QStringView const * s, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->indexOf(*s, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_indexOf1(QLatin1String const * this_ptr, QLatin1String const * s, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->indexOf(*s, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_indexOf2(QLatin1String const * this_ptr, QChar const * c, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->indexOf(*c, from, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLatin1String_contains(QLatin1String const * this_ptr, QStringView const * s, Qt::CaseSensitivity cs) {
  return this_ptr->contains(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLatin1String_contains1(QLatin1String const * this_ptr, QLatin1String const * s, Qt::CaseSensitivity cs) {
  return this_ptr->contains(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QLatin1String_contains2(QLatin1String const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->contains(*c, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_lastIndexOf(QLatin1String const * this_ptr, QStringView const * s, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*s, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_lastIndexOf1(QLatin1String const * this_ptr, QStringView const * s, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*s, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_lastIndexOf2(QLatin1String const * this_ptr, QLatin1String const * s, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*s, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_lastIndexOf3(QLatin1String const * this_ptr, QLatin1String const * s, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*s, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_lastIndexOf4(QLatin1String const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*c, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_lastIndexOf5(QLatin1String const * this_ptr, QChar const * c, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*c, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_count(QLatin1String const * this_ptr, QStringView const * str, Qt::CaseSensitivity cs) {
  return this_ptr->count(*str, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_count1(QLatin1String const * this_ptr, QLatin1String const * str, Qt::CaseSensitivity cs) {
  return this_ptr->count(*str, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_count2(QLatin1String const * this_ptr, QChar const * ch, Qt::CaseSensitivity cs) {
  return this_ptr->count(*ch, cs);
}


RITUAL_EXPORT short ctr_qt_core_ffi_QLatin1String_toShort(QLatin1String const * this_ptr, bool * ok, int base) {
  return this_ptr->toShort(ok, base);
}


RITUAL_EXPORT unsigned short ctr_qt_core_ffi_QLatin1String_toUShort(QLatin1String const * this_ptr, bool * ok, int base) {
  return this_ptr->toUShort(ok, base);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLatin1String_toInt(QLatin1String const * this_ptr, bool * ok, int base) {
  return this_ptr->toInt(ok, base);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QLatin1String_toUInt(QLatin1String const * this_ptr, bool * ok, int base) {
  return this_ptr->toUInt(ok, base);
}


RITUAL_EXPORT long ctr_qt_core_ffi_QLatin1String_toLong(QLatin1String const * this_ptr, bool * ok, int base) {
  return this_ptr->toLong(ok, base);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QLatin1String_toULong(QLatin1String const * this_ptr, bool * ok, int base) {
  return this_ptr->toULong(ok, base);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_toLongLong(QLatin1String const * this_ptr, bool * ok, int base) {
  return this_ptr->toLongLong(ok, base);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QLatin1String_toULongLong(QLatin1String const * this_ptr, bool * ok, int base) {
  return this_ptr->toULongLong(ok, base);
}


RITUAL_EXPORT float ctr_qt_core_ffi_QLatin1String_toFloat(QLatin1String const * this_ptr, bool * ok) {
  return this_ptr->toFloat(ok);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QLatin1String_toDouble(QLatin1String const * this_ptr, bool * ok) {
  return this_ptr->toDouble(ok);
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QLatin1String_begin(QLatin1String const * this_ptr) {
  return this_ptr->begin();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QLatin1String_cbegin(QLatin1String const * this_ptr) {
  return this_ptr->cbegin();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QLatin1String_end(QLatin1String const * this_ptr) {
  return this_ptr->end();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QLatin1String_cend(QLatin1String const * this_ptr) {
  return this_ptr->cend();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_max_size(QLatin1String const * this_ptr) {
  return this_ptr->max_size();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLatin1String_maxSize() {
  return QLatin1String::maxSize();
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_mid(QLatin1String const * this_ptr, long long pos, long long n) {
  return new QLatin1String(this_ptr->mid(pos, n));
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_left(QLatin1String const * this_ptr, long long n) {
  return new QLatin1String(this_ptr->left(n));
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_right(QLatin1String const * this_ptr, long long n) {
  return new QLatin1String(this_ptr->right(n));
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_sliced(QLatin1String const * this_ptr, long long pos) {
  return new QLatin1String(this_ptr->sliced(pos));
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_sliced1(QLatin1String const * this_ptr, long long pos, long long n) {
  return new QLatin1String(this_ptr->sliced(pos, n));
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_first1(QLatin1String const * this_ptr, long long n) {
  return new QLatin1String(this_ptr->first(n));
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_last1(QLatin1String const * this_ptr, long long n) {
  return new QLatin1String(this_ptr->last(n));
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_chopped(QLatin1String const * this_ptr, long long n) {
  return new QLatin1String(this_ptr->chopped(n));
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_slice(QLatin1String * this_ptr, long long pos) {
  return &this_ptr->slice(pos);
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_slice1(QLatin1String * this_ptr, long long pos, long long n) {
  return &this_ptr->slice(pos, n);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLatin1String_chop(QLatin1String * this_ptr, long long n) {
  this_ptr->chop(n);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLatin1String_truncate(QLatin1String * this_ptr, long long n) {
  this_ptr->truncate(n);
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_trimmed(QLatin1String const * this_ptr) {
  return new QLatin1String(this_ptr->trimmed());
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_QAnyStringView() {
  return new QAnyStringView();
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_QAnyStringView1(QByteArray const * str) {
  return new QAnyStringView(*str);
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_QAnyStringView2(QString const * str) {
  return new QAnyStringView(*str);
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_QAnyStringView3(QLatin1String const * str) {
  return new QAnyStringView(*str);
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_QAnyStringView4(QStringView const * v) {
  return new QAnyStringView(*v);
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_mid(QAnyStringView const * this_ptr, long long pos, long long n) {
  return new QAnyStringView(this_ptr->mid(pos, n));
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_left(QAnyStringView const * this_ptr, long long n) {
  return new QAnyStringView(this_ptr->left(n));
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_right(QAnyStringView const * this_ptr, long long n) {
  return new QAnyStringView(this_ptr->right(n));
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_sliced(QAnyStringView const * this_ptr, long long pos) {
  return new QAnyStringView(this_ptr->sliced(pos));
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_sliced1(QAnyStringView const * this_ptr, long long pos, long long n) {
  return new QAnyStringView(this_ptr->sliced(pos, n));
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_first(QAnyStringView const * this_ptr, long long n) {
  return new QAnyStringView(this_ptr->first(n));
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_last(QAnyStringView const * this_ptr, long long n) {
  return new QAnyStringView(this_ptr->last(n));
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_chopped(QAnyStringView const * this_ptr, long long n) {
  return new QAnyStringView(this_ptr->chopped(n));
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_slice(QAnyStringView * this_ptr, long long pos) {
  return &this_ptr->slice(pos);
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_slice1(QAnyStringView * this_ptr, long long pos, long long n) {
  return &this_ptr->slice(pos, n);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAnyStringView_truncate(QAnyStringView * this_ptr, long long n) {
  this_ptr->truncate(n);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAnyStringView_chop(QAnyStringView * this_ptr, long long n) {
  this_ptr->chop(n);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QAnyStringView_toString(QAnyStringView const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QAnyStringView_size(QAnyStringView const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT void const * ctr_qt_core_ffi_QAnyStringView_data(QAnyStringView const * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAnyStringView_compare(QAnyStringView const * lhs, QAnyStringView const * rhs, Qt::CaseSensitivity cs) {
  return QAnyStringView::compare(*lhs, *rhs, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAnyStringView_equal(QAnyStringView const * lhs, QAnyStringView const * rhs) {
  return QAnyStringView::equal(*lhs, *rhs);
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QAnyStringView_front(QAnyStringView const * this_ptr) {
  return new QChar(this_ptr->front());
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QAnyStringView_back(QAnyStringView const * this_ptr) {
  return new QChar(this_ptr->back());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAnyStringView_empty(QAnyStringView const * this_ptr) {
  return this_ptr->empty();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QAnyStringView_size_bytes(QAnyStringView const * this_ptr) {
  return this_ptr->size_bytes();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QAnyStringView_max_size(QAnyStringView const * this_ptr) {
  return this_ptr->max_size();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAnyStringView_isNull(QAnyStringView const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAnyStringView_isEmpty(QAnyStringView const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QAnyStringView_length(QAnyStringView const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_QString() {
  return new QString();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_QString1(QChar const * unicode, long long size) {
  return new QString(unicode, size);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_QString2(QChar const * c) {
  return new QString(*c);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_QString3(long long size, QChar const * c) {
  return new QString(size, *c);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_QString4(QLatin1String const * latin1) {
  return new QString(*latin1);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_QString5(QStringView const * sv) {
  return new QString(*sv);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_QString6(QString const * arg1) {
  return new QString(*arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_dQString(QString * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_operator_(QString * this_ptr, QChar const * c) {
  return &this_ptr->operator=(*c);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_operator_1(QString * this_ptr, QString const * arg1) {
  return &this_ptr->operator=(*arg1);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_operator_2(QString * this_ptr, QLatin1String const * latin1) {
  return &this_ptr->operator=(*latin1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_swap(QString * this_ptr, QString * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_maxSize() {
  return QString::maxSize();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_size(QString const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_count(QString const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_length(QString const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_isEmpty(QString const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_resize(QString * this_ptr, long long size) {
  this_ptr->resize(size);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_resize1(QString * this_ptr, long long size, QChar const * fillChar) {
  this_ptr->resize(size, *fillChar);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_resizeForOverwrite(QString * this_ptr, long long size) {
  this_ptr->resizeForOverwrite(size);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_fill(QString * this_ptr, QChar const * c, long long size) {
  return &this_ptr->fill(*c, size);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_truncate(QString * this_ptr, long long pos) {
  this_ptr->truncate(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_chop(QString * this_ptr, long long n) {
  this_ptr->chop(n);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_slice(QString * this_ptr, long long pos) {
  return &this_ptr->slice(pos);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_slice1(QString * this_ptr, long long pos, long long n) {
  return &this_ptr->slice(pos, n);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_capacity(QString const * this_ptr) {
  return this_ptr->capacity();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_reserve(QString * this_ptr, long long size) {
  this_ptr->reserve(size);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_squeeze(QString * this_ptr) {
  this_ptr->squeeze();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QString_unicode(QString const * this_ptr) {
  return this_ptr->unicode();
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QString_data(QString * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QString_data1(QString const * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QString_constData(QString const * this_ptr) {
  return this_ptr->constData();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_detach(QString * this_ptr) {
  this_ptr->detach();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_isDetached(QString const * this_ptr) {
  return this_ptr->isDetached();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_isSharedWith(QString const * this_ptr, QString const * other) {
  return this_ptr->isSharedWith(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_clear(QString * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QString_at(QString const * this_ptr, long long i) {
  return new QChar(this_ptr->at(i));
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QString_operator__(QString const * this_ptr, long long i) {
  return new QChar(this_ptr->operator[](i));
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QString_operator__1(QString * this_ptr, long long i) {
  return &this_ptr->operator[](i);
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QString_front(QString const * this_ptr) {
  return new QChar(this_ptr->front());
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QString_front1(QString * this_ptr) {
  return &this_ptr->front();
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QString_back(QString const * this_ptr) {
  return new QChar(this_ptr->back());
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QString_back1(QString * this_ptr) {
  return &this_ptr->back();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_indexOf(QString const * this_ptr, QChar const * c, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->indexOf(*c, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_indexOf1(QString const * this_ptr, QLatin1String const * s, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->indexOf(*s, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_indexOf2(QString const * this_ptr, QString const * s, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->indexOf(*s, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_indexOf3(QString const * this_ptr, QStringView const * s, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->indexOf(*s, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_lastIndexOf(QString const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*c, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_lastIndexOf1(QString const * this_ptr, QChar const * c, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*c, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_lastIndexOf2(QString const * this_ptr, QLatin1String const * s, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*s, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_lastIndexOf3(QString const * this_ptr, QLatin1String const * s, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*s, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_lastIndexOf4(QString const * this_ptr, QString const * s, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*s, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_lastIndexOf5(QString const * this_ptr, QString const * s, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*s, from, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_lastIndexOf6(QString const * this_ptr, QStringView const * s, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*s, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_lastIndexOf7(QString const * this_ptr, QStringView const * s, long long from, Qt::CaseSensitivity cs) {
  return this_ptr->lastIndexOf(*s, from, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_contains(QString const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->contains(*c, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_contains1(QString const * this_ptr, QString const * s, Qt::CaseSensitivity cs) {
  return this_ptr->contains(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_contains2(QString const * this_ptr, QLatin1String const * s, Qt::CaseSensitivity cs) {
  return this_ptr->contains(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_contains3(QString const * this_ptr, QStringView const * s, Qt::CaseSensitivity cs) {
  return this_ptr->contains(*s, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_count1(QString const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->count(*c, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_count2(QString const * this_ptr, QString const * s, Qt::CaseSensitivity cs) {
  return this_ptr->count(*s, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_count3(QString const * this_ptr, QStringView const * s, Qt::CaseSensitivity cs) {
  return this_ptr->count(*s, cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_indexOf4(QString const * this_ptr, QRegularExpression const * re, long long from, QRegularExpressionMatch * rmatch) {
  return this_ptr->indexOf(*re, from, rmatch);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_lastIndexOf8(QString const * this_ptr, QRegularExpression const * re, long long from, QRegularExpressionMatch * rmatch) {
  return this_ptr->lastIndexOf(*re, from, rmatch);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_contains4(QString const * this_ptr, QRegularExpression const * re, QRegularExpressionMatch * rmatch) {
  return this_ptr->contains(*re, rmatch);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_count4(QString const * this_ptr, QRegularExpression const * re) {
  return this_ptr->count(*re);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_section(QString const * this_ptr, QChar const * sep, long long start, long long end, int flags) {
  return new QString(this_ptr->section(*sep, start, end, QFlags< QString::SectionFlag >(flags)));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_section1(QString const * this_ptr, QString const * in_sep, long long start, long long end, int flags) {
  return new QString(this_ptr->section(*in_sep, start, end, QFlags< QString::SectionFlag >(flags)));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_section2(QString const * this_ptr, QRegularExpression const * re, long long start, long long end, int flags) {
  return new QString(this_ptr->section(*re, start, end, QFlags< QString::SectionFlag >(flags)));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_left(QString const * this_ptr, long long n) {
  return new QString(this_ptr->left(n));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_left1(QString * this_ptr, long long n) {
  return new QString(this_ptr->left(n));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_right(QString const * this_ptr, long long n) {
  return new QString(this_ptr->right(n));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_right1(QString * this_ptr, long long n) {
  return new QString(this_ptr->right(n));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_mid(QString const * this_ptr, long long position, long long n) {
  return new QString(this_ptr->mid(position, n));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_mid1(QString * this_ptr, long long position, long long n) {
  return new QString(this_ptr->mid(position, n));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_first(QString const * this_ptr, long long n) {
  return new QString(this_ptr->first(n));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_last(QString const * this_ptr, long long n) {
  return new QString(this_ptr->last(n));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_sliced(QString const * this_ptr, long long pos) {
  return new QString(this_ptr->sliced(pos));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_sliced1(QString const * this_ptr, long long pos, long long n) {
  return new QString(this_ptr->sliced(pos, n));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_chopped(QString const * this_ptr, long long n) {
  return new QString(this_ptr->chopped(n));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_first1(QString * this_ptr, long long n) {
  return new QString(this_ptr->first(n));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_last1(QString * this_ptr, long long n) {
  return new QString(this_ptr->last(n));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_sliced2(QString * this_ptr, long long pos) {
  return new QString(this_ptr->sliced(pos));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_sliced3(QString * this_ptr, long long pos, long long n) {
  return new QString(this_ptr->sliced(pos, n));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_chopped1(QString * this_ptr, long long n) {
  return new QString(this_ptr->chopped(n));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_startsWith(QString const * this_ptr, QString const * s, Qt::CaseSensitivity cs) {
  return this_ptr->startsWith(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_startsWith1(QString const * this_ptr, QStringView const * s, Qt::CaseSensitivity cs) {
  return this_ptr->startsWith(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_startsWith2(QString const * this_ptr, QLatin1String const * s, Qt::CaseSensitivity cs) {
  return this_ptr->startsWith(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_startsWith3(QString const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->startsWith(*c, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_endsWith(QString const * this_ptr, QString const * s, Qt::CaseSensitivity cs) {
  return this_ptr->endsWith(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_endsWith1(QString const * this_ptr, QStringView const * s, Qt::CaseSensitivity cs) {
  return this_ptr->endsWith(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_endsWith2(QString const * this_ptr, QLatin1String const * s, Qt::CaseSensitivity cs) {
  return this_ptr->endsWith(*s, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_endsWith3(QString const * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return this_ptr->endsWith(*c, cs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_isUpper(QString const * this_ptr) {
  return this_ptr->isUpper();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_isLower(QString const * this_ptr) {
  return this_ptr->isLower();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_leftJustified(QString const * this_ptr, long long width, QChar const * fill, bool trunc) {
  return new QString(this_ptr->leftJustified(width, *fill, trunc));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_rightJustified(QString const * this_ptr, long long width, QChar const * fill, bool trunc) {
  return new QString(this_ptr->rightJustified(width, *fill, trunc));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_toLower(QString const * this_ptr) {
  return new QString(this_ptr->toLower());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_toLower1(QString * this_ptr) {
  return new QString(this_ptr->toLower());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_toUpper(QString const * this_ptr) {
  return new QString(this_ptr->toUpper());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_toUpper1(QString * this_ptr) {
  return new QString(this_ptr->toUpper());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_toCaseFolded(QString const * this_ptr) {
  return new QString(this_ptr->toCaseFolded());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_toCaseFolded1(QString * this_ptr) {
  return new QString(this_ptr->toCaseFolded());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_trimmed(QString const * this_ptr) {
  return new QString(this_ptr->trimmed());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_trimmed1(QString * this_ptr) {
  return new QString(this_ptr->trimmed());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_simplified(QString const * this_ptr) {
  return new QString(this_ptr->simplified());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_simplified1(QString * this_ptr) {
  return new QString(this_ptr->simplified());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_toHtmlEscaped(QString const * this_ptr) {
  return new QString(this_ptr->toHtmlEscaped());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_insert(QString * this_ptr, long long i, QChar const * c) {
  return &this_ptr->insert(i, *c);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_insert1(QString * this_ptr, long long i, QChar const * uc, long long len) {
  return &this_ptr->insert(i, uc, len);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_insert2(QString * this_ptr, long long i, QString const * s) {
  return &this_ptr->insert(i, *s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_insert3(QString * this_ptr, long long i, QStringView const * v) {
  return &this_ptr->insert(i, *v);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_insert4(QString * this_ptr, long long i, QLatin1String const * s) {
  return &this_ptr->insert(i, *s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_append(QString * this_ptr, QChar const * c) {
  return &this_ptr->append(*c);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_append1(QString * this_ptr, QChar const * uc, long long len) {
  return &this_ptr->append(uc, len);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_append2(QString * this_ptr, QString const * s) {
  return &this_ptr->append(*s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_append3(QString * this_ptr, QStringView const * v) {
  return &this_ptr->append(*v);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_append4(QString * this_ptr, QLatin1String const * s) {
  return &this_ptr->append(*s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_prepend(QString * this_ptr, QChar const * c) {
  return &this_ptr->prepend(*c);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_prepend1(QString * this_ptr, QChar const * uc, long long len) {
  return &this_ptr->prepend(uc, len);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_prepend2(QString * this_ptr, QString const * s) {
  return &this_ptr->prepend(*s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_prepend3(QString * this_ptr, QStringView const * v) {
  return &this_ptr->prepend(*v);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_prepend4(QString * this_ptr, QLatin1String const * s) {
  return &this_ptr->prepend(*s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_assign(QString * this_ptr, QAnyStringView const * s) {
  return &this_ptr->assign(*s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_assign1(QString * this_ptr, long long n, QChar const * c) {
  return &this_ptr->assign(n, *c);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_operator__2(QString * this_ptr, QChar const * c) {
  return &this_ptr->operator+=(*c);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_operator__3(QString * this_ptr, QString const * s) {
  return &this_ptr->operator+=(*s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_operator__4(QString * this_ptr, QStringView const * v) {
  return &this_ptr->operator+=(*v);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_operator__5(QString * this_ptr, QLatin1String const * s) {
  return &this_ptr->operator+=(*s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_remove(QString * this_ptr, long long i, long long len) {
  return &this_ptr->remove(i, len);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_remove1(QString * this_ptr, QChar const * c, Qt::CaseSensitivity cs) {
  return &this_ptr->remove(*c, cs);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_remove2(QString * this_ptr, QLatin1String const * s, Qt::CaseSensitivity cs) {
  return &this_ptr->remove(*s, cs);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_remove3(QString * this_ptr, QString const * s, Qt::CaseSensitivity cs) {
  return &this_ptr->remove(*s, cs);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_removeAt(QString * this_ptr, long long pos) {
  return &this_ptr->removeAt(pos);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_removeFirst(QString * this_ptr) {
  return &this_ptr->removeFirst();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_removeLast(QString * this_ptr) {
  return &this_ptr->removeLast();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_replace(QString * this_ptr, long long i, long long len, QChar const * after) {
  return &this_ptr->replace(i, len, *after);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_replace1(QString * this_ptr, long long i, long long len, QChar const * s, long long slen) {
  return &this_ptr->replace(i, len, s, slen);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_replace2(QString * this_ptr, long long i, long long len, QString const * after) {
  return &this_ptr->replace(i, len, *after);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_replace3(QString * this_ptr, QChar const * before, QChar const * after, Qt::CaseSensitivity cs) {
  return &this_ptr->replace(*before, *after, cs);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_replace4(QString * this_ptr, QChar const * before, long long blen, QChar const * after, long long alen, Qt::CaseSensitivity cs) {
  return &this_ptr->replace(before, blen, after, alen, cs);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_replace5(QString * this_ptr, QLatin1String const * before, QLatin1String const * after, Qt::CaseSensitivity cs) {
  return &this_ptr->replace(*before, *after, cs);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_replace6(QString * this_ptr, QLatin1String const * before, QString const * after, Qt::CaseSensitivity cs) {
  return &this_ptr->replace(*before, *after, cs);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_replace7(QString * this_ptr, QString const * before, QLatin1String const * after, Qt::CaseSensitivity cs) {
  return &this_ptr->replace(*before, *after, cs);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_replace8(QString * this_ptr, QString const * before, QString const * after, Qt::CaseSensitivity cs) {
  return &this_ptr->replace(*before, *after, cs);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_replace9(QString * this_ptr, QChar const * c, QString const * after, Qt::CaseSensitivity cs) {
  return &this_ptr->replace(*c, *after, cs);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_replace10(QString * this_ptr, QChar const * c, QLatin1String const * after, Qt::CaseSensitivity cs) {
  return &this_ptr->replace(*c, *after, cs);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_replace11(QString * this_ptr, QRegularExpression const * re, QString const * after) {
  return &this_ptr->replace(*re, *after);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_remove4(QString * this_ptr, QRegularExpression const * re) {
  return &this_ptr->remove(*re);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QString_split(QString const * this_ptr, QString const * sep, int behavior, Qt::CaseSensitivity cs) {
  return new QList< QString >(this_ptr->split(*sep, QFlags< Qt::SplitBehaviorFlags >(behavior), cs));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QString_split1(QString const * this_ptr, QChar const * sep, int behavior, Qt::CaseSensitivity cs) {
  return new QList< QString >(this_ptr->split(*sep, QFlags< Qt::SplitBehaviorFlags >(behavior), cs));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QString_split2(QString const * this_ptr, QRegularExpression const * sep, int behavior) {
  return new QList< QString >(this_ptr->split(*sep, QFlags< Qt::SplitBehaviorFlags >(behavior)));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_normalized(QString const * this_ptr, QString::NormalizationForm mode, QChar::UnicodeVersion version) {
  return new QString(this_ptr->normalized(mode, version));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_repeated(QString const * this_ptr, long long times) {
  return new QString(this_ptr->repeated(times));
}


RITUAL_EXPORT unsigned short const * ctr_qt_core_ffi_QString_utf16(QString const * this_ptr) {
  return this_ptr->utf16();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_nullTerminated(QString const * this_ptr) {
  return new QString(this_ptr->nullTerminated());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_nullTerminated1(QString * this_ptr) {
  return new QString(this_ptr->nullTerminated());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_nullTerminate(QString * this_ptr) {
  return &this_ptr->nullTerminate();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QString_toLatin1(QString const * this_ptr) {
  return new QByteArray(this_ptr->toLatin1());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QString_toLatin11(QString * this_ptr) {
  return new QByteArray(this_ptr->toLatin1());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QString_toUtf8(QString const * this_ptr) {
  return new QByteArray(this_ptr->toUtf8());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QString_toUtf81(QString * this_ptr) {
  return new QByteArray(this_ptr->toUtf8());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QString_toLocal8Bit(QString const * this_ptr) {
  return new QByteArray(this_ptr->toLocal8Bit());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QString_toLocal8Bit1(QString * this_ptr) {
  return new QByteArray(this_ptr->toLocal8Bit());
}


RITUAL_EXPORT QList< unsigned int > * ctr_qt_core_ffi_QString_toUcs4(QString const * this_ptr) {
  return new QList< unsigned int >(this_ptr->toUcs4());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_fromLatin1(QByteArrayView const * ba) {
  return new QString(QString::fromLatin1(*ba));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_fromLatin11(char const * str, long long size) {
  return new QString(QString::fromLatin1(str, size));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_fromUtf8(QByteArrayView const * utf8) {
  return new QString(QString::fromUtf8(*utf8));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_fromUtf81(char const * utf8, long long size) {
  return new QString(QString::fromUtf8(utf8, size));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_fromLocal8Bit(QByteArrayView const * ba) {
  return new QString(QString::fromLocal8Bit(*ba));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_fromLocal8Bit1(char const * str, long long size) {
  return new QString(QString::fromLocal8Bit(str, size));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_fromUtf16(char16_t const * arg1, long long size) {
  return new QString(QString::fromUtf16(arg1, size));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_fromUcs4(char32_t const * arg1, long long size) {
  return new QString(QString::fromUcs4(arg1, size));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_fromRawData(char16_t const * unicode, long long size) {
  return new QString(QString::fromRawData(unicode, size));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_fromRawData1(QChar const * arg1, long long size) {
  return new QString(QString::fromRawData(arg1, size));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_fromUtf161(unsigned short const * str, long long size) {
  return new QString(QString::fromUtf16(str, size));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_fromUcs41(unsigned int const * str, long long size) {
  return new QString(QString::fromUcs4(str, size));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_toWCharArray(QString const * this_ptr, wchar_t * array) {
  return this_ptr->toWCharArray(array);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_fromWCharArray(wchar_t const * string, long long size) {
  return new QString(QString::fromWCharArray(string, size));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_setRawData(QString * this_ptr, QChar const * unicode, long long size) {
  return &this_ptr->setRawData(unicode, size);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_setUnicode(QString * this_ptr, QChar const * unicode, long long size) {
  return &this_ptr->setUnicode(unicode, size);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_setUtf16(QString * this_ptr, char16_t const * utf16, long long size) {
  return &this_ptr->setUtf16(utf16, size);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QString_compare(QString const * this_ptr, QString const * s, Qt::CaseSensitivity cs) {
  return this_ptr->compare(*s, cs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QString_compare1(QString const * this_ptr, QLatin1String const * other, Qt::CaseSensitivity cs) {
  return this_ptr->compare(*other, cs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QString_compare2(QString const * this_ptr, QStringView const * s, Qt::CaseSensitivity cs) {
  return this_ptr->compare(*s, cs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QString_compare3(QString const * this_ptr, QChar const * ch, Qt::CaseSensitivity cs) {
  return this_ptr->compare(*ch, cs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QString_compare4(QString const * s1, QString const * s2, Qt::CaseSensitivity cs) {
  return QString::compare(*s1, *s2, cs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QString_compare5(QString const * s1, QLatin1String const * s2, Qt::CaseSensitivity cs) {
  return QString::compare(*s1, *s2, cs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QString_compare6(QLatin1String const * s1, QString const * s2, Qt::CaseSensitivity cs) {
  return QString::compare(*s1, *s2, cs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QString_compare7(QString const * s1, QStringView const * s2, Qt::CaseSensitivity cs) {
  return QString::compare(*s1, *s2, cs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QString_compare8(QStringView const * s1, QString const * s2, Qt::CaseSensitivity cs) {
  return QString::compare(*s1, *s2, cs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QString_localeAwareCompare(QString const * this_ptr, QString const * s) {
  return this_ptr->localeAwareCompare(*s);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QString_localeAwareCompare1(QString const * this_ptr, QStringView const * s) {
  return this_ptr->localeAwareCompare(*s);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QString_localeAwareCompare2(QString const * s1, QString const * s2) {
  return QString::localeAwareCompare(*s1, *s2);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QString_localeAwareCompare3(QStringView const * s1, QStringView const * s2) {
  return QString::localeAwareCompare(*s1, *s2);
}


RITUAL_EXPORT short ctr_qt_core_ffi_QString_toShort(QString const * this_ptr, bool * ok, int base) {
  return this_ptr->toShort(ok, base);
}


RITUAL_EXPORT unsigned short ctr_qt_core_ffi_QString_toUShort(QString const * this_ptr, bool * ok, int base) {
  return this_ptr->toUShort(ok, base);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QString_toInt(QString const * this_ptr, bool * ok, int base) {
  return this_ptr->toInt(ok, base);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QString_toUInt(QString const * this_ptr, bool * ok, int base) {
  return this_ptr->toUInt(ok, base);
}


RITUAL_EXPORT long ctr_qt_core_ffi_QString_toLong(QString const * this_ptr, bool * ok, int base) {
  return this_ptr->toLong(ok, base);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QString_toULong(QString const * this_ptr, bool * ok, int base) {
  return this_ptr->toULong(ok, base);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_toLongLong(QString const * this_ptr, bool * ok, int base) {
  return this_ptr->toLongLong(ok, base);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QString_toULongLong(QString const * this_ptr, bool * ok, int base) {
  return this_ptr->toULongLong(ok, base);
}


RITUAL_EXPORT float ctr_qt_core_ffi_QString_toFloat(QString const * this_ptr, bool * ok) {
  return this_ptr->toFloat(ok);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QString_toDouble(QString const * this_ptr, bool * ok) {
  return this_ptr->toDouble(ok);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_setNum(QString * this_ptr, short arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_setNum1(QString * this_ptr, unsigned short arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_setNum2(QString * this_ptr, int arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_setNum3(QString * this_ptr, unsigned int arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_setNum4(QString * this_ptr, long arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_setNum5(QString * this_ptr, unsigned long arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_setNum6(QString * this_ptr, long long arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_setNum7(QString * this_ptr, unsigned long long arg1, int base) {
  return &this_ptr->setNum(arg1, base);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_setNum8(QString * this_ptr, float arg1, char format, int precision) {
  return &this_ptr->setNum(arg1, format, precision);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_setNum9(QString * this_ptr, double arg1, char format, int precision) {
  return &this_ptr->setNum(arg1, format, precision);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_number(int arg1, int base) {
  return new QString(QString::number(arg1, base));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_number1(unsigned int arg1, int base) {
  return new QString(QString::number(arg1, base));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_number2(long arg1, int base) {
  return new QString(QString::number(arg1, base));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_number3(unsigned long arg1, int base) {
  return new QString(QString::number(arg1, base));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_number4(long long arg1, int base) {
  return new QString(QString::number(arg1, base));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_number5(unsigned long long arg1, int base) {
  return new QString(QString::number(arg1, base));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_number6(double arg1, char format, int precision) {
  return new QString(QString::number(arg1, format, precision));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_QString8(char const * ch) {
  return new QString(ch);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_QString9(QByteArray const * a) {
  return new QString(*a);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_operator_4(QString * this_ptr, char const * ch) {
  return &this_ptr->operator=(ch);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_operator_5(QString * this_ptr, QByteArray const * a) {
  return &this_ptr->operator=(*a);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_prepend5(QString * this_ptr, char const * s) {
  return &this_ptr->prepend(s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_prepend6(QString * this_ptr, QByteArray const * s) {
  return &this_ptr->prepend(*s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_append5(QString * this_ptr, char const * s) {
  return &this_ptr->append(s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_append6(QString * this_ptr, QByteArray const * s) {
  return &this_ptr->append(*s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_insert5(QString * this_ptr, long long i, char const * s) {
  return &this_ptr->insert(i, s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_insert6(QString * this_ptr, long long i, QByteArray const * s) {
  return &this_ptr->insert(i, *s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_operator__6(QString * this_ptr, char const * s) {
  return &this_ptr->operator+=(s);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QString_operator__7(QString * this_ptr, QByteArray const * s) {
  return &this_ptr->operator+=(*s);
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QString_begin(QString * this_ptr) {
  return this_ptr->begin();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QString_begin1(QString const * this_ptr) {
  return this_ptr->begin();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QString_cbegin(QString const * this_ptr) {
  return this_ptr->cbegin();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QString_constBegin(QString const * this_ptr) {
  return this_ptr->constBegin();
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QString_end(QString * this_ptr) {
  return this_ptr->end();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QString_end1(QString const * this_ptr) {
  return this_ptr->end();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QString_cend(QString const * this_ptr) {
  return this_ptr->cend();
}


RITUAL_EXPORT QChar const * ctr_qt_core_ffi_QString_constEnd(QString const * this_ptr) {
  return this_ptr->constEnd();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_push_back(QString * this_ptr, QChar const * c) {
  this_ptr->push_back(*c);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_push_back1(QString * this_ptr, QString const * s) {
  this_ptr->push_back(*s);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_push_front(QString * this_ptr, QChar const * c) {
  this_ptr->push_front(*c);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_push_front1(QString * this_ptr, QString const * s) {
  this_ptr->push_front(*s);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QString_shrink_to_fit(QString * this_ptr) {
  this_ptr->shrink_to_fit();
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QString_erase(QString * this_ptr, QChar const * first, QChar const * last) {
  return this_ptr->erase(first, last);
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QString_erase1(QString * this_ptr, QChar const * it) {
  return this_ptr->erase(it);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QString_max_size(QString const * this_ptr) {
  return this_ptr->max_size();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_isNull(QString const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_isRightToLeft(QString const * this_ptr) {
  return this_ptr->isRightToLeft();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QString_isValidUtf16(QString const * this_ptr) {
  return this_ptr->isValidUtf16();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_operator_20(QString const * s1, QString const * s2) {
  return new QString(operator+(*s1, *s2));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_operator_22(QString const * s1, QChar const * s2) {
  return new QString(operator+(*s1, *s2));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_operator_24(QChar const * s1, QString const * s2) {
  return new QString(operator+(*s1, *s2));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_operator_25(QString const * lhs, QStringView const * rhs) {
  return new QString(operator+(*lhs, *rhs));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_operator_26(QStringView const * lhs, QString const * rhs) {
  return new QString(operator+(*lhs, *rhs));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_operator_27(QString const * s1, char const * s2) {
  return new QString(operator+(*s1, s2));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_operator_29(char const * s1, QString const * s2) {
  return new QString(operator+(s1, *s2));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_operator_30(QByteArray const * ba, QString const * s) {
  return new QString(operator+(*ba, *s));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_operator_31(QString const * s, QByteArray const * ba) {
  return new QString(operator+(*s, *ba));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__2(QDataStream * arg1, QString const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__3(QDataStream * arg1, QString * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QStringConverterBase::State * ctr_qt_core_ffi_QStringConverterBase_State_State(int f) {
  return new QStringConverterBase::State(QFlags< QStringConverterBase::Flag >(f));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringConverterBase_State_dState(QStringConverterBase::State * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringConverterBase_State_clear(QStringConverterBase::State * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringConverterBase_State_reset(QStringConverterBase::State * this_ptr) {
  this_ptr->reset();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringConverter_isValid(QStringConverter const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringConverter_resetState(QStringConverter * this_ptr) {
  this_ptr->resetState();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringConverter_hasError(QStringConverter const * this_ptr) {
  return this_ptr->hasError();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QStringConverter_name(QStringConverter const * this_ptr) {
  return this_ptr->name();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QStringConverter_nameForEncoding(QStringConverter::Encoding e) {
  return QStringConverter::nameForEncoding(e);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QStringConverter_availableCodecs() {
  return new QList< QString >(QStringConverter::availableCodecs());
}


RITUAL_EXPORT QStringEncoder * ctr_qt_core_ffi_QStringEncoder_QStringEncoder() {
  return new QStringEncoder();
}


RITUAL_EXPORT QStringEncoder * ctr_qt_core_ffi_QStringEncoder_QStringEncoder1(QStringConverter::Encoding encoding, int flags) {
  return new QStringEncoder(encoding, QFlags< QStringConverterBase::Flag >(flags));
}


RITUAL_EXPORT QStringEncoder * ctr_qt_core_ffi_QStringEncoder_QStringEncoder2(QAnyStringView const * name, int flags) {
  return new QStringEncoder(*name, QFlags< QStringConverterBase::Flag >(flags));
}


RITUAL_EXPORT QStringEncoder::DecodedData< QStringView > * ctr_qt_core_ffi_QStringEncoder_operator__(QStringEncoder * this_ptr, QStringView const * in) {
  return new QStringEncoder::DecodedData< QStringView >(this_ptr->operator()(*in));
}


RITUAL_EXPORT QStringEncoder::DecodedData< QStringView > * ctr_qt_core_ffi_QStringEncoder_encode(QStringEncoder * this_ptr, QStringView const * in) {
  return new QStringEncoder::DecodedData< QStringView >(this_ptr->encode(*in));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringEncoder_requiredSpace(QStringEncoder const * this_ptr, long long inputLength) {
  return this_ptr->requiredSpace(inputLength);
}


RITUAL_EXPORT char * ctr_qt_core_ffi_QStringEncoder_appendToBuffer(QStringEncoder * this_ptr, char * out, QStringView const * in) {
  return this_ptr->appendToBuffer(out, *in);
}


RITUAL_EXPORT QStringDecoder * ctr_qt_core_ffi_QStringDecoder_QStringDecoder(QStringConverter::Encoding encoding, int flags) {
  return new QStringDecoder(encoding, QFlags< QStringConverterBase::Flag >(flags));
}


RITUAL_EXPORT QStringDecoder * ctr_qt_core_ffi_QStringDecoder_QStringDecoder1() {
  return new QStringDecoder();
}


RITUAL_EXPORT QStringDecoder * ctr_qt_core_ffi_QStringDecoder_QStringDecoder2(QAnyStringView const * name, int f) {
  return new QStringDecoder(*name, QFlags< QStringConverterBase::Flag >(f));
}


RITUAL_EXPORT QStringDecoder::EncodedData< QByteArrayView > * ctr_qt_core_ffi_QStringDecoder_operator__(QStringDecoder * this_ptr, QByteArrayView const * ba) {
  return new QStringDecoder::EncodedData< QByteArrayView >(this_ptr->operator()(*ba));
}


RITUAL_EXPORT QStringDecoder::EncodedData< QByteArrayView > * ctr_qt_core_ffi_QStringDecoder_decode(QStringDecoder * this_ptr, QByteArrayView const * ba) {
  return new QStringDecoder::EncodedData< QByteArrayView >(this_ptr->decode(*ba));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringDecoder_requiredSpace(QStringDecoder const * this_ptr, long long inputLength) {
  return this_ptr->requiredSpace(inputLength);
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QStringDecoder_appendToBuffer(QStringDecoder * this_ptr, QChar * out, QByteArrayView const * ba) {
  return this_ptr->appendToBuffer(out, *ba);
}


RITUAL_EXPORT char16_t * ctr_qt_core_ffi_QStringDecoder_appendToBuffer1(QStringDecoder * this_ptr, char16_t * out, QByteArrayView const * ba) {
  return this_ptr->appendToBuffer(out, *ba);
}


RITUAL_EXPORT QStringDecoder * ctr_qt_core_ffi_QStringDecoder_decoderForHtml(QByteArrayView const * data) {
  return new QStringDecoder(QStringDecoder::decoderForHtml(*data));
}


RITUAL_EXPORT int ctr_qt_core_ffi_qGlobalQHashSeed() {
  return qGlobalQHashSeed();
}


RITUAL_EXPORT void ctr_qt_core_ffi_qSetGlobalQHashSeed(int newSeed) {
  qSetGlobalQHashSeed(newSeed);
}


RITUAL_EXPORT QHashSeed * ctr_qt_core_ffi_QHashSeed_QHashSeed(unsigned long d) {
  return new QHashSeed(d);
}


#ifdef _WIN32
RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QHashSeed_operator_unsigned_long(QHashSeed const * this_ptr) {
  return static_cast<size_t>(*this_ptr);
}
#else
RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QHashSeed_operator_unsigned_long(QHashSeed const * this_ptr) {
  return this_ptr->operator unsigned long();
}
#endif


RITUAL_EXPORT QHashSeed * ctr_qt_core_ffi_QHashSeed_globalSeed() {
  return new QHashSeed(QHashSeed::globalSeed());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QHashSeed_setDeterministicGlobalSeed() {
  QHashSeed::setDeterministicGlobalSeed();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QHashSeed_resetRandomGlobalSeed() {
  QHashSeed::resetRandomGlobalSeed();
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QHashPrivate_hash(unsigned long key, unsigned long seed) {
  return QHashPrivate::hash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHashBits(void const * p, unsigned long size, unsigned long seed) {
  return qHashBits(p, size, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash1(char key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash2(unsigned char key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash3(signed char key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash4(unsigned short key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash5(short key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash6(unsigned int key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash7(int key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash8(unsigned long key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash9(long key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash10(unsigned long long key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash11(long long key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash14(float key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash15(double key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash17(wchar_t key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash18(char16_t key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash19(char32_t key, unsigned long seed) {
  return qHash(key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash20(QChar const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash21(QByteArrayView const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash22(QByteArray const * key, unsigned long seed, Qt::Disambiguated_t const * arg3) {
  return qHash(*key, seed, *arg3);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash23(QStringView const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash24(QString const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash25(QBitArray const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash26(QLatin1String const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash27(QKeyCombination const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qPopulationCount(unsigned int v) {
  return qPopulationCount(v);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qPopulationCount1(unsigned char v) {
  return qPopulationCount(v);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qPopulationCount2(unsigned short v) {
  return qPopulationCount(v);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qPopulationCount3(unsigned long long v) {
  return qPopulationCount(v);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qPopulationCount4(unsigned long v) {
  return qPopulationCount(v);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qCountTrailingZeroBits(unsigned int v) {
  return qCountTrailingZeroBits(v);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qCountTrailingZeroBits1(unsigned char v) {
  return qCountTrailingZeroBits(v);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qCountTrailingZeroBits2(unsigned short v) {
  return qCountTrailingZeroBits(v);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qCountTrailingZeroBits3(unsigned long long v) {
  return qCountTrailingZeroBits(v);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qCountTrailingZeroBits4(unsigned long v) {
  return qCountTrailingZeroBits(v);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qCountLeadingZeroBits(unsigned int v) {
  return qCountLeadingZeroBits(v);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qCountLeadingZeroBits1(unsigned char v) {
  return qCountLeadingZeroBits(v);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qCountLeadingZeroBits2(unsigned short v) {
  return qCountLeadingZeroBits(v);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qCountLeadingZeroBits3(unsigned long long v) {
  return qCountLeadingZeroBits(v);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qCountLeadingZeroBits4(unsigned long v) {
  return qCountLeadingZeroBits(v);
}


RITUAL_EXPORT QStringMatcher * ctr_qt_core_ffi_QStringMatcher_QStringMatcher() {
  return new QStringMatcher();
}


RITUAL_EXPORT QStringMatcher * ctr_qt_core_ffi_QStringMatcher_QStringMatcher1(QString const * pattern, Qt::CaseSensitivity cs) {
  return new QStringMatcher(*pattern, cs);
}


RITUAL_EXPORT QStringMatcher * ctr_qt_core_ffi_QStringMatcher_QStringMatcher2(QChar const * uc, long long len, Qt::CaseSensitivity cs) {
  return new QStringMatcher(uc, len, cs);
}


RITUAL_EXPORT QStringMatcher * ctr_qt_core_ffi_QStringMatcher_QStringMatcher3(QStringView const * pattern, Qt::CaseSensitivity cs) {
  return new QStringMatcher(*pattern, cs);
}


RITUAL_EXPORT QStringMatcher * ctr_qt_core_ffi_QStringMatcher_QStringMatcher4(QStringMatcher const * other) {
  return new QStringMatcher(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringMatcher_dQStringMatcher(QStringMatcher * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QStringMatcher * ctr_qt_core_ffi_QStringMatcher_operator_(QStringMatcher * this_ptr, QStringMatcher const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringMatcher_setPattern(QStringMatcher * this_ptr, QString const * pattern) {
  this_ptr->setPattern(*pattern);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringMatcher_setCaseSensitivity(QStringMatcher * this_ptr, Qt::CaseSensitivity cs) {
  this_ptr->setCaseSensitivity(cs);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringMatcher_indexIn(QStringMatcher const * this_ptr, QString const * str, long long from) {
  return this_ptr->indexIn(*str, from);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringMatcher_indexIn1(QStringMatcher const * this_ptr, QChar const * str, long long length, long long from) {
  return this_ptr->indexIn(str, length, from);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStringMatcher_indexIn2(QStringMatcher const * this_ptr, QStringView const * str, long long from) {
  return this_ptr->indexIn(*str, from);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QStringMatcher_pattern(QStringMatcher const * this_ptr) {
  return new QString(this_ptr->pattern());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QStringMatcher_patternView(QStringMatcher const * this_ptr) {
  return new QStringView(this_ptr->patternView());
}


RITUAL_EXPORT Qt::CaseSensitivity ctr_qt_core_ffi_QStringMatcher_caseSensitivity(QStringMatcher const * this_ptr) {
  return this_ptr->caseSensitivity();
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_QDataStream() {
  return new QDataStream();
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_QDataStream1(QIODevice * arg1) {
  return new QDataStream(arg1);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_QDataStream2(QByteArray * arg1, int flags) {
  return new QDataStream(arg1, QFlags< QIODeviceBase::OpenModeFlag >(flags));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_QDataStream3(QByteArray const * arg1) {
  return new QDataStream(*arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDataStream_dQDataStream(QDataStream * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QIODevice * ctr_qt_core_ffi_QDataStream_device(QDataStream const * this_ptr) {
  return this_ptr->device();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDataStream_setDevice(QDataStream * this_ptr, QIODevice * arg1) {
  this_ptr->setDevice(arg1);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDataStream_atEnd(QDataStream const * this_ptr) {
  return this_ptr->atEnd();
}


RITUAL_EXPORT QDataStream::Status ctr_qt_core_ffi_QDataStream_status(QDataStream const * this_ptr) {
  return this_ptr->status();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDataStream_setStatus(QDataStream * this_ptr, QDataStream::Status status) {
  this_ptr->setStatus(status);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDataStream_resetStatus(QDataStream * this_ptr) {
  this_ptr->resetStatus();
}


RITUAL_EXPORT QDataStream::FloatingPointPrecision ctr_qt_core_ffi_QDataStream_floatingPointPrecision(QDataStream const * this_ptr) {
  return this_ptr->floatingPointPrecision();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDataStream_setFloatingPointPrecision(QDataStream * this_ptr, QDataStream::FloatingPointPrecision precision) {
  this_ptr->setFloatingPointPrecision(precision);
}


RITUAL_EXPORT QDataStream::ByteOrder ctr_qt_core_ffi_QDataStream_byteOrder(QDataStream const * this_ptr) {
  return this_ptr->byteOrder();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDataStream_setByteOrder(QDataStream * this_ptr, QDataStream::ByteOrder arg1) {
  this_ptr->setByteOrder(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDataStream_version(QDataStream const * this_ptr) {
  return this_ptr->version();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDataStream_setVersion(QDataStream * this_ptr, int arg1) {
  this_ptr->setVersion(arg1);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__(QDataStream * this_ptr, char * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__1(QDataStream * this_ptr, signed char * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__2(QDataStream * this_ptr, unsigned char * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__3(QDataStream * this_ptr, short * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__4(QDataStream * this_ptr, unsigned short * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__5(QDataStream * this_ptr, int * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__6(QDataStream * this_ptr, unsigned int * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__7(QDataStream * this_ptr, long long * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__8(QDataStream * this_ptr, unsigned long long * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__9(QDataStream * this_ptr, bool * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__10(QDataStream * this_ptr, float * f) {
  return &this_ptr->operator>>(*f);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__11(QDataStream * this_ptr, double * f) {
  return &this_ptr->operator>>(*f);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__12(QDataStream * this_ptr, char * * str) {
  return &this_ptr->operator>>(*str);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__13(QDataStream * this_ptr, char16_t * c) {
  return &this_ptr->operator>>(*c);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__14(QDataStream * this_ptr, char32_t * c) {
  return &this_ptr->operator>>(*c);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__15(QDataStream * this_ptr, char i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__16(QDataStream * this_ptr, signed char i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__17(QDataStream * this_ptr, unsigned char i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__18(QDataStream * this_ptr, short i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__19(QDataStream * this_ptr, unsigned short i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__20(QDataStream * this_ptr, int i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__21(QDataStream * this_ptr, unsigned int i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__22(QDataStream * this_ptr, long long i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__23(QDataStream * this_ptr, unsigned long long i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__24(QDataStream * this_ptr, float f) {
  return &this_ptr->operator<<(f);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__25(QDataStream * this_ptr, double f) {
  return &this_ptr->operator<<(f);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__26(QDataStream * this_ptr, char const * str) {
  return &this_ptr->operator<<(str);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__27(QDataStream * this_ptr, char16_t c) {
  return &this_ptr->operator<<(c);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_operator__28(QDataStream * this_ptr, char32_t c) {
  return &this_ptr->operator<<(c);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDataStream_operator_bool(QDataStream const * this_ptr) {
  return this_ptr->operator bool();
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_readBytes(QDataStream * this_ptr, char * * arg1, unsigned int * len) {
  return &this_ptr->readBytes(*arg1, *len);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_readBytes1(QDataStream * this_ptr, char * * arg1, long long * len) {
  return &this_ptr->readBytes(*arg1, *len);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDataStream_readRawData(QDataStream * this_ptr, char * arg1, long long len) {
  return this_ptr->readRawData(arg1, len);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_QDataStream_writeBytes(QDataStream * this_ptr, char const * arg1, long long len) {
  return &this_ptr->writeBytes(arg1, len);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDataStream_writeRawData(QDataStream * this_ptr, char const * arg1, long long len) {
  return this_ptr->writeRawData(arg1, len);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDataStream_skipRawData(QDataStream * this_ptr, long long len) {
  return this_ptr->skipRawData(len);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDataStream_startTransaction(QDataStream * this_ptr) {
  this_ptr->startTransaction();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDataStream_commitTransaction(QDataStream * this_ptr) {
  return this_ptr->commitTransaction();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDataStream_rollbackTransaction(QDataStream * this_ptr) {
  this_ptr->rollbackTransaction();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDataStream_abortTransaction(QDataStream * this_ptr) {
  this_ptr->abortTransaction();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDataStream_isDeviceTransactionStarted(QDataStream const * this_ptr) {
  return this_ptr->isDeviceTransactionStarted();
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__4(QDataStream * out, QChar const * chr) {
  return &operator<<(*out, *chr);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__5(QDataStream * in, QChar * chr) {
  return &operator>>(*in, *chr);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__6(QDataStream * s, QKeyCombination * combination) {
  return &operator>>(*s, *combination);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__7(QDataStream * s, QKeyCombination const * combination) {
  return &operator<<(*s, *combination);
}


RITUAL_EXPORT double ctr_qt_core_ffi_qFastSin(double x) {
  return qFastSin(x);
}


RITUAL_EXPORT double ctr_qt_core_ffi_qFastCos(double x) {
  return qFastCos(x);
}


RITUAL_EXPORT float ctr_qt_core_ffi_qDegreesToRadians(float degrees) {
  return qDegreesToRadians(degrees);
}


RITUAL_EXPORT double ctr_qt_core_ffi_qDegreesToRadians1(double degrees) {
  return qDegreesToRadians(degrees);
}


RITUAL_EXPORT float ctr_qt_core_ffi_qRadiansToDegrees(float radians) {
  return qRadiansToDegrees(radians);
}


RITUAL_EXPORT double ctr_qt_core_ffi_qRadiansToDegrees1(double radians) {
  return qRadiansToDegrees(radians);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qNextPowerOfTwo(unsigned int v) {
  return qNextPowerOfTwo(v);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_qNextPowerOfTwo1(unsigned long long v) {
  return qNextPowerOfTwo(v);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_qNextPowerOfTwo2(int v) {
  return qNextPowerOfTwo(v);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_qNextPowerOfTwo3(long long v) {
  return qNextPowerOfTwo(v);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qNextPowerOfTwo4(unsigned long v) {
  return qNextPowerOfTwo(v);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qNextPowerOfTwo5(long v) {
  return qNextPowerOfTwo(v);
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_qfloat16_qfloat16() {
  return new qfloat16();
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_qfloat16_qfloat161(float f) {
  return new qfloat16(f);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qfloat16_isInf(qfloat16 const * this_ptr) {
  return this_ptr->isInf();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qfloat16_isNaN(qfloat16 const * this_ptr) {
  return this_ptr->isNaN();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qfloat16_isFinite(qfloat16 const * this_ptr) {
  return this_ptr->isFinite();
}


RITUAL_EXPORT int ctr_qt_core_ffi_qfloat16_fpClassify(qfloat16 const * this_ptr) {
  return this_ptr->fpClassify();
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_qfloat16_copySign(qfloat16 const * this_ptr, qfloat16 const * sign) {
  return new qfloat16(this_ptr->copySign(*sign));
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_qfloat16__limit_epsilon() {
  return new qfloat16(qfloat16::_limit_epsilon());
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_qfloat16__limit_min() {
  return new qfloat16(qfloat16::_limit_min());
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_qfloat16__limit_denorm_min() {
  return new qfloat16(qfloat16::_limit_denorm_min());
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_qfloat16__limit_max() {
  return new qfloat16(qfloat16::_limit_max());
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_qfloat16__limit_lowest() {
  return new qfloat16(qfloat16::_limit_lowest());
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_qfloat16__limit_infinity() {
  return new qfloat16(qfloat16::_limit_infinity());
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_qfloat16__limit_quiet_NaN() {
  return new qfloat16(qfloat16::_limit_quiet_NaN());
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_qfloat16__limit_signaling_NaN() {
  return new qfloat16(qfloat16::_limit_signaling_NaN());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qfloat16_isNormal(qfloat16 const * this_ptr) {
  return this_ptr->isNormal();
}


RITUAL_EXPORT void ctr_qt_core_ffi_qFloatToFloat16(qfloat16 * arg1, float const * arg2, long long length) {
  qFloatToFloat16(arg1, arg2, length);
}


RITUAL_EXPORT void ctr_qt_core_ffi_qFloatFromFloat16(float * arg1, qfloat16 const * arg2, long long length) {
  qFloatFromFloat16(arg1, arg2, length);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qIsInf2(qfloat16 const * f) {
  return qIsInf(*f);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qIsNaN2(qfloat16 const * f) {
  return qIsNaN(*f);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qIsFinite2(qfloat16 const * f) {
  return qIsFinite(*f);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qFpClassify2(qfloat16 const * f) {
  return qFpClassify(*f);
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_qSqrt(qfloat16 const * f) {
  return new qfloat16(qSqrt(*f));
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRound2(qfloat16 const * d) {
  return qRound(*d);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_qRound642(qfloat16 const * d) {
  return qRound64(*d);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qFuzzyCompare2(qfloat16 const * p1, qfloat16 const * p2) {
  return qFuzzyCompare(*p1, *p2);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qFuzzyIsNull2(qfloat16 const * f) {
  return qFuzzyIsNull(*f);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_qIsNull2(qfloat16 const * f) {
  return qIsNull(*f);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qIntCast2(qfloat16 const * f) {
  return qIntCast(*f);
}


RITUAL_EXPORT QtMetaContainerPrivate::QMetaContainerInterface * ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_QMetaContainerInterface() {
  return new QtMetaContainerPrivate::QMetaContainerInterface();
}


RITUAL_EXPORT QtMetaContainerPrivate::QMetaSequenceInterface * ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_QMetaSequenceInterface() {
  return new QtMetaContainerPrivate::QMetaSequenceInterface();
}


RITUAL_EXPORT QtMetaContainerPrivate::QMetaAssociationInterface * ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_QMetaAssociationInterface() {
  return new QtMetaContainerPrivate::QMetaAssociationInterface();
}


RITUAL_EXPORT QMetaContainer * ctr_qt_core_ffi_QMetaContainer_QMetaContainer() {
  return new QMetaContainer();
}


RITUAL_EXPORT QMetaContainer * ctr_qt_core_ffi_QMetaContainer_QMetaContainer1(QtMetaContainerPrivate::QMetaContainerInterface const * d) {
  return new QMetaContainer(d);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaContainer_hasInputIterator(QMetaContainer const * this_ptr) {
  return this_ptr->hasInputIterator();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaContainer_hasForwardIterator(QMetaContainer const * this_ptr) {
  return this_ptr->hasForwardIterator();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaContainer_hasBidirectionalIterator(QMetaContainer const * this_ptr) {
  return this_ptr->hasBidirectionalIterator();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaContainer_hasRandomAccessIterator(QMetaContainer const * this_ptr) {
  return this_ptr->hasRandomAccessIterator();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaContainer_hasSize(QMetaContainer const * this_ptr) {
  return this_ptr->hasSize();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QMetaContainer_size(QMetaContainer const * this_ptr, void const * container) {
  return this_ptr->size(container);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaContainer_canClear(QMetaContainer const * this_ptr) {
  return this_ptr->canClear();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaContainer_clear(QMetaContainer const * this_ptr, void * container) {
  this_ptr->clear(container);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaContainer_hasIterator(QMetaContainer const * this_ptr) {
  return this_ptr->hasIterator();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QMetaContainer_begin(QMetaContainer const * this_ptr, void * container) {
  return this_ptr->begin(container);
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QMetaContainer_end(QMetaContainer const * this_ptr, void * container) {
  return this_ptr->end(container);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaContainer_destroyIterator(QMetaContainer const * this_ptr, void const * iterator) {
  this_ptr->destroyIterator(iterator);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaContainer_compareIterator(QMetaContainer const * this_ptr, void const * i, void const * j) {
  return this_ptr->compareIterator(i, j);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaContainer_copyIterator(QMetaContainer const * this_ptr, void * target, void const * source) {
  this_ptr->copyIterator(target, source);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaContainer_advanceIterator(QMetaContainer const * this_ptr, void * iterator, long long step) {
  this_ptr->advanceIterator(iterator, step);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QMetaContainer_diffIterator(QMetaContainer const * this_ptr, void const * i, void const * j) {
  return this_ptr->diffIterator(i, j);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaContainer_hasConstIterator(QMetaContainer const * this_ptr) {
  return this_ptr->hasConstIterator();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QMetaContainer_constBegin(QMetaContainer const * this_ptr, void const * container) {
  return this_ptr->constBegin(container);
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QMetaContainer_constEnd(QMetaContainer const * this_ptr, void const * container) {
  return this_ptr->constEnd(container);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaContainer_destroyConstIterator(QMetaContainer const * this_ptr, void const * iterator) {
  this_ptr->destroyConstIterator(iterator);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaContainer_compareConstIterator(QMetaContainer const * this_ptr, void const * i, void const * j) {
  return this_ptr->compareConstIterator(i, j);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaContainer_copyConstIterator(QMetaContainer const * this_ptr, void * target, void const * source) {
  this_ptr->copyConstIterator(target, source);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaContainer_advanceConstIterator(QMetaContainer const * this_ptr, void * iterator, long long step) {
  this_ptr->advanceConstIterator(iterator, step);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QMetaContainer_diffConstIterator(QMetaContainer const * this_ptr, void const * i, void const * j) {
  return this_ptr->diffConstIterator(i, j);
}


RITUAL_EXPORT QMetaSequence * ctr_qt_core_ffi_QMetaSequence_QMetaSequence() {
  return new QMetaSequence();
}


RITUAL_EXPORT QMetaSequence * ctr_qt_core_ffi_QMetaSequence_QMetaSequence1(QtMetaContainerPrivate::QMetaSequenceInterface const * d) {
  return new QMetaSequence(d);
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QMetaSequence_valueMetaType(QMetaSequence const * this_ptr) {
  return new QMetaType(this_ptr->valueMetaType());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaSequence_isSortable(QMetaSequence const * this_ptr) {
  return this_ptr->isSortable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaSequence_canAddValueAtBegin(QMetaSequence const * this_ptr) {
  return this_ptr->canAddValueAtBegin();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaSequence_addValueAtBegin(QMetaSequence const * this_ptr, void * container, void const * value) {
  this_ptr->addValueAtBegin(container, value);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaSequence_canAddValueAtEnd(QMetaSequence const * this_ptr) {
  return this_ptr->canAddValueAtEnd();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaSequence_addValueAtEnd(QMetaSequence const * this_ptr, void * container, void const * value) {
  this_ptr->addValueAtEnd(container, value);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaSequence_canRemoveValueAtBegin(QMetaSequence const * this_ptr) {
  return this_ptr->canRemoveValueAtBegin();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaSequence_removeValueAtBegin(QMetaSequence const * this_ptr, void * container) {
  this_ptr->removeValueAtBegin(container);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaSequence_canRemoveValueAtEnd(QMetaSequence const * this_ptr) {
  return this_ptr->canRemoveValueAtEnd();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaSequence_removeValueAtEnd(QMetaSequence const * this_ptr, void * container) {
  this_ptr->removeValueAtEnd(container);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaSequence_canGetValueAtIndex(QMetaSequence const * this_ptr) {
  return this_ptr->canGetValueAtIndex();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaSequence_valueAtIndex(QMetaSequence const * this_ptr, void const * container, long long index, void * result) {
  this_ptr->valueAtIndex(container, index, result);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaSequence_canSetValueAtIndex(QMetaSequence const * this_ptr) {
  return this_ptr->canSetValueAtIndex();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaSequence_setValueAtIndex(QMetaSequence const * this_ptr, void * container, long long index, void const * value) {
  this_ptr->setValueAtIndex(container, index, value);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaSequence_canAddValue(QMetaSequence const * this_ptr) {
  return this_ptr->canAddValue();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaSequence_addValue(QMetaSequence const * this_ptr, void * container, void const * value) {
  this_ptr->addValue(container, value);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaSequence_canRemoveValue(QMetaSequence const * this_ptr) {
  return this_ptr->canRemoveValue();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaSequence_removeValue(QMetaSequence const * this_ptr, void * container) {
  this_ptr->removeValue(container);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaSequence_canGetValueAtIterator(QMetaSequence const * this_ptr) {
  return this_ptr->canGetValueAtIterator();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaSequence_valueAtIterator(QMetaSequence const * this_ptr, void const * iterator, void * result) {
  this_ptr->valueAtIterator(iterator, result);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaSequence_canSetValueAtIterator(QMetaSequence const * this_ptr) {
  return this_ptr->canSetValueAtIterator();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaSequence_setValueAtIterator(QMetaSequence const * this_ptr, void const * iterator, void const * value) {
  this_ptr->setValueAtIterator(iterator, value);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaSequence_canInsertValueAtIterator(QMetaSequence const * this_ptr) {
  return this_ptr->canInsertValueAtIterator();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaSequence_insertValueAtIterator(QMetaSequence const * this_ptr, void * container, void const * iterator, void const * value) {
  this_ptr->insertValueAtIterator(container, iterator, value);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaSequence_canEraseValueAtIterator(QMetaSequence const * this_ptr) {
  return this_ptr->canEraseValueAtIterator();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaSequence_eraseValueAtIterator(QMetaSequence const * this_ptr, void * container, void const * iterator) {
  this_ptr->eraseValueAtIterator(container, iterator);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaSequence_canEraseRangeAtIterator(QMetaSequence const * this_ptr) {
  return this_ptr->canEraseRangeAtIterator();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaSequence_eraseRangeAtIterator(QMetaSequence const * this_ptr, void * container, void const * iterator1, void const * iterator2) {
  this_ptr->eraseRangeAtIterator(container, iterator1, iterator2);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaSequence_canGetValueAtConstIterator(QMetaSequence const * this_ptr) {
  return this_ptr->canGetValueAtConstIterator();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaSequence_valueAtConstIterator(QMetaSequence const * this_ptr, void const * iterator, void * result) {
  this_ptr->valueAtConstIterator(iterator, result);
}


RITUAL_EXPORT QtMetaContainerPrivate::QMetaSequenceInterface const * ctr_qt_core_ffi_QMetaSequence_iface(QMetaSequence const * this_ptr) {
  return this_ptr->iface();
}


RITUAL_EXPORT QMetaAssociation * ctr_qt_core_ffi_QMetaAssociation_QMetaAssociation() {
  return new QMetaAssociation();
}


RITUAL_EXPORT QMetaAssociation * ctr_qt_core_ffi_QMetaAssociation_QMetaAssociation1(QtMetaContainerPrivate::QMetaAssociationInterface const * d) {
  return new QMetaAssociation(d);
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QMetaAssociation_keyMetaType(QMetaAssociation const * this_ptr) {
  return new QMetaType(this_ptr->keyMetaType());
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QMetaAssociation_mappedMetaType(QMetaAssociation const * this_ptr) {
  return new QMetaType(this_ptr->mappedMetaType());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaAssociation_canInsertKey(QMetaAssociation const * this_ptr) {
  return this_ptr->canInsertKey();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaAssociation_insertKey(QMetaAssociation const * this_ptr, void * container, void const * key) {
  this_ptr->insertKey(container, key);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaAssociation_canRemoveKey(QMetaAssociation const * this_ptr) {
  return this_ptr->canRemoveKey();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaAssociation_removeKey(QMetaAssociation const * this_ptr, void * container, void const * key) {
  this_ptr->removeKey(container, key);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaAssociation_canContainsKey(QMetaAssociation const * this_ptr) {
  return this_ptr->canContainsKey();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaAssociation_containsKey(QMetaAssociation const * this_ptr, void const * container, void const * key) {
  return this_ptr->containsKey(container, key);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaAssociation_canGetMappedAtKey(QMetaAssociation const * this_ptr) {
  return this_ptr->canGetMappedAtKey();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaAssociation_mappedAtKey(QMetaAssociation const * this_ptr, void const * container, void const * key, void * mapped) {
  this_ptr->mappedAtKey(container, key, mapped);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaAssociation_canSetMappedAtKey(QMetaAssociation const * this_ptr) {
  return this_ptr->canSetMappedAtKey();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaAssociation_setMappedAtKey(QMetaAssociation const * this_ptr, void * container, void const * key, void const * mapped) {
  this_ptr->setMappedAtKey(container, key, mapped);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaAssociation_canGetKeyAtIterator(QMetaAssociation const * this_ptr) {
  return this_ptr->canGetKeyAtIterator();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaAssociation_keyAtIterator(QMetaAssociation const * this_ptr, void const * iterator, void * key) {
  this_ptr->keyAtIterator(iterator, key);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaAssociation_canGetKeyAtConstIterator(QMetaAssociation const * this_ptr) {
  return this_ptr->canGetKeyAtConstIterator();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaAssociation_keyAtConstIterator(QMetaAssociation const * this_ptr, void const * iterator, void * key) {
  this_ptr->keyAtConstIterator(iterator, key);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaAssociation_canGetMappedAtIterator(QMetaAssociation const * this_ptr) {
  return this_ptr->canGetMappedAtIterator();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaAssociation_mappedAtIterator(QMetaAssociation const * this_ptr, void const * iterator, void * mapped) {
  this_ptr->mappedAtIterator(iterator, mapped);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaAssociation_canGetMappedAtConstIterator(QMetaAssociation const * this_ptr) {
  return this_ptr->canGetMappedAtConstIterator();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaAssociation_mappedAtConstIterator(QMetaAssociation const * this_ptr, void const * iterator, void * mapped) {
  this_ptr->mappedAtConstIterator(iterator, mapped);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaAssociation_canSetMappedAtIterator(QMetaAssociation const * this_ptr) {
  return this_ptr->canSetMappedAtIterator();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaAssociation_setMappedAtIterator(QMetaAssociation const * this_ptr, void const * iterator, void const * mapped) {
  this_ptr->setMappedAtIterator(iterator, mapped);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaAssociation_canCreateIteratorAtKey(QMetaAssociation const * this_ptr) {
  return this_ptr->canCreateIteratorAtKey();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QMetaAssociation_createIteratorAtKey(QMetaAssociation const * this_ptr, void * container, void const * key) {
  return this_ptr->createIteratorAtKey(container, key);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaAssociation_canCreateConstIteratorAtKey(QMetaAssociation const * this_ptr) {
  return this_ptr->canCreateConstIteratorAtKey();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QMetaAssociation_createConstIteratorAtKey(QMetaAssociation const * this_ptr, void const * container, void const * key) {
  return this_ptr->createConstIteratorAtKey(container, key);
}


RITUAL_EXPORT QtMetaContainerPrivate::QMetaAssociationInterface const * ctr_qt_core_ffi_QMetaAssociation_iface(QMetaAssociation const * this_ptr) {
  return this_ptr->iface();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaType_registerNormalizedTypedef(QByteArray const * normalizedTypeName, QMetaType const * type) {
  QMetaType::registerNormalizedTypedef(*normalizedTypeName, *type);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaType_type(char const * typeName) {
  return QMetaType::type(typeName);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaType_type1(QByteArray const * typeName) {
  return QMetaType::type(*typeName);
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaType_typeName(int type) {
  return QMetaType::typeName(type);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaType_sizeOf(int type) {
  return QMetaType::sizeOf(type);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaType_typeFlags(int type) {
  return int(QMetaType::typeFlags(type));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QMetaType_metaObjectForType(int type) {
  return QMetaType::metaObjectForType(type);
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QMetaType_create(int type, void const * copy) {
  return QMetaType::create(type, copy);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaType_destroy(int type, void * data) {
  QMetaType::destroy(type, data);
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QMetaType_construct(int type, void * where, void const * copy) {
  return QMetaType::construct(type, where, copy);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaType_destruct(int type, void * where) {
  QMetaType::destruct(type, where);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_isRegistered(int type) {
  return QMetaType::isRegistered(type);
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QMetaType_QMetaType(int type) {
  return new QMetaType(type);
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QMetaType_QMetaType1() {
  return new QMetaType();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_isValid(QMetaType const * this_ptr, Qt::Disambiguated_t const * arg1) {
  return this_ptr->isValid(*arg1);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_isRegistered1(QMetaType const * this_ptr, Qt::Disambiguated_t const * arg1) {
  return this_ptr->isRegistered(*arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaType_registerType(QMetaType const * this_ptr) {
  this_ptr->registerType();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaType_id(QMetaType const * this_ptr, int arg1) {
  return this_ptr->id(arg1);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QMetaType_sizeOf1(QMetaType const * this_ptr) {
  return this_ptr->sizeOf();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QMetaType_alignOf(QMetaType const * this_ptr) {
  return this_ptr->alignOf();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QMetaType_flags(QMetaType const * this_ptr) {
  return int(this_ptr->flags());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QMetaType_metaObject(QMetaType const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QMetaType_name(QMetaType const * this_ptr) {
  return this_ptr->name();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QMetaType_create1(QMetaType const * this_ptr, void const * copy) {
  return this_ptr->create(copy);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaType_destroy1(QMetaType const * this_ptr, void * data) {
  this_ptr->destroy(data);
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QMetaType_construct1(QMetaType const * this_ptr, void * where, void const * copy) {
  return this_ptr->construct(where, copy);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaType_destruct1(QMetaType const * this_ptr, void * data) {
  this_ptr->destruct(data);
}


RITUAL_EXPORT QPartialOrdering * ctr_qt_core_ffi_QMetaType_compare(QMetaType const * this_ptr, void const * lhs, void const * rhs) {
  return new QPartialOrdering(this_ptr->compare(lhs, rhs));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_equals(QMetaType const * this_ptr, void const * lhs, void const * rhs) {
  return this_ptr->equals(lhs, rhs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_isDefaultConstructible(QMetaType const * this_ptr) {
  return this_ptr->isDefaultConstructible();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_isCopyConstructible(QMetaType const * this_ptr) {
  return this_ptr->isCopyConstructible();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_isMoveConstructible(QMetaType const * this_ptr) {
  return this_ptr->isMoveConstructible();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_isDestructible(QMetaType const * this_ptr) {
  return this_ptr->isDestructible();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_isEqualityComparable(QMetaType const * this_ptr) {
  return this_ptr->isEqualityComparable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_isOrdered(QMetaType const * this_ptr) {
  return this_ptr->isOrdered();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_save(QMetaType const * this_ptr, QDataStream * stream, void const * data) {
  return this_ptr->save(*stream, data);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_load(QMetaType const * this_ptr, QDataStream * stream, void * data) {
  return this_ptr->load(*stream, data);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_hasRegisteredDataStreamOperators(QMetaType const * this_ptr) {
  return this_ptr->hasRegisteredDataStreamOperators();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_save1(QDataStream * stream, int type, void const * data) {
  return QMetaType::save(*stream, type, data);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_load1(QDataStream * stream, int type, void * data) {
  return QMetaType::load(*stream, type, data);
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QMetaType_underlyingType(QMetaType const * this_ptr) {
  return new QMetaType(this_ptr->underlyingType());
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QMetaType_fromName(QByteArrayView const * name) {
  return new QMetaType(QMetaType::fromName(*name));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_debugStream(QMetaType * this_ptr, QDebug * dbg, void const * rhs) {
  return this_ptr->debugStream(*dbg, rhs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_hasRegisteredDebugStreamOperator(QMetaType const * this_ptr) {
  return this_ptr->hasRegisteredDebugStreamOperator();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_debugStream1(QDebug * dbg, void const * rhs, int typeId) {
  return QMetaType::debugStream(*dbg, rhs, typeId);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_hasRegisteredDebugStreamOperator1(int typeId) {
  return QMetaType::hasRegisteredDebugStreamOperator(typeId);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_convert(QMetaType const * fromType, void const * from, QMetaType const * toType, void * to) {
  return QMetaType::convert(*fromType, from, *toType, to);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_canConvert(QMetaType const * fromType, QMetaType const * toType) {
  return QMetaType::canConvert(*fromType, *toType);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_view(QMetaType const * fromType, void * from, QMetaType const * toType, void * to) {
  return QMetaType::view(*fromType, from, *toType, to);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_canView(QMetaType const * fromType, QMetaType const * toType) {
  return QMetaType::canView(*fromType, *toType);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_convert1(void const * from, int fromTypeId, void * to, int toTypeId) {
  return QMetaType::convert(from, fromTypeId, to, toTypeId);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_compare1(void const * lhs, void const * rhs, int typeId, int * result) {
  return QMetaType::compare(lhs, rhs, typeId, result);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_equals1(void const * lhs, void const * rhs, int typeId, int * result) {
  return QMetaType::equals(lhs, rhs, typeId, result);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_hasRegisteredConverterFunction(QMetaType const * fromType, QMetaType const * toType) {
  return QMetaType::hasRegisteredConverterFunction(*fromType, *toType);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMetaType_hasRegisteredMutableViewFunction(QMetaType const * fromType, QMetaType const * toType) {
  return QMetaType::hasRegisteredMutableViewFunction(*fromType, *toType);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaType_unregisterConverterFunction(QMetaType const * from, QMetaType const * to) {
  QMetaType::unregisterConverterFunction(*from, *to);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaType_unregisterMutableViewFunction(QMetaType const * from, QMetaType const * to) {
  QMetaType::unregisterMutableViewFunction(*from, *to);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaType_unregisterMetaType(QMetaType const * type) {
  QMetaType::unregisterMetaType(*type);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRegisterMetaType(QMetaType const * meta) {
  return qRegisterMetaType(*meta);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash28(QMetaType const * type, unsigned long seed) {
  return qHash(*type, seed);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRegisterNormalizedMetaType_QPairVariantInterfaceImpl(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QPairVariantInterfaceImpl(*arg1);
}


RITUAL_EXPORT QBindingStorage * ctr_qt_core_ffi_QBindingStorage_QBindingStorage() {
  return new QBindingStorage();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBindingStorage_dQBindingStorage(QBindingStorage * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBindingStorage_isEmpty(QBindingStorage * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBindingStorage_isValid(QBindingStorage const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBindingStorage_registerDependency(QBindingStorage const * this_ptr, QUntypedPropertyData const * data) {
  this_ptr->registerDependency(data);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QObject_metaObject(QObject const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QObject_qt_metacast(QObject * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QObject_qt_metacall(QObject * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QObject_tr(char const * s, char const * c, int n) {
  return new QString(QObject::tr(s, c, n));
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_QObject_QObject(QObject * parent) {
  return new QObject(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QObject_dQObject(QObject * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObject_event(QObject * this_ptr, QEvent * event) {
  return this_ptr->event(event);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObject_eventFilter(QObject * this_ptr, QObject * watched, QEvent * event) {
  return this_ptr->eventFilter(watched, event);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QObject_objectName(QObject const * this_ptr) {
  return new QString(this_ptr->objectName());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QObject_setObjectName(QObject * this_ptr, QAnyStringView const * name) {
  this_ptr->setObjectName(*name);
}


RITUAL_EXPORT QBindable< QString > * ctr_qt_core_ffi_QObject_bindableObjectName(QObject * this_ptr) {
  return new QBindable< QString >(this_ptr->bindableObjectName());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObject_isWidgetType(QObject const * this_ptr) {
  return this_ptr->isWidgetType();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObject_isWindowType(QObject const * this_ptr) {
  return this_ptr->isWindowType();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObject_isQuickItemType(QObject const * this_ptr) {
  return this_ptr->isQuickItemType();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObject_signalsBlocked(QObject const * this_ptr) {
  return this_ptr->signalsBlocked();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObject_blockSignals(QObject * this_ptr, bool b) {
  return this_ptr->blockSignals(b);
}


RITUAL_EXPORT QThread * ctr_qt_core_ffi_QObject_thread(QObject const * this_ptr) {
  return this_ptr->thread();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObject_moveToThread(QObject * this_ptr, QThread * thread, Qt::Disambiguated_t const * arg2) {
  return this_ptr->moveToThread(thread, *arg2);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QObject_startTimer(QObject * this_ptr, int interval, Qt::TimerType timerType) {
  return this_ptr->startTimer(interval, timerType);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QObject_killTimer(QObject * this_ptr, int id) {
  this_ptr->killTimer(id);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QObject_killTimer1(QObject * this_ptr, Qt::TimerId id) {
  this_ptr->killTimer(id);
}


RITUAL_EXPORT QList< QObject * > const * ctr_qt_core_ffi_QObject_children(QObject const * this_ptr) {
  return &this_ptr->children();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QObject_setParent(QObject * this_ptr, QObject * parent) {
  this_ptr->setParent(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QObject_installEventFilter(QObject * this_ptr, QObject * filterObj) {
  this_ptr->installEventFilter(filterObj);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QObject_removeEventFilter(QObject * this_ptr, QObject * obj) {
  this_ptr->removeEventFilter(obj);
}


RITUAL_EXPORT QMetaObject::Connection * ctr_qt_core_ffi_QObject_connect(QObject const * sender, char const * signal, QObject const * receiver, char const * member, Qt::ConnectionType arg5) {
  return new QMetaObject::Connection(QObject::connect(sender, signal, receiver, member, arg5));
}


RITUAL_EXPORT QMetaObject::Connection * ctr_qt_core_ffi_QObject_connect1(QObject const * sender, QMetaMethod const * signal, QObject const * receiver, QMetaMethod const * method, Qt::ConnectionType type) {
  return new QMetaObject::Connection(QObject::connect(sender, *signal, receiver, *method, type));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObject_disconnect(QObject const * sender, char const * signal, QObject const * receiver, char const * member) {
  return QObject::disconnect(sender, signal, receiver, member);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObject_disconnect1(QObject const * sender, QMetaMethod const * signal, QObject const * receiver, QMetaMethod const * member) {
  return QObject::disconnect(sender, *signal, receiver, *member);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObject_disconnect2(QObject const * this_ptr, char const * signal, QObject const * receiver, char const * member) {
  return this_ptr->disconnect(signal, receiver, member);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObject_disconnect3(QObject const * this_ptr, QObject const * receiver, char const * member) {
  return this_ptr->disconnect(receiver, member);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObject_disconnect4(QMetaObject::Connection const * arg1) {
  return QObject::disconnect(*arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QObject_dumpObjectTree(QObject const * this_ptr) {
  this_ptr->dumpObjectTree();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QObject_dumpObjectInfo(QObject const * this_ptr) {
  this_ptr->dumpObjectInfo();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObject_setProperty(QObject * this_ptr, char const * name, QVariant const * value) {
  return this_ptr->setProperty(name, *value);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QObject_property(QObject const * this_ptr, char const * name) {
  return new QVariant(this_ptr->property(name));
}


RITUAL_EXPORT QList< QByteArray > * ctr_qt_core_ffi_QObject_dynamicPropertyNames(QObject const * this_ptr) {
  return new QList< QByteArray >(this_ptr->dynamicPropertyNames());
}


RITUAL_EXPORT QBindingStorage * ctr_qt_core_ffi_QObject_bindingStorage(QObject * this_ptr) {
  return this_ptr->bindingStorage();
}


RITUAL_EXPORT QBindingStorage const * ctr_qt_core_ffi_QObject_bindingStorage1(QObject const * this_ptr) {
  return this_ptr->bindingStorage();
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_QObject_parent(QObject const * this_ptr) {
  return this_ptr->parent();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QObject_inherits(QObject const * this_ptr, char const * classname) {
  return this_ptr->inherits(classname);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QObject_deleteLater(QObject * this_ptr) {
  this_ptr->deleteLater();
}


RITUAL_EXPORT QBindingStorage const * ctr_qt_core_ffi_qGetBindingStorage(QObject const * o) {
  return qGetBindingStorage(o);
}


RITUAL_EXPORT QBindingStorage * ctr_qt_core_ffi_qGetBindingStorage1(QObject * o) {
  return qGetBindingStorage(o);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__8(QDebug const * arg1, QObject const * arg2) {
  return new QDebug(operator<<(*arg1, arg2));
}


RITUAL_EXPORT QSignalBlocker * ctr_qt_core_ffi_QSignalBlocker_QSignalBlocker(QObject * o) {
  return new QSignalBlocker(o);
}


RITUAL_EXPORT QSignalBlocker * ctr_qt_core_ffi_QSignalBlocker_QSignalBlocker1(QObject * o) {
  return new QSignalBlocker(*o);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSignalBlocker_dQSignalBlocker(QSignalBlocker * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSignalBlocker_reblock(QSignalBlocker * this_ptr) {
  this_ptr->reblock();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSignalBlocker_unblock(QSignalBlocker * this_ptr) {
  this_ptr->unblock();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSignalBlocker_dismiss(QSignalBlocker * this_ptr) {
  this_ptr->dismiss();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAbstractAnimation_metaObject(QAbstractAnimation const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QAbstractAnimation_qt_metacast(QAbstractAnimation * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractAnimation_qt_metacall(QAbstractAnimation * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QAbstractAnimation_tr(char const * s, char const * c, int n) {
  return new QString(QAbstractAnimation::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractAnimation_dQAbstractAnimation(QAbstractAnimation * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAbstractAnimation::State ctr_qt_core_ffi_QAbstractAnimation_state(QAbstractAnimation const * this_ptr) {
  return this_ptr->state();
}


RITUAL_EXPORT QBindable< QAbstractAnimation::State > * ctr_qt_core_ffi_QAbstractAnimation_bindableState(QAbstractAnimation const * this_ptr) {
  return new QBindable< QAbstractAnimation::State >(this_ptr->bindableState());
}


RITUAL_EXPORT QAnimationGroup * ctr_qt_core_ffi_QAbstractAnimation_group(QAbstractAnimation const * this_ptr) {
  return this_ptr->group();
}


RITUAL_EXPORT QAbstractAnimation::Direction ctr_qt_core_ffi_QAbstractAnimation_direction(QAbstractAnimation const * this_ptr) {
  return this_ptr->direction();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractAnimation_setDirection(QAbstractAnimation * this_ptr, QAbstractAnimation::Direction direction) {
  this_ptr->setDirection(direction);
}


RITUAL_EXPORT QBindable< QAbstractAnimation::Direction > * ctr_qt_core_ffi_QAbstractAnimation_bindableDirection(QAbstractAnimation * this_ptr) {
  return new QBindable< QAbstractAnimation::Direction >(this_ptr->bindableDirection());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractAnimation_currentTime(QAbstractAnimation const * this_ptr) {
  return this_ptr->currentTime();
}


RITUAL_EXPORT QBindable< int > * ctr_qt_core_ffi_QAbstractAnimation_bindableCurrentTime(QAbstractAnimation * this_ptr) {
  return new QBindable< int >(this_ptr->bindableCurrentTime());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractAnimation_currentLoopTime(QAbstractAnimation const * this_ptr) {
  return this_ptr->currentLoopTime();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractAnimation_loopCount(QAbstractAnimation const * this_ptr) {
  return this_ptr->loopCount();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractAnimation_setLoopCount(QAbstractAnimation * this_ptr, int loopCount) {
  this_ptr->setLoopCount(loopCount);
}


RITUAL_EXPORT QBindable< int > * ctr_qt_core_ffi_QAbstractAnimation_bindableLoopCount(QAbstractAnimation * this_ptr) {
  return new QBindable< int >(this_ptr->bindableLoopCount());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractAnimation_currentLoop(QAbstractAnimation const * this_ptr) {
  return this_ptr->currentLoop();
}


RITUAL_EXPORT QBindable< int > * ctr_qt_core_ffi_QAbstractAnimation_bindableCurrentLoop(QAbstractAnimation const * this_ptr) {
  return new QBindable< int >(this_ptr->bindableCurrentLoop());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractAnimation_duration(QAbstractAnimation const * this_ptr) {
  return this_ptr->duration();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractAnimation_totalDuration(QAbstractAnimation const * this_ptr) {
  return this_ptr->totalDuration();
}


} // extern "C"
