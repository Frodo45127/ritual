#include "qt_core_c_global.h"
#include "file1.h"
extern "C" {
RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractAnimation_start(QAbstractAnimation * this_ptr, QAbstractAnimation::DeletionPolicy policy) {
  this_ptr->start(policy);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractAnimation_pause(QAbstractAnimation * this_ptr) {
  this_ptr->pause();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractAnimation_resume(QAbstractAnimation * this_ptr) {
  this_ptr->resume();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractAnimation_setPaused(QAbstractAnimation * this_ptr, bool arg1) {
  this_ptr->setPaused(arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractAnimation_stop(QAbstractAnimation * this_ptr) {
  this_ptr->stop();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractAnimation_setCurrentTime(QAbstractAnimation * this_ptr, int msecs) {
  this_ptr->setCurrentTime(msecs);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAnimationDriver_metaObject(QAnimationDriver const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QAnimationDriver_qt_metacast(QAnimationDriver * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAnimationDriver_qt_metacall(QAnimationDriver * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QAnimationDriver_tr(char const * s, char const * c, int n) {
  return new QString(QAnimationDriver::tr(s, c, n));
}


RITUAL_EXPORT QAnimationDriver * ctr_qt_core_ffi_QAnimationDriver_QAnimationDriver(QObject * parent) {
  return new QAnimationDriver(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAnimationDriver_dQAnimationDriver(QAnimationDriver * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAnimationDriver_advance(QAnimationDriver * this_ptr) {
  this_ptr->advance();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAnimationDriver_install(QAnimationDriver * this_ptr) {
  this_ptr->install();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAnimationDriver_uninstall(QAnimationDriver * this_ptr) {
  this_ptr->uninstall();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAnimationDriver_isRunning(QAnimationDriver const * this_ptr) {
  return this_ptr->isRunning();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QAnimationDriver_elapsed(QAnimationDriver const * this_ptr) {
  return this_ptr->elapsed();
}


RITUAL_EXPORT QDeadlineTimer * ctr_qt_core_ffi_QDeadlineTimer_QDeadlineTimer() {
  return new QDeadlineTimer();
}


RITUAL_EXPORT QDeadlineTimer * ctr_qt_core_ffi_QDeadlineTimer_QDeadlineTimer1(Qt::TimerType type_) {
  return new QDeadlineTimer(type_);
}


RITUAL_EXPORT QDeadlineTimer * ctr_qt_core_ffi_QDeadlineTimer_QDeadlineTimer2(QDeadlineTimer::ForeverConstant arg1, Qt::TimerType type_) {
  return new QDeadlineTimer(arg1, type_);
}


RITUAL_EXPORT QDeadlineTimer * ctr_qt_core_ffi_QDeadlineTimer_QDeadlineTimer3(long long msecs, Qt::TimerType type) {
  return new QDeadlineTimer(msecs, type);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDeadlineTimer_swap(QDeadlineTimer * this_ptr, QDeadlineTimer * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDeadlineTimer_isForever(QDeadlineTimer const * this_ptr) {
  return this_ptr->isForever();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDeadlineTimer_hasExpired(QDeadlineTimer const * this_ptr) {
  return this_ptr->hasExpired();
}


RITUAL_EXPORT Qt::TimerType ctr_qt_core_ffi_QDeadlineTimer_timerType(QDeadlineTimer const * this_ptr) {
  return this_ptr->timerType();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDeadlineTimer_setTimerType(QDeadlineTimer * this_ptr, Qt::TimerType type) {
  this_ptr->setTimerType(type);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDeadlineTimer_remainingTime(QDeadlineTimer const * this_ptr) {
  return this_ptr->remainingTime();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDeadlineTimer_remainingTimeNSecs(QDeadlineTimer const * this_ptr) {
  return this_ptr->remainingTimeNSecs();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDeadlineTimer_setRemainingTime(QDeadlineTimer * this_ptr, long long msecs, Qt::TimerType type) {
  this_ptr->setRemainingTime(msecs, type);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDeadlineTimer_setPreciseRemainingTime(QDeadlineTimer * this_ptr, long long secs, long long nsecs, Qt::TimerType type) {
  this_ptr->setPreciseRemainingTime(secs, nsecs, type);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDeadlineTimer_deadline(QDeadlineTimer const * this_ptr) {
  return this_ptr->deadline();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDeadlineTimer_deadlineNSecs(QDeadlineTimer const * this_ptr) {
  return this_ptr->deadlineNSecs();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDeadlineTimer_setDeadline(QDeadlineTimer * this_ptr, long long msecs, Qt::TimerType timerType) {
  this_ptr->setDeadline(msecs, timerType);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDeadlineTimer_setPreciseDeadline(QDeadlineTimer * this_ptr, long long secs, long long nsecs, Qt::TimerType type) {
  this_ptr->setPreciseDeadline(secs, nsecs, type);
}


RITUAL_EXPORT QDeadlineTimer * ctr_qt_core_ffi_QDeadlineTimer_addNSecs(QDeadlineTimer const * dt, long long nsecs) {
  return new QDeadlineTimer(QDeadlineTimer::addNSecs(*dt, nsecs));
}


RITUAL_EXPORT QDeadlineTimer * ctr_qt_core_ffi_QDeadlineTimer_current(Qt::TimerType timerType) {
  return new QDeadlineTimer(QDeadlineTimer::current(timerType));
}


RITUAL_EXPORT QDeadlineTimer * ctr_qt_core_ffi_QDeadlineTimer_operator__(QDeadlineTimer * this_ptr, long long msecs) {
  return &this_ptr->operator+=(msecs);
}


RITUAL_EXPORT QDeadlineTimer * ctr_qt_core_ffi_QDeadlineTimer_operator__1(QDeadlineTimer * this_ptr, long long msecs) {
  return &this_ptr->operator-=(msecs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRegisterNormalizedMetaType_QDeadlineTimer(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QDeadlineTimer(*arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QEventLoop_metaObject(QEventLoop const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QEventLoop_qt_metacast(QEventLoop * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QEventLoop_qt_metacall(QEventLoop * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QEventLoop_tr(char const * s, char const * c, int n) {
  return new QString(QEventLoop::tr(s, c, n));
}


RITUAL_EXPORT QEventLoop * ctr_qt_core_ffi_QEventLoop_QEventLoop(QObject * parent) {
  return new QEventLoop(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEventLoop_dQEventLoop(QEventLoop * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QEventLoop_processEvents(QEventLoop * this_ptr, int flags) {
  return this_ptr->processEvents(QFlags< QEventLoop::ProcessEventsFlag >(flags));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEventLoop_processEvents1(QEventLoop * this_ptr, int flags, int maximumTime) {
  this_ptr->processEvents(QFlags< QEventLoop::ProcessEventsFlag >(flags), maximumTime);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEventLoop_processEvents2(QEventLoop * this_ptr, int flags, QDeadlineTimer const * deadline) {
  this_ptr->processEvents(QFlags< QEventLoop::ProcessEventsFlag >(flags), *deadline);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QEventLoop_exec(QEventLoop * this_ptr, int flags) {
  return this_ptr->exec(QFlags< QEventLoop::ProcessEventsFlag >(flags));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QEventLoop_isRunning(QEventLoop const * this_ptr) {
  return this_ptr->isRunning();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEventLoop_wakeUp(QEventLoop * this_ptr) {
  this_ptr->wakeUp();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QEventLoop_event(QEventLoop * this_ptr, QEvent * event) {
  return this_ptr->event(event);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEventLoop_exit(QEventLoop * this_ptr, int returnCode) {
  this_ptr->exit(returnCode);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEventLoop_quit(QEventLoop * this_ptr) {
  this_ptr->quit();
}


RITUAL_EXPORT QEventLoopLocker * ctr_qt_core_ffi_QEventLoopLocker_QEventLoopLocker() {
  return new QEventLoopLocker();
}


RITUAL_EXPORT QEventLoopLocker * ctr_qt_core_ffi_QEventLoopLocker_QEventLoopLocker1(QEventLoop * loop) {
  return new QEventLoopLocker(loop);
}


RITUAL_EXPORT QEventLoopLocker * ctr_qt_core_ffi_QEventLoopLocker_QEventLoopLocker2(QThread * thread) {
  return new QEventLoopLocker(thread);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEventLoopLocker_dQEventLoopLocker(QEventLoopLocker * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEventLoopLocker_swap(QEventLoopLocker * this_ptr, QEventLoopLocker * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAbstractEventDispatcher_metaObject(QAbstractEventDispatcher const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QAbstractEventDispatcher_qt_metacast(QAbstractEventDispatcher * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractEventDispatcher_qt_metacall(QAbstractEventDispatcher * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QAbstractEventDispatcher_tr(char const * s, char const * c, int n) {
  return new QString(QAbstractEventDispatcher::tr(s, c, n));
}


RITUAL_EXPORT QAbstractEventDispatcher::TimerInfo * ctr_qt_core_ffi_QAbstractEventDispatcher_TimerInfo_TimerInfo(int id, int i, Qt::TimerType t) {
  return new QAbstractEventDispatcher::TimerInfo(id, i, t);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractEventDispatcher_dQAbstractEventDispatcher(QAbstractEventDispatcher * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAbstractEventDispatcher * ctr_qt_core_ffi_QAbstractEventDispatcher_instance(QThread * thread) {
  return QAbstractEventDispatcher::instance(thread);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractEventDispatcher_processEvents(QAbstractEventDispatcher * this_ptr, int flags) {
  return this_ptr->processEvents(QFlags< QEventLoop::ProcessEventsFlag >(flags));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractEventDispatcher_registerSocketNotifier(QAbstractEventDispatcher * this_ptr, QSocketNotifier * notifier) {
  this_ptr->registerSocketNotifier(notifier);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractEventDispatcher_unregisterSocketNotifier(QAbstractEventDispatcher * this_ptr, QSocketNotifier * notifier) {
  this_ptr->unregisterSocketNotifier(notifier);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractEventDispatcher_registerTimer(QAbstractEventDispatcher * this_ptr, long long interval, Qt::TimerType timerType, QObject * object) {
  return this_ptr->registerTimer(interval, timerType, object);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractEventDispatcher_registerTimer1(QAbstractEventDispatcher * this_ptr, int timerId, long long interval, Qt::TimerType timerType, QObject * object) {
  this_ptr->registerTimer(timerId, interval, timerType, object);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractEventDispatcher_unregisterTimer(QAbstractEventDispatcher * this_ptr, int timerId) {
  return this_ptr->unregisterTimer(timerId);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractEventDispatcher_unregisterTimers(QAbstractEventDispatcher * this_ptr, QObject * object) {
  return this_ptr->unregisterTimers(object);
}


RITUAL_EXPORT QList< QAbstractEventDispatcher::TimerInfo > * ctr_qt_core_ffi_QAbstractEventDispatcher_registeredTimers(QAbstractEventDispatcher const * this_ptr, QObject * object) {
  return new QList< QAbstractEventDispatcher::TimerInfo >(this_ptr->registeredTimers(object));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractEventDispatcher_remainingTime(QAbstractEventDispatcher * this_ptr, int timerId) {
  return this_ptr->remainingTime(timerId);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractEventDispatcher_unregisterTimer1(QAbstractEventDispatcher * this_ptr, Qt::TimerId timerId) {
  return this_ptr->unregisterTimer(timerId);
}


RITUAL_EXPORT QList< QAbstractEventDispatcher::TimerInfoV2 > * ctr_qt_core_ffi_QAbstractEventDispatcher_timersForObject(QAbstractEventDispatcher const * this_ptr, QObject * object) {
  return new QList< QAbstractEventDispatcher::TimerInfoV2 >(this_ptr->timersForObject(object));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractEventDispatcher_wakeUp(QAbstractEventDispatcher * this_ptr) {
  this_ptr->wakeUp();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractEventDispatcher_interrupt(QAbstractEventDispatcher * this_ptr) {
  this_ptr->interrupt();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractEventDispatcher_startingUp(QAbstractEventDispatcher * this_ptr) {
  this_ptr->startingUp();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractEventDispatcher_closingDown(QAbstractEventDispatcher * this_ptr) {
  this_ptr->closingDown();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractEventDispatcher_installNativeEventFilter(QAbstractEventDispatcher * this_ptr, QAbstractNativeEventFilter * filterObj) {
  this_ptr->installNativeEventFilter(filterObj);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractEventDispatcher_removeNativeEventFilter(QAbstractEventDispatcher * this_ptr, QAbstractNativeEventFilter * filterObj) {
  this_ptr->removeNativeEventFilter(filterObj);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractEventDispatcher_filterNativeEvent(QAbstractEventDispatcher * this_ptr, QByteArray const * eventType, void * message, long long * result) {
  return this_ptr->filterNativeEvent(*eventType, message, result);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAbstractEventDispatcherV2_metaObject(QAbstractEventDispatcherV2 const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QAbstractEventDispatcherV2_qt_metacast(QAbstractEventDispatcherV2 * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractEventDispatcherV2_qt_metacall(QAbstractEventDispatcherV2 * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QAbstractEventDispatcherV2_tr(char const * s, char const * c, int n) {
  return new QString(QAbstractEventDispatcherV2::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractEventDispatcherV2_dQAbstractEventDispatcherV2(QAbstractEventDispatcherV2 * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractEventDispatcherV2_unregisterTimer(QAbstractEventDispatcherV2 * this_ptr, Qt::TimerId timerId) {
  return this_ptr->unregisterTimer(timerId);
}


RITUAL_EXPORT QList< QAbstractEventDispatcher::TimerInfoV2 > * ctr_qt_core_ffi_QAbstractEventDispatcherV2_timersForObject(QAbstractEventDispatcherV2 const * this_ptr, QObject * object) {
  return new QList< QAbstractEventDispatcher::TimerInfoV2 >(this_ptr->timersForObject(object));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractEventDispatcherV2_processEventsWithDeadline(QAbstractEventDispatcherV2 * this_ptr, int flags, QDeadlineTimer const * deadline) {
  return this_ptr->processEventsWithDeadline(QFlags< QEventLoop::ProcessEventsFlag >(flags), *deadline);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QHashPrivate_GrowthPolicy_bucketsForCapacity(unsigned long requestedCapacity) {
  return QHashPrivate::GrowthPolicy::bucketsForCapacity(requestedCapacity);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QHashPrivate_GrowthPolicy_bucketForHash(unsigned long nBuckets, unsigned long hash) {
  return QHashPrivate::GrowthPolicy::bucketForHash(nBuckets, hash);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_QTextStream() {
  return new QTextStream();
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_QTextStream1(QIODevice * device) {
  return new QTextStream(device);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_QTextStream2(QString * string, int openMode) {
  return new QTextStream(string, QFlags< QIODeviceBase::OpenModeFlag >(openMode));
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_QTextStream3(QByteArray * array, int openMode) {
  return new QTextStream(array, QFlags< QIODeviceBase::OpenModeFlag >(openMode));
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_QTextStream4(QByteArray const * array, int openMode) {
  return new QTextStream(*array, QFlags< QIODeviceBase::OpenModeFlag >(openMode));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_dQTextStream(QTextStream * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_setEncoding(QTextStream * this_ptr, QStringConverter::Encoding encoding) {
  this_ptr->setEncoding(encoding);
}


RITUAL_EXPORT QStringConverter::Encoding ctr_qt_core_ffi_QTextStream_encoding(QTextStream const * this_ptr) {
  return this_ptr->encoding();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_setAutoDetectUnicode(QTextStream * this_ptr, bool enabled) {
  this_ptr->setAutoDetectUnicode(enabled);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTextStream_autoDetectUnicode(QTextStream const * this_ptr) {
  return this_ptr->autoDetectUnicode();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_setGenerateByteOrderMark(QTextStream * this_ptr, bool generate) {
  this_ptr->setGenerateByteOrderMark(generate);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTextStream_generateByteOrderMark(QTextStream const * this_ptr) {
  return this_ptr->generateByteOrderMark();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_setLocale(QTextStream * this_ptr, QLocale const * locale) {
  this_ptr->setLocale(*locale);
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QTextStream_locale(QTextStream const * this_ptr) {
  return new QLocale(this_ptr->locale());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_setDevice(QTextStream * this_ptr, QIODevice * device) {
  this_ptr->setDevice(device);
}


RITUAL_EXPORT QIODevice * ctr_qt_core_ffi_QTextStream_device(QTextStream const * this_ptr) {
  return this_ptr->device();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_setString(QTextStream * this_ptr, QString * string, int openMode) {
  this_ptr->setString(string, QFlags< QIODeviceBase::OpenModeFlag >(openMode));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTextStream_string(QTextStream const * this_ptr) {
  return this_ptr->string();
}


RITUAL_EXPORT QTextStream::Status ctr_qt_core_ffi_QTextStream_status(QTextStream const * this_ptr) {
  return this_ptr->status();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_setStatus(QTextStream * this_ptr, QTextStream::Status status) {
  this_ptr->setStatus(status);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_resetStatus(QTextStream * this_ptr) {
  this_ptr->resetStatus();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTextStream_atEnd(QTextStream const * this_ptr) {
  return this_ptr->atEnd();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_reset(QTextStream * this_ptr) {
  this_ptr->reset();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_flush(QTextStream * this_ptr) {
  this_ptr->flush();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTextStream_seek(QTextStream * this_ptr, long long pos) {
  return this_ptr->seek(pos);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QTextStream_pos(QTextStream const * this_ptr) {
  return this_ptr->pos();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_skipWhiteSpace(QTextStream * this_ptr) {
  this_ptr->skipWhiteSpace();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTextStream_readLine(QTextStream * this_ptr, long long maxlen) {
  return new QString(this_ptr->readLine(maxlen));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTextStream_readLineInto(QTextStream * this_ptr, QString * line, long long maxlen) {
  return this_ptr->readLineInto(line, maxlen);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTextStream_readAll(QTextStream * this_ptr) {
  return new QString(this_ptr->readAll());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTextStream_read(QTextStream * this_ptr, long long maxlen) {
  return new QString(this_ptr->read(maxlen));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_setFieldAlignment(QTextStream * this_ptr, QTextStream::FieldAlignment alignment) {
  this_ptr->setFieldAlignment(alignment);
}


RITUAL_EXPORT QTextStream::FieldAlignment ctr_qt_core_ffi_QTextStream_fieldAlignment(QTextStream const * this_ptr) {
  return this_ptr->fieldAlignment();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_setPadChar(QTextStream * this_ptr, QChar const * ch) {
  this_ptr->setPadChar(*ch);
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QTextStream_padChar(QTextStream const * this_ptr) {
  return new QChar(this_ptr->padChar());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_setFieldWidth(QTextStream * this_ptr, int width) {
  this_ptr->setFieldWidth(width);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTextStream_fieldWidth(QTextStream const * this_ptr) {
  return this_ptr->fieldWidth();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_setNumberFlags(QTextStream * this_ptr, int flags) {
  this_ptr->setNumberFlags(QFlags< QTextStream::NumberFlag >(flags));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTextStream_numberFlags(QTextStream const * this_ptr) {
  return int(this_ptr->numberFlags());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_setIntegerBase(QTextStream * this_ptr, int base) {
  this_ptr->setIntegerBase(base);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTextStream_integerBase(QTextStream const * this_ptr) {
  return this_ptr->integerBase();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_setRealNumberNotation(QTextStream * this_ptr, QTextStream::RealNumberNotation notation) {
  this_ptr->setRealNumberNotation(notation);
}


RITUAL_EXPORT QTextStream::RealNumberNotation ctr_qt_core_ffi_QTextStream_realNumberNotation(QTextStream const * this_ptr) {
  return this_ptr->realNumberNotation();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStream_setRealNumberPrecision(QTextStream * this_ptr, int precision) {
  this_ptr->setRealNumberPrecision(precision);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTextStream_realNumberPrecision(QTextStream const * this_ptr) {
  return this_ptr->realNumberPrecision();
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__(QTextStream * this_ptr, QChar * ch) {
  return &this_ptr->operator>>(*ch);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__1(QTextStream * this_ptr, char * ch) {
  return &this_ptr->operator>>(*ch);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__2(QTextStream * this_ptr, char16_t * ch) {
  return &this_ptr->operator>>(*ch);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__3(QTextStream * this_ptr, short * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__4(QTextStream * this_ptr, unsigned short * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__5(QTextStream * this_ptr, int * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__6(QTextStream * this_ptr, unsigned int * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__7(QTextStream * this_ptr, long * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__8(QTextStream * this_ptr, unsigned long * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__9(QTextStream * this_ptr, long long * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__10(QTextStream * this_ptr, unsigned long long * i) {
  return &this_ptr->operator>>(*i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__11(QTextStream * this_ptr, float * f) {
  return &this_ptr->operator>>(*f);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__12(QTextStream * this_ptr, double * f) {
  return &this_ptr->operator>>(*f);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__13(QTextStream * this_ptr, QString * s) {
  return &this_ptr->operator>>(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__14(QTextStream * this_ptr, QByteArray * array) {
  return &this_ptr->operator>>(*array);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__15(QTextStream * this_ptr, char * c) {
  return &this_ptr->operator>>(c);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__16(QTextStream * this_ptr, QChar const * ch) {
  return &this_ptr->operator<<(*ch);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__17(QTextStream * this_ptr, char ch) {
  return &this_ptr->operator<<(ch);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__18(QTextStream * this_ptr, char16_t ch) {
  return &this_ptr->operator<<(ch);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__19(QTextStream * this_ptr, short i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__20(QTextStream * this_ptr, unsigned short i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__21(QTextStream * this_ptr, int i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__22(QTextStream * this_ptr, unsigned int i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__23(QTextStream * this_ptr, long i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__24(QTextStream * this_ptr, unsigned long i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__25(QTextStream * this_ptr, long long i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__26(QTextStream * this_ptr, unsigned long long i) {
  return &this_ptr->operator<<(i);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__27(QTextStream * this_ptr, float f) {
  return &this_ptr->operator<<(f);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__28(QTextStream * this_ptr, double f) {
  return &this_ptr->operator<<(f);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__29(QTextStream * this_ptr, QString const * s) {
  return &this_ptr->operator<<(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__30(QTextStream * this_ptr, QStringView const * s) {
  return &this_ptr->operator<<(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__31(QTextStream * this_ptr, QLatin1String const * s) {
  return &this_ptr->operator<<(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__32(QTextStream * this_ptr, QByteArray const * array) {
  return &this_ptr->operator<<(*array);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__33(QTextStream * this_ptr, char const * c) {
  return &this_ptr->operator<<(c);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_QTextStream_operator__34(QTextStream * this_ptr, void const * ptr) {
  return &this_ptr->operator<<(ptr);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTextStream_operator_bool(QTextStream const * this_ptr) {
  return this_ptr->operator bool();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStreamManipulator_exec(QTextStreamManipulator * this_ptr, QTextStream * s) {
  this_ptr->exec(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_operator__11(QTextStream * s, QTextStreamManipulator const * m) {
  return &operator<<(*s, *m);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_bin(QTextStream * s) {
  return &Qt::bin(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_oct(QTextStream * s) {
  return &Qt::oct(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_dec(QTextStream * s) {
  return &Qt::dec(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_hex(QTextStream * s) {
  return &Qt::hex(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_showbase(QTextStream * s) {
  return &Qt::showbase(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_forcesign(QTextStream * s) {
  return &Qt::forcesign(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_forcepoint(QTextStream * s) {
  return &Qt::forcepoint(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_noshowbase(QTextStream * s) {
  return &Qt::noshowbase(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_noforcesign(QTextStream * s) {
  return &Qt::noforcesign(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_noforcepoint(QTextStream * s) {
  return &Qt::noforcepoint(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_uppercasebase(QTextStream * s) {
  return &Qt::uppercasebase(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_uppercasedigits(QTextStream * s) {
  return &Qt::uppercasedigits(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_lowercasebase(QTextStream * s) {
  return &Qt::lowercasebase(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_lowercasedigits(QTextStream * s) {
  return &Qt::lowercasedigits(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_fixed(QTextStream * s) {
  return &Qt::fixed(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_scientific(QTextStream * s) {
  return &Qt::scientific(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_left(QTextStream * s) {
  return &Qt::left(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_right(QTextStream * s) {
  return &Qt::right(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_center(QTextStream * s) {
  return &Qt::center(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_endl(QTextStream * s) {
  return &Qt::endl(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_flush(QTextStream * s) {
  return &Qt::flush(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_reset(QTextStream * s) {
  return &Qt::reset(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_bom(QTextStream * s) {
  return &Qt::bom(*s);
}


RITUAL_EXPORT QTextStream * ctr_qt_core_ffi_Qt_ws(QTextStream * s) {
  return &Qt::ws(*s);
}


RITUAL_EXPORT QTextStreamManipulator * ctr_qt_core_ffi_qSetFieldWidth(int width) {
  return new QTextStreamManipulator(qSetFieldWidth(width));
}


RITUAL_EXPORT QTextStreamManipulator * ctr_qt_core_ffi_qSetPadChar(QChar const * ch) {
  return new QTextStreamManipulator(qSetPadChar(*ch));
}


RITUAL_EXPORT QTextStreamManipulator * ctr_qt_core_ffi_qSetRealNumberPrecision(int precision) {
  return new QTextStreamManipulator(qSetRealNumberPrecision(precision));
}


RITUAL_EXPORT QAdoptSharedDataTag * ctr_qt_core_ffi_QAdoptSharedDataTag_QAdoptSharedDataTag() {
  return new QAdoptSharedDataTag();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QVLABaseBase_capacity(QVLABaseBase const * this_ptr) {
  return this_ptr->capacity();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QVLABaseBase_size(QVLABaseBase const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QVLABaseBase_empty(QVLABaseBase const * this_ptr) {
  return this_ptr->empty();
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_QDebug(QIODevice * device) {
  return new QDebug(device);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_QDebug1(QString * string) {
  return new QDebug(string);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_QDebug2(QByteArray * bytes) {
  return new QDebug(bytes);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_QDebug3(QtMsgType t) {
  return new QDebug(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_QDebug4(QDebug const * o) {
  return new QDebug(*o);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator_(QDebug * this_ptr, QDebug const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDebug_dQDebug(QDebug * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDebug_swap(QDebug * this_ptr, QDebug * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_resetFormat(QDebug * this_ptr) {
  return &this_ptr->resetFormat();
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_space(QDebug * this_ptr) {
  return &this_ptr->space();
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_nospace(QDebug * this_ptr) {
  return &this_ptr->nospace();
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_maybeSpace(QDebug * this_ptr) {
  return &this_ptr->maybeSpace();
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_verbosity(QDebug * this_ptr, int verbosityLevel) {
  return &this_ptr->verbosity(verbosityLevel);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDebug_verbosity1(QDebug const * this_ptr) {
  return this_ptr->verbosity();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDebug_setVerbosity(QDebug * this_ptr, int verbosityLevel) {
  this_ptr->setVerbosity(verbosityLevel);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDebug_autoInsertSpaces(QDebug const * this_ptr) {
  return this_ptr->autoInsertSpaces();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDebug_setAutoInsertSpaces(QDebug * this_ptr, bool b) {
  this_ptr->setAutoInsertSpaces(b);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDebug_quoteStrings(QDebug const * this_ptr) {
  return this_ptr->quoteStrings();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDebug_setQuoteStrings(QDebug * this_ptr, bool b) {
  this_ptr->setQuoteStrings(b);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_quote(QDebug * this_ptr) {
  return &this_ptr->quote();
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_noquote(QDebug * this_ptr) {
  return &this_ptr->noquote();
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_maybeQuote(QDebug * this_ptr, char c) {
  return &this_ptr->maybeQuote(c);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__(QDebug * this_ptr, QChar const * t) {
  return &this_ptr->operator<<(*t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__1(QDebug * this_ptr, bool t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__2(QDebug * this_ptr, char t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__3(QDebug * this_ptr, short t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__4(QDebug * this_ptr, unsigned short t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__5(QDebug * this_ptr, char16_t t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__6(QDebug * this_ptr, char32_t t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__7(QDebug * this_ptr, int t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__8(QDebug * this_ptr, unsigned int t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__9(QDebug * this_ptr, long t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__10(QDebug * this_ptr, unsigned long t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__11(QDebug * this_ptr, long long t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__12(QDebug * this_ptr, unsigned long long t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__13(QDebug * this_ptr, qfloat16 const * t) {
  return &this_ptr->operator<<(*t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__14(QDebug * this_ptr, float t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__15(QDebug * this_ptr, double t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__16(QDebug * this_ptr, char const * t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__17(QDebug * this_ptr, char16_t const * t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__18(QDebug * this_ptr, QString const * t) {
  return &this_ptr->operator<<(*t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__19(QDebug * this_ptr, QStringView const * s) {
  return &this_ptr->operator<<(*s);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__20(QDebug * this_ptr, QLatin1String const * t) {
  return &this_ptr->operator<<(*t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__21(QDebug * this_ptr, QByteArray const * t) {
  return &this_ptr->operator<<(*t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__22(QDebug * this_ptr, QByteArrayView const * t) {
  return &this_ptr->operator<<(*t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__23(QDebug * this_ptr, void const * t) {
  return &this_ptr->operator<<(t);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_QDebug_operator__26(QDebug * this_ptr, QTextStreamManipulator const * m) {
  return &this_ptr->operator<<(*m);
}


RITUAL_EXPORT QDebugStateSaver * ctr_qt_core_ffi_QDebugStateSaver_QDebugStateSaver(QDebug * dbg) {
  return new QDebugStateSaver(*dbg);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDebugStateSaver_dQDebugStateSaver(QDebugStateSaver * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_qt_QMetaEnum_debugOperator(QDebug * arg1, long long value, QMetaObject const * meta, char const * name) {
  return new QDebug(qt_QMetaEnum_debugOperator(*arg1, value, meta, name));
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_qt_QMetaEnum_flagDebugOperator(QDebug * dbg, unsigned long long value, QMetaObject const * meta, char const * name) {
  return new QDebug(qt_QMetaEnum_flagDebugOperator(*dbg, value, meta, name));
}


RITUAL_EXPORT void ctr_qt_core_ffi_qt_QMetaEnum_flagDebugOperator1(QDebug * debug, unsigned long sizeofT, unsigned int value) {
  qt_QMetaEnum_flagDebugOperator(*debug, sizeofT, value);
}


RITUAL_EXPORT void ctr_qt_core_ffi_qt_QMetaEnum_flagDebugOperator2(QDebug * debug, unsigned long sizeofT, unsigned long long value) {
  qt_QMetaEnum_flagDebugOperator(*debug, sizeofT, value);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__12(QDebug const * debug, QKeyCombination const * combination) {
  return new QDebug(operator<<(*debug, *combination));
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant() {
  return new QVariant();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QVariant_dQVariant(QVariant * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant1(QMetaType const * type, void const * copy) {
  return new QVariant(*type, copy);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant2(QVariant const * other) {
  return new QVariant(*other);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant3(int i) {
  return new QVariant(i);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant4(unsigned int ui) {
  return new QVariant(ui);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant5(long long ll) {
  return new QVariant(ll);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant6(unsigned long long ull) {
  return new QVariant(ull);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant7(bool b) {
  return new QVariant(b);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant8(double d) {
  return new QVariant(d);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant9(float f) {
  return new QVariant(f);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant10(QChar const * qchar) {
  return new QVariant(*qchar);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant11(QDate const * date) {
  return new QVariant(*date);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant12(QTime const * time) {
  return new QVariant(*time);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant13(QBitArray const * bitarray) {
  return new QVariant(*bitarray);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant14(QByteArray const * bytearray) {
  return new QVariant(*bytearray);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant15(QDateTime const * datetime) {
  return new QVariant(*datetime);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant16(QHash< QString, QVariant > const * hash) {
  return new QVariant(*hash);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant17(QJsonArray const * jsonArray) {
  return new QVariant(*jsonArray);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant18(QJsonObject const * jsonObject) {
  return new QVariant(*jsonObject);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant19(QList< QVariant > const * list) {
  return new QVariant(*list);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant20(QLocale const * locale) {
  return new QVariant(*locale);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant21(QMap< QString, QVariant > const * map) {
  return new QVariant(*map);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant22(QRegularExpression const * re) {
  return new QVariant(*re);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant23(QString const * string) {
  return new QVariant(*string);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant24(QList< QString > const * stringlist) {
  return new QVariant(*stringlist);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant25(QUrl const * url) {
  return new QVariant(*url);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant26(QJsonValue const * jsonValue) {
  return new QVariant(*jsonValue);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant27(QModelIndex const * modelIndex) {
  return new QVariant(*modelIndex);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant28(QUuid const * uuid) {
  return new QVariant(*uuid);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant29(QSize const * size) {
  return new QVariant(*size);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant30(QSizeF const * size) {
  return new QVariant(*size);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant31(QPoint const * pt) {
  return new QVariant(*pt);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant32(QPointF const * pt) {
  return new QVariant(*pt);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant33(QLine const * line) {
  return new QVariant(*line);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant34(QLineF const * line) {
  return new QVariant(*line);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant35(QRect const * rect) {
  return new QVariant(*rect);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant36(QRectF const * rect) {
  return new QVariant(*rect);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant37(QEasingCurve const * easing) {
  return new QVariant(*easing);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant38(QJsonDocument const * jsonDocument) {
  return new QVariant(*jsonDocument);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant39(QPersistentModelIndex const * modelIndex) {
  return new QVariant(*modelIndex);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant40(char const * str) {
  return new QVariant(str);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant41(QLatin1String const * string) {
  return new QVariant(*string);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_operator_(QVariant * this_ptr, QVariant const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QVariant_swap(QVariant * this_ptr, QVariant * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QVariant_userType(QVariant const * this_ptr) {
  return this_ptr->userType();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QVariant_typeId(QVariant const * this_ptr) {
  return this_ptr->typeId();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QVariant_typeName(QVariant const * this_ptr) {
  return this_ptr->typeName();
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QVariant_metaType(QVariant const * this_ptr) {
  return new QMetaType(this_ptr->metaType());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QVariant_canConvert(QVariant const * this_ptr, QMetaType const * targetType) {
  return this_ptr->canConvert(*targetType);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QVariant_convert(QVariant * this_ptr, QMetaType const * type) {
  return this_ptr->convert(*type);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QVariant_canView(QVariant const * this_ptr, QMetaType const * targetType) {
  return this_ptr->canView(*targetType);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QVariant_canConvert1(QVariant const * this_ptr, int targetTypeId) {
  return this_ptr->canConvert(targetTypeId);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QVariant_convert1(QVariant * this_ptr, int targetTypeId) {
  return this_ptr->convert(targetTypeId);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QVariant_isValid(QVariant const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QVariant_isNull(QVariant const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QVariant_clear(QVariant * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QVariant_detach(QVariant * this_ptr) {
  this_ptr->detach();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QVariant_isDetached(QVariant const * this_ptr) {
  return this_ptr->isDetached();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QVariant_toInt(QVariant const * this_ptr, bool * ok) {
  return this_ptr->toInt(ok);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QVariant_toUInt(QVariant const * this_ptr, bool * ok) {
  return this_ptr->toUInt(ok);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QVariant_toLongLong(QVariant const * this_ptr, bool * ok) {
  return this_ptr->toLongLong(ok);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QVariant_toULongLong(QVariant const * this_ptr, bool * ok) {
  return this_ptr->toULongLong(ok);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QVariant_toBool(QVariant const * this_ptr) {
  return this_ptr->toBool();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QVariant_toDouble(QVariant const * this_ptr, bool * ok) {
  return this_ptr->toDouble(ok);
}


RITUAL_EXPORT float ctr_qt_core_ffi_QVariant_toFloat(QVariant const * this_ptr, bool * ok) {
  return this_ptr->toFloat(ok);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QVariant_toReal(QVariant const * this_ptr, bool * ok) {
  return this_ptr->toReal(ok);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QVariant_toByteArray(QVariant const * this_ptr) {
  return new QByteArray(this_ptr->toByteArray());
}


RITUAL_EXPORT QBitArray * ctr_qt_core_ffi_QVariant_toBitArray(QVariant const * this_ptr) {
  return new QBitArray(this_ptr->toBitArray());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QVariant_toString(QVariant const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QVariant_toStringList(QVariant const * this_ptr) {
  return new QList< QString >(this_ptr->toStringList());
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QVariant_toChar(QVariant const * this_ptr) {
  return new QChar(this_ptr->toChar());
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QVariant_toDate(QVariant const * this_ptr) {
  return new QDate(this_ptr->toDate());
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QVariant_toTime(QVariant const * this_ptr) {
  return new QTime(this_ptr->toTime());
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QVariant_toDateTime(QVariant const * this_ptr) {
  return new QDateTime(this_ptr->toDateTime());
}


RITUAL_EXPORT QList< QVariant > * ctr_qt_core_ffi_QVariant_toList(QVariant const * this_ptr) {
  return new QList< QVariant >(this_ptr->toList());
}


RITUAL_EXPORT QMap< QString, QVariant > * ctr_qt_core_ffi_QVariant_toMap(QVariant const * this_ptr) {
  return new QMap< QString, QVariant >(this_ptr->toMap());
}


RITUAL_EXPORT QHash< QString, QVariant > * ctr_qt_core_ffi_QVariant_toHash(QVariant const * this_ptr) {
  return new QHash< QString, QVariant >(this_ptr->toHash());
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QVariant_toPoint(QVariant const * this_ptr) {
  return new QPoint(this_ptr->toPoint());
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QVariant_toPointF(QVariant const * this_ptr) {
  return new QPointF(this_ptr->toPointF());
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QVariant_toRect(QVariant const * this_ptr) {
  return new QRect(this_ptr->toRect());
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QVariant_toSize(QVariant const * this_ptr) {
  return new QSize(this_ptr->toSize());
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QVariant_toSizeF(QVariant const * this_ptr) {
  return new QSizeF(this_ptr->toSizeF());
}


RITUAL_EXPORT QLine * ctr_qt_core_ffi_QVariant_toLine(QVariant const * this_ptr) {
  return new QLine(this_ptr->toLine());
}


RITUAL_EXPORT QLineF * ctr_qt_core_ffi_QVariant_toLineF(QVariant const * this_ptr) {
  return new QLineF(this_ptr->toLineF());
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QVariant_toRectF(QVariant const * this_ptr) {
  return new QRectF(this_ptr->toRectF());
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QVariant_toLocale(QVariant const * this_ptr) {
  return new QLocale(this_ptr->toLocale());
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QVariant_toRegularExpression(QVariant const * this_ptr) {
  return new QRegularExpression(this_ptr->toRegularExpression());
}


RITUAL_EXPORT QEasingCurve * ctr_qt_core_ffi_QVariant_toEasingCurve(QVariant const * this_ptr) {
  return new QEasingCurve(this_ptr->toEasingCurve());
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QVariant_toUuid(QVariant const * this_ptr) {
  return new QUuid(this_ptr->toUuid());
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QVariant_toUrl(QVariant const * this_ptr) {
  return new QUrl(this_ptr->toUrl());
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QVariant_toJsonValue(QVariant const * this_ptr) {
  return new QJsonValue(this_ptr->toJsonValue());
}


RITUAL_EXPORT QJsonObject * ctr_qt_core_ffi_QVariant_toJsonObject(QVariant const * this_ptr) {
  return new QJsonObject(this_ptr->toJsonObject());
}


RITUAL_EXPORT QJsonArray * ctr_qt_core_ffi_QVariant_toJsonArray(QVariant const * this_ptr) {
  return new QJsonArray(this_ptr->toJsonArray());
}


RITUAL_EXPORT QJsonDocument * ctr_qt_core_ffi_QVariant_toJsonDocument(QVariant const * this_ptr) {
  return new QJsonDocument(this_ptr->toJsonDocument());
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QVariant_toModelIndex(QVariant const * this_ptr) {
  return new QModelIndex(this_ptr->toModelIndex());
}


RITUAL_EXPORT QPersistentModelIndex * ctr_qt_core_ffi_QVariant_toPersistentModelIndex(QVariant const * this_ptr) {
  return new QPersistentModelIndex(this_ptr->toPersistentModelIndex());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QVariant_load(QVariant * this_ptr, QDataStream * ds) {
  this_ptr->load(*ds);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QVariant_save(QVariant const * this_ptr, QDataStream * ds) {
  this_ptr->save(*ds);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_QVariant43(QVariant::Type type) {
  return new QVariant(type);
}


RITUAL_EXPORT QVariant::Type ctr_qt_core_ffi_QVariant_type(QVariant const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QVariant_typeToName(int typeId) {
  return QVariant::typeToName(typeId);
}


RITUAL_EXPORT QVariant::Type ctr_qt_core_ffi_QVariant_nameToType(char const * name) {
  return QVariant::nameToType(name);
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QVariant_data(QVariant * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT void const * ctr_qt_core_ffi_QVariant_constData(QVariant const * this_ptr) {
  return this_ptr->constData();
}


RITUAL_EXPORT void const * ctr_qt_core_ffi_QVariant_data1(QVariant const * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QVariant_setValue(QVariant * this_ptr, QVariant const * avalue) {
  this_ptr->setValue(*avalue);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariant_fromMetaType(QMetaType const * type, void const * copy) {
  return new QVariant(QVariant::fromMetaType(*type, copy));
}


RITUAL_EXPORT QPartialOrdering * ctr_qt_core_ffi_QVariant_compare(QVariant const * lhs, QVariant const * rhs) {
  return new QPartialOrdering(QVariant::compare(*lhs, *rhs));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__13(QDataStream * s, QVariant * p) {
  return &operator>>(*s, *p);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__14(QDataStream * s, QVariant const * p) {
  return &operator<<(*s, *p);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__15(QDataStream * s, QVariant::Type * p) {
  return &operator>>(*s, *p);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__16(QDataStream * s, QVariant::Type p) {
  return &operator<<(*s, p);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__17(QDebug const * arg1, QVariant::Type arg2) {
  return new QDebug(operator<<(*arg1, arg2));
}


RITUAL_EXPORT QVariantConstPointer * ctr_qt_core_ffi_QVariantConstPointer_QVariantConstPointer(QVariant const * variant) {
  return new QVariantConstPointer(*variant);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QVariantConstPointer_operator_(QVariantConstPointer const * this_ptr) {
  return new QVariant(this_ptr->operator*());
}


RITUAL_EXPORT QVariant const * ctr_qt_core_ffi_QVariantConstPointer_operator__(QVariantConstPointer const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QModelRoleData * ctr_qt_core_ffi_QModelRoleData_QModelRoleData(int role) {
  return new QModelRoleData(role);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QModelRoleData_role(QModelRoleData const * this_ptr) {
  return this_ptr->role();
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QModelRoleData_data(QModelRoleData * this_ptr) {
  return &this_ptr->data();
}


RITUAL_EXPORT QVariant const * ctr_qt_core_ffi_QModelRoleData_data1(QModelRoleData const * this_ptr) {
  return &this_ptr->data();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QModelRoleData_clearData(QModelRoleData * this_ptr) {
  this_ptr->clearData();
}


RITUAL_EXPORT QModelRoleDataSpan * ctr_qt_core_ffi_QModelRoleDataSpan_QModelRoleDataSpan() {
  return new QModelRoleDataSpan();
}


RITUAL_EXPORT QModelRoleDataSpan * ctr_qt_core_ffi_QModelRoleDataSpan_QModelRoleDataSpan1(QModelRoleData * modelRoleData) {
  return new QModelRoleDataSpan(*modelRoleData);
}


RITUAL_EXPORT QModelRoleDataSpan * ctr_qt_core_ffi_QModelRoleDataSpan_QModelRoleDataSpan2(QModelRoleData * modelRoleData, long long len) {
  return new QModelRoleDataSpan(modelRoleData, len);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QModelRoleDataSpan_size(QModelRoleDataSpan const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QModelRoleDataSpan_length(QModelRoleDataSpan const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT QModelRoleData * ctr_qt_core_ffi_QModelRoleDataSpan_data(QModelRoleDataSpan const * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT QModelRoleData * ctr_qt_core_ffi_QModelRoleDataSpan_begin(QModelRoleDataSpan const * this_ptr) {
  return this_ptr->begin();
}


RITUAL_EXPORT QModelRoleData * ctr_qt_core_ffi_QModelRoleDataSpan_end(QModelRoleDataSpan const * this_ptr) {
  return this_ptr->end();
}


RITUAL_EXPORT QModelRoleData * ctr_qt_core_ffi_QModelRoleDataSpan_operator__(QModelRoleDataSpan const * this_ptr, long long index) {
  return &this_ptr->operator[](index);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QModelRoleDataSpan_dataForRole(QModelRoleDataSpan const * this_ptr, int role) {
  return this_ptr->dataForRole(role);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QModelIndex_QModelIndex() {
  return new QModelIndex();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QModelIndex_row(QModelIndex const * this_ptr) {
  return this_ptr->row();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QModelIndex_column(QModelIndex const * this_ptr) {
  return this_ptr->column();
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QModelIndex_internalId(QModelIndex const * this_ptr) {
  return this_ptr->internalId();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QModelIndex_internalPointer(QModelIndex const * this_ptr) {
  return this_ptr->internalPointer();
}


RITUAL_EXPORT void const * ctr_qt_core_ffi_QModelIndex_constInternalPointer(QModelIndex const * this_ptr) {
  return this_ptr->constInternalPointer();
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QModelIndex_parent(QModelIndex const * this_ptr) {
  return new QModelIndex(this_ptr->parent());
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QModelIndex_sibling(QModelIndex const * this_ptr, int row, int column) {
  return new QModelIndex(this_ptr->sibling(row, column));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QModelIndex_siblingAtColumn(QModelIndex const * this_ptr, int column) {
  return new QModelIndex(this_ptr->siblingAtColumn(column));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QModelIndex_siblingAtRow(QModelIndex const * this_ptr, int row) {
  return new QModelIndex(this_ptr->siblingAtRow(row));
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QModelIndex_data(QModelIndex const * this_ptr, int role) {
  return new QVariant(this_ptr->data(role));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QModelIndex_multiData(QModelIndex const * this_ptr, QModelRoleDataSpan const * roleDataSpan) {
  this_ptr->multiData(*roleDataSpan);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QModelIndex_flags(QModelIndex const * this_ptr) {
  return int(this_ptr->flags());
}


RITUAL_EXPORT QAbstractItemModel const * ctr_qt_core_ffi_QModelIndex_model(QModelIndex const * this_ptr) {
  return this_ptr->model();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QModelIndex_isValid(QModelIndex const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__18(QDebug const * arg1, QModelIndex const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash29(QPersistentModelIndex const * index, unsigned long seed) {
  return qHash(*index, seed);
}


RITUAL_EXPORT QPersistentModelIndex * ctr_qt_core_ffi_QPersistentModelIndex_QPersistentModelIndex() {
  return new QPersistentModelIndex();
}


RITUAL_EXPORT QPersistentModelIndex * ctr_qt_core_ffi_QPersistentModelIndex_QPersistentModelIndex1(QModelIndex const * index) {
  return new QPersistentModelIndex(*index);
}


RITUAL_EXPORT QPersistentModelIndex * ctr_qt_core_ffi_QPersistentModelIndex_QPersistentModelIndex2(QPersistentModelIndex const * other) {
  return new QPersistentModelIndex(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPersistentModelIndex_dQPersistentModelIndex(QPersistentModelIndex * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPersistentModelIndex * ctr_qt_core_ffi_QPersistentModelIndex_operator_(QPersistentModelIndex * this_ptr, QPersistentModelIndex const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPersistentModelIndex_swap(QPersistentModelIndex * this_ptr, QPersistentModelIndex * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QPersistentModelIndex * ctr_qt_core_ffi_QPersistentModelIndex_operator_2(QPersistentModelIndex * this_ptr, QModelIndex const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QPersistentModelIndex_operator_QModelIndex(QPersistentModelIndex const * this_ptr) {
  return new QModelIndex(this_ptr->operator QModelIndex());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QPersistentModelIndex_row(QPersistentModelIndex const * this_ptr) {
  return this_ptr->row();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QPersistentModelIndex_column(QPersistentModelIndex const * this_ptr) {
  return this_ptr->column();
}


RITUAL_EXPORT void const * ctr_qt_core_ffi_QPersistentModelIndex_constInternalPointer(QPersistentModelIndex const * this_ptr) {
  return this_ptr->constInternalPointer();
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QPersistentModelIndex_parent(QPersistentModelIndex const * this_ptr) {
  return new QModelIndex(this_ptr->parent());
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QPersistentModelIndex_sibling(QPersistentModelIndex const * this_ptr, int row, int column) {
  return new QModelIndex(this_ptr->sibling(row, column));
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QPersistentModelIndex_data(QPersistentModelIndex const * this_ptr, int role) {
  return new QVariant(this_ptr->data(role));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPersistentModelIndex_multiData(QPersistentModelIndex const * this_ptr, QModelRoleDataSpan const * roleDataSpan) {
  this_ptr->multiData(*roleDataSpan);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QPersistentModelIndex_flags(QPersistentModelIndex const * this_ptr) {
  return int(this_ptr->flags());
}


RITUAL_EXPORT QAbstractItemModel const * ctr_qt_core_ffi_QPersistentModelIndex_model(QPersistentModelIndex const * this_ptr) {
  return this_ptr->model();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QPersistentModelIndex_isValid(QPersistentModelIndex const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__19(QDebug const * arg1, QPersistentModelIndex const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAbstractItemModel_metaObject(QAbstractItemModel const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QAbstractItemModel_qt_metacast(QAbstractItemModel * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractItemModel_qt_metacall(QAbstractItemModel * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QAbstractItemModel_tr(char const * s, char const * c, int n) {
  return new QString(QAbstractItemModel::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractItemModel_dQAbstractItemModel(QAbstractItemModel * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_hasIndex(QAbstractItemModel const * this_ptr, int row, int column, QModelIndex const * parent) {
  return this_ptr->hasIndex(row, column, *parent);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QAbstractItemModel_index(QAbstractItemModel const * this_ptr, int row, int column, QModelIndex const * parent) {
  return new QModelIndex(this_ptr->index(row, column, *parent));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QAbstractItemModel_parent(QAbstractItemModel const * this_ptr, QModelIndex const * child) {
  return new QModelIndex(this_ptr->parent(*child));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QAbstractItemModel_sibling(QAbstractItemModel const * this_ptr, int row, int column, QModelIndex const * idx) {
  return new QModelIndex(this_ptr->sibling(row, column, *idx));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractItemModel_rowCount(QAbstractItemModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->rowCount(*parent);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractItemModel_columnCount(QAbstractItemModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->columnCount(*parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_hasChildren(QAbstractItemModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->hasChildren(*parent);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QAbstractItemModel_data(QAbstractItemModel const * this_ptr, QModelIndex const * index, int role) {
  return new QVariant(this_ptr->data(*index, role));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_setData(QAbstractItemModel * this_ptr, QModelIndex const * index, QVariant const * value, int role) {
  return this_ptr->setData(*index, *value, role);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QAbstractItemModel_headerData(QAbstractItemModel const * this_ptr, int section, Qt::Orientation orientation, int role) {
  return new QVariant(this_ptr->headerData(section, orientation, role));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_setHeaderData(QAbstractItemModel * this_ptr, int section, Qt::Orientation orientation, QVariant const * value, int role) {
  return this_ptr->setHeaderData(section, orientation, *value, role);
}


RITUAL_EXPORT QMap< int, QVariant > * ctr_qt_core_ffi_QAbstractItemModel_itemData(QAbstractItemModel const * this_ptr, QModelIndex const * index) {
  return new QMap< int, QVariant >(this_ptr->itemData(*index));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_setItemData(QAbstractItemModel * this_ptr, QModelIndex const * index, QMap< int, QVariant > const * roles) {
  return this_ptr->setItemData(*index, *roles);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_clearItemData(QAbstractItemModel * this_ptr, QModelIndex const * index) {
  return this_ptr->clearItemData(*index);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QAbstractItemModel_mimeTypes(QAbstractItemModel const * this_ptr) {
  return new QList< QString >(this_ptr->mimeTypes());
}


RITUAL_EXPORT QMimeData * ctr_qt_core_ffi_QAbstractItemModel_mimeData(QAbstractItemModel const * this_ptr, QList< QModelIndex > const * indexes) {
  return this_ptr->mimeData(*indexes);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_canDropMimeData(QAbstractItemModel const * this_ptr, QMimeData const * data, Qt::DropAction action, int row, int column, QModelIndex const * parent) {
  return this_ptr->canDropMimeData(data, action, row, column, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_dropMimeData(QAbstractItemModel * this_ptr, QMimeData const * data, Qt::DropAction action, int row, int column, QModelIndex const * parent) {
  return this_ptr->dropMimeData(data, action, row, column, *parent);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractItemModel_supportedDropActions(QAbstractItemModel const * this_ptr) {
  return int(this_ptr->supportedDropActions());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractItemModel_supportedDragActions(QAbstractItemModel const * this_ptr) {
  return int(this_ptr->supportedDragActions());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_insertRows(QAbstractItemModel * this_ptr, int row, int count, QModelIndex const * parent) {
  return this_ptr->insertRows(row, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_insertColumns(QAbstractItemModel * this_ptr, int column, int count, QModelIndex const * parent) {
  return this_ptr->insertColumns(column, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_removeRows(QAbstractItemModel * this_ptr, int row, int count, QModelIndex const * parent) {
  return this_ptr->removeRows(row, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_removeColumns(QAbstractItemModel * this_ptr, int column, int count, QModelIndex const * parent) {
  return this_ptr->removeColumns(column, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_moveRows(QAbstractItemModel * this_ptr, QModelIndex const * sourceParent, int sourceRow, int count, QModelIndex const * destinationParent, int destinationChild) {
  return this_ptr->moveRows(*sourceParent, sourceRow, count, *destinationParent, destinationChild);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_moveColumns(QAbstractItemModel * this_ptr, QModelIndex const * sourceParent, int sourceColumn, int count, QModelIndex const * destinationParent, int destinationChild) {
  return this_ptr->moveColumns(*sourceParent, sourceColumn, count, *destinationParent, destinationChild);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_insertRow(QAbstractItemModel * this_ptr, int row, QModelIndex const * parent) {
  return this_ptr->insertRow(row, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_insertColumn(QAbstractItemModel * this_ptr, int column, QModelIndex const * parent) {
  return this_ptr->insertColumn(column, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_removeRow(QAbstractItemModel * this_ptr, int row, QModelIndex const * parent) {
  return this_ptr->removeRow(row, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_removeColumn(QAbstractItemModel * this_ptr, int column, QModelIndex const * parent) {
  return this_ptr->removeColumn(column, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_moveRow(QAbstractItemModel * this_ptr, QModelIndex const * sourceParent, int sourceRow, QModelIndex const * destinationParent, int destinationChild) {
  return this_ptr->moveRow(*sourceParent, sourceRow, *destinationParent, destinationChild);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_moveColumn(QAbstractItemModel * this_ptr, QModelIndex const * sourceParent, int sourceColumn, QModelIndex const * destinationParent, int destinationChild) {
  return this_ptr->moveColumn(*sourceParent, sourceColumn, *destinationParent, destinationChild);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractItemModel_fetchMore(QAbstractItemModel * this_ptr, QModelIndex const * parent) {
  this_ptr->fetchMore(*parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_canFetchMore(QAbstractItemModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->canFetchMore(*parent);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractItemModel_flags(QAbstractItemModel const * this_ptr, QModelIndex const * index) {
  return int(this_ptr->flags(*index));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractItemModel_sort(QAbstractItemModel * this_ptr, int column, Qt::SortOrder order) {
  this_ptr->sort(column, order);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QAbstractItemModel_buddy(QAbstractItemModel const * this_ptr, QModelIndex const * index) {
  return new QModelIndex(this_ptr->buddy(*index));
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QAbstractItemModel_match(QAbstractItemModel const * this_ptr, QModelIndex const * start, int role, QVariant const * value, int hits, int flags) {
  return new QList< QModelIndex >(this_ptr->match(*start, role, *value, hits, QFlags< Qt::MatchFlag >(flags)));
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QAbstractItemModel_span(QAbstractItemModel const * this_ptr, QModelIndex const * index) {
  return new QSize(this_ptr->span(*index));
}


RITUAL_EXPORT QHash< int, QByteArray > * ctr_qt_core_ffi_QAbstractItemModel_roleNames(QAbstractItemModel const * this_ptr) {
  return new QHash< int, QByteArray >(this_ptr->roleNames());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_checkIndex(QAbstractItemModel const * this_ptr, QModelIndex const * index, int options) {
  return this_ptr->checkIndex(*index, QFlags< QAbstractItemModel::CheckIndexOption >(options));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractItemModel_multiData(QAbstractItemModel const * this_ptr, QModelIndex const * index, QModelRoleDataSpan const * roleDataSpan) {
  this_ptr->multiData(*index, *roleDataSpan);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractItemModel_submit(QAbstractItemModel * this_ptr) {
  return this_ptr->submit();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractItemModel_revert(QAbstractItemModel * this_ptr) {
  this_ptr->revert();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAbstractTableModel_metaObject(QAbstractTableModel const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QAbstractTableModel_qt_metacast(QAbstractTableModel * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractTableModel_qt_metacall(QAbstractTableModel * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QAbstractTableModel_tr(char const * s, char const * c, int n) {
  return new QString(QAbstractTableModel::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractTableModel_dQAbstractTableModel(QAbstractTableModel * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QAbstractTableModel_index(QAbstractTableModel const * this_ptr, int row, int column, QModelIndex const * parent) {
  return new QModelIndex(this_ptr->index(row, column, *parent));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QAbstractTableModel_sibling(QAbstractTableModel const * this_ptr, int row, int column, QModelIndex const * idx) {
  return new QModelIndex(this_ptr->sibling(row, column, *idx));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractTableModel_dropMimeData(QAbstractTableModel * this_ptr, QMimeData const * data, Qt::DropAction action, int row, int column, QModelIndex const * parent) {
  return this_ptr->dropMimeData(data, action, row, column, *parent);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractTableModel_flags(QAbstractTableModel const * this_ptr, QModelIndex const * index) {
  return int(this_ptr->flags(*index));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAbstractListModel_metaObject(QAbstractListModel const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QAbstractListModel_qt_metacast(QAbstractListModel * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractListModel_qt_metacall(QAbstractListModel * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QAbstractListModel_tr(char const * s, char const * c, int n) {
  return new QString(QAbstractListModel::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractListModel_dQAbstractListModel(QAbstractListModel * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QAbstractListModel_index(QAbstractListModel const * this_ptr, int row, int column, QModelIndex const * parent) {
  return new QModelIndex(this_ptr->index(row, column, *parent));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QAbstractListModel_sibling(QAbstractListModel const * this_ptr, int row, int column, QModelIndex const * idx) {
  return new QModelIndex(this_ptr->sibling(row, column, *idx));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractListModel_dropMimeData(QAbstractListModel * this_ptr, QMimeData const * data, Qt::DropAction action, int row, int column, QModelIndex const * parent) {
  return this_ptr->dropMimeData(data, action, row, column, *parent);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractListModel_flags(QAbstractListModel const * this_ptr, QModelIndex const * index) {
  return int(this_ptr->flags(*index));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash30(QModelIndex const * index, unsigned long seed) {
  return qHash(*index, seed);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRegisterNormalizedMetaType_QModelIndexList(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QModelIndexList(*arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractNativeEventFilter_dQAbstractNativeEventFilter(QAbstractNativeEventFilter * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractNativeEventFilter_nativeEventFilter(QAbstractNativeEventFilter * this_ptr, QByteArray const * eventType, void * message, long long * result) {
  return this_ptr->nativeEventFilter(*eventType, message, result);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAbstractProxyModel_metaObject(QAbstractProxyModel const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QAbstractProxyModel_qt_metacast(QAbstractProxyModel * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractProxyModel_qt_metacall(QAbstractProxyModel * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QAbstractProxyModel_tr(char const * s, char const * c, int n) {
  return new QString(QAbstractProxyModel::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractProxyModel_dQAbstractProxyModel(QAbstractProxyModel * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractProxyModel_setSourceModel(QAbstractProxyModel * this_ptr, QAbstractItemModel * sourceModel) {
  this_ptr->setSourceModel(sourceModel);
}


RITUAL_EXPORT QAbstractItemModel * ctr_qt_core_ffi_QAbstractProxyModel_sourceModel(QAbstractProxyModel const * this_ptr) {
  return this_ptr->sourceModel();
}


RITUAL_EXPORT QBindable< QAbstractItemModel * > * ctr_qt_core_ffi_QAbstractProxyModel_bindableSourceModel(QAbstractProxyModel * this_ptr) {
  return new QBindable< QAbstractItemModel * >(this_ptr->bindableSourceModel());
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QAbstractProxyModel_mapToSource(QAbstractProxyModel const * this_ptr, QModelIndex const * proxyIndex) {
  return new QModelIndex(this_ptr->mapToSource(*proxyIndex));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QAbstractProxyModel_mapFromSource(QAbstractProxyModel const * this_ptr, QModelIndex const * sourceIndex) {
  return new QModelIndex(this_ptr->mapFromSource(*sourceIndex));
}


RITUAL_EXPORT QItemSelection * ctr_qt_core_ffi_QAbstractProxyModel_mapSelectionToSource(QAbstractProxyModel const * this_ptr, QItemSelection const * selection) {
  return new QItemSelection(this_ptr->mapSelectionToSource(*selection));
}


RITUAL_EXPORT QItemSelection * ctr_qt_core_ffi_QAbstractProxyModel_mapSelectionFromSource(QAbstractProxyModel const * this_ptr, QItemSelection const * selection) {
  return new QItemSelection(this_ptr->mapSelectionFromSource(*selection));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractProxyModel_submit(QAbstractProxyModel * this_ptr) {
  return this_ptr->submit();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractProxyModel_revert(QAbstractProxyModel * this_ptr) {
  this_ptr->revert();
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QAbstractProxyModel_data(QAbstractProxyModel const * this_ptr, QModelIndex const * proxyIndex, int role) {
  return new QVariant(this_ptr->data(*proxyIndex, role));
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QAbstractProxyModel_headerData(QAbstractProxyModel const * this_ptr, int section, Qt::Orientation orientation, int role) {
  return new QVariant(this_ptr->headerData(section, orientation, role));
}


RITUAL_EXPORT QMap< int, QVariant > * ctr_qt_core_ffi_QAbstractProxyModel_itemData(QAbstractProxyModel const * this_ptr, QModelIndex const * index) {
  return new QMap< int, QVariant >(this_ptr->itemData(*index));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractProxyModel_flags(QAbstractProxyModel const * this_ptr, QModelIndex const * index) {
  return int(this_ptr->flags(*index));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractProxyModel_setData(QAbstractProxyModel * this_ptr, QModelIndex const * index, QVariant const * value, int role) {
  return this_ptr->setData(*index, *value, role);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractProxyModel_setItemData(QAbstractProxyModel * this_ptr, QModelIndex const * index, QMap< int, QVariant > const * roles) {
  return this_ptr->setItemData(*index, *roles);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractProxyModel_setHeaderData(QAbstractProxyModel * this_ptr, int section, Qt::Orientation orientation, QVariant const * value, int role) {
  return this_ptr->setHeaderData(section, orientation, *value, role);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractProxyModel_clearItemData(QAbstractProxyModel * this_ptr, QModelIndex const * index) {
  return this_ptr->clearItemData(*index);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QAbstractProxyModel_buddy(QAbstractProxyModel const * this_ptr, QModelIndex const * index) {
  return new QModelIndex(this_ptr->buddy(*index));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractProxyModel_canFetchMore(QAbstractProxyModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->canFetchMore(*parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractProxyModel_fetchMore(QAbstractProxyModel * this_ptr, QModelIndex const * parent) {
  this_ptr->fetchMore(*parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractProxyModel_sort(QAbstractProxyModel * this_ptr, int column, Qt::SortOrder order) {
  this_ptr->sort(column, order);
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QAbstractProxyModel_span(QAbstractProxyModel const * this_ptr, QModelIndex const * index) {
  return new QSize(this_ptr->span(*index));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractProxyModel_hasChildren(QAbstractProxyModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->hasChildren(*parent);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QAbstractProxyModel_sibling(QAbstractProxyModel const * this_ptr, int row, int column, QModelIndex const * idx) {
  return new QModelIndex(this_ptr->sibling(row, column, *idx));
}


RITUAL_EXPORT QMimeData * ctr_qt_core_ffi_QAbstractProxyModel_mimeData(QAbstractProxyModel const * this_ptr, QList< QModelIndex > const * indexes) {
  return this_ptr->mimeData(*indexes);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractProxyModel_canDropMimeData(QAbstractProxyModel const * this_ptr, QMimeData const * data, Qt::DropAction action, int row, int column, QModelIndex const * parent) {
  return this_ptr->canDropMimeData(data, action, row, column, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAbstractProxyModel_dropMimeData(QAbstractProxyModel * this_ptr, QMimeData const * data, Qt::DropAction action, int row, int column, QModelIndex const * parent) {
  return this_ptr->dropMimeData(data, action, row, column, *parent);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QAbstractProxyModel_mimeTypes(QAbstractProxyModel const * this_ptr) {
  return new QList< QString >(this_ptr->mimeTypes());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractProxyModel_supportedDragActions(QAbstractProxyModel const * this_ptr) {
  return int(this_ptr->supportedDragActions());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAbstractProxyModel_supportedDropActions(QAbstractProxyModel const * this_ptr) {
  return int(this_ptr->supportedDropActions());
}


RITUAL_EXPORT QHash< int, QByteArray > * ctr_qt_core_ffi_QAbstractProxyModel_roleNames(QAbstractProxyModel const * this_ptr) {
  return new QHash< int, QByteArray >(this_ptr->roleNames());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QAnimationGroup_metaObject(QAnimationGroup const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QAnimationGroup_qt_metacast(QAnimationGroup * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAnimationGroup_qt_metacall(QAnimationGroup * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QAnimationGroup_tr(char const * s, char const * c, int n) {
  return new QString(QAnimationGroup::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAnimationGroup_dQAnimationGroup(QAnimationGroup * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAbstractAnimation * ctr_qt_core_ffi_QAnimationGroup_animationAt(QAnimationGroup const * this_ptr, int index) {
  return this_ptr->animationAt(index);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAnimationGroup_animationCount(QAnimationGroup const * this_ptr) {
  return this_ptr->animationCount();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QAnimationGroup_indexOfAnimation(QAnimationGroup const * this_ptr, QAbstractAnimation * animation) {
  return this_ptr->indexOfAnimation(animation);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAnimationGroup_addAnimation(QAnimationGroup * this_ptr, QAbstractAnimation * animation) {
  this_ptr->addAnimation(animation);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAnimationGroup_insertAnimation(QAnimationGroup * this_ptr, int index, QAbstractAnimation * animation) {
  this_ptr->insertAnimation(index, animation);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAnimationGroup_removeAnimation(QAnimationGroup * this_ptr, QAbstractAnimation * animation) {
  this_ptr->removeAnimation(animation);
}


RITUAL_EXPORT QAbstractAnimation * ctr_qt_core_ffi_QAnimationGroup_takeAnimation(QAnimationGroup * this_ptr, int index) {
  return this_ptr->takeAnimation(index);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAnimationGroup_clear(QAnimationGroup * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QtTsan_futexAcquire(void * arg1, void * arg2) {
  QtTsan::futexAcquire(arg1, arg2);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QtTsan_futexRelease(void * arg1, void * arg2) {
  QtTsan::futexRelease(arg1, arg2);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QtTsan_mutexPreLock(void * arg1, unsigned int arg2) {
  QtTsan::mutexPreLock(arg1, arg2);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QtTsan_mutexPostLock(void * arg1, unsigned int arg2, int arg3) {
  QtTsan::mutexPostLock(arg1, arg2, arg3);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QtTsan_mutexPreUnlock(void * arg1, unsigned int arg2) {
  QtTsan::mutexPreUnlock(arg1, arg2);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QtTsan_mutexPostUnlock(void * arg1, unsigned int arg2) {
  QtTsan::mutexPostUnlock(arg1, arg2);
}


RITUAL_EXPORT QBasicMutex * ctr_qt_core_ffi_QBasicMutex_QBasicMutex() {
  return new QBasicMutex();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBasicMutex_lock(QBasicMutex * this_ptr) {
  this_ptr->lock();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBasicMutex_unlock(QBasicMutex * this_ptr) {
  this_ptr->unlock();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBasicMutex_tryLock(QBasicMutex * this_ptr) {
  return this_ptr->tryLock();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBasicMutex_try_lock(QBasicMutex * this_ptr) {
  return this_ptr->try_lock();
}


RITUAL_EXPORT QMutex * ctr_qt_core_ffi_QMutex_QMutex() {
  return new QMutex();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMutex_dQMutex(QMutex * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMutex_try_lock(QMutex * this_ptr) {
  return this_ptr->try_lock();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMutex_tryLock(QMutex * this_ptr, int timeout) {
  return this_ptr->tryLock(timeout);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QMutex_tryLock1(QMutex * this_ptr, QDeadlineTimer const * timeout) {
  return this_ptr->tryLock(*timeout);
}


RITUAL_EXPORT QRecursiveMutex * ctr_qt_core_ffi_QRecursiveMutex_QRecursiveMutex() {
  return new QRecursiveMutex();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRecursiveMutex_dQRecursiveMutex(QRecursiveMutex * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRecursiveMutex_lock(QRecursiveMutex * this_ptr) {
  this_ptr->lock();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRecursiveMutex_tryLock(QRecursiveMutex * this_ptr, int timeout) {
  return this_ptr->tryLock(timeout);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRecursiveMutex_tryLock1(QRecursiveMutex * this_ptr, QDeadlineTimer const * timer) {
  return this_ptr->tryLock(*timer);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRecursiveMutex_unlock(QRecursiveMutex * this_ptr) {
  this_ptr->unlock();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRecursiveMutex_try_lock(QRecursiveMutex * this_ptr) {
  return this_ptr->try_lock();
}


RITUAL_EXPORT QBasicTimer * ctr_qt_core_ffi_QBasicTimer_QBasicTimer() {
  return new QBasicTimer();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBasicTimer_dQBasicTimer(QBasicTimer * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBasicTimer_swap(QBasicTimer * this_ptr, QBasicTimer * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBasicTimer_isActive(QBasicTimer const * this_ptr) {
  return this_ptr->isActive();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QBasicTimer_timerId(QBasicTimer const * this_ptr) {
  return this_ptr->timerId();
}


RITUAL_EXPORT Qt::TimerId ctr_qt_core_ffi_QBasicTimer_id(QBasicTimer const * this_ptr) {
  return this_ptr->id();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBasicTimer_start(QBasicTimer * this_ptr, int msec, QObject * obj) {
  this_ptr->start(msec, obj);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBasicTimer_start1(QBasicTimer * this_ptr, int msec, Qt::TimerType timerType, QObject * obj) {
  this_ptr->start(msec, timerType, obj);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBasicTimer_stop(QBasicTimer * this_ptr) {
  this_ptr->stop();
}


RITUAL_EXPORT QEvent * ctr_qt_core_ffi_QEvent_QEvent(QEvent::Type type) {
  return new QEvent(type);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEvent_dQEvent(QEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QEvent::Type ctr_qt_core_ffi_QEvent_type(QEvent const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QEvent_spontaneous(QEvent const * this_ptr) {
  return this_ptr->spontaneous();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEvent_setAccepted(QEvent * this_ptr, bool accepted) {
  this_ptr->setAccepted(accepted);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QEvent_isAccepted(QEvent const * this_ptr) {
  return this_ptr->isAccepted();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEvent_accept(QEvent * this_ptr) {
  this_ptr->accept();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QEvent_ignore(QEvent * this_ptr) {
  this_ptr->ignore();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QEvent_isInputEvent(QEvent const * this_ptr) {
  return this_ptr->isInputEvent();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QEvent_isPointerEvent(QEvent const * this_ptr) {
  return this_ptr->isPointerEvent();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QEvent_isSinglePointEvent(QEvent const * this_ptr) {
  return this_ptr->isSinglePointEvent();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QEvent_registerEventType(int hint) {
  return QEvent::registerEventType(hint);
}


RITUAL_EXPORT QEvent * ctr_qt_core_ffi_QEvent_clone(QEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT QTimerEvent * ctr_qt_core_ffi_QTimerEvent_clone(QTimerEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimerEvent_dQTimerEvent(QTimerEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTimerEvent * ctr_qt_core_ffi_QTimerEvent_QTimerEvent(int timerId) {
  return new QTimerEvent(timerId);
}


RITUAL_EXPORT QTimerEvent * ctr_qt_core_ffi_QTimerEvent_QTimerEvent1(Qt::TimerId timerId) {
  return new QTimerEvent(timerId);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimerEvent_timerId(QTimerEvent const * this_ptr) {
  return this_ptr->timerId();
}


RITUAL_EXPORT Qt::TimerId ctr_qt_core_ffi_QTimerEvent_id(QTimerEvent const * this_ptr) {
  return this_ptr->id();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTimerEvent_matches(QTimerEvent const * this_ptr, QBasicTimer const * timer) {
  return this_ptr->matches(*timer);
}


RITUAL_EXPORT QChildEvent * ctr_qt_core_ffi_QChildEvent_clone(QChildEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QChildEvent_dQChildEvent(QChildEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QChildEvent * ctr_qt_core_ffi_QChildEvent_QChildEvent(QEvent::Type type, QObject * child) {
  return new QChildEvent(type, child);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_QChildEvent_child(QChildEvent const * this_ptr) {
  return this_ptr->child();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChildEvent_added(QChildEvent const * this_ptr) {
  return this_ptr->added();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChildEvent_polished(QChildEvent const * this_ptr) {
  return this_ptr->polished();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QChildEvent_removed(QChildEvent const * this_ptr) {
  return this_ptr->removed();
}


RITUAL_EXPORT QDynamicPropertyChangeEvent * ctr_qt_core_ffi_QDynamicPropertyChangeEvent_clone(QDynamicPropertyChangeEvent const * this_ptr) {
  return this_ptr->clone();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDynamicPropertyChangeEvent_dQDynamicPropertyChangeEvent(QDynamicPropertyChangeEvent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QDynamicPropertyChangeEvent * ctr_qt_core_ffi_QDynamicPropertyChangeEvent_QDynamicPropertyChangeEvent(QByteArray const * name) {
  return new QDynamicPropertyChangeEvent(*name);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QDynamicPropertyChangeEvent_propertyName(QDynamicPropertyChangeEvent const * this_ptr) {
  return new QByteArray(this_ptr->propertyName());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QCoreApplication_metaObject(QCoreApplication const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QCoreApplication_qt_metacast(QCoreApplication * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCoreApplication_qt_metacall(QCoreApplication * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCoreApplication_tr(char const * s, char const * c, int n) {
  return new QString(QCoreApplication::tr(s, c, n));
}


RITUAL_EXPORT QCoreApplication * ctr_qt_core_ffi_QCoreApplication_QCoreApplication(int * argc, char * * argv, int arg3) {
  return new QCoreApplication(*argc, argv, arg3);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_dQCoreApplication(QCoreApplication * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QCoreApplication_arguments() {
  return new QList< QString >(QCoreApplication::arguments());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_setAttribute(Qt::ApplicationAttribute attribute, bool on) {
  QCoreApplication::setAttribute(attribute, on);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCoreApplication_testAttribute(Qt::ApplicationAttribute attribute) {
  return QCoreApplication::testAttribute(attribute);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_setOrganizationDomain(QString const * orgDomain) {
  QCoreApplication::setOrganizationDomain(*orgDomain);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCoreApplication_organizationDomain() {
  return new QString(QCoreApplication::organizationDomain());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_setOrganizationName(QString const * orgName) {
  QCoreApplication::setOrganizationName(*orgName);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCoreApplication_organizationName() {
  return new QString(QCoreApplication::organizationName());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_setApplicationName(QString const * application) {
  QCoreApplication::setApplicationName(*application);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCoreApplication_applicationName() {
  return new QString(QCoreApplication::applicationName());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_setApplicationVersion(QString const * version) {
  QCoreApplication::setApplicationVersion(*version);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCoreApplication_applicationVersion() {
  return new QString(QCoreApplication::applicationVersion());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_setSetuidAllowed(bool allow) {
  QCoreApplication::setSetuidAllowed(allow);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCoreApplication_isSetuidAllowed() {
  return QCoreApplication::isSetuidAllowed();
}


RITUAL_EXPORT QCoreApplication * ctr_qt_core_ffi_QCoreApplication_instance() {
  return QCoreApplication::instance();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCoreApplication_instanceExists() {
  return QCoreApplication::instanceExists();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCoreApplication_exec() {
  return QCoreApplication::exec();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_processEvents(int flags) {
  QCoreApplication::processEvents(QFlags< QEventLoop::ProcessEventsFlag >(flags));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_processEvents1(int flags, int maxtime) {
  QCoreApplication::processEvents(QFlags< QEventLoop::ProcessEventsFlag >(flags), maxtime);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_processEvents2(int flags, QDeadlineTimer const * deadline) {
  QCoreApplication::processEvents(QFlags< QEventLoop::ProcessEventsFlag >(flags), *deadline);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCoreApplication_sendEvent(QObject * receiver, QEvent * event) {
  return QCoreApplication::sendEvent(receiver, event);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_postEvent(QObject * receiver, QEvent * event, int priority) {
  QCoreApplication::postEvent(receiver, event, priority);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_sendPostedEvents(QObject * receiver, int event_type) {
  QCoreApplication::sendPostedEvents(receiver, event_type);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_removePostedEvents(QObject * receiver, int eventType) {
  QCoreApplication::removePostedEvents(receiver, eventType);
}


RITUAL_EXPORT QAbstractEventDispatcher * ctr_qt_core_ffi_QCoreApplication_eventDispatcher() {
  return QCoreApplication::eventDispatcher();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_setEventDispatcher(QAbstractEventDispatcher * eventDispatcher) {
  QCoreApplication::setEventDispatcher(eventDispatcher);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCoreApplication_notify(QCoreApplication * this_ptr, QObject * arg1, QEvent * arg2) {
  return this_ptr->notify(arg1, arg2);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCoreApplication_startingUp() {
  return QCoreApplication::startingUp();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCoreApplication_closingDown() {
  return QCoreApplication::closingDown();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCoreApplication_applicationDirPath() {
  return new QString(QCoreApplication::applicationDirPath());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCoreApplication_applicationFilePath() {
  return new QString(QCoreApplication::applicationFilePath());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCoreApplication_applicationPid() {
  return QCoreApplication::applicationPid();
}


RITUAL_EXPORT Qt::PermissionStatus ctr_qt_core_ffi_QCoreApplication_checkPermission(QCoreApplication * this_ptr, QPermission const * permission) {
  return this_ptr->checkPermission(*permission);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_setLibraryPaths(QList< QString > const * arg1) {
  QCoreApplication::setLibraryPaths(*arg1);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QCoreApplication_libraryPaths() {
  return new QList< QString >(QCoreApplication::libraryPaths());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_addLibraryPath(QString const * arg1) {
  QCoreApplication::addLibraryPath(*arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_removeLibraryPath(QString const * arg1) {
  QCoreApplication::removeLibraryPath(*arg1);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCoreApplication_installTranslator(QTranslator * messageFile) {
  return QCoreApplication::installTranslator(messageFile);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCoreApplication_removeTranslator(QTranslator * messageFile) {
  return QCoreApplication::removeTranslator(messageFile);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCoreApplication_translate(char const * context, char const * key, char const * disambiguation, int n) {
  return new QString(QCoreApplication::translate(context, key, disambiguation, n));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_installNativeEventFilter(QCoreApplication * this_ptr, QAbstractNativeEventFilter * filterObj) {
  this_ptr->installNativeEventFilter(filterObj);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_removeNativeEventFilter(QCoreApplication * this_ptr, QAbstractNativeEventFilter * filterObj) {
  this_ptr->removeNativeEventFilter(filterObj);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCoreApplication_isQuitLockEnabled() {
  return QCoreApplication::isQuitLockEnabled();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_setQuitLockEnabled(bool enabled) {
  QCoreApplication::setQuitLockEnabled(enabled);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_quit() {
  QCoreApplication::quit();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCoreApplication_exit(int retcode) {
  QCoreApplication::exit(retcode);
}


RITUAL_EXPORT void ctr_qt_core_ffi_qAddPreRoutine(void (*arg1)()) {
  qAddPreRoutine(arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_qAddPostRoutine(void (*arg1)()) {
  qAddPostRoutine(arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_qRemovePostRoutine(void (*arg1)()) {
  qRemovePostRoutine(arg1);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_qAppName() {
  return new QString(qAppName());
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QAssociativeIterator_key(QAssociativeIterator const * this_ptr) {
  return new QVariant(this_ptr->key());
}


RITUAL_EXPORT QVariantRef< QAssociativeIterator > * ctr_qt_core_ffi_QAssociativeIterator_value(QAssociativeIterator const * this_ptr) {
  return new QVariantRef< QAssociativeIterator >(this_ptr->value());
}


RITUAL_EXPORT QVariantRef< QAssociativeIterator > * ctr_qt_core_ffi_QAssociativeIterator_operator_(QAssociativeIterator const * this_ptr) {
  return new QVariantRef< QAssociativeIterator >(this_ptr->operator*());
}


RITUAL_EXPORT QVariantPointer< QAssociativeIterator > * ctr_qt_core_ffi_QAssociativeIterator_operator__(QAssociativeIterator const * this_ptr) {
  return new QVariantPointer< QAssociativeIterator >(this_ptr->operator->());
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QAssociativeConstIterator_key(QAssociativeConstIterator const * this_ptr) {
  return new QVariant(this_ptr->key());
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QAssociativeConstIterator_value(QAssociativeConstIterator const * this_ptr) {
  return new QVariant(this_ptr->value());
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QAssociativeConstIterator_operator_(QAssociativeConstIterator const * this_ptr) {
  return new QVariant(this_ptr->operator*());
}


RITUAL_EXPORT QVariantConstPointer * ctr_qt_core_ffi_QAssociativeConstIterator_operator__(QAssociativeConstIterator const * this_ptr) {
  return new QVariantConstPointer(this_ptr->operator->());
}


RITUAL_EXPORT QAssociativeIterable * ctr_qt_core_ffi_QAssociativeIterable_QAssociativeIterable() {
  return new QAssociativeIterable();
}


RITUAL_EXPORT QAssociativeIterable * ctr_qt_core_ffi_QAssociativeIterable_QAssociativeIterable1(QMetaAssociation const * metaAssociation, QMetaType const * metaType, void * iterable) {
  return new QAssociativeIterable(*metaAssociation, *metaType, iterable);
}


RITUAL_EXPORT QAssociativeIterable * ctr_qt_core_ffi_QAssociativeIterable_QAssociativeIterable2(QMetaAssociation const * metaAssociation, QMetaType const * metaType, void const * iterable) {
  return new QAssociativeIterable(*metaAssociation, *metaType, iterable);
}


RITUAL_EXPORT QTaggedIterator< QAssociativeConstIterator, void > * ctr_qt_core_ffi_QAssociativeIterable_begin(QAssociativeIterable const * this_ptr) {
  return new QTaggedIterator< QAssociativeConstIterator, void >(this_ptr->begin());
}


RITUAL_EXPORT QTaggedIterator< QAssociativeConstIterator, void > * ctr_qt_core_ffi_QAssociativeIterable_end(QAssociativeIterable const * this_ptr) {
  return new QTaggedIterator< QAssociativeConstIterator, void >(this_ptr->end());
}


RITUAL_EXPORT QTaggedIterator< QAssociativeConstIterator, void > * ctr_qt_core_ffi_QAssociativeIterable_constBegin(QAssociativeIterable const * this_ptr) {
  return new QTaggedIterator< QAssociativeConstIterator, void >(this_ptr->constBegin());
}


RITUAL_EXPORT QTaggedIterator< QAssociativeConstIterator, void > * ctr_qt_core_ffi_QAssociativeIterable_constEnd(QAssociativeIterable const * this_ptr) {
  return new QTaggedIterator< QAssociativeConstIterator, void >(this_ptr->constEnd());
}


RITUAL_EXPORT QTaggedIterator< QAssociativeIterator, void > * ctr_qt_core_ffi_QAssociativeIterable_mutableBegin(QAssociativeIterable * this_ptr) {
  return new QTaggedIterator< QAssociativeIterator, void >(this_ptr->mutableBegin());
}


RITUAL_EXPORT QTaggedIterator< QAssociativeIterator, void > * ctr_qt_core_ffi_QAssociativeIterable_mutableEnd(QAssociativeIterable * this_ptr) {
  return new QTaggedIterator< QAssociativeIterator, void >(this_ptr->mutableEnd());
}


RITUAL_EXPORT QTaggedIterator< QAssociativeConstIterator, void > * ctr_qt_core_ffi_QAssociativeIterable_find(QAssociativeIterable const * this_ptr, QVariant const * key) {
  return new QTaggedIterator< QAssociativeConstIterator, void >(this_ptr->find(*key));
}


RITUAL_EXPORT QTaggedIterator< QAssociativeConstIterator, void > * ctr_qt_core_ffi_QAssociativeIterable_constFind(QAssociativeIterable const * this_ptr, QVariant const * key) {
  return new QTaggedIterator< QAssociativeConstIterator, void >(this_ptr->constFind(*key));
}


RITUAL_EXPORT QTaggedIterator< QAssociativeIterator, void > * ctr_qt_core_ffi_QAssociativeIterable_mutableFind(QAssociativeIterable * this_ptr, QVariant const * key) {
  return new QTaggedIterator< QAssociativeIterator, void >(this_ptr->mutableFind(*key));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QAssociativeIterable_containsKey(QAssociativeIterable * this_ptr, QVariant const * key) {
  return this_ptr->containsKey(*key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAssociativeIterable_insertKey(QAssociativeIterable * this_ptr, QVariant const * key) {
  this_ptr->insertKey(*key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAssociativeIterable_removeKey(QAssociativeIterable * this_ptr, QVariant const * key) {
  this_ptr->removeKey(*key);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QAssociativeIterable_value(QAssociativeIterable const * this_ptr, QVariant const * key) {
  return new QVariant(this_ptr->value(*key));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAssociativeIterable_setValue(QAssociativeIterable * this_ptr, QVariant const * key, QVariant const * mapped) {
  this_ptr->setValue(*key, *mapped);
}


RITUAL_EXPORT QBitArray * ctr_qt_core_ffi_QBitArray_QBitArray() {
  return new QBitArray();
}


RITUAL_EXPORT QBitArray * ctr_qt_core_ffi_QBitArray_QBitArray1(long long size, bool val) {
  return new QBitArray(size, val);
}


RITUAL_EXPORT QBitArray * ctr_qt_core_ffi_QBitArray_QBitArray2(QBitArray const * other) {
  return new QBitArray(*other);
}


RITUAL_EXPORT QBitArray * ctr_qt_core_ffi_QBitArray_operator_(QBitArray * this_ptr, QBitArray const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBitArray_swap(QBitArray * this_ptr, QBitArray * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QBitArray_size(QBitArray const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QBitArray_count(QBitArray const * this_ptr) {
  return this_ptr->count();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QBitArray_count1(QBitArray const * this_ptr, bool on) {
  return this_ptr->count(on);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBitArray_isEmpty(QBitArray const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBitArray_isNull(QBitArray const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBitArray_resize(QBitArray * this_ptr, long long size) {
  this_ptr->resize(size);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBitArray_detach(QBitArray * this_ptr) {
  this_ptr->detach();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBitArray_isDetached(QBitArray const * this_ptr) {
  return this_ptr->isDetached();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBitArray_clear(QBitArray * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBitArray_testBit(QBitArray const * this_ptr, long long i) {
  return this_ptr->testBit(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBitArray_setBit(QBitArray * this_ptr, long long i) {
  this_ptr->setBit(i);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBitArray_setBit1(QBitArray * this_ptr, long long i, bool val) {
  this_ptr->setBit(i, val);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBitArray_clearBit(QBitArray * this_ptr, long long i) {
  this_ptr->clearBit(i);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBitArray_toggleBit(QBitArray * this_ptr, long long i) {
  return this_ptr->toggleBit(i);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBitArray_at(QBitArray const * this_ptr, long long i) {
  return this_ptr->at(i);
}


RITUAL_EXPORT QBitRef * ctr_qt_core_ffi_QBitArray_operator__(QBitArray * this_ptr, long long i) {
  return new QBitRef(this_ptr->operator[](i));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBitArray_operator__1(QBitArray const * this_ptr, long long i) {
  return this_ptr->operator[](i);
}


RITUAL_EXPORT QBitArray * ctr_qt_core_ffi_QBitArray_operator__5(QBitArray * this_ptr, QBitArray const * arg1) {
  return &this_ptr->operator&=(*arg1);
}


RITUAL_EXPORT QBitArray * ctr_qt_core_ffi_QBitArray_operator__6(QBitArray * this_ptr, QBitArray const * arg1) {
  return &this_ptr->operator|=(*arg1);
}


RITUAL_EXPORT QBitArray * ctr_qt_core_ffi_QBitArray_operator__7(QBitArray * this_ptr, QBitArray const * arg1) {
  return &this_ptr->operator^=(*arg1);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBitArray_fill(QBitArray * this_ptr, bool aval, long long asize) {
  return this_ptr->fill(aval, asize);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBitArray_fill1(QBitArray * this_ptr, bool val, long long first, long long last) {
  this_ptr->fill(val, first, last);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBitArray_truncate(QBitArray * this_ptr, long long pos) {
  this_ptr->truncate(pos);
}


RITUAL_EXPORT char const * ctr_qt_core_ffi_QBitArray_bits(QBitArray const * this_ptr) {
  return this_ptr->bits();
}


RITUAL_EXPORT QBitArray * ctr_qt_core_ffi_QBitArray_fromBits(char const * data, long long len) {
  return new QBitArray(QBitArray::fromBits(data, len));
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QBitArray_toUInt32(QBitArray const * this_ptr, QSysInfo::Endian endianness, bool * ok) {
  return this_ptr->toUInt32(endianness, ok);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBitRef_operator_bool(QBitRef const * this_ptr) {
  return this_ptr->operator bool();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBitRef_operator_(QBitRef const * this_ptr) {
  return this_ptr->operator!();
}


RITUAL_EXPORT QBitRef * ctr_qt_core_ffi_QBitRef_operator_1(QBitRef * this_ptr, QBitRef const * val) {
  return &this_ptr->operator=(*val);
}


RITUAL_EXPORT QBitRef * ctr_qt_core_ffi_QBitRef_operator_2(QBitRef * this_ptr, bool val) {
  return &this_ptr->operator=(val);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__20(QDataStream * arg1, QBitArray const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__21(QDataStream * arg1, QBitArray * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__22(QDebug const * arg1, QBitArray const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QIODevice_metaObject(QIODevice const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QIODevice_qt_metacast(QIODevice * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QIODevice_qt_metacall(QIODevice * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QIODevice_tr(char const * s, char const * c, int n) {
  return new QString(QIODevice::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QIODevice_dQIODevice(QIODevice * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT int ctr_qt_core_ffi_QIODevice_openMode(QIODevice const * this_ptr) {
  return int(this_ptr->openMode());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QIODevice_setTextModeEnabled(QIODevice * this_ptr, bool enabled) {
  this_ptr->setTextModeEnabled(enabled);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_isTextModeEnabled(QIODevice const * this_ptr) {
  return this_ptr->isTextModeEnabled();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_isOpen(QIODevice const * this_ptr) {
  return this_ptr->isOpen();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_isReadable(QIODevice const * this_ptr) {
  return this_ptr->isReadable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_isWritable(QIODevice const * this_ptr) {
  return this_ptr->isWritable();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_isSequential(QIODevice const * this_ptr) {
  return this_ptr->isSequential();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QIODevice_readChannelCount(QIODevice const * this_ptr) {
  return this_ptr->readChannelCount();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QIODevice_writeChannelCount(QIODevice const * this_ptr) {
  return this_ptr->writeChannelCount();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QIODevice_currentReadChannel(QIODevice const * this_ptr) {
  return this_ptr->currentReadChannel();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QIODevice_setCurrentReadChannel(QIODevice * this_ptr, int channel) {
  this_ptr->setCurrentReadChannel(channel);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QIODevice_currentWriteChannel(QIODevice const * this_ptr) {
  return this_ptr->currentWriteChannel();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QIODevice_setCurrentWriteChannel(QIODevice * this_ptr, int channel) {
  this_ptr->setCurrentWriteChannel(channel);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_open(QIODevice * this_ptr, int mode) {
  return this_ptr->open(QFlags< QIODeviceBase::OpenModeFlag >(mode));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QIODevice_close(QIODevice * this_ptr) {
  this_ptr->close();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QIODevice_pos(QIODevice const * this_ptr) {
  return this_ptr->pos();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QIODevice_size(QIODevice const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_seek(QIODevice * this_ptr, long long pos) {
  return this_ptr->seek(pos);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_atEnd(QIODevice const * this_ptr) {
  return this_ptr->atEnd();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_reset(QIODevice * this_ptr) {
  return this_ptr->reset();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QIODevice_bytesAvailable(QIODevice const * this_ptr) {
  return this_ptr->bytesAvailable();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QIODevice_bytesToWrite(QIODevice const * this_ptr) {
  return this_ptr->bytesToWrite();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QIODevice_read(QIODevice * this_ptr, char * data, long long maxlen) {
  return this_ptr->read(data, maxlen);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QIODevice_read1(QIODevice * this_ptr, long long maxlen) {
  return new QByteArray(this_ptr->read(maxlen));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QIODevice_readAll(QIODevice * this_ptr) {
  return new QByteArray(this_ptr->readAll());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QIODevice_readLine(QIODevice * this_ptr, char * data, long long maxlen) {
  return this_ptr->readLine(data, maxlen);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QIODevice_readLine1(QIODevice * this_ptr, long long maxlen) {
  return new QByteArray(this_ptr->readLine(maxlen));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_readLineInto(QIODevice * this_ptr, QByteArray * result, long long maxlen) {
  return this_ptr->readLineInto(result, maxlen);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_canReadLine(QIODevice const * this_ptr) {
  return this_ptr->canReadLine();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QIODevice_startTransaction(QIODevice * this_ptr) {
  this_ptr->startTransaction();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QIODevice_commitTransaction(QIODevice * this_ptr) {
  this_ptr->commitTransaction();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QIODevice_rollbackTransaction(QIODevice * this_ptr) {
  this_ptr->rollbackTransaction();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_isTransactionStarted(QIODevice const * this_ptr) {
  return this_ptr->isTransactionStarted();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QIODevice_write(QIODevice * this_ptr, char const * data, long long len) {
  return this_ptr->write(data, len);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QIODevice_write1(QIODevice * this_ptr, char const * data) {
  return this_ptr->write(data);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QIODevice_write2(QIODevice * this_ptr, QByteArray const * data) {
  return this_ptr->write(*data);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QIODevice_peek(QIODevice * this_ptr, char * data, long long maxlen) {
  return this_ptr->peek(data, maxlen);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QIODevice_peek1(QIODevice * this_ptr, long long maxlen) {
  return new QByteArray(this_ptr->peek(maxlen));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QIODevice_skip(QIODevice * this_ptr, long long maxSize) {
  return this_ptr->skip(maxSize);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_waitForReadyRead(QIODevice * this_ptr, int msecs) {
  return this_ptr->waitForReadyRead(msecs);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_waitForBytesWritten(QIODevice * this_ptr, int msecs) {
  return this_ptr->waitForBytesWritten(msecs);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QIODevice_ungetChar(QIODevice * this_ptr, char c) {
  this_ptr->ungetChar(c);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_putChar(QIODevice * this_ptr, char c) {
  return this_ptr->putChar(c);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QIODevice_getChar(QIODevice * this_ptr, char * c) {
  return this_ptr->getChar(c);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QIODevice_errorString(QIODevice const * this_ptr) {
  return new QString(this_ptr->errorString());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QBuffer_metaObject(QBuffer const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QBuffer_qt_metacast(QBuffer * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QBuffer_qt_metacall(QBuffer * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QBuffer_tr(char const * s, char const * c, int n) {
  return new QString(QBuffer::tr(s, c, n));
}


RITUAL_EXPORT QBuffer * ctr_qt_core_ffi_QBuffer_QBuffer(QObject * parent) {
  return new QBuffer(parent);
}


RITUAL_EXPORT QBuffer * ctr_qt_core_ffi_QBuffer_QBuffer1(QByteArray * buf, QObject * parent) {
  return new QBuffer(buf, parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBuffer_dQBuffer(QBuffer * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QBuffer_buffer(QBuffer * this_ptr) {
  return &this_ptr->buffer();
}


RITUAL_EXPORT QByteArray const * ctr_qt_core_ffi_QBuffer_buffer1(QBuffer const * this_ptr) {
  return &this_ptr->buffer();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBuffer_setBuffer(QBuffer * this_ptr, QByteArray * a) {
  this_ptr->setBuffer(a);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBuffer_setData(QBuffer * this_ptr, QByteArray const * data) {
  this_ptr->setData(*data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBuffer_setData1(QBuffer * this_ptr, char const * data, long long len) {
  this_ptr->setData(data, len);
}


RITUAL_EXPORT QByteArray const * ctr_qt_core_ffi_QBuffer_data(QBuffer const * this_ptr) {
  return &this_ptr->data();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBuffer_open(QBuffer * this_ptr, int openMode) {
  return this_ptr->open(QFlags< QIODeviceBase::OpenModeFlag >(openMode));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBuffer_close(QBuffer * this_ptr) {
  this_ptr->close();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QBuffer_size(QBuffer const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QBuffer_pos(QBuffer const * this_ptr) {
  return this_ptr->pos();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBuffer_seek(QBuffer * this_ptr, long long off) {
  return this_ptr->seek(off);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBuffer_atEnd(QBuffer const * this_ptr) {
  return this_ptr->atEnd();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QBuffer_canReadLine(QBuffer const * this_ptr) {
  return this_ptr->canReadLine();
}


RITUAL_EXPORT QByteArrayMatcher * ctr_qt_core_ffi_QByteArrayMatcher_QByteArrayMatcher() {
  return new QByteArrayMatcher();
}


RITUAL_EXPORT QByteArrayMatcher * ctr_qt_core_ffi_QByteArrayMatcher_QByteArrayMatcher1(QByteArray const * pattern) {
  return new QByteArrayMatcher(*pattern);
}


RITUAL_EXPORT QByteArrayMatcher * ctr_qt_core_ffi_QByteArrayMatcher_QByteArrayMatcher2(QByteArrayView const * pattern) {
  return new QByteArrayMatcher(*pattern);
}


RITUAL_EXPORT QByteArrayMatcher * ctr_qt_core_ffi_QByteArrayMatcher_QByteArrayMatcher3(char const * pattern, long long length) {
  return new QByteArrayMatcher(pattern, length);
}


RITUAL_EXPORT QByteArrayMatcher * ctr_qt_core_ffi_QByteArrayMatcher_QByteArrayMatcher4(QByteArrayMatcher const * other) {
  return new QByteArrayMatcher(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArrayMatcher_dQByteArrayMatcher(QByteArrayMatcher * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QByteArrayMatcher * ctr_qt_core_ffi_QByteArrayMatcher_operator_(QByteArrayMatcher * this_ptr, QByteArrayMatcher const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArrayMatcher_setPattern(QByteArrayMatcher * this_ptr, QByteArray const * pattern) {
  this_ptr->setPattern(*pattern);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArrayMatcher_indexIn(QByteArrayMatcher const * this_ptr, char const * str, long long len, long long from) {
  return this_ptr->indexIn(str, len, from);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QByteArrayMatcher_indexIn1(QByteArrayMatcher const * this_ptr, QByteArrayView const * data, long long from) {
  return this_ptr->indexIn(*data, from);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QByteArrayMatcher_pattern(QByteArrayMatcher const * this_ptr) {
  return new QByteArray(this_ptr->pattern());
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash31(QLocale const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QLocale_QLocale() {
  return new QLocale();
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QLocale_QLocale1(QString const * name) {
  return new QLocale(*name);
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QLocale_QLocale2(QStringView const * name) {
  return new QLocale(*name);
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QLocale_QLocale3(QLocale::Language language, QLocale::Country territory) {
  return new QLocale(language, territory);
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QLocale_QLocale4(QLocale::Language language, QLocale::Script script, QLocale::Country territory) {
  return new QLocale(language, script, territory);
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QLocale_QLocale5(QLocale const * other) {
  return new QLocale(*other);
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QLocale_operator_1(QLocale * this_ptr, QLocale const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLocale_dQLocale(QLocale * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLocale_swap(QLocale * this_ptr, QLocale * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QLocale::Language ctr_qt_core_ffi_QLocale_language(QLocale const * this_ptr) {
  return this_ptr->language();
}


RITUAL_EXPORT QLocale::Script ctr_qt_core_ffi_QLocale_script(QLocale const * this_ptr) {
  return this_ptr->script();
}


RITUAL_EXPORT QLocale::Country ctr_qt_core_ffi_QLocale_territory(QLocale const * this_ptr) {
  return this_ptr->territory();
}


RITUAL_EXPORT QLocale::Country ctr_qt_core_ffi_QLocale_country(QLocale const * this_ptr) {
  return this_ptr->country();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_name(QLocale const * this_ptr, QLocale::TagSeparator separator) {
  return new QString(this_ptr->name(separator));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_bcp47Name(QLocale const * this_ptr, QLocale::TagSeparator separator) {
  return new QString(this_ptr->bcp47Name(separator));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_nativeLanguageName(QLocale const * this_ptr) {
  return new QString(this_ptr->nativeLanguageName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_nativeTerritoryName(QLocale const * this_ptr) {
  return new QString(this_ptr->nativeTerritoryName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_nativeCountryName(QLocale const * this_ptr) {
  return new QString(this_ptr->nativeCountryName());
}


RITUAL_EXPORT short ctr_qt_core_ffi_QLocale_toShort(QLocale const * this_ptr, QString const * s, bool * ok) {
  return this_ptr->toShort(*s, ok);
}


RITUAL_EXPORT unsigned short ctr_qt_core_ffi_QLocale_toUShort(QLocale const * this_ptr, QString const * s, bool * ok) {
  return this_ptr->toUShort(*s, ok);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLocale_toInt(QLocale const * this_ptr, QString const * s, bool * ok) {
  return this_ptr->toInt(*s, ok);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QLocale_toUInt(QLocale const * this_ptr, QString const * s, bool * ok) {
  return this_ptr->toUInt(*s, ok);
}


RITUAL_EXPORT long ctr_qt_core_ffi_QLocale_toLong(QLocale const * this_ptr, QString const * s, bool * ok) {
  return this_ptr->toLong(*s, ok);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QLocale_toULong(QLocale const * this_ptr, QString const * s, bool * ok) {
  return this_ptr->toULong(*s, ok);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLocale_toLongLong(QLocale const * this_ptr, QString const * s, bool * ok) {
  return this_ptr->toLongLong(*s, ok);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QLocale_toULongLong(QLocale const * this_ptr, QString const * s, bool * ok) {
  return this_ptr->toULongLong(*s, ok);
}


RITUAL_EXPORT float ctr_qt_core_ffi_QLocale_toFloat(QLocale const * this_ptr, QString const * s, bool * ok) {
  return this_ptr->toFloat(*s, ok);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QLocale_toDouble(QLocale const * this_ptr, QString const * s, bool * ok) {
  return this_ptr->toDouble(*s, ok);
}


RITUAL_EXPORT short ctr_qt_core_ffi_QLocale_toShort1(QLocale const * this_ptr, QStringView const * s, bool * ok) {
  return this_ptr->toShort(*s, ok);
}


RITUAL_EXPORT unsigned short ctr_qt_core_ffi_QLocale_toUShort1(QLocale const * this_ptr, QStringView const * s, bool * ok) {
  return this_ptr->toUShort(*s, ok);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLocale_toInt1(QLocale const * this_ptr, QStringView const * s, bool * ok) {
  return this_ptr->toInt(*s, ok);
}


RITUAL_EXPORT unsigned int ctr_qt_core_ffi_QLocale_toUInt1(QLocale const * this_ptr, QStringView const * s, bool * ok) {
  return this_ptr->toUInt(*s, ok);
}


RITUAL_EXPORT long ctr_qt_core_ffi_QLocale_toLong1(QLocale const * this_ptr, QStringView const * s, bool * ok) {
  return this_ptr->toLong(*s, ok);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QLocale_toULong1(QLocale const * this_ptr, QStringView const * s, bool * ok) {
  return this_ptr->toULong(*s, ok);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QLocale_toLongLong1(QLocale const * this_ptr, QStringView const * s, bool * ok) {
  return this_ptr->toLongLong(*s, ok);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QLocale_toULongLong1(QLocale const * this_ptr, QStringView const * s, bool * ok) {
  return this_ptr->toULongLong(*s, ok);
}


RITUAL_EXPORT float ctr_qt_core_ffi_QLocale_toFloat1(QLocale const * this_ptr, QStringView const * s, bool * ok) {
  return this_ptr->toFloat(*s, ok);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QLocale_toDouble1(QLocale const * this_ptr, QStringView const * s, bool * ok) {
  return this_ptr->toDouble(*s, ok);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString(QLocale const * this_ptr, long long i) {
  return new QString(this_ptr->toString(i));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString1(QLocale const * this_ptr, unsigned long long i) {
  return new QString(this_ptr->toString(i));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString2(QLocale const * this_ptr, long i) {
  return new QString(this_ptr->toString(i));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString3(QLocale const * this_ptr, unsigned long i) {
  return new QString(this_ptr->toString(i));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString4(QLocale const * this_ptr, short i) {
  return new QString(this_ptr->toString(i));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString5(QLocale const * this_ptr, unsigned short i) {
  return new QString(this_ptr->toString(i));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString6(QLocale const * this_ptr, int i) {
  return new QString(this_ptr->toString(i));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString7(QLocale const * this_ptr, unsigned int i) {
  return new QString(this_ptr->toString(i));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString8(QLocale const * this_ptr, long long number, int fieldWidth, char32_t fillChar) {
  return new QString(this_ptr->toString(number, fieldWidth, fillChar));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString9(QLocale const * this_ptr, unsigned long long number, int fieldWidth, char32_t fillChar) {
  return new QString(this_ptr->toString(number, fieldWidth, fillChar));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString10(QLocale const * this_ptr, int number, int fieldWidth, char32_t fillChar) {
  return new QString(this_ptr->toString(number, fieldWidth, fillChar));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString11(QLocale const * this_ptr, unsigned int number, int fieldWidth, char32_t fillChar) {
  return new QString(this_ptr->toString(number, fieldWidth, fillChar));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString12(QLocale const * this_ptr, long number, int fieldWidth, char32_t fillChar) {
  return new QString(this_ptr->toString(number, fieldWidth, fillChar));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString13(QLocale const * this_ptr, unsigned long number, int fieldWidth, char32_t fillChar) {
  return new QString(this_ptr->toString(number, fieldWidth, fillChar));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString14(QLocale const * this_ptr, short number, int fieldWidth, char32_t fillChar) {
  return new QString(this_ptr->toString(number, fieldWidth, fillChar));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString15(QLocale const * this_ptr, unsigned short number, int fieldWidth, char32_t fillChar) {
  return new QString(this_ptr->toString(number, fieldWidth, fillChar));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString16(QLocale const * this_ptr, double f, char format, int precision) {
  return new QString(this_ptr->toString(f, format, precision));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString17(QLocale const * this_ptr, float f, char format, int precision) {
  return new QString(this_ptr->toString(f, format, precision));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString18(QLocale const * this_ptr, QDate const * date, QString const * format) {
  return new QString(this_ptr->toString(*date, *format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString19(QLocale const * this_ptr, QTime const * time, QString const * format) {
  return new QString(this_ptr->toString(*time, *format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString20(QLocale const * this_ptr, QDateTime const * dateTime, QString const * format) {
  return new QString(this_ptr->toString(*dateTime, *format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString21(QLocale const * this_ptr, QDate const * date, QStringView const * format) {
  return new QString(this_ptr->toString(*date, *format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString22(QLocale const * this_ptr, QTime const * time, QStringView const * format) {
  return new QString(this_ptr->toString(*time, *format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString23(QLocale const * this_ptr, QDateTime const * dateTime, QStringView const * format) {
  return new QString(this_ptr->toString(*dateTime, *format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString24(QLocale const * this_ptr, QDate const * date, QLocale::FormatType format) {
  return new QString(this_ptr->toString(*date, format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString25(QLocale const * this_ptr, QTime const * time, QLocale::FormatType format) {
  return new QString(this_ptr->toString(*time, format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString26(QLocale const * this_ptr, QDateTime const * dateTime, QLocale::FormatType format) {
  return new QString(this_ptr->toString(*dateTime, format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString27(QLocale const * this_ptr, QDate const * date, QStringView const * format, QCalendar const * cal) {
  return new QString(this_ptr->toString(*date, *format, *cal));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString28(QLocale const * this_ptr, QDate const * date, QLocale::FormatType format, QCalendar const * cal) {
  return new QString(this_ptr->toString(*date, format, *cal));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString29(QLocale const * this_ptr, QDateTime const * dateTime, QLocale::FormatType format, QCalendar const * cal) {
  return new QString(this_ptr->toString(*dateTime, format, *cal));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toString30(QLocale const * this_ptr, QDateTime const * dateTime, QStringView const * format, QCalendar const * cal) {
  return new QString(this_ptr->toString(*dateTime, *format, *cal));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_dateFormat(QLocale const * this_ptr, QLocale::FormatType format) {
  return new QString(this_ptr->dateFormat(format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_timeFormat(QLocale const * this_ptr, QLocale::FormatType format) {
  return new QString(this_ptr->timeFormat(format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_dateTimeFormat(QLocale const * this_ptr, QLocale::FormatType format) {
  return new QString(this_ptr->dateTimeFormat(format));
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QLocale_toTime(QLocale const * this_ptr, QString const * string, QLocale::FormatType arg2) {
  return new QTime(this_ptr->toTime(*string, arg2));
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QLocale_toTime1(QLocale const * this_ptr, QString const * string, QString const * format) {
  return new QTime(this_ptr->toTime(*string, *format));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QLocale_toDate(QLocale const * this_ptr, QString const * string, QLocale::FormatType arg2, int baseYear) {
  return new QDate(this_ptr->toDate(*string, arg2, baseYear));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QLocale_toDate1(QLocale const * this_ptr, QString const * string, QString const * format, int baseYear) {
  return new QDate(this_ptr->toDate(*string, *format, baseYear));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QLocale_toDateTime(QLocale const * this_ptr, QString const * string, QLocale::FormatType format, int baseYear) {
  return new QDateTime(this_ptr->toDateTime(*string, format, baseYear));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QLocale_toDateTime1(QLocale const * this_ptr, QString const * string, QString const * format, int baseYear) {
  return new QDateTime(this_ptr->toDateTime(*string, *format, baseYear));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QLocale_toDate2(QLocale const * this_ptr, QString const * string, QLocale::FormatType format, QCalendar const * cal, int baseYear) {
  return new QDate(this_ptr->toDate(*string, format, *cal, baseYear));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QLocale_toDate3(QLocale const * this_ptr, QString const * string, QString const * format, QCalendar const * cal, int baseYear) {
  return new QDate(this_ptr->toDate(*string, *format, *cal, baseYear));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QLocale_toDateTime2(QLocale const * this_ptr, QString const * string, QLocale::FormatType format, QCalendar const * cal, int baseYear) {
  return new QDateTime(this_ptr->toDateTime(*string, format, *cal, baseYear));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QLocale_toDateTime3(QLocale const * this_ptr, QString const * string, QString const * format, QCalendar const * cal, int baseYear) {
  return new QDateTime(this_ptr->toDateTime(*string, *format, *cal, baseYear));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_decimalPoint(QLocale const * this_ptr) {
  return new QString(this_ptr->decimalPoint());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_groupSeparator(QLocale const * this_ptr) {
  return new QString(this_ptr->groupSeparator());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_percent(QLocale const * this_ptr) {
  return new QString(this_ptr->percent());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_zeroDigit(QLocale const * this_ptr) {
  return new QString(this_ptr->zeroDigit());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_negativeSign(QLocale const * this_ptr) {
  return new QString(this_ptr->negativeSign());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_positiveSign(QLocale const * this_ptr) {
  return new QString(this_ptr->positiveSign());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_exponential(QLocale const * this_ptr) {
  return new QString(this_ptr->exponential());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_monthName(QLocale const * this_ptr, int arg1, QLocale::FormatType format) {
  return new QString(this_ptr->monthName(arg1, format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_standaloneMonthName(QLocale const * this_ptr, int arg1, QLocale::FormatType format) {
  return new QString(this_ptr->standaloneMonthName(arg1, format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_dayName(QLocale const * this_ptr, int arg1, QLocale::FormatType format) {
  return new QString(this_ptr->dayName(arg1, format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_standaloneDayName(QLocale const * this_ptr, int arg1, QLocale::FormatType format) {
  return new QString(this_ptr->standaloneDayName(arg1, format));
}


RITUAL_EXPORT Qt::DayOfWeek ctr_qt_core_ffi_QLocale_firstDayOfWeek(QLocale const * this_ptr) {
  return this_ptr->firstDayOfWeek();
}


RITUAL_EXPORT QList< Qt::DayOfWeek > * ctr_qt_core_ffi_QLocale_weekdays(QLocale const * this_ptr) {
  return new QList< Qt::DayOfWeek >(this_ptr->weekdays());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_amText(QLocale const * this_ptr) {
  return new QString(this_ptr->amText());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_pmText(QLocale const * this_ptr) {
  return new QString(this_ptr->pmText());
}


RITUAL_EXPORT QLocale::MeasurementSystem ctr_qt_core_ffi_QLocale_measurementSystem(QLocale const * this_ptr) {
  return this_ptr->measurementSystem();
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QLocale_collation(QLocale const * this_ptr) {
  return new QLocale(this_ptr->collation());
}


RITUAL_EXPORT Qt::LayoutDirection ctr_qt_core_ffi_QLocale_textDirection(QLocale const * this_ptr) {
  return this_ptr->textDirection();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toUpper(QLocale const * this_ptr, QString const * str) {
  return new QString(this_ptr->toUpper(*str));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toLower(QLocale const * this_ptr, QString const * str) {
  return new QString(this_ptr->toLower(*str));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_currencySymbol(QLocale const * this_ptr, QLocale::CurrencySymbolFormat arg1) {
  return new QString(this_ptr->currencySymbol(arg1));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString(QLocale const * this_ptr, long long arg1, QString const * symbol) {
  return new QString(this_ptr->toCurrencyString(arg1, *symbol));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString1(QLocale const * this_ptr, unsigned long long arg1, QString const * symbol) {
  return new QString(this_ptr->toCurrencyString(arg1, *symbol));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString2(QLocale const * this_ptr, short i, QString const * symbol) {
  return new QString(this_ptr->toCurrencyString(i, *symbol));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString3(QLocale const * this_ptr, unsigned short i, QString const * symbol) {
  return new QString(this_ptr->toCurrencyString(i, *symbol));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString4(QLocale const * this_ptr, int i, QString const * symbol) {
  return new QString(this_ptr->toCurrencyString(i, *symbol));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString5(QLocale const * this_ptr, unsigned int i, QString const * symbol) {
  return new QString(this_ptr->toCurrencyString(i, *symbol));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString6(QLocale const * this_ptr, double arg1, QString const * symbol, int precision) {
  return new QString(this_ptr->toCurrencyString(arg1, *symbol, precision));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_toCurrencyString7(QLocale const * this_ptr, float i, QString const * symbol, int precision) {
  return new QString(this_ptr->toCurrencyString(i, *symbol, precision));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_formattedDataSize(QLocale const * this_ptr, long long bytes, int precision, int format) {
  return new QString(this_ptr->formattedDataSize(bytes, precision, QFlags< QLocale::DataSizeFormat >(format)));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QLocale_uiLanguages(QLocale const * this_ptr, QLocale::TagSeparator separator) {
  return new QList< QString >(this_ptr->uiLanguages(separator));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_languageToCode(QLocale::Language language, int codeTypes) {
  return new QString(QLocale::languageToCode(language, QFlags< QLocale::LanguageCodeType >(codeTypes)));
}


RITUAL_EXPORT QLocale::Language ctr_qt_core_ffi_QLocale_codeToLanguage(QStringView const * languageCode, int codeTypes) {
  return QLocale::codeToLanguage(*languageCode, QFlags< QLocale::LanguageCodeType >(codeTypes));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_territoryToCode(QLocale::Country territory) {
  return new QString(QLocale::territoryToCode(territory));
}


RITUAL_EXPORT QLocale::Country ctr_qt_core_ffi_QLocale_codeToTerritory(QStringView const * territoryCode) {
  return QLocale::codeToTerritory(*territoryCode);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_countryToCode(QLocale::Country country) {
  return new QString(QLocale::countryToCode(country));
}


RITUAL_EXPORT QLocale::Country ctr_qt_core_ffi_QLocale_codeToCountry(QStringView const * countryCode) {
  return QLocale::codeToCountry(*countryCode);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_scriptToCode(QLocale::Script script) {
  return new QString(QLocale::scriptToCode(script));
}


RITUAL_EXPORT QLocale::Script ctr_qt_core_ffi_QLocale_codeToScript(QStringView const * scriptCode) {
  return QLocale::codeToScript(*scriptCode);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_languageToString(QLocale::Language language) {
  return new QString(QLocale::languageToString(language));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_territoryToString(QLocale::Country territory) {
  return new QString(QLocale::territoryToString(territory));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_countryToString(QLocale::Country country) {
  return new QString(QLocale::countryToString(country));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_scriptToString(QLocale::Script script) {
  return new QString(QLocale::scriptToString(script));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLocale_setDefault(QLocale const * locale) {
  QLocale::setDefault(*locale);
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QLocale_c() {
  return new QLocale(QLocale::c());
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QLocale_system() {
  return new QLocale(QLocale::system());
}


RITUAL_EXPORT QList< QLocale > * ctr_qt_core_ffi_QLocale_matchingLocales(QLocale::Language language, QLocale::Script script, QLocale::Country territory) {
  return new QList< QLocale >(QLocale::matchingLocales(language, script, territory));
}


RITUAL_EXPORT QList< QLocale::Country > * ctr_qt_core_ffi_QLocale_countriesForLanguage(QLocale::Language lang) {
  return new QList< QLocale::Country >(QLocale::countriesForLanguage(lang));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLocale_setNumberOptions(QLocale * this_ptr, int options) {
  this_ptr->setNumberOptions(QFlags< QLocale::NumberOption >(options));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QLocale_numberOptions(QLocale const * this_ptr) {
  return int(this_ptr->numberOptions());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_quoteString(QLocale const * this_ptr, QString const * str, QLocale::QuotationStyle style) {
  return new QString(this_ptr->quoteString(*str, style));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_quoteString1(QLocale const * this_ptr, QStringView const * str, QLocale::QuotationStyle style) {
  return new QString(this_ptr->quoteString(*str, style));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QLocale_createSeparatedList(QLocale const * this_ptr, QList< QString > const * strl) {
  return new QString(this_ptr->createSeparatedList(*strl));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__23(QDataStream * arg1, QLocale const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__24(QDataStream * arg1, QLocale * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__25(QDebug const * arg1, QLocale const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QCalendar::YearMonthDay * ctr_qt_core_ffi_QCalendar_YearMonthDay_YearMonthDay() {
  return new QCalendar::YearMonthDay();
}


RITUAL_EXPORT QCalendar::YearMonthDay * ctr_qt_core_ffi_QCalendar_YearMonthDay_YearMonthDay1(int y, int m, int d) {
  return new QCalendar::YearMonthDay(y, m, d);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCalendar_YearMonthDay_isValid(QCalendar::YearMonthDay const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QCalendar::SystemId * ctr_qt_core_ffi_QCalendar_SystemId_SystemId() {
  return new QCalendar::SystemId();
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_QCalendar_SystemId_index(QCalendar::SystemId const * this_ptr) {
  return this_ptr->index();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCalendar_SystemId_isValid(QCalendar::SystemId const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QCalendar * ctr_qt_core_ffi_QCalendar_QCalendar() {
  return new QCalendar();
}


RITUAL_EXPORT QCalendar * ctr_qt_core_ffi_QCalendar_QCalendar1(QCalendar::System system) {
  return new QCalendar(system);
}


RITUAL_EXPORT QCalendar * ctr_qt_core_ffi_QCalendar_QCalendar2(QAnyStringView const * name) {
  return new QCalendar(*name);
}


RITUAL_EXPORT QCalendar * ctr_qt_core_ffi_QCalendar_QCalendar3(QCalendar::SystemId const * id) {
  return new QCalendar(*id);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCalendar_isValid(QCalendar const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCalendar_daysInMonth(QCalendar const * this_ptr, int month, int year) {
  return this_ptr->daysInMonth(month, year);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCalendar_daysInYear(QCalendar const * this_ptr, int year) {
  return this_ptr->daysInYear(year);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCalendar_monthsInYear(QCalendar const * this_ptr, int year) {
  return this_ptr->monthsInYear(year);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCalendar_isDateValid(QCalendar const * this_ptr, int year, int month, int day) {
  return this_ptr->isDateValid(year, month, day);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCalendar_isLeapYear(QCalendar const * this_ptr, int year) {
  return this_ptr->isLeapYear(year);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCalendar_isGregorian(QCalendar const * this_ptr) {
  return this_ptr->isGregorian();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCalendar_isLunar(QCalendar const * this_ptr) {
  return this_ptr->isLunar();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCalendar_isLuniSolar(QCalendar const * this_ptr) {
  return this_ptr->isLuniSolar();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCalendar_isSolar(QCalendar const * this_ptr) {
  return this_ptr->isSolar();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCalendar_isProleptic(QCalendar const * this_ptr) {
  return this_ptr->isProleptic();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCalendar_hasYearZero(QCalendar const * this_ptr) {
  return this_ptr->hasYearZero();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCalendar_maximumDaysInMonth(QCalendar const * this_ptr) {
  return this_ptr->maximumDaysInMonth();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCalendar_minimumDaysInMonth(QCalendar const * this_ptr) {
  return this_ptr->minimumDaysInMonth();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCalendar_maximumMonthsInYear(QCalendar const * this_ptr) {
  return this_ptr->maximumMonthsInYear();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCalendar_name(QCalendar const * this_ptr) {
  return new QString(this_ptr->name());
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QCalendar_dateFromParts(QCalendar const * this_ptr, int year, int month, int day) {
  return new QDate(this_ptr->dateFromParts(year, month, day));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QCalendar_dateFromParts1(QCalendar const * this_ptr, QCalendar::YearMonthDay const * parts) {
  return new QDate(this_ptr->dateFromParts(*parts));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QCalendar_matchCenturyToWeekday(QCalendar const * this_ptr, QCalendar::YearMonthDay const * parts, int dow) {
  return new QDate(this_ptr->matchCenturyToWeekday(*parts, dow));
}


RITUAL_EXPORT QCalendar::YearMonthDay * ctr_qt_core_ffi_QCalendar_partsFromDate(QCalendar const * this_ptr, QDate const * date) {
  return new QCalendar::YearMonthDay(this_ptr->partsFromDate(*date));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCalendar_dayOfWeek(QCalendar const * this_ptr, QDate const * date) {
  return this_ptr->dayOfWeek(*date);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCalendar_monthName(QCalendar const * this_ptr, QLocale const * locale, int month, int year, QLocale::FormatType format) {
  return new QString(this_ptr->monthName(*locale, month, year, format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCalendar_standaloneMonthName(QCalendar const * this_ptr, QLocale const * locale, int month, int year, QLocale::FormatType format) {
  return new QString(this_ptr->standaloneMonthName(*locale, month, year, format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCalendar_weekDayName(QCalendar const * this_ptr, QLocale const * locale, int day, QLocale::FormatType format) {
  return new QString(this_ptr->weekDayName(*locale, day, format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCalendar_standaloneWeekDayName(QCalendar const * this_ptr, QLocale const * locale, int day, QLocale::FormatType format) {
  return new QString(this_ptr->standaloneWeekDayName(*locale, day, format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCalendar_dateTimeToString(QCalendar const * this_ptr, QStringView const * format, QDateTime const * datetime, QDate const * dateOnly, QTime const * timeOnly, QLocale const * locale) {
  return new QString(this_ptr->dateTimeToString(*format, *datetime, *dateOnly, *timeOnly, *locale));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QCalendar_availableCalendars() {
  return new QList< QString >(QCalendar::availableCalendars());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_operator__26(QCborTag t, QCborKnownTags kt) {
  return operator==(t, kt);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_operator__27(QCborKnownTags kt, QCborTag t) {
  return operator==(kt, t);
}


RITUAL_EXPORT QCborError::Code ctr_qt_core_ffi_QCborError_operator_QCborError__Code(QCborError const * this_ptr) {
  return this_ptr->operator QCborError::Code();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCborError_toString(QCborError const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__30(QDebug const * arg1, QCborSimpleType st) {
  return new QDebug(operator<<(*arg1, st));
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__31(QDebug const * arg1, QCborKnownTags tg) {
  return new QDebug(operator<<(*arg1, tg));
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__32(QDebug const * arg1, QCborTag tg) {
  return new QDebug(operator<<(*arg1, tg));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__33(QDataStream * ds, QCborSimpleType st) {
  return &operator<<(*ds, st);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__34(QDataStream * ds, QCborSimpleType * st) {
  return &operator>>(*ds, *st);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash32(QCborSimpleType tag, unsigned long seed) {
  return qHash(tag, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash33(QCborTag tag, unsigned long seed) {
  return qHash(tag, seed);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRegisterNormalizedMetaType_QCborTag(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QCborTag(*arg1);
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_QDate() {
  return new QDate();
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_QDate1(int y, int m, int d) {
  return new QDate(y, m, d);
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_QDate2(int y, int m, int d, QCalendar const * cal) {
  return new QDate(y, m, d, *cal);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDate_isNull(QDate const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDate_isValid(QDate const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_year(QDate const * this_ptr) {
  return this_ptr->year();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_month(QDate const * this_ptr) {
  return this_ptr->month();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_day(QDate const * this_ptr) {
  return this_ptr->day();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_dayOfWeek(QDate const * this_ptr) {
  return this_ptr->dayOfWeek();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_dayOfYear(QDate const * this_ptr) {
  return this_ptr->dayOfYear();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_daysInMonth(QDate const * this_ptr) {
  return this_ptr->daysInMonth();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_daysInYear(QDate const * this_ptr) {
  return this_ptr->daysInYear();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_weekNumber(QDate const * this_ptr, int * yearNum) {
  return this_ptr->weekNumber(yearNum);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_year1(QDate const * this_ptr, QCalendar const * cal) {
  return this_ptr->year(*cal);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_month1(QDate const * this_ptr, QCalendar const * cal) {
  return this_ptr->month(*cal);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_day1(QDate const * this_ptr, QCalendar const * cal) {
  return this_ptr->day(*cal);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_dayOfWeek1(QDate const * this_ptr, QCalendar const * cal) {
  return this_ptr->dayOfWeek(*cal);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_dayOfYear1(QDate const * this_ptr, QCalendar const * cal) {
  return this_ptr->dayOfYear(*cal);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_daysInMonth1(QDate const * this_ptr, QCalendar const * cal) {
  return this_ptr->daysInMonth(*cal);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDate_daysInYear1(QDate const * this_ptr, QCalendar const * cal) {
  return this_ptr->daysInYear(*cal);
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDate_startOfDay(QDate const * this_ptr, Qt::TimeSpec spec, int offsetSeconds) {
  return new QDateTime(this_ptr->startOfDay(spec, offsetSeconds));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDate_endOfDay(QDate const * this_ptr, Qt::TimeSpec spec, int offsetSeconds) {
  return new QDateTime(this_ptr->endOfDay(spec, offsetSeconds));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDate_startOfDay1(QDate const * this_ptr, QTimeZone const * zone) {
  return new QDateTime(this_ptr->startOfDay(*zone));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDate_endOfDay1(QDate const * this_ptr, QTimeZone const * zone) {
  return new QDateTime(this_ptr->endOfDay(*zone));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDate_startOfDay2(QDate const * this_ptr) {
  return new QDateTime(this_ptr->startOfDay());
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDate_endOfDay2(QDate const * this_ptr) {
  return new QDateTime(this_ptr->endOfDay());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDate_toString(QDate const * this_ptr, Qt::DateFormat format) {
  return new QString(this_ptr->toString(format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDate_toString1(QDate const * this_ptr, QString const * format) {
  return new QString(this_ptr->toString(*format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDate_toString2(QDate const * this_ptr, QString const * format, QCalendar const * cal) {
  return new QString(this_ptr->toString(*format, *cal));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDate_toString3(QDate const * this_ptr, QStringView const * format) {
  return new QString(this_ptr->toString(*format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDate_toString4(QDate const * this_ptr, QStringView const * format, QCalendar const * cal) {
  return new QString(this_ptr->toString(*format, *cal));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDate_setDate(QDate * this_ptr, int year, int month, int day) {
  return this_ptr->setDate(year, month, day);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDate_setDate1(QDate * this_ptr, int year, int month, int day, QCalendar const * cal) {
  return this_ptr->setDate(year, month, day, *cal);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDate_getDate(QDate const * this_ptr, int * year, int * month, int * day) {
  this_ptr->getDate(year, month, day);
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_addDays(QDate const * this_ptr, long long days) {
  return new QDate(this_ptr->addDays(days));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_addMonths(QDate const * this_ptr, int months) {
  return new QDate(this_ptr->addMonths(months));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_addYears(QDate const * this_ptr, int years) {
  return new QDate(this_ptr->addYears(years));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_addMonths1(QDate const * this_ptr, int months, QCalendar const * cal) {
  return new QDate(this_ptr->addMonths(months, *cal));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_addYears1(QDate const * this_ptr, int years, QCalendar const * cal) {
  return new QDate(this_ptr->addYears(years, *cal));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDate_daysTo(QDate const * this_ptr, QDate const * d) {
  return this_ptr->daysTo(*d);
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_currentDate() {
  return new QDate(QDate::currentDate());
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString(QStringView const * string, Qt::DateFormat format) {
  return new QDate(QDate::fromString(*string, format));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString1(QString const * string, Qt::DateFormat format) {
  return new QDate(QDate::fromString(*string, format));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString2(QStringView const * string, QStringView const * format, QCalendar const * cal) {
  return new QDate(QDate::fromString(*string, *format, *cal));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString3(QString const * string, QStringView const * format, QCalendar const * cal) {
  return new QDate(QDate::fromString(*string, *format, *cal));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString4(QString const * string, QString const * format, QCalendar const * cal) {
  return new QDate(QDate::fromString(*string, *format, *cal));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString5(QStringView const * string, QStringView const * format, int baseYear) {
  return new QDate(QDate::fromString(*string, *format, baseYear));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString6(QStringView const * string, QStringView const * format, int baseYear, QCalendar const * cal) {
  return new QDate(QDate::fromString(*string, *format, baseYear, *cal));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString7(QString const * string, QStringView const * format, int baseYear) {
  return new QDate(QDate::fromString(*string, *format, baseYear));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString8(QString const * string, QStringView const * format, int baseYear, QCalendar const * cal) {
  return new QDate(QDate::fromString(*string, *format, baseYear, *cal));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString9(QString const * string, QString const * format, int baseYear) {
  return new QDate(QDate::fromString(*string, *format, baseYear));
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromString10(QString const * string, QString const * format, int baseYear, QCalendar const * cal) {
  return new QDate(QDate::fromString(*string, *format, baseYear, *cal));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDate_isValid1(int y, int m, int d) {
  return QDate::isValid(y, m, d);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDate_isLeapYear(int year) {
  return QDate::isLeapYear(year);
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_fromJulianDay(long long jd_) {
  return new QDate(QDate::fromJulianDay(jd_));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDate_toJulianDay(QDate const * this_ptr) {
  return this_ptr->toJulianDay();
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_QTime() {
  return new QTime();
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_QTime1(int h, int m, int s, int ms) {
  return new QTime(h, m, s, ms);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTime_isNull(QTime const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTime_isValid(QTime const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTime_hour(QTime const * this_ptr) {
  return this_ptr->hour();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTime_minute(QTime const * this_ptr) {
  return this_ptr->minute();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTime_second(QTime const * this_ptr) {
  return this_ptr->second();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTime_msec(QTime const * this_ptr) {
  return this_ptr->msec();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTime_toString(QTime const * this_ptr, Qt::DateFormat f) {
  return new QString(this_ptr->toString(f));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTime_toString1(QTime const * this_ptr, QString const * format) {
  return new QString(this_ptr->toString(*format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTime_toString2(QTime const * this_ptr, QStringView const * format) {
  return new QString(this_ptr->toString(*format));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTime_setHMS(QTime * this_ptr, int h, int m, int s, int ms) {
  return this_ptr->setHMS(h, m, s, ms);
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_addSecs(QTime const * this_ptr, int secs) {
  return new QTime(this_ptr->addSecs(secs));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTime_secsTo(QTime const * this_ptr, QTime const * t) {
  return this_ptr->secsTo(*t);
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_addMSecs(QTime const * this_ptr, int ms) {
  return new QTime(this_ptr->addMSecs(ms));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTime_msecsTo(QTime const * this_ptr, QTime const * t) {
  return this_ptr->msecsTo(*t);
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_fromMSecsSinceStartOfDay(int msecs) {
  return new QTime(QTime::fromMSecsSinceStartOfDay(msecs));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTime_msecsSinceStartOfDay(QTime const * this_ptr) {
  return this_ptr->msecsSinceStartOfDay();
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_currentTime() {
  return new QTime(QTime::currentTime());
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_fromString(QStringView const * string, Qt::DateFormat format) {
  return new QTime(QTime::fromString(*string, format));
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_fromString1(QStringView const * string, QStringView const * format) {
  return new QTime(QTime::fromString(*string, *format));
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_fromString2(QString const * string, QStringView const * format) {
  return new QTime(QTime::fromString(*string, *format));
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_fromString3(QString const * string, Qt::DateFormat format) {
  return new QTime(QTime::fromString(*string, format));
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_fromString4(QString const * string, QString const * format) {
  return new QTime(QTime::fromString(*string, *format));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTime_isValid1(int h, int m, int s, int ms) {
  return QTime::isValid(h, m, s, ms);
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_QDateTime() {
  return new QDateTime();
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_QDateTime1(QDate const * date, QTime const * time, Qt::TimeSpec spec, int offsetSeconds) {
  return new QDateTime(*date, *time, spec, offsetSeconds);
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_QDateTime2(QDate const * date, QTime const * time, QTimeZone const * timeZone, QDateTime::TransitionResolution resolve) {
  return new QDateTime(*date, *time, *timeZone, resolve);
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_QDateTime3(QDate const * date, QTime const * time, QDateTime::TransitionResolution resolve) {
  return new QDateTime(*date, *time, resolve);
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_QDateTime4(QDateTime const * other) {
  return new QDateTime(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDateTime_dQDateTime(QDateTime * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_operator_1(QDateTime * this_ptr, QDateTime const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDateTime_swap(QDateTime * this_ptr, QDateTime * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDateTime_isNull(QDateTime const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDateTime_isValid(QDateTime const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDateTime_date(QDateTime const * this_ptr) {
  return new QDate(this_ptr->date());
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QDateTime_time(QDateTime const * this_ptr) {
  return new QTime(this_ptr->time());
}


RITUAL_EXPORT Qt::TimeSpec ctr_qt_core_ffi_QDateTime_timeSpec(QDateTime const * this_ptr) {
  return this_ptr->timeSpec();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QDateTime_offsetFromUtc(QDateTime const * this_ptr) {
  return this_ptr->offsetFromUtc();
}


RITUAL_EXPORT QTimeZone * ctr_qt_core_ffi_QDateTime_timeRepresentation(QDateTime const * this_ptr) {
  return new QTimeZone(this_ptr->timeRepresentation());
}


RITUAL_EXPORT QTimeZone * ctr_qt_core_ffi_QDateTime_timeZone(QDateTime const * this_ptr) {
  return new QTimeZone(this_ptr->timeZone());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDateTime_timeZoneAbbreviation(QDateTime const * this_ptr) {
  return new QString(this_ptr->timeZoneAbbreviation());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QDateTime_isDaylightTime(QDateTime const * this_ptr) {
  return this_ptr->isDaylightTime();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDateTime_toMSecsSinceEpoch(QDateTime const * this_ptr) {
  return this_ptr->toMSecsSinceEpoch();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDateTime_toSecsSinceEpoch(QDateTime const * this_ptr) {
  return this_ptr->toSecsSinceEpoch();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDateTime_setDate(QDateTime * this_ptr, QDate const * date, QDateTime::TransitionResolution resolve) {
  this_ptr->setDate(*date, resolve);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDateTime_setTime(QDateTime * this_ptr, QTime const * time, QDateTime::TransitionResolution resolve) {
  this_ptr->setTime(*time, resolve);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDateTime_setTimeSpec(QDateTime * this_ptr, Qt::TimeSpec spec) {
  this_ptr->setTimeSpec(spec);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDateTime_setOffsetFromUtc(QDateTime * this_ptr, int offsetSeconds) {
  this_ptr->setOffsetFromUtc(offsetSeconds);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDateTime_setTimeZone(QDateTime * this_ptr, QTimeZone const * toZone, QDateTime::TransitionResolution resolve) {
  this_ptr->setTimeZone(*toZone, resolve);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDateTime_setMSecsSinceEpoch(QDateTime * this_ptr, long long msecs) {
  this_ptr->setMSecsSinceEpoch(msecs);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDateTime_setSecsSinceEpoch(QDateTime * this_ptr, long long secs) {
  this_ptr->setSecsSinceEpoch(secs);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDateTime_toString(QDateTime const * this_ptr, Qt::DateFormat format) {
  return new QString(this_ptr->toString(format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDateTime_toString1(QDateTime const * this_ptr, QString const * format) {
  return new QString(this_ptr->toString(*format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDateTime_toString2(QDateTime const * this_ptr, QString const * format, QCalendar const * cal) {
  return new QString(this_ptr->toString(*format, *cal));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDateTime_toString3(QDateTime const * this_ptr, QStringView const * format) {
  return new QString(this_ptr->toString(*format));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QDateTime_toString4(QDateTime const * this_ptr, QStringView const * format, QCalendar const * cal) {
  return new QString(this_ptr->toString(*format, *cal));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_addDays(QDateTime const * this_ptr, long long days) {
  return new QDateTime(this_ptr->addDays(days));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_addMonths(QDateTime const * this_ptr, int months) {
  return new QDateTime(this_ptr->addMonths(months));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_addYears(QDateTime const * this_ptr, int years) {
  return new QDateTime(this_ptr->addYears(years));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_addSecs(QDateTime const * this_ptr, long long secs) {
  return new QDateTime(this_ptr->addSecs(secs));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_addMSecs(QDateTime const * this_ptr, long long msecs) {
  return new QDateTime(this_ptr->addMSecs(msecs));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_toTimeSpec(QDateTime const * this_ptr, Qt::TimeSpec spec) {
  return new QDateTime(this_ptr->toTimeSpec(spec));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_toLocalTime(QDateTime const * this_ptr) {
  return new QDateTime(this_ptr->toLocalTime());
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_toUTC(QDateTime const * this_ptr) {
  return new QDateTime(this_ptr->toUTC());
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_toOffsetFromUtc(QDateTime const * this_ptr, int offsetSeconds) {
  return new QDateTime(this_ptr->toOffsetFromUtc(offsetSeconds));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_toTimeZone(QDateTime const * this_ptr, QTimeZone const * toZone) {
  return new QDateTime(this_ptr->toTimeZone(*toZone));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDateTime_daysTo(QDateTime const * this_ptr, QDateTime const * arg1) {
  return this_ptr->daysTo(*arg1);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDateTime_secsTo(QDateTime const * this_ptr, QDateTime const * arg1) {
  return this_ptr->secsTo(*arg1);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDateTime_msecsTo(QDateTime const * this_ptr, QDateTime const * arg1) {
  return this_ptr->msecsTo(*arg1);
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_currentDateTime(QTimeZone const * zone) {
  return new QDateTime(QDateTime::currentDateTime(*zone));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_currentDateTime1() {
  return new QDateTime(QDateTime::currentDateTime());
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_currentDateTimeUtc() {
  return new QDateTime(QDateTime::currentDateTimeUtc());
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString(QStringView const * string, Qt::DateFormat format) {
  return new QDateTime(QDateTime::fromString(*string, format));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString1(QString const * string, Qt::DateFormat format) {
  return new QDateTime(QDateTime::fromString(*string, format));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString2(QStringView const * string, QStringView const * format, QCalendar const * cal) {
  return new QDateTime(QDateTime::fromString(*string, *format, *cal));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString3(QString const * string, QStringView const * format, QCalendar const * cal) {
  return new QDateTime(QDateTime::fromString(*string, *format, *cal));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString4(QString const * string, QString const * format, QCalendar const * cal) {
  return new QDateTime(QDateTime::fromString(*string, *format, *cal));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString5(QStringView const * string, QStringView const * format, int baseYear) {
  return new QDateTime(QDateTime::fromString(*string, *format, baseYear));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString6(QStringView const * string, QStringView const * format, int baseYear, QCalendar const * cal) {
  return new QDateTime(QDateTime::fromString(*string, *format, baseYear, *cal));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString7(QString const * string, QStringView const * format, int baseYear) {
  return new QDateTime(QDateTime::fromString(*string, *format, baseYear));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString8(QString const * string, QStringView const * format, int baseYear, QCalendar const * cal) {
  return new QDateTime(QDateTime::fromString(*string, *format, baseYear, *cal));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString9(QString const * string, QString const * format, int baseYear) {
  return new QDateTime(QDateTime::fromString(*string, *format, baseYear));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromString10(QString const * string, QString const * format, int baseYear, QCalendar const * cal) {
  return new QDateTime(QDateTime::fromString(*string, *format, baseYear, *cal));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromMSecsSinceEpoch(long long msecs, Qt::TimeSpec spec, int offsetFromUtc) {
  return new QDateTime(QDateTime::fromMSecsSinceEpoch(msecs, spec, offsetFromUtc));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromSecsSinceEpoch(long long secs, Qt::TimeSpec spec, int offsetFromUtc) {
  return new QDateTime(QDateTime::fromSecsSinceEpoch(secs, spec, offsetFromUtc));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromMSecsSinceEpoch1(long long msecs, QTimeZone const * timeZone) {
  return new QDateTime(QDateTime::fromMSecsSinceEpoch(msecs, *timeZone));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromSecsSinceEpoch1(long long secs, QTimeZone const * timeZone) {
  return new QDateTime(QDateTime::fromSecsSinceEpoch(secs, *timeZone));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromMSecsSinceEpoch2(long long msecs) {
  return new QDateTime(QDateTime::fromMSecsSinceEpoch(msecs));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QDateTime_fromSecsSinceEpoch2(long long secs) {
  return new QDateTime(QDateTime::fromSecsSinceEpoch(secs));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDateTime_currentMSecsSinceEpoch() {
  return QDateTime::currentMSecsSinceEpoch();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QDateTime_currentSecsSinceEpoch() {
  return QDateTime::currentSecsSinceEpoch();
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__35(QDataStream * arg1, QDate const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__36(QDataStream * arg1, QDate * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__37(QDataStream * arg1, QTime const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__38(QDataStream * arg1, QTime * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__39(QDataStream * arg1, QDateTime const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__40(QDataStream * arg1, QDateTime * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__41(QDebug const * arg1, QDate const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__42(QDebug const * arg1, QTime const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__43(QDebug const * arg1, QDateTime const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash34(QDateTime const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash35(QDate const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash36(QTime const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash37(QRegularExpression const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRegularExpression_patternOptions(QRegularExpression const * this_ptr) {
  return int(this_ptr->patternOptions());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRegularExpression_setPatternOptions(QRegularExpression * this_ptr, int options) {
  this_ptr->setPatternOptions(QFlags< QRegularExpression::PatternOption >(options));
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QRegularExpression_QRegularExpression() {
  return new QRegularExpression();
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QRegularExpression_QRegularExpression1(QString const * pattern, int options) {
  return new QRegularExpression(*pattern, QFlags< QRegularExpression::PatternOption >(options));
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QRegularExpression_QRegularExpression2(QRegularExpression const * re) {
  return new QRegularExpression(*re);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRegularExpression_dQRegularExpression(QRegularExpression * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QRegularExpression_operator_(QRegularExpression * this_ptr, QRegularExpression const * re) {
  return &this_ptr->operator=(*re);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRegularExpression_swap(QRegularExpression * this_ptr, QRegularExpression * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QRegularExpression_pattern(QRegularExpression const * this_ptr) {
  return new QString(this_ptr->pattern());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRegularExpression_setPattern(QRegularExpression * this_ptr, QString const * pattern) {
  this_ptr->setPattern(*pattern);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRegularExpression_isValid(QRegularExpression const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QRegularExpression_patternErrorOffset(QRegularExpression const * this_ptr) {
  return this_ptr->patternErrorOffset();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QRegularExpression_errorString(QRegularExpression const * this_ptr) {
  return new QString(this_ptr->errorString());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRegularExpression_captureCount(QRegularExpression const * this_ptr) {
  return this_ptr->captureCount();
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QRegularExpression_namedCaptureGroups(QRegularExpression const * this_ptr) {
  return new QList< QString >(this_ptr->namedCaptureGroups());
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpression_match(QRegularExpression const * this_ptr, QString const * subject, long long offset, QRegularExpression::MatchType matchType, int matchOptions) {
  return new QRegularExpressionMatch(this_ptr->match(*subject, offset, matchType, QFlags< QRegularExpression::MatchOption >(matchOptions)));
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpression_match1(QRegularExpression const * this_ptr, QStringView const * subjectView, long long offset, QRegularExpression::MatchType matchType, int matchOptions) {
  return new QRegularExpressionMatch(this_ptr->match(*subjectView, offset, matchType, QFlags< QRegularExpression::MatchOption >(matchOptions)));
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpression_matchView(QRegularExpression const * this_ptr, QStringView const * subjectView, long long offset, QRegularExpression::MatchType matchType, int matchOptions) {
  return new QRegularExpressionMatch(this_ptr->matchView(*subjectView, offset, matchType, QFlags< QRegularExpression::MatchOption >(matchOptions)));
}


RITUAL_EXPORT QRegularExpressionMatchIterator * ctr_qt_core_ffi_QRegularExpression_globalMatch(QRegularExpression const * this_ptr, QString const * subject, long long offset, QRegularExpression::MatchType matchType, int matchOptions) {
  return new QRegularExpressionMatchIterator(this_ptr->globalMatch(*subject, offset, matchType, QFlags< QRegularExpression::MatchOption >(matchOptions)));
}


RITUAL_EXPORT QRegularExpressionMatchIterator * ctr_qt_core_ffi_QRegularExpression_globalMatch1(QRegularExpression const * this_ptr, QStringView const * subjectView, long long offset, QRegularExpression::MatchType matchType, int matchOptions) {
  return new QRegularExpressionMatchIterator(this_ptr->globalMatch(*subjectView, offset, matchType, QFlags< QRegularExpression::MatchOption >(matchOptions)));
}


RITUAL_EXPORT QRegularExpressionMatchIterator * ctr_qt_core_ffi_QRegularExpression_globalMatchView(QRegularExpression const * this_ptr, QStringView const * subjectView, long long offset, QRegularExpression::MatchType matchType, int matchOptions) {
  return new QRegularExpressionMatchIterator(this_ptr->globalMatchView(*subjectView, offset, matchType, QFlags< QRegularExpression::MatchOption >(matchOptions)));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRegularExpression_optimize(QRegularExpression const * this_ptr) {
  this_ptr->optimize();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QRegularExpression_escape(QString const * str) {
  return new QString(QRegularExpression::escape(*str));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QRegularExpression_wildcardToRegularExpression(QString const * str, int options) {
  return new QString(QRegularExpression::wildcardToRegularExpression(*str, QFlags< QRegularExpression::WildcardConversionOption >(options)));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QRegularExpression_anchoredPattern(QString const * expression) {
  return new QString(QRegularExpression::anchoredPattern(*expression));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QRegularExpression_escape1(QStringView const * str) {
  return new QString(QRegularExpression::escape(*str));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QRegularExpression_wildcardToRegularExpression1(QStringView const * str, int options) {
  return new QString(QRegularExpression::wildcardToRegularExpression(*str, QFlags< QRegularExpression::WildcardConversionOption >(options)));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QRegularExpression_anchoredPattern1(QStringView const * expression) {
  return new QString(QRegularExpression::anchoredPattern(*expression));
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QRegularExpression_fromWildcard(QStringView const * pattern, Qt::CaseSensitivity cs, int options) {
  return new QRegularExpression(QRegularExpression::fromWildcard(*pattern, cs, QFlags< QRegularExpression::WildcardConversionOption >(options)));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__44(QDataStream * out, QRegularExpression const * re) {
  return &operator<<(*out, *re);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__45(QDataStream * in, QRegularExpression * re) {
  return &operator>>(*in, *re);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__46(QDebug const * debug, QRegularExpression const * re) {
  return new QDebug(operator<<(*debug, *re));
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpressionMatch_QRegularExpressionMatch() {
  return new QRegularExpressionMatch();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRegularExpressionMatch_dQRegularExpressionMatch(QRegularExpressionMatch * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpressionMatch_QRegularExpressionMatch1(QRegularExpressionMatch const * match) {
  return new QRegularExpressionMatch(*match);
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpressionMatch_operator_(QRegularExpressionMatch * this_ptr, QRegularExpressionMatch const * match) {
  return &this_ptr->operator=(*match);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRegularExpressionMatch_swap(QRegularExpressionMatch * this_ptr, QRegularExpressionMatch * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QRegularExpressionMatch_regularExpression(QRegularExpressionMatch const * this_ptr) {
  return new QRegularExpression(this_ptr->regularExpression());
}


RITUAL_EXPORT QRegularExpression::MatchType ctr_qt_core_ffi_QRegularExpressionMatch_matchType(QRegularExpressionMatch const * this_ptr) {
  return this_ptr->matchType();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRegularExpressionMatch_matchOptions(QRegularExpressionMatch const * this_ptr) {
  return int(this_ptr->matchOptions());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRegularExpressionMatch_hasMatch(QRegularExpressionMatch const * this_ptr) {
  return this_ptr->hasMatch();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRegularExpressionMatch_hasPartialMatch(QRegularExpressionMatch const * this_ptr) {
  return this_ptr->hasPartialMatch();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRegularExpressionMatch_isValid(QRegularExpressionMatch const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRegularExpressionMatch_lastCapturedIndex(QRegularExpressionMatch const * this_ptr) {
  return this_ptr->lastCapturedIndex();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRegularExpressionMatch_hasCaptured(QRegularExpressionMatch const * this_ptr, QAnyStringView const * name) {
  return this_ptr->hasCaptured(*name);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRegularExpressionMatch_hasCaptured1(QRegularExpressionMatch const * this_ptr, int nth) {
  return this_ptr->hasCaptured(nth);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QRegularExpressionMatch_captured(QRegularExpressionMatch const * this_ptr, int nth) {
  return new QString(this_ptr->captured(nth));
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QRegularExpressionMatch_capturedView(QRegularExpressionMatch const * this_ptr, int nth) {
  return new QStringView(this_ptr->capturedView(nth));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QRegularExpressionMatch_captured1(QRegularExpressionMatch const * this_ptr, QAnyStringView const * name) {
  return new QString(this_ptr->captured(*name));
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QRegularExpressionMatch_capturedView1(QRegularExpressionMatch const * this_ptr, QAnyStringView const * name) {
  return new QStringView(this_ptr->capturedView(*name));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QRegularExpressionMatch_capturedTexts(QRegularExpressionMatch const * this_ptr) {
  return new QList< QString >(this_ptr->capturedTexts());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QRegularExpressionMatch_capturedStart(QRegularExpressionMatch const * this_ptr, int nth) {
  return this_ptr->capturedStart(nth);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QRegularExpressionMatch_capturedLength(QRegularExpressionMatch const * this_ptr, int nth) {
  return this_ptr->capturedLength(nth);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QRegularExpressionMatch_capturedEnd(QRegularExpressionMatch const * this_ptr, int nth) {
  return this_ptr->capturedEnd(nth);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QRegularExpressionMatch_capturedStart1(QRegularExpressionMatch const * this_ptr, QAnyStringView const * name) {
  return this_ptr->capturedStart(*name);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QRegularExpressionMatch_capturedLength1(QRegularExpressionMatch const * this_ptr, QAnyStringView const * name) {
  return this_ptr->capturedLength(*name);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QRegularExpressionMatch_capturedEnd1(QRegularExpressionMatch const * this_ptr, QAnyStringView const * name) {
  return this_ptr->capturedEnd(*name);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__47(QDebug const * debug, QRegularExpressionMatch const * match) {
  return new QDebug(operator<<(*debug, *match));
}


RITUAL_EXPORT QRegularExpressionMatchIterator * ctr_qt_core_ffi_QRegularExpressionMatchIterator_QRegularExpressionMatchIterator() {
  return new QRegularExpressionMatchIterator();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRegularExpressionMatchIterator_dQRegularExpressionMatchIterator(QRegularExpressionMatchIterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRegularExpressionMatchIterator * ctr_qt_core_ffi_QRegularExpressionMatchIterator_QRegularExpressionMatchIterator1(QRegularExpressionMatchIterator const * iterator) {
  return new QRegularExpressionMatchIterator(*iterator);
}


RITUAL_EXPORT QRegularExpressionMatchIterator * ctr_qt_core_ffi_QRegularExpressionMatchIterator_operator_(QRegularExpressionMatchIterator * this_ptr, QRegularExpressionMatchIterator const * iterator) {
  return &this_ptr->operator=(*iterator);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRegularExpressionMatchIterator_swap(QRegularExpressionMatchIterator * this_ptr, QRegularExpressionMatchIterator * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRegularExpressionMatchIterator_isValid(QRegularExpressionMatchIterator const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRegularExpressionMatchIterator_hasNext(QRegularExpressionMatchIterator const * this_ptr) {
  return this_ptr->hasNext();
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpressionMatchIterator_next(QRegularExpressionMatchIterator * this_ptr) {
  return new QRegularExpressionMatch(this_ptr->next());
}


RITUAL_EXPORT QRegularExpressionMatch * ctr_qt_core_ffi_QRegularExpressionMatchIterator_peekNext(QRegularExpressionMatchIterator const * this_ptr) {
  return new QRegularExpressionMatch(this_ptr->peekNext());
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QRegularExpressionMatchIterator_regularExpression(QRegularExpressionMatchIterator const * this_ptr) {
  return new QRegularExpression(this_ptr->regularExpression());
}


RITUAL_EXPORT QRegularExpression::MatchType ctr_qt_core_ffi_QRegularExpressionMatchIterator_matchType(QRegularExpressionMatchIterator const * this_ptr) {
  return this_ptr->matchType();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRegularExpressionMatchIterator_matchOptions(QRegularExpressionMatchIterator const * this_ptr) {
  return int(this_ptr->matchOptions());
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash38(QUrl const * url, unsigned long seed) {
  return qHash(*url, seed);
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QUrl_QUrl() {
  return new QUrl();
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QUrl_QUrl1(QUrl const * copy) {
  return new QUrl(*copy);
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QUrl_operator_(QUrl * this_ptr, QUrl const * copy) {
  return &this_ptr->operator=(*copy);
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QUrl_QUrl2(QString const * url, QUrl::ParsingMode mode) {
  return new QUrl(*url, mode);
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QUrl_operator_1(QUrl * this_ptr, QString const * url) {
  return &this_ptr->operator=(*url);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_dQUrl(QUrl * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_swap(QUrl * this_ptr, QUrl * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setUrl(QUrl * this_ptr, QString const * url, QUrl::ParsingMode mode) {
  this_ptr->setUrl(*url, mode);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_url(QUrl const * this_ptr, QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > const * options) {
  return new QString(this_ptr->url(*options));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_toString(QUrl const * this_ptr, QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > const * options) {
  return new QString(this_ptr->toString(*options));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_toDisplayString(QUrl const * this_ptr, QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > const * options) {
  return new QString(this_ptr->toDisplayString(*options));
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QUrl_adjusted(QUrl const * this_ptr, QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > const * options) {
  return new QUrl(this_ptr->adjusted(*options));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QUrl_toEncoded(QUrl const * this_ptr, QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > const * options) {
  return new QByteArray(this_ptr->toEncoded(*options));
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QUrl_fromEncoded(QByteArrayView const * input, QUrl::ParsingMode mode) {
  return new QUrl(QUrl::fromEncoded(*input, mode));
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QUrl_fromUserInput(QString const * userInput, QString const * workingDirectory, int options) {
  return new QUrl(QUrl::fromUserInput(*userInput, *workingDirectory, QFlags< QUrl::UserInputResolutionOption >(options)));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUrl_isValid(QUrl const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_errorString(QUrl const * this_ptr) {
  return new QString(this_ptr->errorString());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUrl_isEmpty(QUrl const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_clear(QUrl * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setScheme(QUrl * this_ptr, QString const * scheme) {
  this_ptr->setScheme(*scheme);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_scheme(QUrl const * this_ptr) {
  return new QString(this_ptr->scheme());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setAuthority(QUrl * this_ptr, QString const * authority, QUrl::ParsingMode mode) {
  this_ptr->setAuthority(*authority, mode);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_authority(QUrl const * this_ptr, int options) {
  return new QString(this_ptr->authority(QFlags< QUrl::ComponentFormattingOption >(options)));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setUserInfo(QUrl * this_ptr, QString const * userInfo, QUrl::ParsingMode mode) {
  this_ptr->setUserInfo(*userInfo, mode);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_userInfo(QUrl const * this_ptr, int options) {
  return new QString(this_ptr->userInfo(QFlags< QUrl::ComponentFormattingOption >(options)));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setUserName(QUrl * this_ptr, QString const * userName, QUrl::ParsingMode mode) {
  this_ptr->setUserName(*userName, mode);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_userName(QUrl const * this_ptr, int options) {
  return new QString(this_ptr->userName(QFlags< QUrl::ComponentFormattingOption >(options)));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setPassword(QUrl * this_ptr, QString const * password, QUrl::ParsingMode mode) {
  this_ptr->setPassword(*password, mode);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_password(QUrl const * this_ptr, int arg1) {
  return new QString(this_ptr->password(QFlags< QUrl::ComponentFormattingOption >(arg1)));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setHost(QUrl * this_ptr, QString const * host, QUrl::ParsingMode mode) {
  this_ptr->setHost(*host, mode);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_host(QUrl const * this_ptr, int arg1) {
  return new QString(this_ptr->host(QFlags< QUrl::ComponentFormattingOption >(arg1)));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setPort(QUrl * this_ptr, int port) {
  this_ptr->setPort(port);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QUrl_port(QUrl const * this_ptr, int defaultPort) {
  return this_ptr->port(defaultPort);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setPath(QUrl * this_ptr, QString const * path, QUrl::ParsingMode mode) {
  this_ptr->setPath(*path, mode);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_path(QUrl const * this_ptr, int options) {
  return new QString(this_ptr->path(QFlags< QUrl::ComponentFormattingOption >(options)));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_fileName(QUrl const * this_ptr, int options) {
  return new QString(this_ptr->fileName(QFlags< QUrl::ComponentFormattingOption >(options)));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUrl_hasQuery(QUrl const * this_ptr) {
  return this_ptr->hasQuery();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setQuery(QUrl * this_ptr, QString const * query, QUrl::ParsingMode mode) {
  this_ptr->setQuery(*query, mode);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setQuery1(QUrl * this_ptr, QUrlQuery const * query) {
  this_ptr->setQuery(*query);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_query(QUrl const * this_ptr, int arg1) {
  return new QString(this_ptr->query(QFlags< QUrl::ComponentFormattingOption >(arg1)));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUrl_hasFragment(QUrl const * this_ptr) {
  return this_ptr->hasFragment();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_fragment(QUrl const * this_ptr, int options) {
  return new QString(this_ptr->fragment(QFlags< QUrl::ComponentFormattingOption >(options)));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setFragment(QUrl * this_ptr, QString const * fragment, QUrl::ParsingMode mode) {
  this_ptr->setFragment(*fragment, mode);
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QUrl_resolved(QUrl const * this_ptr, QUrl const * relative) {
  return new QUrl(this_ptr->resolved(*relative));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUrl_isRelative(QUrl const * this_ptr) {
  return this_ptr->isRelative();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUrl_isParentOf(QUrl const * this_ptr, QUrl const * url) {
  return this_ptr->isParentOf(*url);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUrl_isLocalFile(QUrl const * this_ptr) {
  return this_ptr->isLocalFile();
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QUrl_fromLocalFile(QString const * localfile) {
  return new QUrl(QUrl::fromLocalFile(*localfile));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_toLocalFile(QUrl const * this_ptr) {
  return new QString(this_ptr->toLocalFile());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_detach(QUrl * this_ptr) {
  this_ptr->detach();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUrl_isDetached(QUrl const * this_ptr) {
  return this_ptr->isDetached();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUrl_matches(QUrl const * this_ptr, QUrl const * url, QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > const * options) {
  return this_ptr->matches(*url, *options);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_fromPercentEncoding(QByteArray const * arg1) {
  return new QString(QUrl::fromPercentEncoding(*arg1));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QUrl_toPercentEncoding(QString const * arg1, QByteArray const * exclude, QByteArray const * include) {
  return new QByteArray(QUrl::toPercentEncoding(*arg1, *exclude, *include));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrl_fromAce(QByteArray const * domain, int options) {
  return new QString(QUrl::fromAce(*domain, QFlags< QUrl::AceProcessingOption >(options)));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QUrl_toAce(QString const * domain, int options) {
  return new QByteArray(QUrl::toAce(*domain, QFlags< QUrl::AceProcessingOption >(options)));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QUrl_idnWhitelist() {
  return new QList< QString >(QUrl::idnWhitelist());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QUrl_toStringList(QList< QUrl > const * uris, QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > const * options) {
  return new QList< QString >(QUrl::toStringList(*uris, *options));
}


RITUAL_EXPORT QList< QUrl > * ctr_qt_core_ffi_QUrl_fromStringList(QList< QString > const * uris, QUrl::ParsingMode mode) {
  return new QList< QUrl >(QUrl::fromStringList(*uris, mode));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrl_setIdnWhitelist(QList< QString > const * arg1) {
  QUrl::setIdnWhitelist(*arg1);
}


RITUAL_EXPORT QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > * ctr_qt_core_ffi_operator_173(QUrl::UrlFormattingOption f1, QUrl::UrlFormattingOption f2) {
  return new QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption >(operator|(f1, f2));
}


RITUAL_EXPORT QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > * ctr_qt_core_ffi_operator_174(QUrl::UrlFormattingOption f1, QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > const * f2) {
  return new QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption >(operator|(f1, *f2));
}


RITUAL_EXPORT QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > * ctr_qt_core_ffi_operator__48(QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > * i, int f) {
  return &operator|=(*i, QFlags< QUrl::ComponentFormattingOption >(f));
}


RITUAL_EXPORT QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > * ctr_qt_core_ffi_operator_175(QUrl::UrlFormattingOption i, QUrl::ComponentFormattingOption f) {
  return new QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption >(operator|(i, f));
}


RITUAL_EXPORT QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > * ctr_qt_core_ffi_operator_176(QUrl::UrlFormattingOption i, int f) {
  return new QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption >(operator|(i, QFlags< QUrl::ComponentFormattingOption >(f)));
}


RITUAL_EXPORT QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > * ctr_qt_core_ffi_operator_177(QUrl::ComponentFormattingOption f, QUrl::UrlFormattingOption i) {
  return new QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption >(operator|(f, i));
}


RITUAL_EXPORT QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > * ctr_qt_core_ffi_operator_178(int f, QUrl::UrlFormattingOption i) {
  return new QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption >(operator|(QFlags< QUrl::ComponentFormattingOption >(f), i));
}


RITUAL_EXPORT QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > * ctr_qt_core_ffi_operator_179(QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > const * i, int f) {
  return new QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption >(operator|(*i, QFlags< QUrl::ComponentFormattingOption >(f)));
}


RITUAL_EXPORT QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > * ctr_qt_core_ffi_operator_180(QUrl::ComponentFormattingOption f, QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > const * i) {
  return new QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption >(operator|(f, *i));
}


RITUAL_EXPORT QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > * ctr_qt_core_ffi_operator_181(int f, QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption > const * i) {
  return new QUrlTwoFlags< QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption >(operator|(QFlags< QUrl::ComponentFormattingOption >(f), *i));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__49(QDataStream * arg1, QUrl const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__50(QDataStream * arg1, QUrl * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__51(QDebug const * arg1, QUrl const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_qbswap2(qfloat16 const * source) {
  return new qfloat16(qbswap(*source));
}


RITUAL_EXPORT float ctr_qt_core_ffi_qbswap3(float source) {
  return qbswap(source);
}


RITUAL_EXPORT double ctr_qt_core_ffi_qbswap4(double source) {
  return qbswap(source);
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QUuid_QUuid() {
  return new QUuid();
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QUuid_QUuid1(unsigned int l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8) {
  return new QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8);
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QUuid_QUuid3(QAnyStringView const * string) {
  return new QUuid(*string);
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QUuid_fromString(QAnyStringView const * string) {
  return new QUuid(QUuid::fromString(*string));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUuid_toString(QUuid const * this_ptr, QUuid::StringFormat mode) {
  return new QString(this_ptr->toString(mode));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QUuid_toByteArray(QUuid const * this_ptr, QUuid::StringFormat mode) {
  return new QByteArray(this_ptr->toByteArray(mode));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QUuid_toRfc4122(QUuid const * this_ptr) {
  return new QByteArray(this_ptr->toRfc4122());
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QUuid_fromBytes(void const * bytes, QSysInfo::Endian order) {
  return new QUuid(QUuid::fromBytes(bytes, order));
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QUuid_fromRfc4122(QByteArrayView const * arg1) {
  return new QUuid(QUuid::fromRfc4122(*arg1));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUuid_isNull(QUuid const * this_ptr, Qt::Disambiguated_t const * arg1) {
  return this_ptr->isNull(*arg1);
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QUuid_createUuid() {
  return new QUuid(QUuid::createUuid());
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QUuid_createUuidV5(QUuid const * ns, QByteArrayView const * baseData) {
  return new QUuid(QUuid::createUuidV5(*ns, *baseData));
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QUuid_createUuidV3(QUuid const * ns, QByteArrayView const * baseData) {
  return new QUuid(QUuid::createUuidV3(*ns, *baseData));
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QUuid_createUuidV7() {
  return new QUuid(QUuid::createUuidV7());
}


RITUAL_EXPORT QUuid::Variant ctr_qt_core_ffi_QUuid_variant(QUuid const * this_ptr, Qt::Disambiguated_t const * arg1) {
  return this_ptr->variant(*arg1);
}


RITUAL_EXPORT QUuid::Version ctr_qt_core_ffi_QUuid_version(QUuid const * this_ptr, Qt::Disambiguated_t const * arg1) {
  return this_ptr->version(*arg1);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__52(QDataStream * arg1, QUuid const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__53(QDataStream * arg1, QUuid * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__54(QDebug const * arg1, QUuid const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash39(QUuid const * uuid, unsigned long seed) {
  return qHash(*uuid, seed);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCborParserError_errorString(QCborParserError const * this_ptr) {
  return new QString(this_ptr->errorString());
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue() {
  return new QCborValue();
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue1(QCborValue::Type t_) {
  return new QCborValue(t_);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue2(bool b_) {
  return new QCborValue(b_);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue3(int i) {
  return new QCborValue(i);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue4(unsigned int u) {
  return new QCborValue(u);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue5(long long i) {
  return new QCborValue(i);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue6(double v) {
  return new QCborValue(v);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue7(QCborSimpleType st) {
  return new QCborValue(st);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue8(QByteArray const * ba) {
  return new QCborValue(*ba);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue9(QString const * s) {
  return new QCborValue(*s);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue10(QStringView const * s) {
  return new QCborValue(*s);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue11(QLatin1String const * s) {
  return new QCborValue(*s);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue12(char const * s) {
  return new QCborValue(s);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue13(QCborArray const * a) {
  return new QCborValue(*a);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue15(QCborMap const * m) {
  return new QCborValue(*m);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue17(QCborTag tag, QCborValue const * taggedValue) {
  return new QCborValue(tag, *taggedValue);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue18(QCborKnownTags t_, QCborValue const * tv) {
  return new QCborValue(t_, *tv);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue19(QDateTime const * dt) {
  return new QCborValue(*dt);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue20(QUrl const * url) {
  return new QCborValue(*url);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue21(QRegularExpression const * rx) {
  return new QCborValue(*rx);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue22(QUuid const * uuid) {
  return new QCborValue(*uuid);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborValue_dQCborValue(QCborValue * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_QCborValue24(QCborValue const * other) {
  return new QCborValue(*other);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_operator_(QCborValue * this_ptr, QCborValue const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborValue_swap(QCborValue * this_ptr, QCborValue * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QCborValue::Type ctr_qt_core_ffi_QCborValue_type(QCborValue const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isInteger(QCborValue const * this_ptr) {
  return this_ptr->isInteger();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isByteArray(QCborValue const * this_ptr) {
  return this_ptr->isByteArray();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isString(QCborValue const * this_ptr) {
  return this_ptr->isString();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isArray(QCborValue const * this_ptr) {
  return this_ptr->isArray();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isMap(QCborValue const * this_ptr) {
  return this_ptr->isMap();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isTag(QCborValue const * this_ptr) {
  return this_ptr->isTag();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isFalse(QCborValue const * this_ptr) {
  return this_ptr->isFalse();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isTrue(QCborValue const * this_ptr) {
  return this_ptr->isTrue();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isBool(QCborValue const * this_ptr) {
  return this_ptr->isBool();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isNull(QCborValue const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isUndefined(QCborValue const * this_ptr) {
  return this_ptr->isUndefined();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isDouble(QCborValue const * this_ptr) {
  return this_ptr->isDouble();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isDateTime(QCborValue const * this_ptr) {
  return this_ptr->isDateTime();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isUrl(QCborValue const * this_ptr) {
  return this_ptr->isUrl();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isRegularExpression(QCborValue const * this_ptr) {
  return this_ptr->isRegularExpression();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isUuid(QCborValue const * this_ptr) {
  return this_ptr->isUuid();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isInvalid(QCborValue const * this_ptr) {
  return this_ptr->isInvalid();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isContainer(QCborValue const * this_ptr) {
  return this_ptr->isContainer();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isSimpleType(QCborValue const * this_ptr) {
  return this_ptr->isSimpleType();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_isSimpleType1(QCborValue const * this_ptr, QCborSimpleType st) {
  return this_ptr->isSimpleType(st);
}


RITUAL_EXPORT QCborSimpleType ctr_qt_core_ffi_QCborValue_toSimpleType(QCborValue const * this_ptr, QCborSimpleType defaultValue) {
  return this_ptr->toSimpleType(defaultValue);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborValue_toInteger(QCborValue const * this_ptr, long long defaultValue) {
  return this_ptr->toInteger(defaultValue);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValue_toBool(QCborValue const * this_ptr, bool defaultValue) {
  return this_ptr->toBool(defaultValue);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QCborValue_toDouble(QCborValue const * this_ptr, double defaultValue) {
  return this_ptr->toDouble(defaultValue);
}


RITUAL_EXPORT QCborTag ctr_qt_core_ffi_QCborValue_tag(QCborValue const * this_ptr, QCborTag defaultValue) {
  return this_ptr->tag(defaultValue);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_taggedValue(QCborValue const * this_ptr, QCborValue const * defaultValue) {
  return new QCborValue(this_ptr->taggedValue(*defaultValue));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCborValue_toByteArray(QCborValue const * this_ptr, QByteArray const * defaultValue) {
  return new QByteArray(this_ptr->toByteArray(*defaultValue));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCborValue_toString(QCborValue const * this_ptr, QString const * defaultValue) {
  return new QString(this_ptr->toString(*defaultValue));
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QCborValue_toStringView(QCborValue const * this_ptr, QAnyStringView const * defaultValue) {
  return new QAnyStringView(this_ptr->toStringView(*defaultValue));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QCborValue_toDateTime(QCborValue const * this_ptr, QDateTime const * defaultValue) {
  return new QDateTime(this_ptr->toDateTime(*defaultValue));
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QCborValue_toUrl(QCborValue const * this_ptr, QUrl const * defaultValue) {
  return new QUrl(this_ptr->toUrl(*defaultValue));
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QCborValue_toRegularExpression(QCborValue const * this_ptr, QRegularExpression const * defaultValue) {
  return new QRegularExpression(this_ptr->toRegularExpression(*defaultValue));
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QCborValue_toUuid(QCborValue const * this_ptr, QUuid const * defaultValue) {
  return new QUuid(this_ptr->toUuid(*defaultValue));
}


RITUAL_EXPORT QCborArray * ctr_qt_core_ffi_QCborValue_toArray(QCborValue const * this_ptr) {
  return new QCborArray(this_ptr->toArray());
}


RITUAL_EXPORT QCborArray * ctr_qt_core_ffi_QCborValue_toArray1(QCborValue const * this_ptr, QCborArray const * defaultValue) {
  return new QCborArray(this_ptr->toArray(*defaultValue));
}


RITUAL_EXPORT QCborMap * ctr_qt_core_ffi_QCborValue_toMap(QCborValue const * this_ptr) {
  return new QCborMap(this_ptr->toMap());
}


RITUAL_EXPORT QCborMap * ctr_qt_core_ffi_QCborValue_toMap1(QCborValue const * this_ptr, QCborMap const * defaultValue) {
  return new QCborMap(this_ptr->toMap(*defaultValue));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_operator__(QCborValue const * this_ptr, QString const * key) {
  return new QCborValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_operator__1(QCborValue const * this_ptr, QLatin1String const * key) {
  return new QCborValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_operator__2(QCborValue const * this_ptr, long long key) {
  return new QCborValue(this_ptr->operator[](key));
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborValue_operator__3(QCborValue * this_ptr, long long key) {
  return new QCborValueRef(this_ptr->operator[](key));
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborValue_operator__4(QCborValue * this_ptr, QLatin1String const * key) {
  return new QCborValueRef(this_ptr->operator[](*key));
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborValue_operator__5(QCborValue * this_ptr, QString const * key) {
  return new QCborValueRef(this_ptr->operator[](*key));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCborValue_compare(QCborValue const * this_ptr, QCborValue const * other) {
  return this_ptr->compare(*other);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_fromVariant(QVariant const * variant) {
  return new QCborValue(QCborValue::fromVariant(*variant));
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QCborValue_toVariant(QCborValue const * this_ptr) {
  return new QVariant(this_ptr->toVariant());
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_fromJsonValue(QJsonValue const * v) {
  return new QCborValue(QCborValue::fromJsonValue(*v));
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QCborValue_toJsonValue(QCborValue const * this_ptr) {
  return new QJsonValue(this_ptr->toJsonValue());
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_fromCbor(QCborStreamReader * reader) {
  return new QCborValue(QCborValue::fromCbor(*reader));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_fromCbor1(QByteArray const * ba, QCborParserError * error) {
  return new QCborValue(QCborValue::fromCbor(*ba, error));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_fromCbor2(char const * data, long long len, QCborParserError * error) {
  return new QCborValue(QCborValue::fromCbor(data, len, error));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValue_fromCbor3(unsigned char const * data, long long len, QCborParserError * error) {
  return new QCborValue(QCborValue::fromCbor(data, len, error));
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCborValue_toCbor(QCborValue const * this_ptr, int opt) {
  return new QByteArray(this_ptr->toCbor(QFlags< QCborValue::EncodingOption >(opt)));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborValue_toCbor1(QCborValue const * this_ptr, QCborStreamWriter * writer, int opt) {
  this_ptr->toCbor(*writer, QFlags< QCborValue::EncodingOption >(opt));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCborValue_toDiagnosticNotation(QCborValue const * this_ptr, int opts) {
  return new QString(this_ptr->toDiagnosticNotation(QFlags< QCborValue::DiagnosticNotationOption >(opts)));
}


RITUAL_EXPORT QCborValueConstRef * ctr_qt_core_ffi_QCborValueConstRef_QCborValueConstRef(QCborValueConstRef const * arg1) {
  return new QCborValueConstRef(*arg1);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValueConstRef_operator_QCborValue(QCborValueConstRef const * this_ptr) {
  return new QCborValue(this_ptr->operator QCborValue());
}


RITUAL_EXPORT QCborValue::Type ctr_qt_core_ffi_QCborValueConstRef_type(QCborValueConstRef const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isInteger(QCborValueConstRef const * this_ptr) {
  return this_ptr->isInteger();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isByteArray(QCborValueConstRef const * this_ptr) {
  return this_ptr->isByteArray();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isString(QCborValueConstRef const * this_ptr) {
  return this_ptr->isString();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isArray(QCborValueConstRef const * this_ptr) {
  return this_ptr->isArray();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isMap(QCborValueConstRef const * this_ptr) {
  return this_ptr->isMap();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isTag(QCborValueConstRef const * this_ptr) {
  return this_ptr->isTag();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isFalse(QCborValueConstRef const * this_ptr) {
  return this_ptr->isFalse();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isTrue(QCborValueConstRef const * this_ptr) {
  return this_ptr->isTrue();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isBool(QCborValueConstRef const * this_ptr) {
  return this_ptr->isBool();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isNull(QCborValueConstRef const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isUndefined(QCborValueConstRef const * this_ptr) {
  return this_ptr->isUndefined();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isDouble(QCborValueConstRef const * this_ptr) {
  return this_ptr->isDouble();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isDateTime(QCborValueConstRef const * this_ptr) {
  return this_ptr->isDateTime();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isUrl(QCborValueConstRef const * this_ptr) {
  return this_ptr->isUrl();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isRegularExpression(QCborValueConstRef const * this_ptr) {
  return this_ptr->isRegularExpression();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isUuid(QCborValueConstRef const * this_ptr) {
  return this_ptr->isUuid();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isInvalid(QCborValueConstRef const * this_ptr) {
  return this_ptr->isInvalid();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isContainer(QCborValueConstRef const * this_ptr) {
  return this_ptr->isContainer();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isSimpleType(QCborValueConstRef const * this_ptr) {
  return this_ptr->isSimpleType();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_isSimpleType1(QCborValueConstRef const * this_ptr, QCborSimpleType st) {
  return this_ptr->isSimpleType(st);
}


RITUAL_EXPORT QCborSimpleType ctr_qt_core_ffi_QCborValueConstRef_toSimpleType(QCborValueConstRef const * this_ptr, QCborSimpleType defaultValue) {
  return this_ptr->toSimpleType(defaultValue);
}


RITUAL_EXPORT QCborTag ctr_qt_core_ffi_QCborValueConstRef_tag(QCborValueConstRef const * this_ptr, QCborTag defaultValue) {
  return this_ptr->tag(defaultValue);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValueConstRef_taggedValue(QCborValueConstRef const * this_ptr, QCborValue const * defaultValue) {
  return new QCborValue(this_ptr->taggedValue(*defaultValue));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborValueConstRef_toInteger(QCborValueConstRef const * this_ptr, long long defaultValue) {
  return this_ptr->toInteger(defaultValue);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueConstRef_toBool(QCborValueConstRef const * this_ptr, bool defaultValue) {
  return this_ptr->toBool(defaultValue);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QCborValueConstRef_toDouble(QCborValueConstRef const * this_ptr, double defaultValue) {
  return this_ptr->toDouble(defaultValue);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCborValueConstRef_toByteArray(QCborValueConstRef const * this_ptr, QByteArray const * defaultValue) {
  return new QByteArray(this_ptr->toByteArray(*defaultValue));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCborValueConstRef_toString(QCborValueConstRef const * this_ptr, QString const * defaultValue) {
  return new QString(this_ptr->toString(*defaultValue));
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QCborValueConstRef_toStringView(QCborValueConstRef const * this_ptr, QAnyStringView const * defaultValue) {
  return new QAnyStringView(this_ptr->toStringView(*defaultValue));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QCborValueConstRef_toDateTime(QCborValueConstRef const * this_ptr, QDateTime const * defaultValue) {
  return new QDateTime(this_ptr->toDateTime(*defaultValue));
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QCborValueConstRef_toUrl(QCborValueConstRef const * this_ptr, QUrl const * defaultValue) {
  return new QUrl(this_ptr->toUrl(*defaultValue));
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QCborValueConstRef_toRegularExpression(QCborValueConstRef const * this_ptr, QRegularExpression const * defaultValue) {
  return new QRegularExpression(this_ptr->toRegularExpression(*defaultValue));
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QCborValueConstRef_toUuid(QCborValueConstRef const * this_ptr, QUuid const * defaultValue) {
  return new QUuid(this_ptr->toUuid(*defaultValue));
}


RITUAL_EXPORT QCborArray * ctr_qt_core_ffi_QCborValueConstRef_toArray(QCborValueConstRef const * this_ptr) {
  return new QCborArray(this_ptr->toArray());
}


RITUAL_EXPORT QCborArray * ctr_qt_core_ffi_QCborValueConstRef_toArray1(QCborValueConstRef const * this_ptr, QCborArray const * a) {
  return new QCborArray(this_ptr->toArray(*a));
}


RITUAL_EXPORT QCborMap * ctr_qt_core_ffi_QCborValueConstRef_toMap(QCborValueConstRef const * this_ptr) {
  return new QCborMap(this_ptr->toMap());
}


RITUAL_EXPORT QCborMap * ctr_qt_core_ffi_QCborValueConstRef_toMap1(QCborValueConstRef const * this_ptr, QCborMap const * m) {
  return new QCborMap(this_ptr->toMap(*m));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValueConstRef_operator__(QCborValueConstRef const * this_ptr, QString const * key) {
  return new QCborValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValueConstRef_operator__1(QCborValueConstRef const * this_ptr, QLatin1String const * key) {
  return new QCborValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValueConstRef_operator__2(QCborValueConstRef const * this_ptr, long long key) {
  return new QCborValue(this_ptr->operator[](key));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCborValueConstRef_compare(QCborValueConstRef const * this_ptr, QCborValue const * other) {
  return this_ptr->compare(*other);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QCborValueConstRef_toVariant(QCborValueConstRef const * this_ptr) {
  return new QVariant(this_ptr->toVariant());
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QCborValueConstRef_toJsonValue(QCborValueConstRef const * this_ptr) {
  return new QJsonValue(this_ptr->toJsonValue());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCborValueConstRef_toCbor(QCborValueConstRef const * this_ptr, int opt) {
  return new QByteArray(this_ptr->toCbor(QFlags< QCborValue::EncodingOption >(opt)));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborValueConstRef_toCbor1(QCborValueConstRef const * this_ptr, QCborStreamWriter * writer, int opt) {
  this_ptr->toCbor(*writer, QFlags< QCborValue::EncodingOption >(opt));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCborValueConstRef_toDiagnosticNotation(QCborValueConstRef const * this_ptr, int opt) {
  return new QString(this_ptr->toDiagnosticNotation(QFlags< QCborValue::DiagnosticNotationOption >(opt)));
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborValueRef_QCborValueRef(QCborValueRef const * arg1) {
  return new QCborValueRef(*arg1);
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborValueRef_operator_(QCborValueRef * this_ptr, QCborValue const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborValueRef_operator_2(QCborValueRef * this_ptr, QCborValueRef const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborValueRef_operator__(QCborValueRef * this_ptr, long long key) {
  return new QCborValueRef(this_ptr->operator[](key));
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborValueRef_operator__1(QCborValueRef * this_ptr, QLatin1String const * key) {
  return new QCborValueRef(this_ptr->operator[](*key));
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborValueRef_operator__2(QCborValueRef * this_ptr, QString const * key) {
  return new QCborValueRef(this_ptr->operator[](*key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValueRef_operator_QCborValue(QCborValueRef const * this_ptr) {
  return new QCborValue(this_ptr->operator QCborValue());
}


RITUAL_EXPORT QCborValue::Type ctr_qt_core_ffi_QCborValueRef_type(QCborValueRef const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isInteger(QCborValueRef const * this_ptr) {
  return this_ptr->isInteger();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isByteArray(QCborValueRef const * this_ptr) {
  return this_ptr->isByteArray();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isString(QCborValueRef const * this_ptr) {
  return this_ptr->isString();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isArray(QCborValueRef const * this_ptr) {
  return this_ptr->isArray();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isMap(QCborValueRef const * this_ptr) {
  return this_ptr->isMap();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isTag(QCborValueRef const * this_ptr) {
  return this_ptr->isTag();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isFalse(QCborValueRef const * this_ptr) {
  return this_ptr->isFalse();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isTrue(QCborValueRef const * this_ptr) {
  return this_ptr->isTrue();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isBool(QCborValueRef const * this_ptr) {
  return this_ptr->isBool();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isNull(QCborValueRef const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isUndefined(QCborValueRef const * this_ptr) {
  return this_ptr->isUndefined();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isDouble(QCborValueRef const * this_ptr) {
  return this_ptr->isDouble();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isDateTime(QCborValueRef const * this_ptr) {
  return this_ptr->isDateTime();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isUrl(QCborValueRef const * this_ptr) {
  return this_ptr->isUrl();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isRegularExpression(QCborValueRef const * this_ptr) {
  return this_ptr->isRegularExpression();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isUuid(QCborValueRef const * this_ptr) {
  return this_ptr->isUuid();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isInvalid(QCborValueRef const * this_ptr) {
  return this_ptr->isInvalid();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isContainer(QCborValueRef const * this_ptr) {
  return this_ptr->isContainer();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isSimpleType(QCborValueRef const * this_ptr) {
  return this_ptr->isSimpleType();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_isSimpleType1(QCborValueRef const * this_ptr, QCborSimpleType st) {
  return this_ptr->isSimpleType(st);
}


RITUAL_EXPORT QCborSimpleType ctr_qt_core_ffi_QCborValueRef_toSimpleType(QCborValueRef const * this_ptr, QCborSimpleType defaultValue) {
  return this_ptr->toSimpleType(defaultValue);
}


RITUAL_EXPORT QCborTag ctr_qt_core_ffi_QCborValueRef_tag(QCborValueRef const * this_ptr, QCborTag defaultValue) {
  return this_ptr->tag(defaultValue);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValueRef_taggedValue(QCborValueRef const * this_ptr, QCborValue const * defaultValue) {
  return new QCborValue(this_ptr->taggedValue(*defaultValue));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborValueRef_toInteger(QCborValueRef const * this_ptr, long long defaultValue) {
  return this_ptr->toInteger(defaultValue);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborValueRef_toBool(QCborValueRef const * this_ptr, bool defaultValue) {
  return this_ptr->toBool(defaultValue);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QCborValueRef_toDouble(QCborValueRef const * this_ptr, double defaultValue) {
  return this_ptr->toDouble(defaultValue);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCborValueRef_toByteArray(QCborValueRef const * this_ptr, QByteArray const * defaultValue) {
  return new QByteArray(this_ptr->toByteArray(*defaultValue));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCborValueRef_toString(QCborValueRef const * this_ptr, QString const * defaultValue) {
  return new QString(this_ptr->toString(*defaultValue));
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QCborValueRef_toDateTime(QCborValueRef const * this_ptr, QDateTime const * defaultValue) {
  return new QDateTime(this_ptr->toDateTime(*defaultValue));
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QCborValueRef_toUrl(QCborValueRef const * this_ptr, QUrl const * defaultValue) {
  return new QUrl(this_ptr->toUrl(*defaultValue));
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QCborValueRef_toRegularExpression(QCborValueRef const * this_ptr, QRegularExpression const * defaultValue) {
  return new QRegularExpression(this_ptr->toRegularExpression(*defaultValue));
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QCborValueRef_toUuid(QCborValueRef const * this_ptr, QUuid const * defaultValue) {
  return new QUuid(this_ptr->toUuid(*defaultValue));
}


RITUAL_EXPORT QCborArray * ctr_qt_core_ffi_QCborValueRef_toArray(QCborValueRef const * this_ptr) {
  return new QCborArray(this_ptr->toArray());
}


RITUAL_EXPORT QCborArray * ctr_qt_core_ffi_QCborValueRef_toArray1(QCborValueRef const * this_ptr, QCborArray const * a) {
  return new QCborArray(this_ptr->toArray(*a));
}


RITUAL_EXPORT QCborMap * ctr_qt_core_ffi_QCborValueRef_toMap(QCborValueRef const * this_ptr) {
  return new QCborMap(this_ptr->toMap());
}


RITUAL_EXPORT QCborMap * ctr_qt_core_ffi_QCborValueRef_toMap1(QCborValueRef const * this_ptr, QCborMap const * m) {
  return new QCborMap(this_ptr->toMap(*m));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValueRef_operator__3(QCborValueRef const * this_ptr, QString const * key) {
  return new QCborValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValueRef_operator__4(QCborValueRef const * this_ptr, QLatin1String const * key) {
  return new QCborValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborValueRef_operator__5(QCborValueRef const * this_ptr, long long key) {
  return new QCborValue(this_ptr->operator[](key));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCborValueRef_compare(QCborValueRef const * this_ptr, QCborValue const * other) {
  return this_ptr->compare(*other);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QCborValueRef_toVariant(QCborValueRef const * this_ptr) {
  return new QVariant(this_ptr->toVariant());
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QCborValueRef_toJsonValue(QCborValueRef const * this_ptr) {
  return new QJsonValue(this_ptr->toJsonValue());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QCborValueRef_toCbor(QCborValueRef * this_ptr, int opt) {
  return new QByteArray(this_ptr->toCbor(QFlags< QCborValue::EncodingOption >(opt)));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborValueRef_toCbor1(QCborValueRef * this_ptr, QCborStreamWriter * writer, int opt) {
  this_ptr->toCbor(*writer, QFlags< QCborValue::EncodingOption >(opt));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QCborValueRef_toDiagnosticNotation(QCborValueRef * this_ptr, int opt) {
  return new QString(this_ptr->toDiagnosticNotation(QFlags< QCborValue::DiagnosticNotationOption >(opt)));
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash40(QCborValue const * value, unsigned long seed) {
  return qHash(*value, seed);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__55(QDebug const * arg1, QCborValue const * v) {
  return new QDebug(operator<<(*arg1, *v));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__56(QDataStream * arg1, QCborValue const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__57(QDataStream * arg1, QCborValue * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_Iterator_Iterator() {
  return new QCborArray::Iterator();
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_Iterator_Iterator1(QCborArray::Iterator const * arg1) {
  return new QCborArray::Iterator(*arg1);
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_Iterator_operator_(QCborArray::Iterator * this_ptr, QCborArray::Iterator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborArray_Iterator_operator_1(QCborArray::Iterator const * this_ptr) {
  return new QCborValueRef(this_ptr->operator*());
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborArray_Iterator_operator__(QCborArray::Iterator * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QCborValueConstRef const * ctr_qt_core_ffi_QCborArray_Iterator_operator__1(QCborArray::Iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborArray_Iterator_operator__2(QCborArray::Iterator const * this_ptr, long long j) {
  return new QCborValueRef(this_ptr->operator[](j));
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_Iterator_operator__3(QCborArray::Iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_Iterator_operator__4(QCborArray::Iterator * this_ptr, int arg1) {
  return new QCborArray::Iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_Iterator_operator__5(QCborArray::Iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_Iterator_operator__6(QCborArray::Iterator * this_ptr, int arg1) {
  return new QCborArray::Iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_Iterator_operator__7(QCborArray::Iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_Iterator_operator__8(QCborArray::Iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_Iterator_operator_2(QCborArray::Iterator const * this_ptr, long long j) {
  return new QCborArray::Iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_Iterator_operator_3(QCborArray::Iterator const * this_ptr, long long j) {
  return new QCborArray::Iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborArray_Iterator_operator_4(QCborArray::Iterator const * this_ptr, QCborArray::Iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_ConstIterator_ConstIterator() {
  return new QCborArray::ConstIterator();
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_ConstIterator_ConstIterator1(QCborArray::ConstIterator const * arg1) {
  return new QCborArray::ConstIterator(*arg1);
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_ConstIterator_operator_(QCborArray::ConstIterator * this_ptr, QCborArray::ConstIterator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QCborValueConstRef * ctr_qt_core_ffi_QCborArray_ConstIterator_operator_1(QCborArray::ConstIterator const * this_ptr) {
  return new QCborValueConstRef(this_ptr->operator*());
}


RITUAL_EXPORT QCborValueConstRef const * ctr_qt_core_ffi_QCborArray_ConstIterator_operator__(QCborArray::ConstIterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QCborValueConstRef * ctr_qt_core_ffi_QCborArray_ConstIterator_operator__1(QCborArray::ConstIterator const * this_ptr, long long j) {
  return new QCborValueConstRef(this_ptr->operator[](j));
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_ConstIterator_operator__2(QCborArray::ConstIterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_ConstIterator_operator__3(QCborArray::ConstIterator * this_ptr, int arg1) {
  return new QCborArray::ConstIterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_ConstIterator_operator__4(QCborArray::ConstIterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_ConstIterator_operator__5(QCborArray::ConstIterator * this_ptr, int arg1) {
  return new QCborArray::ConstIterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_ConstIterator_operator__6(QCborArray::ConstIterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_ConstIterator_operator__7(QCborArray::ConstIterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_ConstIterator_operator_2(QCborArray::ConstIterator const * this_ptr, long long j) {
  return new QCborArray::ConstIterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_ConstIterator_operator_3(QCborArray::ConstIterator const * this_ptr, long long j) {
  return new QCborArray::ConstIterator(this_ptr->operator-(j));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborArray_ConstIterator_operator_4(QCborArray::ConstIterator const * this_ptr, QCborArray::ConstIterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT QCborArray * ctr_qt_core_ffi_QCborArray_QCborArray() {
  return new QCborArray();
}


RITUAL_EXPORT QCborArray * ctr_qt_core_ffi_QCborArray_QCborArray1(QCborArray const * other) {
  return new QCborArray(*other);
}


RITUAL_EXPORT QCborArray * ctr_qt_core_ffi_QCborArray_operator_(QCborArray * this_ptr, QCborArray const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborArray_dQCborArray(QCborArray * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborArray_swap(QCborArray * this_ptr, QCborArray * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborArray_toCborValue(QCborArray const * this_ptr) {
  return new QCborValue(this_ptr->toCborValue());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborArray_size(QCborArray const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborArray_isEmpty(QCborArray const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborArray_clear(QCborArray * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborArray_at(QCborArray const * this_ptr, long long i) {
  return new QCborValue(this_ptr->at(i));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborArray_first(QCborArray const * this_ptr) {
  return new QCborValue(this_ptr->first());
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborArray_last(QCborArray const * this_ptr) {
  return new QCborValue(this_ptr->last());
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborArray_operator__(QCborArray const * this_ptr, long long i) {
  return new QCborValue(this_ptr->operator[](i));
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborArray_first1(QCborArray * this_ptr) {
  return new QCborValueRef(this_ptr->first());
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborArray_last1(QCborArray * this_ptr) {
  return new QCborValueRef(this_ptr->last());
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborArray_operator__1(QCborArray * this_ptr, long long i) {
  return new QCborValueRef(this_ptr->operator[](i));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborArray_insert(QCborArray * this_ptr, long long i, QCborValue const * value) {
  this_ptr->insert(i, *value);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborArray_prepend(QCborArray * this_ptr, QCborValue const * value) {
  this_ptr->prepend(*value);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborArray_append(QCborArray * this_ptr, QCborValue const * value) {
  this_ptr->append(*value);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborArray_extract(QCborArray * this_ptr, QCborArray::ConstIterator const * it) {
  return new QCborValue(this_ptr->extract(*it));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborArray_extract1(QCborArray * this_ptr, QCborArray::Iterator const * it) {
  return new QCborValue(this_ptr->extract(*it));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborArray_removeAt(QCborArray * this_ptr, long long i) {
  this_ptr->removeAt(i);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborArray_takeAt(QCborArray * this_ptr, long long i) {
  return new QCborValue(this_ptr->takeAt(i));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborArray_removeFirst(QCborArray * this_ptr) {
  this_ptr->removeFirst();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborArray_removeLast(QCborArray * this_ptr) {
  this_ptr->removeLast();
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborArray_takeFirst(QCborArray * this_ptr) {
  return new QCborValue(this_ptr->takeFirst());
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborArray_takeLast(QCborArray * this_ptr) {
  return new QCborValue(this_ptr->takeLast());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborArray_contains(QCborArray const * this_ptr, QCborValue const * value) {
  return this_ptr->contains(*value);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCborArray_compare(QCborArray const * this_ptr, QCborArray const * other) {
  return this_ptr->compare(*other);
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_begin(QCborArray * this_ptr) {
  return new QCborArray::Iterator(this_ptr->begin());
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_constBegin(QCborArray const * this_ptr) {
  return new QCborArray::ConstIterator(this_ptr->constBegin());
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_begin1(QCborArray const * this_ptr) {
  return new QCborArray::ConstIterator(this_ptr->begin());
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_cbegin(QCborArray const * this_ptr) {
  return new QCborArray::ConstIterator(this_ptr->cbegin());
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_end(QCborArray * this_ptr) {
  return new QCborArray::Iterator(this_ptr->end());
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_constEnd(QCborArray const * this_ptr) {
  return new QCborArray::ConstIterator(this_ptr->constEnd());
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_end1(QCborArray const * this_ptr) {
  return new QCborArray::ConstIterator(this_ptr->end());
}


RITUAL_EXPORT QCborArray::ConstIterator * ctr_qt_core_ffi_QCborArray_cend(QCborArray const * this_ptr) {
  return new QCborArray::ConstIterator(this_ptr->cend());
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_insert2(QCborArray * this_ptr, QCborArray::Iterator const * before, QCborValue const * value) {
  return new QCborArray::Iterator(this_ptr->insert(*before, *value));
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_insert3(QCborArray * this_ptr, QCborArray::ConstIterator const * before, QCborValue const * value) {
  return new QCborArray::Iterator(this_ptr->insert(*before, *value));
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_erase(QCborArray * this_ptr, QCborArray::Iterator const * it) {
  return new QCborArray::Iterator(this_ptr->erase(*it));
}


RITUAL_EXPORT QCborArray::Iterator * ctr_qt_core_ffi_QCborArray_erase1(QCborArray * this_ptr, QCborArray::ConstIterator const * it) {
  return new QCborArray::Iterator(this_ptr->erase(*it));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborArray_push_back(QCborArray * this_ptr, QCborValue const * t) {
  this_ptr->push_back(*t);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborArray_push_front(QCborArray * this_ptr, QCborValue const * t) {
  this_ptr->push_front(*t);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborArray_pop_front(QCborArray * this_ptr) {
  this_ptr->pop_front();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborArray_pop_back(QCborArray * this_ptr) {
  this_ptr->pop_back();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborArray_empty(QCborArray const * this_ptr) {
  return this_ptr->empty();
}


RITUAL_EXPORT QCborArray * ctr_qt_core_ffi_QCborArray_operator_2(QCborArray const * this_ptr, QCborValue const * v) {
  return new QCborArray(this_ptr->operator+(*v));
}


RITUAL_EXPORT QCborArray * ctr_qt_core_ffi_QCborArray_operator__2(QCborArray * this_ptr, QCborValue const * v) {
  return &this_ptr->operator+=(*v);
}


RITUAL_EXPORT QCborArray * ctr_qt_core_ffi_QCborArray_operator__3(QCborArray * this_ptr, QCborValue const * v) {
  return &this_ptr->operator<<(*v);
}


RITUAL_EXPORT QCborArray * ctr_qt_core_ffi_QCborArray_fromStringList(QList< QString > const * list) {
  return new QCborArray(QCborArray::fromStringList(*list));
}


RITUAL_EXPORT QCborArray * ctr_qt_core_ffi_QCborArray_fromVariantList(QList< QVariant > const * list) {
  return new QCborArray(QCborArray::fromVariantList(*list));
}


RITUAL_EXPORT QCborArray * ctr_qt_core_ffi_QCborArray_fromJsonArray(QJsonArray const * array) {
  return new QCborArray(QCborArray::fromJsonArray(*array));
}


RITUAL_EXPORT QList< QVariant > * ctr_qt_core_ffi_QCborArray_toVariantList(QCborArray const * this_ptr) {
  return new QList< QVariant >(this_ptr->toVariantList());
}


RITUAL_EXPORT QJsonArray * ctr_qt_core_ffi_QCborArray_toJsonArray(QCborArray const * this_ptr) {
  return new QJsonArray(this_ptr->toJsonArray());
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash41(QCborArray const * array, unsigned long seed) {
  return qHash(*array, seed);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__58(QDebug const * arg1, QCborArray const * a) {
  return new QDebug(operator<<(*arg1, *a));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__59(QDataStream * arg1, QCborArray const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__60(QDataStream * arg1, QCborArray * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_Iterator_Iterator() {
  return new QCborMap::Iterator();
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_Iterator_Iterator1(QCborMap::Iterator const * arg1) {
  return new QCborMap::Iterator(*arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborMap_Iterator_dIterator(QCborMap::Iterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_Iterator_operator_(QCborMap::Iterator * this_ptr, QCborMap::Iterator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborMap_Iterator_operator__1(QCborMap::Iterator * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QCborValueConstRef const * ctr_qt_core_ffi_QCborMap_Iterator_operator__2(QCborMap::Iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_Iterator_key(QCborMap::Iterator const * this_ptr) {
  return new QCborValue(this_ptr->key());
}


RITUAL_EXPORT QCborValueConstRef * ctr_qt_core_ffi_QCborMap_Iterator_keyRef(QCborMap::Iterator const * this_ptr) {
  return new QCborValueConstRef(this_ptr->keyRef());
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborMap_Iterator_value(QCborMap::Iterator const * this_ptr) {
  return new QCborValueRef(this_ptr->value());
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_Iterator_operator__3(QCborMap::Iterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_Iterator_operator__4(QCborMap::Iterator * this_ptr, int arg1) {
  return new QCborMap::Iterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_Iterator_operator__5(QCborMap::Iterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_Iterator_operator__6(QCborMap::Iterator * this_ptr, int arg1) {
  return new QCborMap::Iterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_Iterator_operator__7(QCborMap::Iterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_Iterator_operator__8(QCborMap::Iterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_Iterator_operator_2(QCborMap::Iterator const * this_ptr, long long j) {
  return new QCborMap::Iterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_Iterator_operator_3(QCborMap::Iterator const * this_ptr, long long j) {
  return new QCborMap::Iterator(this_ptr->operator-(j));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborMap_Iterator_operator_4(QCborMap::Iterator const * this_ptr, QCborMap::Iterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_ConstIterator_ConstIterator() {
  return new QCborMap::ConstIterator();
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_ConstIterator_ConstIterator1(QCborMap::ConstIterator const * arg1) {
  return new QCborMap::ConstIterator(*arg1);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborMap_ConstIterator_dConstIterator(QCborMap::ConstIterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_ConstIterator_operator_(QCborMap::ConstIterator * this_ptr, QCborMap::ConstIterator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QCborValueConstRef const * ctr_qt_core_ffi_QCborMap_ConstIterator_operator__1(QCborMap::ConstIterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_ConstIterator_key(QCborMap::ConstIterator const * this_ptr) {
  return new QCborValue(this_ptr->key());
}


RITUAL_EXPORT QCborValueConstRef * ctr_qt_core_ffi_QCborMap_ConstIterator_keyRef(QCborMap::ConstIterator const * this_ptr) {
  return new QCborValueConstRef(this_ptr->keyRef());
}


RITUAL_EXPORT QCborValueConstRef * ctr_qt_core_ffi_QCborMap_ConstIterator_value(QCborMap::ConstIterator const * this_ptr) {
  return new QCborValueConstRef(this_ptr->value());
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_ConstIterator_operator__2(QCborMap::ConstIterator * this_ptr) {
  return &this_ptr->operator++();
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_ConstIterator_operator__3(QCborMap::ConstIterator * this_ptr, int arg1) {
  return new QCborMap::ConstIterator(this_ptr->operator++(arg1));
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_ConstIterator_operator__4(QCborMap::ConstIterator * this_ptr) {
  return &this_ptr->operator--();
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_ConstIterator_operator__5(QCborMap::ConstIterator * this_ptr, int arg1) {
  return new QCborMap::ConstIterator(this_ptr->operator--(arg1));
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_ConstIterator_operator__6(QCborMap::ConstIterator * this_ptr, long long j) {
  return &this_ptr->operator+=(j);
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_ConstIterator_operator__7(QCborMap::ConstIterator * this_ptr, long long j) {
  return &this_ptr->operator-=(j);
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_ConstIterator_operator_2(QCborMap::ConstIterator const * this_ptr, long long j) {
  return new QCborMap::ConstIterator(this_ptr->operator+(j));
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_ConstIterator_operator_3(QCborMap::ConstIterator const * this_ptr, long long j) {
  return new QCborMap::ConstIterator(this_ptr->operator-(j));
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborMap_ConstIterator_operator_4(QCborMap::ConstIterator const * this_ptr, QCborMap::ConstIterator const * j) {
  return this_ptr->operator-(*j);
}


RITUAL_EXPORT QCborMap * ctr_qt_core_ffi_QCborMap_QCborMap() {
  return new QCborMap();
}


RITUAL_EXPORT QCborMap * ctr_qt_core_ffi_QCborMap_QCborMap1(QCborMap const * other) {
  return new QCborMap(*other);
}


RITUAL_EXPORT QCborMap * ctr_qt_core_ffi_QCborMap_operator_(QCborMap * this_ptr, QCborMap const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborMap_dQCborMap(QCborMap * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborMap_swap(QCborMap * this_ptr, QCborMap * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_toCborValue(QCborMap const * this_ptr) {
  return new QCborValue(this_ptr->toCborValue());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborMap_size(QCborMap const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborMap_isEmpty(QCborMap const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborMap_clear(QCborMap * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QList< QCborValue > * ctr_qt_core_ffi_QCborMap_keys(QCborMap const * this_ptr) {
  return new QList< QCborValue >(this_ptr->keys());
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_value(QCborMap const * this_ptr, long long key) {
  return new QCborValue(this_ptr->value(key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_value1(QCborMap const * this_ptr, QLatin1String const * key) {
  return new QCborValue(this_ptr->value(*key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_value2(QCborMap const * this_ptr, QString const * key) {
  return new QCborValue(this_ptr->value(*key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_value3(QCborMap const * this_ptr, QCborValue const * key) {
  return new QCborValue(this_ptr->value(*key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_operator__(QCborMap const * this_ptr, long long key) {
  return new QCborValue(this_ptr->operator[](key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_operator__1(QCborMap const * this_ptr, QLatin1String const * key) {
  return new QCborValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_operator__2(QCborMap const * this_ptr, QString const * key) {
  return new QCborValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_operator__3(QCborMap const * this_ptr, QCborValue const * key) {
  return new QCborValue(this_ptr->operator[](*key));
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborMap_operator__4(QCborMap * this_ptr, long long key) {
  return new QCborValueRef(this_ptr->operator[](key));
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborMap_operator__5(QCborMap * this_ptr, QLatin1String const * key) {
  return new QCborValueRef(this_ptr->operator[](*key));
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborMap_operator__6(QCborMap * this_ptr, QString const * key) {
  return new QCborValueRef(this_ptr->operator[](*key));
}


RITUAL_EXPORT QCborValueRef * ctr_qt_core_ffi_QCborMap_operator__7(QCborMap * this_ptr, QCborValue const * key) {
  return new QCborValueRef(this_ptr->operator[](*key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_take(QCborMap * this_ptr, long long key) {
  return new QCborValue(this_ptr->take(key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_take1(QCborMap * this_ptr, QLatin1String const * key) {
  return new QCborValue(this_ptr->take(*key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_take2(QCborMap * this_ptr, QString const * key) {
  return new QCborValue(this_ptr->take(*key));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_take3(QCborMap * this_ptr, QCborValue const * key) {
  return new QCborValue(this_ptr->take(*key));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborMap_remove(QCborMap * this_ptr, long long key) {
  this_ptr->remove(key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborMap_remove1(QCborMap * this_ptr, QLatin1String const * key) {
  this_ptr->remove(*key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborMap_remove2(QCborMap * this_ptr, QString const * key) {
  this_ptr->remove(*key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborMap_remove3(QCborMap * this_ptr, QCborValue const * key) {
  this_ptr->remove(*key);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborMap_contains(QCborMap const * this_ptr, long long key) {
  return this_ptr->contains(key);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborMap_contains1(QCborMap const * this_ptr, QLatin1String const * key) {
  return this_ptr->contains(*key);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborMap_contains2(QCborMap const * this_ptr, QString const * key) {
  return this_ptr->contains(*key);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborMap_contains3(QCborMap const * this_ptr, QCborValue const * key) {
  return this_ptr->contains(*key);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCborMap_compare(QCborMap const * this_ptr, QCborMap const * other) {
  return this_ptr->compare(*other);
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_begin(QCborMap * this_ptr) {
  return new QCborMap::Iterator(this_ptr->begin());
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_constBegin(QCborMap const * this_ptr) {
  return new QCborMap::ConstIterator(this_ptr->constBegin());
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_begin1(QCborMap const * this_ptr) {
  return new QCborMap::ConstIterator(this_ptr->begin());
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_cbegin(QCborMap const * this_ptr) {
  return new QCborMap::ConstIterator(this_ptr->cbegin());
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_end(QCborMap * this_ptr) {
  return new QCborMap::Iterator(this_ptr->end());
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_constEnd(QCborMap const * this_ptr) {
  return new QCborMap::ConstIterator(this_ptr->constEnd());
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_end1(QCborMap const * this_ptr) {
  return new QCborMap::ConstIterator(this_ptr->end());
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_cend(QCborMap const * this_ptr) {
  return new QCborMap::ConstIterator(this_ptr->cend());
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_erase(QCborMap * this_ptr, QCborMap::Iterator const * it) {
  return new QCborMap::Iterator(this_ptr->erase(*it));
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_erase1(QCborMap * this_ptr, QCborMap::ConstIterator const * it) {
  return new QCborMap::Iterator(this_ptr->erase(*it));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_extract(QCborMap * this_ptr, QCborMap::Iterator const * it) {
  return new QCborValue(this_ptr->extract(*it));
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QCborMap_extract1(QCborMap * this_ptr, QCborMap::ConstIterator const * it) {
  return new QCborValue(this_ptr->extract(*it));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborMap_empty(QCborMap const * this_ptr) {
  return this_ptr->empty();
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_find(QCborMap * this_ptr, long long key) {
  return new QCborMap::Iterator(this_ptr->find(key));
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_find1(QCborMap * this_ptr, QLatin1String const * key) {
  return new QCborMap::Iterator(this_ptr->find(*key));
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_find2(QCborMap * this_ptr, QString const * key) {
  return new QCborMap::Iterator(this_ptr->find(*key));
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_find3(QCborMap * this_ptr, QCborValue const * key) {
  return new QCborMap::Iterator(this_ptr->find(*key));
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_constFind(QCborMap const * this_ptr, long long key) {
  return new QCborMap::ConstIterator(this_ptr->constFind(key));
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_constFind1(QCborMap const * this_ptr, QLatin1String const * key) {
  return new QCborMap::ConstIterator(this_ptr->constFind(*key));
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_constFind2(QCborMap const * this_ptr, QString const * key) {
  return new QCborMap::ConstIterator(this_ptr->constFind(*key));
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_constFind3(QCborMap const * this_ptr, QCborValue const * key) {
  return new QCborMap::ConstIterator(this_ptr->constFind(*key));
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_find4(QCborMap const * this_ptr, long long key) {
  return new QCborMap::ConstIterator(this_ptr->find(key));
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_find5(QCborMap const * this_ptr, QLatin1String const * key) {
  return new QCborMap::ConstIterator(this_ptr->find(*key));
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_find6(QCborMap const * this_ptr, QString const * key) {
  return new QCborMap::ConstIterator(this_ptr->find(*key));
}


RITUAL_EXPORT QCborMap::ConstIterator * ctr_qt_core_ffi_QCborMap_find7(QCborMap const * this_ptr, QCborValue const * key) {
  return new QCborMap::ConstIterator(this_ptr->find(*key));
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_insert(QCborMap * this_ptr, long long key, QCborValue const * value_) {
  return new QCborMap::Iterator(this_ptr->insert(key, *value_));
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_insert1(QCborMap * this_ptr, QLatin1String const * key, QCborValue const * value_) {
  return new QCborMap::Iterator(this_ptr->insert(*key, *value_));
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_insert2(QCborMap * this_ptr, QString const * key, QCborValue const * value_) {
  return new QCborMap::Iterator(this_ptr->insert(*key, *value_));
}


RITUAL_EXPORT QCborMap::Iterator * ctr_qt_core_ffi_QCborMap_insert3(QCborMap * this_ptr, QCborValue const * key, QCborValue const * value_) {
  return new QCborMap::Iterator(this_ptr->insert(*key, *value_));
}


RITUAL_EXPORT QCborMap * ctr_qt_core_ffi_QCborMap_fromVariantMap(QMap< QString, QVariant > const * map) {
  return new QCborMap(QCborMap::fromVariantMap(*map));
}


RITUAL_EXPORT QCborMap * ctr_qt_core_ffi_QCborMap_fromVariantHash(QHash< QString, QVariant > const * hash) {
  return new QCborMap(QCborMap::fromVariantHash(*hash));
}


RITUAL_EXPORT QCborMap * ctr_qt_core_ffi_QCborMap_fromJsonObject(QJsonObject const * o) {
  return new QCborMap(QCborMap::fromJsonObject(*o));
}


RITUAL_EXPORT QMap< QString, QVariant > * ctr_qt_core_ffi_QCborMap_toVariantMap(QCborMap const * this_ptr) {
  return new QMap< QString, QVariant >(this_ptr->toVariantMap());
}


RITUAL_EXPORT QHash< QString, QVariant > * ctr_qt_core_ffi_QCborMap_toVariantHash(QCborMap const * this_ptr) {
  return new QHash< QString, QVariant >(this_ptr->toVariantHash());
}


RITUAL_EXPORT QJsonObject * ctr_qt_core_ffi_QCborMap_toJsonObject(QCborMap const * this_ptr) {
  return new QJsonObject(this_ptr->toJsonObject());
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash42(QCborMap const * map, unsigned long seed) {
  return qHash(*map, seed);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__61(QDebug const * arg1, QCborMap const * m) {
  return new QDebug(operator<<(*arg1, *m));
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__62(QDataStream * arg1, QCborMap const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__63(QDataStream * arg1, QCborMap * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QCborStreamReader * ctr_qt_core_ffi_QCborStreamReader_QCborStreamReader() {
  return new QCborStreamReader();
}


RITUAL_EXPORT QCborStreamReader * ctr_qt_core_ffi_QCborStreamReader_QCborStreamReader1(char const * data, long long len) {
  return new QCborStreamReader(data, len);
}


RITUAL_EXPORT QCborStreamReader * ctr_qt_core_ffi_QCborStreamReader_QCborStreamReader2(unsigned char const * data, long long len) {
  return new QCborStreamReader(data, len);
}


RITUAL_EXPORT QCborStreamReader * ctr_qt_core_ffi_QCborStreamReader_QCborStreamReader3(QByteArray const * data) {
  return new QCborStreamReader(*data);
}


RITUAL_EXPORT QCborStreamReader * ctr_qt_core_ffi_QCborStreamReader_QCborStreamReader4(QIODevice * device) {
  return new QCborStreamReader(device);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamReader_dQCborStreamReader(QCborStreamReader * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamReader_setDevice(QCborStreamReader * this_ptr, QIODevice * device) {
  this_ptr->setDevice(device);
}


RITUAL_EXPORT QIODevice * ctr_qt_core_ffi_QCborStreamReader_device(QCborStreamReader const * this_ptr) {
  return this_ptr->device();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamReader_addData(QCborStreamReader * this_ptr, QByteArray const * data) {
  this_ptr->addData(*data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamReader_addData1(QCborStreamReader * this_ptr, char const * data, long long len) {
  this_ptr->addData(data, len);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamReader_addData2(QCborStreamReader * this_ptr, unsigned char const * data, long long len) {
  this_ptr->addData(data, len);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamReader_reparse(QCborStreamReader * this_ptr) {
  this_ptr->reparse();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamReader_clear(QCborStreamReader * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborStreamReader_reset(QCborStreamReader * this_ptr) {
  this_ptr->reset();
}


RITUAL_EXPORT QCborError * ctr_qt_core_ffi_QCborStreamReader_lastError(QCborStreamReader const * this_ptr) {
  return new QCborError(this_ptr->lastError());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborStreamReader_currentOffset(QCborStreamReader const * this_ptr) {
  return this_ptr->currentOffset();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isValid(QCborStreamReader const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QCborStreamReader_containerDepth(QCborStreamReader const * this_ptr) {
  return this_ptr->containerDepth();
}


RITUAL_EXPORT QCborStreamReader::Type ctr_qt_core_ffi_QCborStreamReader_parentContainerType(QCborStreamReader const * this_ptr) {
  return this_ptr->parentContainerType();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_hasNext(QCborStreamReader const * this_ptr) {
  return this_ptr->hasNext();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_next(QCborStreamReader * this_ptr, int maxRecursion) {
  return this_ptr->next(maxRecursion);
}


RITUAL_EXPORT QCborStreamReader::Type ctr_qt_core_ffi_QCborStreamReader_type(QCborStreamReader const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isUnsignedInteger(QCborStreamReader const * this_ptr) {
  return this_ptr->isUnsignedInteger();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isNegativeInteger(QCborStreamReader const * this_ptr) {
  return this_ptr->isNegativeInteger();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isInteger(QCborStreamReader const * this_ptr) {
  return this_ptr->isInteger();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isByteArray(QCborStreamReader const * this_ptr) {
  return this_ptr->isByteArray();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isString(QCborStreamReader const * this_ptr) {
  return this_ptr->isString();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isArray(QCborStreamReader const * this_ptr) {
  return this_ptr->isArray();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isMap(QCborStreamReader const * this_ptr) {
  return this_ptr->isMap();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isTag(QCborStreamReader const * this_ptr) {
  return this_ptr->isTag();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isSimpleType(QCborStreamReader const * this_ptr) {
  return this_ptr->isSimpleType();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isFloat16(QCborStreamReader const * this_ptr) {
  return this_ptr->isFloat16();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isFloat(QCborStreamReader const * this_ptr) {
  return this_ptr->isFloat();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isDouble(QCborStreamReader const * this_ptr) {
  return this_ptr->isDouble();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isInvalid(QCborStreamReader const * this_ptr) {
  return this_ptr->isInvalid();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isSimpleType1(QCborStreamReader const * this_ptr, QCborSimpleType st) {
  return this_ptr->isSimpleType(st);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isFalse(QCborStreamReader const * this_ptr) {
  return this_ptr->isFalse();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isTrue(QCborStreamReader const * this_ptr) {
  return this_ptr->isTrue();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isBool(QCborStreamReader const * this_ptr) {
  return this_ptr->isBool();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isNull(QCborStreamReader const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isUndefined(QCborStreamReader const * this_ptr) {
  return this_ptr->isUndefined();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isLengthKnown(QCborStreamReader const * this_ptr) {
  return this_ptr->isLengthKnown();
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QCborStreamReader_length(QCborStreamReader const * this_ptr) {
  return this_ptr->length();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_isContainer(QCborStreamReader const * this_ptr) {
  return this_ptr->isContainer();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_enterContainer(QCborStreamReader * this_ptr) {
  return this_ptr->enterContainer();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_leaveContainer(QCborStreamReader * this_ptr) {
  return this_ptr->leaveContainer();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_readAndAppendToString(QCborStreamReader * this_ptr, QString * dst) {
  return this_ptr->readAndAppendToString(*dst);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_readAndAppendToUtf8String(QCborStreamReader * this_ptr, QByteArray * dst) {
  return this_ptr->readAndAppendToUtf8String(*dst);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_readAndAppendToByteArray(QCborStreamReader * this_ptr, QByteArray * dst) {
  return this_ptr->readAndAppendToByteArray(*dst);
}


RITUAL_EXPORT QCborStreamReader::StringResult< QString > * ctr_qt_core_ffi_QCborStreamReader_readString(QCborStreamReader * this_ptr) {
  return new QCborStreamReader::StringResult< QString >(this_ptr->readString());
}


RITUAL_EXPORT QCborStreamReader::StringResult< QByteArray > * ctr_qt_core_ffi_QCborStreamReader_readUtf8String(QCborStreamReader * this_ptr) {
  return new QCborStreamReader::StringResult< QByteArray >(this_ptr->readUtf8String());
}


RITUAL_EXPORT QCborStreamReader::StringResult< QByteArray > * ctr_qt_core_ffi_QCborStreamReader_readByteArray(QCborStreamReader * this_ptr) {
  return new QCborStreamReader::StringResult< QByteArray >(this_ptr->readByteArray());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QCborStreamReader_currentStringChunkSize(QCborStreamReader const * this_ptr) {
  return this_ptr->currentStringChunkSize();
}


RITUAL_EXPORT QCborStreamReader::StringResult< long long > * ctr_qt_core_ffi_QCborStreamReader_readStringChunk(QCborStreamReader * this_ptr, char * ptr, long long maxlen) {
  return new QCborStreamReader::StringResult< long long >(this_ptr->readStringChunk(ptr, maxlen));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QCborStreamReader_toBool(QCborStreamReader const * this_ptr) {
  return this_ptr->toBool();
}


RITUAL_EXPORT QCborTag ctr_qt_core_ffi_QCborStreamReader_toTag(QCborStreamReader const * this_ptr) {
  return this_ptr->toTag();
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QCborStreamReader_toUnsignedInteger(QCborStreamReader const * this_ptr) {
  return this_ptr->toUnsignedInteger();
}


RITUAL_EXPORT QCborNegativeInteger ctr_qt_core_ffi_QCborStreamReader_toNegativeInteger(QCborStreamReader const * this_ptr) {
  return this_ptr->toNegativeInteger();
}


} // extern "C"
