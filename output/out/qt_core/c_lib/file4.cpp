#include "qt_core_c_global.h"
#include "file1.h"
extern "C" {
RITUAL_EXPORT QRandomGenerator * ctr_qt_core_ffi_QRandomGenerator_securelySeeded() {
  return new QRandomGenerator(QRandomGenerator::securelySeeded());
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QRandomGenerator64_generate(QRandomGenerator64 * this_ptr) {
  return this_ptr->generate();
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QRandomGenerator64_operator__(QRandomGenerator64 * this_ptr) {
  return this_ptr->operator()();
}


RITUAL_EXPORT QRandomGenerator64 * ctr_qt_core_ffi_QRandomGenerator64_QRandomGenerator64(unsigned int seedValue) {
  return new QRandomGenerator64(seedValue);
}


RITUAL_EXPORT QRandomGenerator64 * ctr_qt_core_ffi_QRandomGenerator64_QRandomGenerator641(unsigned int const * seedBuffer, long long len) {
  return new QRandomGenerator64(seedBuffer, len);
}


RITUAL_EXPORT QRandomGenerator64 * ctr_qt_core_ffi_QRandomGenerator64_QRandomGenerator643(unsigned int const * begin, unsigned int const * end) {
  return new QRandomGenerator64(begin, end);
}


RITUAL_EXPORT QRandomGenerator64 * ctr_qt_core_ffi_QRandomGenerator64_QRandomGenerator644(QRandomGenerator const * other) {
  return new QRandomGenerator64(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRandomGenerator64_discard(QRandomGenerator64 * this_ptr, unsigned long long z) {
  this_ptr->discard(z);
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QRandomGenerator64_min() {
  return QRandomGenerator64::min();
}


RITUAL_EXPORT unsigned long long ctr_qt_core_ffi_QRandomGenerator64_max() {
  return QRandomGenerator64::max();
}


RITUAL_EXPORT QRandomGenerator64 * ctr_qt_core_ffi_QRandomGenerator64_system() {
  return QRandomGenerator64::system();
}


RITUAL_EXPORT QRandomGenerator64 * ctr_qt_core_ffi_QRandomGenerator64_global() {
  return QRandomGenerator64::global();
}


RITUAL_EXPORT QRandomGenerator64 * ctr_qt_core_ffi_QRandomGenerator64_securelySeeded() {
  return new QRandomGenerator64(QRandomGenerator64::securelySeeded());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QRangeModel_metaObject(QRangeModel const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QRangeModel_qt_metacast(QRangeModel * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRangeModel_qt_metacall(QRangeModel * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QRangeModel_tr(char const * s, char const * c, int n) {
  return new QString(QRangeModel::tr(s, c, n));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRangeModel_dQRangeModel(QRangeModel * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QRangeModel_index(QRangeModel const * this_ptr, int row, int column, QModelIndex const * parent) {
  return new QModelIndex(this_ptr->index(row, column, *parent));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QRangeModel_parent(QRangeModel const * this_ptr, QModelIndex const * child) {
  return new QModelIndex(this_ptr->parent(*child));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QRangeModel_sibling(QRangeModel const * this_ptr, int row, int column, QModelIndex const * index) {
  return new QModelIndex(this_ptr->sibling(row, column, *index));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRangeModel_rowCount(QRangeModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->rowCount(*parent);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRangeModel_columnCount(QRangeModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->columnCount(*parent);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRangeModel_flags(QRangeModel const * this_ptr, QModelIndex const * index) {
  return int(this_ptr->flags(*index));
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QRangeModel_headerData(QRangeModel const * this_ptr, int section, Qt::Orientation orientation, int role) {
  return new QVariant(this_ptr->headerData(section, orientation, role));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_setHeaderData(QRangeModel * this_ptr, int section, Qt::Orientation orientation, QVariant const * data, int role) {
  return this_ptr->setHeaderData(section, orientation, *data, role);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QRangeModel_data(QRangeModel const * this_ptr, QModelIndex const * index, int role) {
  return new QVariant(this_ptr->data(*index, role));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_setData(QRangeModel * this_ptr, QModelIndex const * index, QVariant const * data, int role) {
  return this_ptr->setData(*index, *data, role);
}


RITUAL_EXPORT QMap< int, QVariant > * ctr_qt_core_ffi_QRangeModel_itemData(QRangeModel const * this_ptr, QModelIndex const * index) {
  return new QMap< int, QVariant >(this_ptr->itemData(*index));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_setItemData(QRangeModel * this_ptr, QModelIndex const * index, QMap< int, QVariant > const * data) {
  return this_ptr->setItemData(*index, *data);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_clearItemData(QRangeModel * this_ptr, QModelIndex const * index) {
  return this_ptr->clearItemData(*index);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_insertColumns(QRangeModel * this_ptr, int column, int count, QModelIndex const * parent) {
  return this_ptr->insertColumns(column, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_removeColumns(QRangeModel * this_ptr, int column, int count, QModelIndex const * parent) {
  return this_ptr->removeColumns(column, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_moveColumns(QRangeModel * this_ptr, QModelIndex const * sourceParent, int sourceColumn, int count, QModelIndex const * destParent, int destColumn) {
  return this_ptr->moveColumns(*sourceParent, sourceColumn, count, *destParent, destColumn);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_insertRows(QRangeModel * this_ptr, int row, int count, QModelIndex const * parent) {
  return this_ptr->insertRows(row, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_removeRows(QRangeModel * this_ptr, int row, int count, QModelIndex const * parent) {
  return this_ptr->removeRows(row, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_moveRows(QRangeModel * this_ptr, QModelIndex const * sourceParent, int sourceRow, int count, QModelIndex const * destParent, int destRow) {
  return this_ptr->moveRows(*sourceParent, sourceRow, count, *destParent, destRow);
}


RITUAL_EXPORT QHash< int, QByteArray > * ctr_qt_core_ffi_QRangeModel_roleNames(QRangeModel const * this_ptr) {
  return new QHash< int, QByteArray >(this_ptr->roleNames());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRangeModel_setRoleNames(QRangeModel * this_ptr, QHash< int, QByteArray > const * names) {
  this_ptr->setRoleNames(*names);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRangeModel_resetRoleNames(QRangeModel * this_ptr) {
  this_ptr->resetRoleNames();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_canFetchMore(QRangeModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->canFetchMore(*parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRangeModel_fetchMore(QRangeModel * this_ptr, QModelIndex const * parent) {
  this_ptr->fetchMore(*parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_hasChildren(QRangeModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->hasChildren(*parent);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QRangeModel_buddy(QRangeModel const * this_ptr, QModelIndex const * index) {
  return new QModelIndex(this_ptr->buddy(*index));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_canDropMimeData(QRangeModel const * this_ptr, QMimeData const * data, Qt::DropAction action, int row, int column, QModelIndex const * parent) {
  return this_ptr->canDropMimeData(data, action, row, column, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRangeModel_dropMimeData(QRangeModel * this_ptr, QMimeData const * data, Qt::DropAction action, int row, int column, QModelIndex const * parent) {
  return this_ptr->dropMimeData(data, action, row, column, *parent);
}


RITUAL_EXPORT QMimeData * ctr_qt_core_ffi_QRangeModel_mimeData(QRangeModel const * this_ptr, QList< QModelIndex > const * indexes) {
  return this_ptr->mimeData(*indexes);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QRangeModel_mimeTypes(QRangeModel const * this_ptr) {
  return new QList< QString >(this_ptr->mimeTypes());
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QRangeModel_match(QRangeModel const * this_ptr, QModelIndex const * start, int role, QVariant const * value, int hits, int flags) {
  return new QList< QModelIndex >(this_ptr->match(*start, role, *value, hits, QFlags< Qt::MatchFlag >(flags)));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRangeModel_multiData(QRangeModel const * this_ptr, QModelIndex const * index, QModelRoleDataSpan const * roleDataSpan) {
  this_ptr->multiData(*index, *roleDataSpan);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRangeModel_sort(QRangeModel * this_ptr, int column, Qt::SortOrder order) {
  this_ptr->sort(column, order);
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QRangeModel_span(QRangeModel const * this_ptr, QModelIndex const * index) {
  return new QSize(this_ptr->span(*index));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRangeModel_supportedDragActions(QRangeModel const * this_ptr) {
  return int(this_ptr->supportedDragActions());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRangeModel_supportedDropActions(QRangeModel const * this_ptr) {
  return int(this_ptr->supportedDropActions());
}


RITUAL_EXPORT QReadWriteLock * ctr_qt_core_ffi_QReadWriteLock_QReadWriteLock(QReadWriteLock::RecursionMode recursionMode) {
  return new QReadWriteLock(recursionMode);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QReadWriteLock_dQReadWriteLock(QReadWriteLock * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QReadWriteLock_lockForRead(QReadWriteLock * this_ptr) {
  this_ptr->lockForRead();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QReadWriteLock_tryLockForRead(QReadWriteLock * this_ptr, int timeout) {
  return this_ptr->tryLockForRead(timeout);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QReadWriteLock_tryLockForRead1(QReadWriteLock * this_ptr, QDeadlineTimer const * timeout) {
  return this_ptr->tryLockForRead(*timeout);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QReadWriteLock_lockForWrite(QReadWriteLock * this_ptr) {
  this_ptr->lockForWrite();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QReadWriteLock_tryLockForWrite(QReadWriteLock * this_ptr, int timeout) {
  return this_ptr->tryLockForWrite(timeout);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QReadWriteLock_tryLockForWrite1(QReadWriteLock * this_ptr, QDeadlineTimer const * timeout) {
  return this_ptr->tryLockForWrite(*timeout);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QReadWriteLock_unlock(QReadWriteLock * this_ptr) {
  this_ptr->unlock();
}


RITUAL_EXPORT QReadLocker * ctr_qt_core_ffi_QReadLocker_QReadLocker(QReadWriteLock * readWriteLock) {
  return new QReadLocker(readWriteLock);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QReadLocker_dQReadLocker(QReadLocker * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QReadLocker_unlock(QReadLocker * this_ptr) {
  this_ptr->unlock();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QReadLocker_relock(QReadLocker * this_ptr) {
  this_ptr->relock();
}


RITUAL_EXPORT QReadWriteLock * ctr_qt_core_ffi_QReadLocker_readWriteLock(QReadLocker const * this_ptr) {
  return this_ptr->readWriteLock();
}


RITUAL_EXPORT QWriteLocker * ctr_qt_core_ffi_QWriteLocker_QWriteLocker(QReadWriteLock * readWriteLock) {
  return new QWriteLocker(readWriteLock);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QWriteLocker_dQWriteLocker(QWriteLocker * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QWriteLocker_unlock(QWriteLocker * this_ptr) {
  this_ptr->unlock();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QWriteLocker_relock(QWriteLocker * this_ptr) {
  this_ptr->relock();
}


RITUAL_EXPORT QReadWriteLock * ctr_qt_core_ffi_QWriteLocker_readWriteLock(QWriteLocker const * this_ptr) {
  return this_ptr->readWriteLock();
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSize_QSize() {
  return new QSize();
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSize_QSize1(int w, int h) {
  return new QSize(w, h);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSize_isNull(QSize const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSize_isEmpty(QSize const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSize_isValid(QSize const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSize_width(QSize const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSize_height(QSize const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSize_setWidth(QSize * this_ptr, int w) {
  this_ptr->setWidth(w);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSize_setHeight(QSize * this_ptr, int h) {
  this_ptr->setHeight(h);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSize_transpose(QSize * this_ptr) {
  this_ptr->transpose();
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSize_transposed(QSize const * this_ptr) {
  return new QSize(this_ptr->transposed());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSize_scale(QSize * this_ptr, int w, int h, Qt::AspectRatioMode mode) {
  this_ptr->scale(w, h, mode);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSize_scale1(QSize * this_ptr, QSize const * s, Qt::AspectRatioMode mode) {
  this_ptr->scale(*s, mode);
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSize_scaled(QSize const * this_ptr, int w, int h, Qt::AspectRatioMode mode) {
  return new QSize(this_ptr->scaled(w, h, mode));
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSize_scaled1(QSize const * this_ptr, QSize const * s, Qt::AspectRatioMode mode) {
  return new QSize(this_ptr->scaled(*s, mode));
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSize_expandedTo(QSize const * this_ptr, QSize const * arg1) {
  return new QSize(this_ptr->expandedTo(*arg1));
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSize_boundedTo(QSize const * this_ptr, QSize const * arg1) {
  return new QSize(this_ptr->boundedTo(*arg1));
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSize_grownBy(QSize const * this_ptr, QMargins const * m) {
  return new QSize(this_ptr->grownBy(*m));
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSize_shrunkBy(QSize const * this_ptr, QMargins const * m) {
  return new QSize(this_ptr->shrunkBy(*m));
}


RITUAL_EXPORT int * ctr_qt_core_ffi_QSize_rwidth(QSize * this_ptr) {
  return &this_ptr->rwidth();
}


RITUAL_EXPORT int * ctr_qt_core_ffi_QSize_rheight(QSize * this_ptr) {
  return &this_ptr->rheight();
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSize_operator__(QSize * this_ptr, QSize const * arg1) {
  return &this_ptr->operator+=(*arg1);
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSize_operator__1(QSize * this_ptr, QSize const * arg1) {
  return &this_ptr->operator-=(*arg1);
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSize_operator__2(QSize * this_ptr, double c) {
  return &this_ptr->operator*=(c);
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSize_operator__3(QSize * this_ptr, double c) {
  return &this_ptr->operator/=(c);
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSize_toSizeF(QSize const * this_ptr) {
  return new QSizeF(this_ptr->toSizeF());
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__111(QDataStream * arg1, QSize const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__112(QDataStream * arg1, QSize * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash51(QSize const * s, unsigned long seed) {
  return qHash(*s, seed);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__113(QDebug const * arg1, QSize const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_QSizeF() {
  return new QSizeF();
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_QSizeF1(QSize const * sz) {
  return new QSizeF(*sz);
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_QSizeF2(double w, double h) {
  return new QSizeF(w, h);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSizeF_isNull(QSizeF const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSizeF_isEmpty(QSizeF const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSizeF_isValid(QSizeF const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QSizeF_width(QSizeF const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QSizeF_height(QSizeF const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSizeF_setWidth(QSizeF * this_ptr, double w) {
  this_ptr->setWidth(w);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSizeF_setHeight(QSizeF * this_ptr, double h) {
  this_ptr->setHeight(h);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSizeF_transpose(QSizeF * this_ptr) {
  this_ptr->transpose();
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_transposed(QSizeF const * this_ptr) {
  return new QSizeF(this_ptr->transposed());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSizeF_scale(QSizeF * this_ptr, double w, double h, Qt::AspectRatioMode mode) {
  this_ptr->scale(w, h, mode);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSizeF_scale1(QSizeF * this_ptr, QSizeF const * s, Qt::AspectRatioMode mode) {
  this_ptr->scale(*s, mode);
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_scaled(QSizeF const * this_ptr, double w, double h, Qt::AspectRatioMode mode) {
  return new QSizeF(this_ptr->scaled(w, h, mode));
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_scaled1(QSizeF const * this_ptr, QSizeF const * s, Qt::AspectRatioMode mode) {
  return new QSizeF(this_ptr->scaled(*s, mode));
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_expandedTo(QSizeF const * this_ptr, QSizeF const * arg1) {
  return new QSizeF(this_ptr->expandedTo(*arg1));
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_boundedTo(QSizeF const * this_ptr, QSizeF const * arg1) {
  return new QSizeF(this_ptr->boundedTo(*arg1));
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_grownBy(QSizeF const * this_ptr, QMarginsF const * m) {
  return new QSizeF(this_ptr->grownBy(*m));
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_shrunkBy(QSizeF const * this_ptr, QMarginsF const * m) {
  return new QSizeF(this_ptr->shrunkBy(*m));
}


RITUAL_EXPORT double * ctr_qt_core_ffi_QSizeF_rwidth(QSizeF * this_ptr) {
  return &this_ptr->rwidth();
}


RITUAL_EXPORT double * ctr_qt_core_ffi_QSizeF_rheight(QSizeF * this_ptr) {
  return &this_ptr->rheight();
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_operator__(QSizeF * this_ptr, QSizeF const * arg1) {
  return &this_ptr->operator+=(*arg1);
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_operator__1(QSizeF * this_ptr, QSizeF const * arg1) {
  return &this_ptr->operator-=(*arg1);
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_operator__2(QSizeF * this_ptr, double c) {
  return &this_ptr->operator*=(c);
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_operator__3(QSizeF * this_ptr, double c) {
  return &this_ptr->operator/=(c);
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSizeF_toSize(QSizeF const * this_ptr) {
  return new QSize(this_ptr->toSize());
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__114(QDataStream * arg1, QSizeF const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__115(QDataStream * arg1, QSizeF * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__116(QDebug const * arg1, QSizeF const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_QRect() {
  return new QRect();
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_QRect1(QPoint const * topleft, QPoint const * bottomright) {
  return new QRect(*topleft, *bottomright);
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_QRect2(QPoint const * topleft, QSize const * size) {
  return new QRect(*topleft, *size);
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_QRect3(int left, int top, int width, int height) {
  return new QRect(left, top, width, height);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRect_isNull(QRect const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRect_isEmpty(QRect const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRect_isValid(QRect const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRect_left(QRect const * this_ptr) {
  return this_ptr->left();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRect_top(QRect const * this_ptr) {
  return this_ptr->top();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRect_right(QRect const * this_ptr) {
  return this_ptr->right();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRect_bottom(QRect const * this_ptr) {
  return this_ptr->bottom();
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_normalized(QRect const * this_ptr) {
  return new QRect(this_ptr->normalized());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRect_x(QRect const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRect_y(QRect const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_setLeft(QRect * this_ptr, int pos) {
  this_ptr->setLeft(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_setTop(QRect * this_ptr, int pos) {
  this_ptr->setTop(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_setRight(QRect * this_ptr, int pos) {
  this_ptr->setRight(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_setBottom(QRect * this_ptr, int pos) {
  this_ptr->setBottom(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_setX(QRect * this_ptr, int x) {
  this_ptr->setX(x);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_setY(QRect * this_ptr, int y) {
  this_ptr->setY(y);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_setTopLeft(QRect * this_ptr, QPoint const * p) {
  this_ptr->setTopLeft(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_setBottomRight(QRect * this_ptr, QPoint const * p) {
  this_ptr->setBottomRight(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_setTopRight(QRect * this_ptr, QPoint const * p) {
  this_ptr->setTopRight(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_setBottomLeft(QRect * this_ptr, QPoint const * p) {
  this_ptr->setBottomLeft(*p);
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QRect_topLeft(QRect const * this_ptr) {
  return new QPoint(this_ptr->topLeft());
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QRect_bottomRight(QRect const * this_ptr) {
  return new QPoint(this_ptr->bottomRight());
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QRect_topRight(QRect const * this_ptr) {
  return new QPoint(this_ptr->topRight());
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QRect_bottomLeft(QRect const * this_ptr) {
  return new QPoint(this_ptr->bottomLeft());
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QRect_center(QRect const * this_ptr) {
  return new QPoint(this_ptr->center());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_moveLeft(QRect * this_ptr, int pos) {
  this_ptr->moveLeft(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_moveTop(QRect * this_ptr, int pos) {
  this_ptr->moveTop(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_moveRight(QRect * this_ptr, int pos) {
  this_ptr->moveRight(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_moveBottom(QRect * this_ptr, int pos) {
  this_ptr->moveBottom(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_moveTopLeft(QRect * this_ptr, QPoint const * p) {
  this_ptr->moveTopLeft(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_moveBottomRight(QRect * this_ptr, QPoint const * p) {
  this_ptr->moveBottomRight(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_moveTopRight(QRect * this_ptr, QPoint const * p) {
  this_ptr->moveTopRight(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_moveBottomLeft(QRect * this_ptr, QPoint const * p) {
  this_ptr->moveBottomLeft(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_moveCenter(QRect * this_ptr, QPoint const * p) {
  this_ptr->moveCenter(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_translate(QRect * this_ptr, int dx, int dy) {
  this_ptr->translate(dx, dy);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_translate1(QRect * this_ptr, QPoint const * p) {
  this_ptr->translate(*p);
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_translated(QRect const * this_ptr, int dx, int dy) {
  return new QRect(this_ptr->translated(dx, dy));
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_translated1(QRect const * this_ptr, QPoint const * p) {
  return new QRect(this_ptr->translated(*p));
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_transposed(QRect const * this_ptr) {
  return new QRect(this_ptr->transposed());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_moveTo(QRect * this_ptr, int x, int t) {
  this_ptr->moveTo(x, t);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_moveTo1(QRect * this_ptr, QPoint const * p) {
  this_ptr->moveTo(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_setRect(QRect * this_ptr, int x, int y, int w, int h) {
  this_ptr->setRect(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_getRect(QRect const * this_ptr, int * x, int * y, int * w, int * h) {
  this_ptr->getRect(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_setCoords(QRect * this_ptr, int x1, int y1, int x2, int y2) {
  this_ptr->setCoords(x1, y1, x2, y2);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_getCoords(QRect const * this_ptr, int * x1, int * y1, int * x2, int * y2) {
  this_ptr->getCoords(x1, y1, x2, y2);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_adjust(QRect * this_ptr, int x1, int y1, int x2, int y2) {
  this_ptr->adjust(x1, y1, x2, y2);
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_adjusted(QRect const * this_ptr, int x1, int y1, int x2, int y2) {
  return new QRect(this_ptr->adjusted(x1, y1, x2, y2));
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QRect_size(QRect const * this_ptr) {
  return new QSize(this_ptr->size());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRect_width(QRect const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QRect_height(QRect const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_setWidth(QRect * this_ptr, int w) {
  this_ptr->setWidth(w);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_setHeight(QRect * this_ptr, int h) {
  this_ptr->setHeight(h);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_setSize(QRect * this_ptr, QSize const * s) {
  this_ptr->setSize(*s);
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_operator_(QRect const * this_ptr, QRect const * r) {
  return new QRect(this_ptr->operator|(*r));
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_operator_1(QRect const * this_ptr, QRect const * r) {
  return new QRect(this_ptr->operator&(*r));
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_operator__(QRect * this_ptr, QRect const * r) {
  return &this_ptr->operator|=(*r);
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_operator__1(QRect * this_ptr, QRect const * r) {
  return &this_ptr->operator&=(*r);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRect_contains(QRect const * this_ptr, QRect const * r, bool proper) {
  return this_ptr->contains(*r, proper);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRect_contains1(QRect const * this_ptr, QPoint const * p, bool proper) {
  return this_ptr->contains(*p, proper);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRect_contains2(QRect const * this_ptr, int x, int y) {
  return this_ptr->contains(x, y);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRect_contains3(QRect const * this_ptr, int x, int y, bool proper) {
  return this_ptr->contains(x, y, proper);
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_united(QRect const * this_ptr, QRect const * other) {
  return new QRect(this_ptr->united(*other));
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_intersected(QRect const * this_ptr, QRect const * other) {
  return new QRect(this_ptr->intersected(*other));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRect_intersects(QRect const * this_ptr, QRect const * r) {
  return this_ptr->intersects(*r);
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_marginsAdded(QRect const * this_ptr, QMargins const * margins) {
  return new QRect(this_ptr->marginsAdded(*margins));
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_marginsRemoved(QRect const * this_ptr, QMargins const * margins) {
  return new QRect(this_ptr->marginsRemoved(*margins));
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_operator__2(QRect * this_ptr, QMargins const * margins) {
  return &this_ptr->operator+=(*margins);
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_operator__3(QRect * this_ptr, QMargins const * margins) {
  return &this_ptr->operator-=(*margins);
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_span(QPoint const * p1, QPoint const * p2) {
  return new QRect(QRect::span(*p1, *p2));
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRect_toRectF(QRect const * this_ptr) {
  return new QRectF(this_ptr->toRectF());
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__117(QDataStream * arg1, QRect const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__118(QDataStream * arg1, QRect * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash52(QRect const * r, unsigned long seed) {
  return qHash(*r, seed);
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_operator_347(QRect const * rectangle, QMargins const * margins) {
  return new QRect(operator+(*rectangle, *margins));
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_operator_348(QMargins const * margins, QRect const * rectangle) {
  return new QRect(operator+(*margins, *rectangle));
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_operator_349(QRect const * lhs, QMargins const * rhs) {
  return new QRect(operator-(*lhs, *rhs));
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__119(QDebug const * arg1, QRect const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_QRectF() {
  return new QRectF();
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_QRectF1(QPointF const * topleft, QSizeF const * size) {
  return new QRectF(*topleft, *size);
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_QRectF2(QPointF const * topleft, QPointF const * bottomRight) {
  return new QRectF(*topleft, *bottomRight);
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_QRectF3(double left, double top, double width, double height) {
  return new QRectF(left, top, width, height);
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_QRectF4(QRect const * rect) {
  return new QRectF(*rect);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRectF_isNull(QRectF const * this_ptr) {
  return this_ptr->isNull();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRectF_isEmpty(QRectF const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRectF_isValid(QRectF const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_normalized(QRectF const * this_ptr) {
  return new QRectF(this_ptr->normalized());
}


RITUAL_EXPORT double ctr_qt_core_ffi_QRectF_left(QRectF const * this_ptr) {
  return this_ptr->left();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QRectF_top(QRectF const * this_ptr) {
  return this_ptr->top();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QRectF_right(QRectF const * this_ptr) {
  return this_ptr->right();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QRectF_bottom(QRectF const * this_ptr) {
  return this_ptr->bottom();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QRectF_x(QRectF const * this_ptr) {
  return this_ptr->x();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QRectF_y(QRectF const * this_ptr) {
  return this_ptr->y();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_setLeft(QRectF * this_ptr, double pos) {
  this_ptr->setLeft(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_setTop(QRectF * this_ptr, double pos) {
  this_ptr->setTop(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_setRight(QRectF * this_ptr, double pos) {
  this_ptr->setRight(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_setBottom(QRectF * this_ptr, double pos) {
  this_ptr->setBottom(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_setX(QRectF * this_ptr, double pos) {
  this_ptr->setX(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_setY(QRectF * this_ptr, double pos) {
  this_ptr->setY(pos);
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QRectF_topLeft(QRectF const * this_ptr) {
  return new QPointF(this_ptr->topLeft());
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QRectF_bottomRight(QRectF const * this_ptr) {
  return new QPointF(this_ptr->bottomRight());
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QRectF_topRight(QRectF const * this_ptr) {
  return new QPointF(this_ptr->topRight());
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QRectF_bottomLeft(QRectF const * this_ptr) {
  return new QPointF(this_ptr->bottomLeft());
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QRectF_center(QRectF const * this_ptr) {
  return new QPointF(this_ptr->center());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_setTopLeft(QRectF * this_ptr, QPointF const * p) {
  this_ptr->setTopLeft(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_setBottomRight(QRectF * this_ptr, QPointF const * p) {
  this_ptr->setBottomRight(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_setTopRight(QRectF * this_ptr, QPointF const * p) {
  this_ptr->setTopRight(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_setBottomLeft(QRectF * this_ptr, QPointF const * p) {
  this_ptr->setBottomLeft(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_moveLeft(QRectF * this_ptr, double pos) {
  this_ptr->moveLeft(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_moveTop(QRectF * this_ptr, double pos) {
  this_ptr->moveTop(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_moveRight(QRectF * this_ptr, double pos) {
  this_ptr->moveRight(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_moveBottom(QRectF * this_ptr, double pos) {
  this_ptr->moveBottom(pos);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_moveTopLeft(QRectF * this_ptr, QPointF const * p) {
  this_ptr->moveTopLeft(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_moveBottomRight(QRectF * this_ptr, QPointF const * p) {
  this_ptr->moveBottomRight(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_moveTopRight(QRectF * this_ptr, QPointF const * p) {
  this_ptr->moveTopRight(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_moveBottomLeft(QRectF * this_ptr, QPointF const * p) {
  this_ptr->moveBottomLeft(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_moveCenter(QRectF * this_ptr, QPointF const * p) {
  this_ptr->moveCenter(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_translate(QRectF * this_ptr, double dx, double dy) {
  this_ptr->translate(dx, dy);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_translate1(QRectF * this_ptr, QPointF const * p) {
  this_ptr->translate(*p);
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_translated(QRectF const * this_ptr, double dx, double dy) {
  return new QRectF(this_ptr->translated(dx, dy));
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_translated1(QRectF const * this_ptr, QPointF const * p) {
  return new QRectF(this_ptr->translated(*p));
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_transposed(QRectF const * this_ptr) {
  return new QRectF(this_ptr->transposed());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_moveTo(QRectF * this_ptr, double x, double y) {
  this_ptr->moveTo(x, y);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_moveTo1(QRectF * this_ptr, QPointF const * p) {
  this_ptr->moveTo(*p);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_setRect(QRectF * this_ptr, double x, double y, double w, double h) {
  this_ptr->setRect(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_getRect(QRectF const * this_ptr, double * x, double * y, double * w, double * h) {
  this_ptr->getRect(x, y, w, h);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_setCoords(QRectF * this_ptr, double x1, double y1, double x2, double y2) {
  this_ptr->setCoords(x1, y1, x2, y2);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_getCoords(QRectF const * this_ptr, double * x1, double * y1, double * x2, double * y2) {
  this_ptr->getCoords(x1, y1, x2, y2);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_adjust(QRectF * this_ptr, double x1, double y1, double x2, double y2) {
  this_ptr->adjust(x1, y1, x2, y2);
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_adjusted(QRectF const * this_ptr, double x1, double y1, double x2, double y2) {
  return new QRectF(this_ptr->adjusted(x1, y1, x2, y2));
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QRectF_size(QRectF const * this_ptr) {
  return new QSizeF(this_ptr->size());
}


RITUAL_EXPORT double ctr_qt_core_ffi_QRectF_width(QRectF const * this_ptr) {
  return this_ptr->width();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QRectF_height(QRectF const * this_ptr) {
  return this_ptr->height();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_setWidth(QRectF * this_ptr, double w) {
  this_ptr->setWidth(w);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_setHeight(QRectF * this_ptr, double h) {
  this_ptr->setHeight(h);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_setSize(QRectF * this_ptr, QSizeF const * s) {
  this_ptr->setSize(*s);
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_operator_(QRectF const * this_ptr, QRectF const * r) {
  return new QRectF(this_ptr->operator|(*r));
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_operator_1(QRectF const * this_ptr, QRectF const * r) {
  return new QRectF(this_ptr->operator&(*r));
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_operator__(QRectF * this_ptr, QRectF const * r) {
  return &this_ptr->operator|=(*r);
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_operator__1(QRectF * this_ptr, QRectF const * r) {
  return &this_ptr->operator&=(*r);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRectF_contains(QRectF const * this_ptr, QRectF const * r) {
  return this_ptr->contains(*r);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRectF_contains1(QRectF const * this_ptr, QPointF const * p) {
  return this_ptr->contains(*p);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRectF_contains2(QRectF const * this_ptr, double x, double y) {
  return this_ptr->contains(x, y);
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_united(QRectF const * this_ptr, QRectF const * other) {
  return new QRectF(this_ptr->united(*other));
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_intersected(QRectF const * this_ptr, QRectF const * other) {
  return new QRectF(this_ptr->intersected(*other));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QRectF_intersects(QRectF const * this_ptr, QRectF const * r) {
  return this_ptr->intersects(*r);
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_marginsAdded(QRectF const * this_ptr, QMarginsF const * margins) {
  return new QRectF(this_ptr->marginsAdded(*margins));
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_marginsRemoved(QRectF const * this_ptr, QMarginsF const * margins) {
  return new QRectF(this_ptr->marginsRemoved(*margins));
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_operator__2(QRectF * this_ptr, QMarginsF const * margins) {
  return &this_ptr->operator+=(*margins);
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_operator__3(QRectF * this_ptr, QMarginsF const * margins) {
  return &this_ptr->operator-=(*margins);
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRectF_toRect(QRectF const * this_ptr) {
  return new QRect(this_ptr->toRect());
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRectF_toAlignedRect(QRectF const * this_ptr) {
  return new QRect(this_ptr->toAlignedRect());
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__120(QDataStream * arg1, QRectF const * arg2) {
  return &operator<<(*arg1, *arg2);
}


RITUAL_EXPORT QDataStream * ctr_qt_core_ffi_operator__121(QDataStream * arg1, QRectF * arg2) {
  return &operator>>(*arg1, *arg2);
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_operator_350(QRectF const * lhs, QMarginsF const * rhs) {
  return new QRectF(operator+(*lhs, *rhs));
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_operator_351(QMarginsF const * lhs, QRectF const * rhs) {
  return new QRectF(operator+(*lhs, *rhs));
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_operator_352(QRectF const * lhs, QMarginsF const * rhs) {
  return new QRectF(operator-(*lhs, *rhs));
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__122(QDebug const * arg1, QRectF const * arg2) {
  return new QDebug(operator<<(*arg1, *arg2));
}


RITUAL_EXPORT QResource * ctr_qt_core_ffi_QResource_QResource(QString const * file, QLocale const * locale) {
  return new QResource(*file, *locale);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QResource_dQResource(QResource * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QResource_setFileName(QResource * this_ptr, QString const * file) {
  this_ptr->setFileName(*file);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QResource_fileName(QResource const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QResource_absoluteFilePath(QResource const * this_ptr) {
  return new QString(this_ptr->absoluteFilePath());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QResource_setLocale(QResource * this_ptr, QLocale const * locale) {
  this_ptr->setLocale(*locale);
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QResource_locale(QResource const * this_ptr) {
  return new QLocale(this_ptr->locale());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QResource_isValid(QResource const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QResource::Compression ctr_qt_core_ffi_QResource_compressionAlgorithm(QResource const * this_ptr) {
  return this_ptr->compressionAlgorithm();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QResource_size(QResource const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT unsigned char const * ctr_qt_core_ffi_QResource_data(QResource const * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QResource_uncompressedSize(QResource const * this_ptr) {
  return this_ptr->uncompressedSize();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QResource_uncompressedData(QResource const * this_ptr) {
  return new QByteArray(this_ptr->uncompressedData());
}


RITUAL_EXPORT QDateTime * ctr_qt_core_ffi_QResource_lastModified(QResource const * this_ptr) {
  return new QDateTime(this_ptr->lastModified());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QResource_registerResource(QString const * rccFilename, QString const * resourceRoot) {
  return QResource::registerResource(*rccFilename, *resourceRoot);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QResource_unregisterResource(QString const * rccFilename, QString const * resourceRoot) {
  return QResource::unregisterResource(*rccFilename, *resourceRoot);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QResource_registerResource1(unsigned char const * rccData, QString const * resourceRoot) {
  return QResource::registerResource(rccData, *resourceRoot);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QResource_unregisterResource1(unsigned char const * rccData, QString const * resourceRoot) {
  return QResource::unregisterResource(rccData, *resourceRoot);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QSaveFile_metaObject(QSaveFile const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QSaveFile_qt_metacast(QSaveFile * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSaveFile_qt_metacall(QSaveFile * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSaveFile_tr(char const * s, char const * c, int n) {
  return new QString(QSaveFile::tr(s, c, n));
}


RITUAL_EXPORT QSaveFile * ctr_qt_core_ffi_QSaveFile_QSaveFile(QString const * name) {
  return new QSaveFile(*name);
}


RITUAL_EXPORT QSaveFile * ctr_qt_core_ffi_QSaveFile_QSaveFile1(QObject * parent) {
  return new QSaveFile(parent);
}


RITUAL_EXPORT QSaveFile * ctr_qt_core_ffi_QSaveFile_QSaveFile2(QString const * name, QObject * parent) {
  return new QSaveFile(*name, parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSaveFile_dQSaveFile(QSaveFile * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSaveFile_fileName(QSaveFile const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSaveFile_setFileName(QSaveFile * this_ptr, QString const * name) {
  this_ptr->setFileName(*name);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSaveFile_open(QSaveFile * this_ptr, int flags) {
  return this_ptr->open(QFlags< QIODeviceBase::OpenModeFlag >(flags));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSaveFile_commit(QSaveFile * this_ptr) {
  return this_ptr->commit();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSaveFile_cancelWriting(QSaveFile * this_ptr) {
  this_ptr->cancelWriting();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSaveFile_setDirectWriteFallback(QSaveFile * this_ptr, bool enabled) {
  this_ptr->setDirectWriteFallback(enabled);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSaveFile_directWriteFallback(QSaveFile const * this_ptr) {
  return this_ptr->directWriteFallback();
}


RITUAL_EXPORT QSemaphore * ctr_qt_core_ffi_QSemaphore_QSemaphore(int n) {
  return new QSemaphore(n);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSemaphore_dQSemaphore(QSemaphore * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSemaphore_acquire(QSemaphore * this_ptr, int n) {
  this_ptr->acquire(n);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSemaphore_tryAcquire(QSemaphore * this_ptr, int n) {
  return this_ptr->tryAcquire(n);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSemaphore_tryAcquire1(QSemaphore * this_ptr, int n, int timeout) {
  return this_ptr->tryAcquire(n, timeout);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSemaphore_tryAcquire2(QSemaphore * this_ptr, int n, QDeadlineTimer const * timeout) {
  return this_ptr->tryAcquire(n, *timeout);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSemaphore_release(QSemaphore * this_ptr, int n) {
  this_ptr->release(n);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSemaphore_available(QSemaphore const * this_ptr) {
  return this_ptr->available();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSemaphore_try_acquire(QSemaphore * this_ptr) {
  return this_ptr->try_acquire();
}


RITUAL_EXPORT QSemaphoreReleaser * ctr_qt_core_ffi_QSemaphoreReleaser_QSemaphoreReleaser() {
  return new QSemaphoreReleaser();
}


RITUAL_EXPORT QSemaphoreReleaser * ctr_qt_core_ffi_QSemaphoreReleaser_QSemaphoreReleaser1(QSemaphore * sem, int n) {
  return new QSemaphoreReleaser(*sem, n);
}


RITUAL_EXPORT QSemaphoreReleaser * ctr_qt_core_ffi_QSemaphoreReleaser_QSemaphoreReleaser2(QSemaphore * sem, int n) {
  return new QSemaphoreReleaser(sem, n);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSemaphoreReleaser_dQSemaphoreReleaser(QSemaphoreReleaser * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSemaphoreReleaser_swap(QSemaphoreReleaser * this_ptr, QSemaphoreReleaser * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT QSemaphore * ctr_qt_core_ffi_QSemaphoreReleaser_semaphore(QSemaphoreReleaser const * this_ptr) {
  return this_ptr->semaphore();
}


RITUAL_EXPORT QSemaphore * ctr_qt_core_ffi_QSemaphoreReleaser_cancel(QSemaphoreReleaser * this_ptr) {
  return this_ptr->cancel();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QSequentialAnimationGroup_metaObject(QSequentialAnimationGroup const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QSequentialAnimationGroup_qt_metacast(QSequentialAnimationGroup * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSequentialAnimationGroup_qt_metacall(QSequentialAnimationGroup * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSequentialAnimationGroup_tr(char const * s, char const * c, int n) {
  return new QString(QSequentialAnimationGroup::tr(s, c, n));
}


RITUAL_EXPORT QSequentialAnimationGroup * ctr_qt_core_ffi_QSequentialAnimationGroup_QSequentialAnimationGroup(QObject * parent) {
  return new QSequentialAnimationGroup(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSequentialAnimationGroup_dQSequentialAnimationGroup(QSequentialAnimationGroup * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPauseAnimation * ctr_qt_core_ffi_QSequentialAnimationGroup_addPause(QSequentialAnimationGroup * this_ptr, int msecs) {
  return this_ptr->addPause(msecs);
}


RITUAL_EXPORT QPauseAnimation * ctr_qt_core_ffi_QSequentialAnimationGroup_insertPause(QSequentialAnimationGroup * this_ptr, int index, int msecs) {
  return this_ptr->insertPause(index, msecs);
}


RITUAL_EXPORT QAbstractAnimation * ctr_qt_core_ffi_QSequentialAnimationGroup_currentAnimation(QSequentialAnimationGroup const * this_ptr) {
  return this_ptr->currentAnimation();
}


RITUAL_EXPORT QBindable< QAbstractAnimation * > * ctr_qt_core_ffi_QSequentialAnimationGroup_bindableCurrentAnimation(QSequentialAnimationGroup const * this_ptr) {
  return new QBindable< QAbstractAnimation * >(this_ptr->bindableCurrentAnimation());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSequentialAnimationGroup_duration(QSequentialAnimationGroup const * this_ptr) {
  return this_ptr->duration();
}


RITUAL_EXPORT QVariantRef< QSequentialIterator > * ctr_qt_core_ffi_QSequentialIterator_operator_(QSequentialIterator const * this_ptr) {
  return new QVariantRef< QSequentialIterator >(this_ptr->operator*());
}


RITUAL_EXPORT QVariantPointer< QSequentialIterator > * ctr_qt_core_ffi_QSequentialIterator_operator__(QSequentialIterator const * this_ptr) {
  return new QVariantPointer< QSequentialIterator >(this_ptr->operator->());
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QSequentialConstIterator_operator_(QSequentialConstIterator const * this_ptr) {
  return new QVariant(this_ptr->operator*());
}


RITUAL_EXPORT QVariantConstPointer * ctr_qt_core_ffi_QSequentialConstIterator_operator__(QSequentialConstIterator const * this_ptr) {
  return new QVariantConstPointer(this_ptr->operator->());
}


RITUAL_EXPORT QSequentialIterable * ctr_qt_core_ffi_QSequentialIterable_QSequentialIterable() {
  return new QSequentialIterable();
}


RITUAL_EXPORT QSequentialIterable * ctr_qt_core_ffi_QSequentialIterable_QSequentialIterable1(QMetaSequence const * metaSequence, QMetaType const * metaType, void * iterable) {
  return new QSequentialIterable(*metaSequence, *metaType, iterable);
}


RITUAL_EXPORT QSequentialIterable * ctr_qt_core_ffi_QSequentialIterable_QSequentialIterable2(QMetaSequence const * metaSequence, QMetaType const * metaType, void const * iterable) {
  return new QSequentialIterable(*metaSequence, *metaType, iterable);
}


RITUAL_EXPORT QTaggedIterator< QSequentialConstIterator, void > * ctr_qt_core_ffi_QSequentialIterable_begin(QSequentialIterable const * this_ptr) {
  return new QTaggedIterator< QSequentialConstIterator, void >(this_ptr->begin());
}


RITUAL_EXPORT QTaggedIterator< QSequentialConstIterator, void > * ctr_qt_core_ffi_QSequentialIterable_end(QSequentialIterable const * this_ptr) {
  return new QTaggedIterator< QSequentialConstIterator, void >(this_ptr->end());
}


RITUAL_EXPORT QTaggedIterator< QSequentialConstIterator, void > * ctr_qt_core_ffi_QSequentialIterable_constBegin(QSequentialIterable const * this_ptr) {
  return new QTaggedIterator< QSequentialConstIterator, void >(this_ptr->constBegin());
}


RITUAL_EXPORT QTaggedIterator< QSequentialConstIterator, void > * ctr_qt_core_ffi_QSequentialIterable_constEnd(QSequentialIterable const * this_ptr) {
  return new QTaggedIterator< QSequentialConstIterator, void >(this_ptr->constEnd());
}


RITUAL_EXPORT QTaggedIterator< QSequentialIterator, void > * ctr_qt_core_ffi_QSequentialIterable_mutableBegin(QSequentialIterable * this_ptr) {
  return new QTaggedIterator< QSequentialIterator, void >(this_ptr->mutableBegin());
}


RITUAL_EXPORT QTaggedIterator< QSequentialIterator, void > * ctr_qt_core_ffi_QSequentialIterable_mutableEnd(QSequentialIterable * this_ptr) {
  return new QTaggedIterator< QSequentialIterator, void >(this_ptr->mutableEnd());
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QSequentialIterable_at(QSequentialIterable const * this_ptr, long long idx) {
  return new QVariant(this_ptr->at(idx));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSequentialIterable_set(QSequentialIterable * this_ptr, long long idx, QVariant const * value) {
  this_ptr->set(idx, *value);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSequentialIterable_addValue(QSequentialIterable * this_ptr, QVariant const * value, QSequentialIterable::Position position) {
  this_ptr->addValue(*value, position);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSequentialIterable_removeValue(QSequentialIterable * this_ptr, QSequentialIterable::Position position) {
  this_ptr->removeValue(position);
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QSequentialIterable_valueMetaType(QSequentialIterable const * this_ptr) {
  return new QMetaType(this_ptr->valueMetaType());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QSettings_metaObject(QSettings const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QSettings_qt_metacast(QSettings * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSettings_qt_metacall(QSettings * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSettings_tr(char const * s, char const * c, int n) {
  return new QString(QSettings::tr(s, c, n));
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_QSettings_QSettings(QString const * organization, QString const * application, QObject * parent) {
  return new QSettings(*organization, *application, parent);
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_QSettings_QSettings1(QSettings::Scope scope, QString const * organization, QString const * application, QObject * parent) {
  return new QSettings(scope, *organization, *application, parent);
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_QSettings_QSettings2(QSettings::Format format, QSettings::Scope scope, QString const * organization, QString const * application, QObject * parent) {
  return new QSettings(format, scope, *organization, *application, parent);
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_QSettings_QSettings3(QString const * fileName, QSettings::Format format, QObject * parent) {
  return new QSettings(*fileName, format, parent);
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_QSettings_QSettings4(QObject * parent) {
  return new QSettings(parent);
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_QSettings_QSettings5(QSettings::Scope scope, QObject * parent) {
  return new QSettings(scope, parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSettings_dQSettings(QSettings * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSettings_clear(QSettings * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSettings_sync(QSettings * this_ptr) {
  this_ptr->sync();
}


RITUAL_EXPORT QSettings::Status ctr_qt_core_ffi_QSettings_status(QSettings const * this_ptr) {
  return this_ptr->status();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSettings_isAtomicSyncRequired(QSettings const * this_ptr) {
  return this_ptr->isAtomicSyncRequired();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSettings_setAtomicSyncRequired(QSettings * this_ptr, bool enable) {
  this_ptr->setAtomicSyncRequired(enable);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSettings_beginGroup(QSettings * this_ptr, QAnyStringView const * prefix) {
  this_ptr->beginGroup(*prefix);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSettings_endGroup(QSettings * this_ptr) {
  this_ptr->endGroup();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSettings_group(QSettings const * this_ptr) {
  return new QString(this_ptr->group());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSettings_beginReadArray(QSettings * this_ptr, QAnyStringView const * prefix) {
  return this_ptr->beginReadArray(*prefix);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSettings_beginWriteArray(QSettings * this_ptr, QAnyStringView const * prefix, int size) {
  this_ptr->beginWriteArray(*prefix, size);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSettings_endArray(QSettings * this_ptr) {
  this_ptr->endArray();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSettings_setArrayIndex(QSettings * this_ptr, int i) {
  this_ptr->setArrayIndex(i);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QSettings_allKeys(QSettings const * this_ptr) {
  return new QList< QString >(this_ptr->allKeys());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QSettings_childKeys(QSettings const * this_ptr) {
  return new QList< QString >(this_ptr->childKeys());
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QSettings_childGroups(QSettings const * this_ptr) {
  return new QList< QString >(this_ptr->childGroups());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSettings_isWritable(QSettings const * this_ptr) {
  return this_ptr->isWritable();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSettings_setValue(QSettings * this_ptr, QAnyStringView const * key, QVariant const * value) {
  this_ptr->setValue(*key, *value);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QSettings_value(QSettings const * this_ptr, QAnyStringView const * key, QVariant const * defaultValue) {
  return new QVariant(this_ptr->value(*key, *defaultValue));
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QSettings_value1(QSettings const * this_ptr, QAnyStringView const * key) {
  return new QVariant(this_ptr->value(*key));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSettings_remove(QSettings * this_ptr, QAnyStringView const * key) {
  this_ptr->remove(*key);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSettings_contains(QSettings const * this_ptr, QAnyStringView const * key) {
  return this_ptr->contains(*key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSettings_setFallbacksEnabled(QSettings * this_ptr, bool b) {
  this_ptr->setFallbacksEnabled(b);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSettings_fallbacksEnabled(QSettings const * this_ptr) {
  return this_ptr->fallbacksEnabled();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSettings_fileName(QSettings const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT QSettings::Format ctr_qt_core_ffi_QSettings_format(QSettings const * this_ptr) {
  return this_ptr->format();
}


RITUAL_EXPORT QSettings::Scope ctr_qt_core_ffi_QSettings_scope(QSettings const * this_ptr) {
  return this_ptr->scope();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSettings_organizationName(QSettings const * this_ptr) {
  return new QString(this_ptr->organizationName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSettings_applicationName(QSettings const * this_ptr) {
  return new QString(this_ptr->applicationName());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSettings_setDefaultFormat(QSettings::Format format) {
  QSettings::setDefaultFormat(format);
}


RITUAL_EXPORT QSettings::Format ctr_qt_core_ffi_QSettings_defaultFormat() {
  return QSettings::defaultFormat();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSettings_setPath(QSettings::Format format, QSettings::Scope scope, QString const * path) {
  QSettings::setPath(format, scope, *path);
}


RITUAL_EXPORT QNativeIpcKey::Type ctr_qt_core_ffi_QNativeIpcKey_legacyDefaultTypeForOs() {
  return QNativeIpcKey::legacyDefaultTypeForOs();
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QNativeIpcKey_QNativeIpcKey() {
  return new QNativeIpcKey();
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QNativeIpcKey_QNativeIpcKey1(QNativeIpcKey::Type type) {
  return new QNativeIpcKey(type);
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QNativeIpcKey_QNativeIpcKey2(QString const * k, QNativeIpcKey::Type type) {
  return new QNativeIpcKey(*k, type);
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QNativeIpcKey_QNativeIpcKey3(QNativeIpcKey const * other) {
  return new QNativeIpcKey(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QNativeIpcKey_dQNativeIpcKey(QNativeIpcKey * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QNativeIpcKey_operator_(QNativeIpcKey * this_ptr, QNativeIpcKey const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QNativeIpcKey_swap(QNativeIpcKey * this_ptr, QNativeIpcKey * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QNativeIpcKey_isEmpty(QNativeIpcKey const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QNativeIpcKey_isValid(QNativeIpcKey const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QNativeIpcKey::Type ctr_qt_core_ffi_QNativeIpcKey_type(QNativeIpcKey const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QNativeIpcKey_setType(QNativeIpcKey * this_ptr, QNativeIpcKey::Type type) {
  this_ptr->setType(type);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QNativeIpcKey_nativeKey(QNativeIpcKey const * this_ptr) {
  return new QString(this_ptr->nativeKey());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QNativeIpcKey_setNativeKey(QNativeIpcKey * this_ptr, QString const * newKey) {
  this_ptr->setNativeKey(*newKey);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QNativeIpcKey_toString(QNativeIpcKey const * this_ptr) {
  return new QString(this_ptr->toString());
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QNativeIpcKey_fromString(QString const * string) {
  return new QNativeIpcKey(QNativeIpcKey::fromString(*string));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QSharedMemory_metaObject(QSharedMemory const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QSharedMemory_qt_metacast(QSharedMemory * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSharedMemory_qt_metacall(QSharedMemory * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSharedMemory_tr(char const * s, char const * c, int n) {
  return new QString(QSharedMemory::tr(s, c, n));
}


RITUAL_EXPORT QSharedMemory * ctr_qt_core_ffi_QSharedMemory_QSharedMemory(QObject * parent) {
  return new QSharedMemory(parent);
}


RITUAL_EXPORT QSharedMemory * ctr_qt_core_ffi_QSharedMemory_QSharedMemory1(QNativeIpcKey const * key, QObject * parent) {
  return new QSharedMemory(*key, parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSharedMemory_dQSharedMemory(QSharedMemory * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSharedMemory * ctr_qt_core_ffi_QSharedMemory_QSharedMemory2(QString const * key, QObject * parent) {
  return new QSharedMemory(*key, parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSharedMemory_setKey(QSharedMemory * this_ptr, QString const * key) {
  this_ptr->setKey(*key);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSharedMemory_key(QSharedMemory const * this_ptr) {
  return new QString(this_ptr->key());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSharedMemory_setNativeKey(QSharedMemory * this_ptr, QNativeIpcKey const * key) {
  this_ptr->setNativeKey(*key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSharedMemory_setNativeKey1(QSharedMemory * this_ptr, QString const * key, QNativeIpcKey::Type type) {
  this_ptr->setNativeKey(*key, type);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSharedMemory_nativeKey(QSharedMemory const * this_ptr) {
  return new QString(this_ptr->nativeKey());
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QSharedMemory_nativeIpcKey(QSharedMemory const * this_ptr) {
  return new QNativeIpcKey(this_ptr->nativeIpcKey());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSharedMemory_create(QSharedMemory * this_ptr, long long size, QSharedMemory::AccessMode mode) {
  return this_ptr->create(size, mode);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QSharedMemory_size(QSharedMemory const * this_ptr) {
  return this_ptr->size();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSharedMemory_attach(QSharedMemory * this_ptr, QSharedMemory::AccessMode mode) {
  return this_ptr->attach(mode);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSharedMemory_isAttached(QSharedMemory const * this_ptr) {
  return this_ptr->isAttached();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSharedMemory_detach(QSharedMemory * this_ptr) {
  return this_ptr->detach();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QSharedMemory_data(QSharedMemory * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT void const * ctr_qt_core_ffi_QSharedMemory_constData(QSharedMemory const * this_ptr) {
  return this_ptr->constData();
}


RITUAL_EXPORT void const * ctr_qt_core_ffi_QSharedMemory_data1(QSharedMemory const * this_ptr) {
  return this_ptr->data();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSharedMemory_lock(QSharedMemory * this_ptr) {
  return this_ptr->lock();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSharedMemory_unlock(QSharedMemory * this_ptr) {
  return this_ptr->unlock();
}


RITUAL_EXPORT QSharedMemory::SharedMemoryError ctr_qt_core_ffi_QSharedMemory_error(QSharedMemory const * this_ptr) {
  return this_ptr->error();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSharedMemory_errorString(QSharedMemory const * this_ptr) {
  return new QString(this_ptr->errorString());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSharedMemory_isKeyTypeSupported(QNativeIpcKey::Type type) {
  return QSharedMemory::isKeyTypeSupported(type);
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QSharedMemory_platformSafeKey(QString const * key, QNativeIpcKey::Type type) {
  return new QNativeIpcKey(QSharedMemory::platformSafeKey(*key, type));
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QSharedMemory_legacyNativeKey(QString const * key, QNativeIpcKey::Type type) {
  return new QNativeIpcKey(QSharedMemory::legacyNativeKey(*key, type));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QSignalMapper_metaObject(QSignalMapper const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QSignalMapper_qt_metacast(QSignalMapper * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSignalMapper_qt_metacall(QSignalMapper * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSignalMapper_tr(char const * s, char const * c, int n) {
  return new QString(QSignalMapper::tr(s, c, n));
}


RITUAL_EXPORT QSignalMapper * ctr_qt_core_ffi_QSignalMapper_QSignalMapper(QObject * parent) {
  return new QSignalMapper(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSignalMapper_dQSignalMapper(QSignalMapper * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSignalMapper_setMapping(QSignalMapper * this_ptr, QObject * sender, int id) {
  this_ptr->setMapping(sender, id);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSignalMapper_setMapping1(QSignalMapper * this_ptr, QObject * sender, QString const * text) {
  this_ptr->setMapping(sender, *text);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSignalMapper_setMapping2(QSignalMapper * this_ptr, QObject * sender, QObject * object) {
  this_ptr->setMapping(sender, object);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSignalMapper_removeMappings(QSignalMapper * this_ptr, QObject * sender) {
  this_ptr->removeMappings(sender);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_QSignalMapper_mapping(QSignalMapper const * this_ptr, int id) {
  return this_ptr->mapping(id);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_QSignalMapper_mapping1(QSignalMapper const * this_ptr, QString const * text) {
  return this_ptr->mapping(*text);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_QSignalMapper_mapping2(QSignalMapper const * this_ptr, QObject * object) {
  return this_ptr->mapping(object);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSignalMapper_map(QSignalMapper * this_ptr) {
  this_ptr->map();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSignalMapper_map1(QSignalMapper * this_ptr, QObject * sender) {
  this_ptr->map(sender);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QSocketNotifier_metaObject(QSocketNotifier const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QSocketNotifier_qt_metacast(QSocketNotifier * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSocketNotifier_qt_metacall(QSocketNotifier * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSocketNotifier_tr(char const * s, char const * c, int n) {
  return new QString(QSocketNotifier::tr(s, c, n));
}


RITUAL_EXPORT QSocketNotifier * ctr_qt_core_ffi_QSocketNotifier_QSocketNotifier(QSocketNotifier::Type arg1, QObject * parent) {
  return new QSocketNotifier(arg1, parent);
}


RITUAL_EXPORT QSocketNotifier * ctr_qt_core_ffi_QSocketNotifier_QSocketNotifier1(long long socket, QSocketNotifier::Type arg2, QObject * parent) {
  return new QSocketNotifier(socket, arg2, parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSocketNotifier_dQSocketNotifier(QSocketNotifier * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSocketNotifier_setSocket(QSocketNotifier * this_ptr, long long socket) {
  this_ptr->setSocket(socket);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QSocketNotifier_socket(QSocketNotifier const * this_ptr) {
  return this_ptr->socket();
}


RITUAL_EXPORT QSocketNotifier::Type ctr_qt_core_ffi_QSocketNotifier_type(QSocketNotifier const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSocketNotifier_isValid(QSocketNotifier const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSocketNotifier_isEnabled(QSocketNotifier const * this_ptr) {
  return this_ptr->isEnabled();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSocketNotifier_setEnabled(QSocketNotifier * this_ptr, bool arg1) {
  this_ptr->setEnabled(arg1);
}


RITUAL_EXPORT QSocketDescriptor * ctr_qt_core_ffi_QSocketDescriptor_QSocketDescriptor(int descriptor) {
  return new QSocketDescriptor(descriptor);
}


#ifndef _WIN32
RITUAL_EXPORT int ctr_qt_core_ffi_QSocketDescriptor_operator_int(QSocketDescriptor const * this_ptr) {
  return this_ptr->operator int();
}
#endif


RITUAL_EXPORT bool ctr_qt_core_ffi_QSocketDescriptor_isValid(QSocketDescriptor const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRegisterNormalizedMetaType_QSocketNotifier_Type(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QSocketNotifier_Type(*arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRegisterNormalizedMetaType_QSocketDescriptor(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QSocketDescriptor(*arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QSortFilterProxyModel_metaObject(QSortFilterProxyModel const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QSortFilterProxyModel_qt_metacast(QSortFilterProxyModel * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSortFilterProxyModel_qt_metacall(QSortFilterProxyModel * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSortFilterProxyModel_tr(char const * s, char const * c, int n) {
  return new QString(QSortFilterProxyModel::tr(s, c, n));
}


RITUAL_EXPORT QSortFilterProxyModel * ctr_qt_core_ffi_QSortFilterProxyModel_QSortFilterProxyModel(QObject * parent) {
  return new QSortFilterProxyModel(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_dQSortFilterProxyModel(QSortFilterProxyModel * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_setSourceModel(QSortFilterProxyModel * this_ptr, QAbstractItemModel * sourceModel) {
  this_ptr->setSourceModel(sourceModel);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QSortFilterProxyModel_mapToSource(QSortFilterProxyModel const * this_ptr, QModelIndex const * proxyIndex) {
  return new QModelIndex(this_ptr->mapToSource(*proxyIndex));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QSortFilterProxyModel_mapFromSource(QSortFilterProxyModel const * this_ptr, QModelIndex const * sourceIndex) {
  return new QModelIndex(this_ptr->mapFromSource(*sourceIndex));
}


RITUAL_EXPORT QItemSelection * ctr_qt_core_ffi_QSortFilterProxyModel_mapSelectionToSource(QSortFilterProxyModel const * this_ptr, QItemSelection const * proxySelection) {
  return new QItemSelection(this_ptr->mapSelectionToSource(*proxySelection));
}


RITUAL_EXPORT QItemSelection * ctr_qt_core_ffi_QSortFilterProxyModel_mapSelectionFromSource(QSortFilterProxyModel const * this_ptr, QItemSelection const * sourceSelection) {
  return new QItemSelection(this_ptr->mapSelectionFromSource(*sourceSelection));
}


RITUAL_EXPORT QRegularExpression * ctr_qt_core_ffi_QSortFilterProxyModel_filterRegularExpression(QSortFilterProxyModel const * this_ptr) {
  return new QRegularExpression(this_ptr->filterRegularExpression());
}


RITUAL_EXPORT QBindable< QRegularExpression > * ctr_qt_core_ffi_QSortFilterProxyModel_bindableFilterRegularExpression(QSortFilterProxyModel * this_ptr) {
  return new QBindable< QRegularExpression >(this_ptr->bindableFilterRegularExpression());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSortFilterProxyModel_filterKeyColumn(QSortFilterProxyModel const * this_ptr) {
  return this_ptr->filterKeyColumn();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_setFilterKeyColumn(QSortFilterProxyModel * this_ptr, int column) {
  this_ptr->setFilterKeyColumn(column);
}


RITUAL_EXPORT QBindable< int > * ctr_qt_core_ffi_QSortFilterProxyModel_bindableFilterKeyColumn(QSortFilterProxyModel * this_ptr) {
  return new QBindable< int >(this_ptr->bindableFilterKeyColumn());
}


RITUAL_EXPORT Qt::CaseSensitivity ctr_qt_core_ffi_QSortFilterProxyModel_filterCaseSensitivity(QSortFilterProxyModel const * this_ptr) {
  return this_ptr->filterCaseSensitivity();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_setFilterCaseSensitivity(QSortFilterProxyModel * this_ptr, Qt::CaseSensitivity cs) {
  this_ptr->setFilterCaseSensitivity(cs);
}


RITUAL_EXPORT QBindable< Qt::CaseSensitivity > * ctr_qt_core_ffi_QSortFilterProxyModel_bindableFilterCaseSensitivity(QSortFilterProxyModel * this_ptr) {
  return new QBindable< Qt::CaseSensitivity >(this_ptr->bindableFilterCaseSensitivity());
}


RITUAL_EXPORT Qt::CaseSensitivity ctr_qt_core_ffi_QSortFilterProxyModel_sortCaseSensitivity(QSortFilterProxyModel const * this_ptr) {
  return this_ptr->sortCaseSensitivity();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_setSortCaseSensitivity(QSortFilterProxyModel * this_ptr, Qt::CaseSensitivity cs) {
  this_ptr->setSortCaseSensitivity(cs);
}


RITUAL_EXPORT QBindable< Qt::CaseSensitivity > * ctr_qt_core_ffi_QSortFilterProxyModel_bindableSortCaseSensitivity(QSortFilterProxyModel * this_ptr) {
  return new QBindable< Qt::CaseSensitivity >(this_ptr->bindableSortCaseSensitivity());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_isSortLocaleAware(QSortFilterProxyModel const * this_ptr) {
  return this_ptr->isSortLocaleAware();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_setSortLocaleAware(QSortFilterProxyModel * this_ptr, bool on) {
  this_ptr->setSortLocaleAware(on);
}


RITUAL_EXPORT QBindable< bool > * ctr_qt_core_ffi_QSortFilterProxyModel_bindableIsSortLocaleAware(QSortFilterProxyModel * this_ptr) {
  return new QBindable< bool >(this_ptr->bindableIsSortLocaleAware());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSortFilterProxyModel_sortColumn(QSortFilterProxyModel const * this_ptr) {
  return this_ptr->sortColumn();
}


RITUAL_EXPORT Qt::SortOrder ctr_qt_core_ffi_QSortFilterProxyModel_sortOrder(QSortFilterProxyModel const * this_ptr) {
  return this_ptr->sortOrder();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_dynamicSortFilter(QSortFilterProxyModel const * this_ptr) {
  return this_ptr->dynamicSortFilter();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_setDynamicSortFilter(QSortFilterProxyModel * this_ptr, bool enable) {
  this_ptr->setDynamicSortFilter(enable);
}


RITUAL_EXPORT QBindable< bool > * ctr_qt_core_ffi_QSortFilterProxyModel_bindableDynamicSortFilter(QSortFilterProxyModel * this_ptr) {
  return new QBindable< bool >(this_ptr->bindableDynamicSortFilter());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSortFilterProxyModel_sortRole(QSortFilterProxyModel const * this_ptr) {
  return this_ptr->sortRole();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_setSortRole(QSortFilterProxyModel * this_ptr, int role) {
  this_ptr->setSortRole(role);
}


RITUAL_EXPORT QBindable< int > * ctr_qt_core_ffi_QSortFilterProxyModel_bindableSortRole(QSortFilterProxyModel * this_ptr) {
  return new QBindable< int >(this_ptr->bindableSortRole());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSortFilterProxyModel_filterRole(QSortFilterProxyModel const * this_ptr) {
  return this_ptr->filterRole();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_setFilterRole(QSortFilterProxyModel * this_ptr, int role) {
  this_ptr->setFilterRole(role);
}


RITUAL_EXPORT QBindable< int > * ctr_qt_core_ffi_QSortFilterProxyModel_bindableFilterRole(QSortFilterProxyModel * this_ptr) {
  return new QBindable< int >(this_ptr->bindableFilterRole());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_isRecursiveFilteringEnabled(QSortFilterProxyModel const * this_ptr) {
  return this_ptr->isRecursiveFilteringEnabled();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_setRecursiveFilteringEnabled(QSortFilterProxyModel * this_ptr, bool recursive) {
  this_ptr->setRecursiveFilteringEnabled(recursive);
}


RITUAL_EXPORT QBindable< bool > * ctr_qt_core_ffi_QSortFilterProxyModel_bindableRecursiveFilteringEnabled(QSortFilterProxyModel * this_ptr) {
  return new QBindable< bool >(this_ptr->bindableRecursiveFilteringEnabled());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_autoAcceptChildRows(QSortFilterProxyModel const * this_ptr) {
  return this_ptr->autoAcceptChildRows();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_setAutoAcceptChildRows(QSortFilterProxyModel * this_ptr, bool accept) {
  this_ptr->setAutoAcceptChildRows(accept);
}


RITUAL_EXPORT QBindable< bool > * ctr_qt_core_ffi_QSortFilterProxyModel_bindableAutoAcceptChildRows(QSortFilterProxyModel * this_ptr) {
  return new QBindable< bool >(this_ptr->bindableAutoAcceptChildRows());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_setFilterRegularExpression(QSortFilterProxyModel * this_ptr, QString const * pattern) {
  this_ptr->setFilterRegularExpression(*pattern);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_setFilterRegularExpression1(QSortFilterProxyModel * this_ptr, QRegularExpression const * regularExpression) {
  this_ptr->setFilterRegularExpression(*regularExpression);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_setFilterWildcard(QSortFilterProxyModel * this_ptr, QString const * pattern) {
  this_ptr->setFilterWildcard(*pattern);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_setFilterFixedString(QSortFilterProxyModel * this_ptr, QString const * pattern) {
  this_ptr->setFilterFixedString(*pattern);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_invalidate(QSortFilterProxyModel * this_ptr) {
  this_ptr->invalidate();
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QSortFilterProxyModel_index(QSortFilterProxyModel const * this_ptr, int row, int column, QModelIndex const * parent) {
  return new QModelIndex(this_ptr->index(row, column, *parent));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QSortFilterProxyModel_parent(QSortFilterProxyModel const * this_ptr, QModelIndex const * child) {
  return new QModelIndex(this_ptr->parent(*child));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QSortFilterProxyModel_sibling(QSortFilterProxyModel const * this_ptr, int row, int column, QModelIndex const * idx) {
  return new QModelIndex(this_ptr->sibling(row, column, *idx));
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSortFilterProxyModel_rowCount(QSortFilterProxyModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->rowCount(*parent);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSortFilterProxyModel_columnCount(QSortFilterProxyModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->columnCount(*parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_hasChildren(QSortFilterProxyModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->hasChildren(*parent);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QSortFilterProxyModel_data(QSortFilterProxyModel const * this_ptr, QModelIndex const * index, int role) {
  return new QVariant(this_ptr->data(*index, role));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_setData(QSortFilterProxyModel * this_ptr, QModelIndex const * index, QVariant const * value, int role) {
  return this_ptr->setData(*index, *value, role);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QSortFilterProxyModel_headerData(QSortFilterProxyModel const * this_ptr, int section, Qt::Orientation orientation, int role) {
  return new QVariant(this_ptr->headerData(section, orientation, role));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_setHeaderData(QSortFilterProxyModel * this_ptr, int section, Qt::Orientation orientation, QVariant const * value, int role) {
  return this_ptr->setHeaderData(section, orientation, *value, role);
}


RITUAL_EXPORT QMimeData * ctr_qt_core_ffi_QSortFilterProxyModel_mimeData(QSortFilterProxyModel const * this_ptr, QList< QModelIndex > const * indexes) {
  return this_ptr->mimeData(*indexes);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_dropMimeData(QSortFilterProxyModel * this_ptr, QMimeData const * data, Qt::DropAction action, int row, int column, QModelIndex const * parent) {
  return this_ptr->dropMimeData(data, action, row, column, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_insertRows(QSortFilterProxyModel * this_ptr, int row, int count, QModelIndex const * parent) {
  return this_ptr->insertRows(row, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_insertColumns(QSortFilterProxyModel * this_ptr, int column, int count, QModelIndex const * parent) {
  return this_ptr->insertColumns(column, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_removeRows(QSortFilterProxyModel * this_ptr, int row, int count, QModelIndex const * parent) {
  return this_ptr->removeRows(row, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_removeColumns(QSortFilterProxyModel * this_ptr, int column, int count, QModelIndex const * parent) {
  return this_ptr->removeColumns(column, count, *parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_fetchMore(QSortFilterProxyModel * this_ptr, QModelIndex const * parent) {
  this_ptr->fetchMore(*parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSortFilterProxyModel_canFetchMore(QSortFilterProxyModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->canFetchMore(*parent);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSortFilterProxyModel_flags(QSortFilterProxyModel const * this_ptr, QModelIndex const * index) {
  return int(this_ptr->flags(*index));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QSortFilterProxyModel_buddy(QSortFilterProxyModel const * this_ptr, QModelIndex const * index) {
  return new QModelIndex(this_ptr->buddy(*index));
}


RITUAL_EXPORT QList< QModelIndex > * ctr_qt_core_ffi_QSortFilterProxyModel_match(QSortFilterProxyModel const * this_ptr, QModelIndex const * start, int role, QVariant const * value, int hits, int flags) {
  return new QList< QModelIndex >(this_ptr->match(*start, role, *value, hits, QFlags< Qt::MatchFlag >(flags)));
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSortFilterProxyModel_span(QSortFilterProxyModel const * this_ptr, QModelIndex const * index) {
  return new QSize(this_ptr->span(*index));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSortFilterProxyModel_sort(QSortFilterProxyModel * this_ptr, int column, Qt::SortOrder order) {
  this_ptr->sort(column, order);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QSortFilterProxyModel_mimeTypes(QSortFilterProxyModel const * this_ptr) {
  return new QList< QString >(this_ptr->mimeTypes());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QSortFilterProxyModel_supportedDropActions(QSortFilterProxyModel const * this_ptr) {
  return int(this_ptr->supportedDropActions());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QStandardPaths_writableLocation(QStandardPaths::StandardLocation type) {
  return new QString(QStandardPaths::writableLocation(type));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QStandardPaths_standardLocations(QStandardPaths::StandardLocation type) {
  return new QList< QString >(QStandardPaths::standardLocations(type));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QStandardPaths_locate(QStandardPaths::StandardLocation type, QString const * fileName, int options) {
  return new QString(QStandardPaths::locate(type, *fileName, QFlags< QStandardPaths::LocateOption >(options)));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QStandardPaths_locateAll(QStandardPaths::StandardLocation type, QString const * fileName, int options) {
  return new QList< QString >(QStandardPaths::locateAll(type, *fileName, QFlags< QStandardPaths::LocateOption >(options)));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QStandardPaths_displayName(QStandardPaths::StandardLocation type) {
  return new QString(QStandardPaths::displayName(type));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QStandardPaths_findExecutable(QString const * executableName, QList< QString > const * paths) {
  return new QString(QStandardPaths::findExecutable(*executableName, *paths));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStandardPaths_setTestModeEnabled(bool testMode) {
  QStandardPaths::setTestModeEnabled(testMode);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStandardPaths_isTestModeEnabled() {
  return QStandardPaths::isTestModeEnabled();
}


RITUAL_EXPORT QStorageInfo * ctr_qt_core_ffi_QStorageInfo_QStorageInfo() {
  return new QStorageInfo();
}


RITUAL_EXPORT QStorageInfo * ctr_qt_core_ffi_QStorageInfo_QStorageInfo1(QString const * path) {
  return new QStorageInfo(*path);
}


RITUAL_EXPORT QStorageInfo * ctr_qt_core_ffi_QStorageInfo_QStorageInfo2(QDir const * dir) {
  return new QStorageInfo(*dir);
}


RITUAL_EXPORT QStorageInfo * ctr_qt_core_ffi_QStorageInfo_QStorageInfo3(QStorageInfo const * other) {
  return new QStorageInfo(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStorageInfo_dQStorageInfo(QStorageInfo * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QStorageInfo * ctr_qt_core_ffi_QStorageInfo_operator_(QStorageInfo * this_ptr, QStorageInfo const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStorageInfo_swap(QStorageInfo * this_ptr, QStorageInfo * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStorageInfo_setPath(QStorageInfo * this_ptr, QString const * path) {
  this_ptr->setPath(*path);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QStorageInfo_rootPath(QStorageInfo const * this_ptr) {
  return new QString(this_ptr->rootPath());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QStorageInfo_device(QStorageInfo const * this_ptr) {
  return new QByteArray(this_ptr->device());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QStorageInfo_subvolume(QStorageInfo const * this_ptr) {
  return new QByteArray(this_ptr->subvolume());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QStorageInfo_fileSystemType(QStorageInfo const * this_ptr) {
  return new QByteArray(this_ptr->fileSystemType());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QStorageInfo_name(QStorageInfo const * this_ptr) {
  return new QString(this_ptr->name());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QStorageInfo_displayName(QStorageInfo const * this_ptr) {
  return new QString(this_ptr->displayName());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStorageInfo_bytesTotal(QStorageInfo const * this_ptr) {
  return this_ptr->bytesTotal();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStorageInfo_bytesFree(QStorageInfo const * this_ptr) {
  return this_ptr->bytesFree();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QStorageInfo_bytesAvailable(QStorageInfo const * this_ptr) {
  return this_ptr->bytesAvailable();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QStorageInfo_blockSize(QStorageInfo const * this_ptr) {
  return this_ptr->blockSize();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStorageInfo_isRoot(QStorageInfo const * this_ptr) {
  return this_ptr->isRoot();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStorageInfo_isReadOnly(QStorageInfo const * this_ptr) {
  return this_ptr->isReadOnly();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStorageInfo_isReady(QStorageInfo const * this_ptr) {
  return this_ptr->isReady();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStorageInfo_isValid(QStorageInfo const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStorageInfo_refresh(QStorageInfo * this_ptr) {
  this_ptr->refresh();
}


RITUAL_EXPORT QList< QStorageInfo > * ctr_qt_core_ffi_QStorageInfo_mountedVolumes() {
  return new QList< QStorageInfo >(QStorageInfo::mountedVolumes());
}


RITUAL_EXPORT QStorageInfo * ctr_qt_core_ffi_QStorageInfo_root() {
  return new QStorageInfo(QStorageInfo::root());
}


RITUAL_EXPORT QDebug * ctr_qt_core_ffi_operator__123(QDebug const * debug, QStorageInfo const * arg2) {
  return new QDebug(operator<<(*debug, *arg2));
}


RITUAL_EXPORT int ctr_qt_core_ffi_qRegisterNormalizedMetaType_QStorageInfo(QByteArray const * arg1) {
  return qRegisterNormalizedMetaType_QStorageInfo(*arg1);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QStringListModel_metaObject(QStringListModel const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QStringListModel_qt_metacast(QStringListModel * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QStringListModel_qt_metacall(QStringListModel * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QStringListModel_tr(char const * s, char const * c, int n) {
  return new QString(QStringListModel::tr(s, c, n));
}


RITUAL_EXPORT QStringListModel * ctr_qt_core_ffi_QStringListModel_QStringListModel(QObject * parent) {
  return new QStringListModel(parent);
}


RITUAL_EXPORT QStringListModel * ctr_qt_core_ffi_QStringListModel_QStringListModel1(QList< QString > const * strings, QObject * parent) {
  return new QStringListModel(*strings, parent);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QStringListModel_rowCount(QStringListModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->rowCount(*parent);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QStringListModel_sibling(QStringListModel const * this_ptr, int row, int column, QModelIndex const * idx) {
  return new QModelIndex(this_ptr->sibling(row, column, *idx));
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QStringListModel_data(QStringListModel const * this_ptr, QModelIndex const * index, int role) {
  return new QVariant(this_ptr->data(*index, role));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringListModel_setData(QStringListModel * this_ptr, QModelIndex const * index, QVariant const * value, int role) {
  return this_ptr->setData(*index, *value, role);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringListModel_clearItemData(QStringListModel * this_ptr, QModelIndex const * index) {
  return this_ptr->clearItemData(*index);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QStringListModel_flags(QStringListModel const * this_ptr, QModelIndex const * index) {
  return int(this_ptr->flags(*index));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringListModel_insertRows(QStringListModel * this_ptr, int row, int count, QModelIndex const * parent) {
  return this_ptr->insertRows(row, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringListModel_removeRows(QStringListModel * this_ptr, int row, int count, QModelIndex const * parent) {
  return this_ptr->removeRows(row, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringListModel_moveRows(QStringListModel * this_ptr, QModelIndex const * sourceParent, int sourceRow, int count, QModelIndex const * destinationParent, int destinationChild) {
  return this_ptr->moveRows(*sourceParent, sourceRow, count, *destinationParent, destinationChild);
}


RITUAL_EXPORT QMap< int, QVariant > * ctr_qt_core_ffi_QStringListModel_itemData(QStringListModel const * this_ptr, QModelIndex const * index) {
  return new QMap< int, QVariant >(this_ptr->itemData(*index));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QStringListModel_setItemData(QStringListModel * this_ptr, QModelIndex const * index, QMap< int, QVariant > const * roles) {
  return this_ptr->setItemData(*index, *roles);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringListModel_sort(QStringListModel * this_ptr, int column, Qt::SortOrder order) {
  this_ptr->sort(column, order);
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QStringListModel_stringList(QStringListModel const * this_ptr) {
  return new QList< QString >(this_ptr->stringList());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringListModel_setStringList(QStringListModel * this_ptr, QList< QString > const * strings) {
  this_ptr->setStringList(*strings);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QStringListModel_supportedDropActions(QStringListModel const * this_ptr) {
  return int(this_ptr->supportedDropActions());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSystemSemaphore_tr(char const * sourceText, char const * disambiguation, int n) {
  return new QString(QSystemSemaphore::tr(sourceText, disambiguation, n));
}


RITUAL_EXPORT QSystemSemaphore * ctr_qt_core_ffi_QSystemSemaphore_QSystemSemaphore(QNativeIpcKey const * key, int initialValue, QSystemSemaphore::AccessMode arg3) {
  return new QSystemSemaphore(*key, initialValue, arg3);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSystemSemaphore_dQSystemSemaphore(QSystemSemaphore * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSystemSemaphore_setNativeKey(QSystemSemaphore * this_ptr, QNativeIpcKey const * key, int initialValue, QSystemSemaphore::AccessMode arg3) {
  this_ptr->setNativeKey(*key, initialValue, arg3);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSystemSemaphore_setNativeKey1(QSystemSemaphore * this_ptr, QString const * key, int initialValue, QSystemSemaphore::AccessMode mode, QNativeIpcKey::Type type) {
  this_ptr->setNativeKey(*key, initialValue, mode, type);
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QSystemSemaphore_nativeIpcKey(QSystemSemaphore const * this_ptr) {
  return new QNativeIpcKey(this_ptr->nativeIpcKey());
}


RITUAL_EXPORT QSystemSemaphore * ctr_qt_core_ffi_QSystemSemaphore_QSystemSemaphore1(QString const * key, int initialValue, QSystemSemaphore::AccessMode mode) {
  return new QSystemSemaphore(*key, initialValue, mode);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSystemSemaphore_setKey(QSystemSemaphore * this_ptr, QString const * key, int initialValue, QSystemSemaphore::AccessMode mode) {
  this_ptr->setKey(*key, initialValue, mode);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSystemSemaphore_key(QSystemSemaphore const * this_ptr) {
  return new QString(this_ptr->key());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSystemSemaphore_acquire(QSystemSemaphore * this_ptr) {
  return this_ptr->acquire();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSystemSemaphore_release(QSystemSemaphore * this_ptr, int n) {
  return this_ptr->release(n);
}


RITUAL_EXPORT QSystemSemaphore::SystemSemaphoreError ctr_qt_core_ffi_QSystemSemaphore_error(QSystemSemaphore const * this_ptr) {
  return this_ptr->error();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QSystemSemaphore_errorString(QSystemSemaphore const * this_ptr) {
  return new QString(this_ptr->errorString());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QSystemSemaphore_isKeyTypeSupported(QNativeIpcKey::Type type) {
  return QSystemSemaphore::isKeyTypeSupported(type);
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QSystemSemaphore_platformSafeKey(QString const * key, QNativeIpcKey::Type type) {
  return new QNativeIpcKey(QSystemSemaphore::platformSafeKey(*key, type));
}


RITUAL_EXPORT QNativeIpcKey * ctr_qt_core_ffi_QSystemSemaphore_legacyNativeKey(QString const * key, QNativeIpcKey::Type type) {
  return new QNativeIpcKey(QSystemSemaphore::legacyNativeKey(*key, type));
}


RITUAL_EXPORT QTemporaryDir * ctr_qt_core_ffi_QTemporaryDir_QTemporaryDir() {
  return new QTemporaryDir();
}


RITUAL_EXPORT QTemporaryDir * ctr_qt_core_ffi_QTemporaryDir_QTemporaryDir1(QString const * templateName) {
  return new QTemporaryDir(*templateName);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTemporaryDir_dQTemporaryDir(QTemporaryDir * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTemporaryDir_swap(QTemporaryDir * this_ptr, QTemporaryDir * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTemporaryDir_isValid(QTemporaryDir const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTemporaryDir_errorString(QTemporaryDir const * this_ptr) {
  return new QString(this_ptr->errorString());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTemporaryDir_autoRemove(QTemporaryDir const * this_ptr) {
  return this_ptr->autoRemove();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTemporaryDir_setAutoRemove(QTemporaryDir * this_ptr, bool b) {
  this_ptr->setAutoRemove(b);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTemporaryDir_remove(QTemporaryDir * this_ptr) {
  return this_ptr->remove();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTemporaryDir_path(QTemporaryDir const * this_ptr) {
  return new QString(this_ptr->path());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTemporaryDir_filePath(QTemporaryDir const * this_ptr, QString const * fileName) {
  return new QString(this_ptr->filePath(*fileName));
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QTemporaryFile_metaObject(QTemporaryFile const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QTemporaryFile_qt_metacast(QTemporaryFile * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTemporaryFile_qt_metacall(QTemporaryFile * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTemporaryFile_tr(char const * s, char const * c, int n) {
  return new QString(QTemporaryFile::tr(s, c, n));
}


RITUAL_EXPORT QTemporaryFile * ctr_qt_core_ffi_QTemporaryFile_QTemporaryFile() {
  return new QTemporaryFile();
}


RITUAL_EXPORT QTemporaryFile * ctr_qt_core_ffi_QTemporaryFile_QTemporaryFile1(QString const * templateName) {
  return new QTemporaryFile(*templateName);
}


RITUAL_EXPORT QTemporaryFile * ctr_qt_core_ffi_QTemporaryFile_QTemporaryFile2(QObject * parent) {
  return new QTemporaryFile(parent);
}


RITUAL_EXPORT QTemporaryFile * ctr_qt_core_ffi_QTemporaryFile_QTemporaryFile3(QString const * templateName, QObject * parent) {
  return new QTemporaryFile(*templateName, parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTemporaryFile_dQTemporaryFile(QTemporaryFile * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTemporaryFile_autoRemove(QTemporaryFile const * this_ptr) {
  return this_ptr->autoRemove();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTemporaryFile_setAutoRemove(QTemporaryFile * this_ptr, bool b) {
  this_ptr->setAutoRemove(b);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTemporaryFile_open(QTemporaryFile * this_ptr) {
  return this_ptr->open();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTemporaryFile_fileName(QTemporaryFile const * this_ptr) {
  return new QString(this_ptr->fileName());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTemporaryFile_fileTemplate(QTemporaryFile const * this_ptr) {
  return new QString(this_ptr->fileTemplate());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTemporaryFile_setFileTemplate(QTemporaryFile * this_ptr, QString const * name) {
  this_ptr->setFileTemplate(*name);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTemporaryFile_rename(QTemporaryFile * this_ptr, QString const * newName) {
  return this_ptr->rename(*newName);
}


RITUAL_EXPORT QTemporaryFile * ctr_qt_core_ffi_QTemporaryFile_createNativeFile(QString const * fileName) {
  return QTemporaryFile::createNativeFile(*fileName);
}


RITUAL_EXPORT QTemporaryFile * ctr_qt_core_ffi_QTemporaryFile_createNativeFile1(QFile * file) {
  return QTemporaryFile::createNativeFile(*file);
}


RITUAL_EXPORT QTextBoundaryFinder * ctr_qt_core_ffi_QTextBoundaryFinder_QTextBoundaryFinder() {
  return new QTextBoundaryFinder();
}


RITUAL_EXPORT QTextBoundaryFinder * ctr_qt_core_ffi_QTextBoundaryFinder_QTextBoundaryFinder1(QTextBoundaryFinder const * other) {
  return new QTextBoundaryFinder(*other);
}


RITUAL_EXPORT QTextBoundaryFinder * ctr_qt_core_ffi_QTextBoundaryFinder_operator_(QTextBoundaryFinder * this_ptr, QTextBoundaryFinder const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextBoundaryFinder_dQTextBoundaryFinder(QTextBoundaryFinder * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextBoundaryFinder * ctr_qt_core_ffi_QTextBoundaryFinder_QTextBoundaryFinder2(QTextBoundaryFinder::BoundaryType type, QString const * string) {
  return new QTextBoundaryFinder(type, *string);
}


RITUAL_EXPORT QTextBoundaryFinder * ctr_qt_core_ffi_QTextBoundaryFinder_QTextBoundaryFinder3(QTextBoundaryFinder::BoundaryType type, QChar const * chars, long long length, unsigned char * buffer, long long bufferSize) {
  return new QTextBoundaryFinder(type, chars, length, buffer, bufferSize);
}


RITUAL_EXPORT QTextBoundaryFinder * ctr_qt_core_ffi_QTextBoundaryFinder_QTextBoundaryFinder4(QTextBoundaryFinder::BoundaryType type, QStringView const * str, unsigned char * buffer, long long bufferSize) {
  return new QTextBoundaryFinder(type, *str, buffer, bufferSize);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTextBoundaryFinder_isValid(QTextBoundaryFinder const * this_ptr) {
  return this_ptr->isValid();
}


RITUAL_EXPORT QTextBoundaryFinder::BoundaryType ctr_qt_core_ffi_QTextBoundaryFinder_type(QTextBoundaryFinder const * this_ptr) {
  return this_ptr->type();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTextBoundaryFinder_string(QTextBoundaryFinder const * this_ptr) {
  return new QString(this_ptr->string());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextBoundaryFinder_toStart(QTextBoundaryFinder * this_ptr) {
  this_ptr->toStart();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextBoundaryFinder_toEnd(QTextBoundaryFinder * this_ptr) {
  this_ptr->toEnd();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QTextBoundaryFinder_position(QTextBoundaryFinder const * this_ptr) {
  return this_ptr->position();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextBoundaryFinder_setPosition(QTextBoundaryFinder * this_ptr, long long position) {
  this_ptr->setPosition(position);
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QTextBoundaryFinder_toNextBoundary(QTextBoundaryFinder * this_ptr) {
  return this_ptr->toNextBoundary();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QTextBoundaryFinder_toPreviousBoundary(QTextBoundaryFinder * this_ptr) {
  return this_ptr->toPreviousBoundary();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTextBoundaryFinder_isAtBoundary(QTextBoundaryFinder const * this_ptr) {
  return this_ptr->isAtBoundary();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTextBoundaryFinder_boundaryReasons(QTextBoundaryFinder const * this_ptr) {
  return int(this_ptr->boundaryReasons());
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QTimeLine_metaObject(QTimeLine const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QTimeLine_qt_metacast(QTimeLine * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeLine_qt_metacall(QTimeLine * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTimeLine_tr(char const * s, char const * c, int n) {
  return new QString(QTimeLine::tr(s, c, n));
}


RITUAL_EXPORT QTimeLine * ctr_qt_core_ffi_QTimeLine_QTimeLine(int duration, QObject * parent) {
  return new QTimeLine(duration, parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeLine_dQTimeLine(QTimeLine * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTimeLine::State ctr_qt_core_ffi_QTimeLine_state(QTimeLine const * this_ptr) {
  return this_ptr->state();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeLine_loopCount(QTimeLine const * this_ptr) {
  return this_ptr->loopCount();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeLine_setLoopCount(QTimeLine * this_ptr, int count) {
  this_ptr->setLoopCount(count);
}


RITUAL_EXPORT QBindable< int > * ctr_qt_core_ffi_QTimeLine_bindableLoopCount(QTimeLine * this_ptr) {
  return new QBindable< int >(this_ptr->bindableLoopCount());
}


RITUAL_EXPORT QTimeLine::Direction ctr_qt_core_ffi_QTimeLine_direction(QTimeLine const * this_ptr) {
  return this_ptr->direction();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeLine_setDirection(QTimeLine * this_ptr, QTimeLine::Direction direction) {
  this_ptr->setDirection(direction);
}


RITUAL_EXPORT QBindable< QTimeLine::Direction > * ctr_qt_core_ffi_QTimeLine_bindableDirection(QTimeLine * this_ptr) {
  return new QBindable< QTimeLine::Direction >(this_ptr->bindableDirection());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeLine_duration(QTimeLine const * this_ptr) {
  return this_ptr->duration();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeLine_setDuration(QTimeLine * this_ptr, int duration) {
  this_ptr->setDuration(duration);
}


RITUAL_EXPORT QBindable< int > * ctr_qt_core_ffi_QTimeLine_bindableDuration(QTimeLine * this_ptr) {
  return new QBindable< int >(this_ptr->bindableDuration());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeLine_startFrame(QTimeLine const * this_ptr) {
  return this_ptr->startFrame();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeLine_setStartFrame(QTimeLine * this_ptr, int frame) {
  this_ptr->setStartFrame(frame);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeLine_endFrame(QTimeLine const * this_ptr) {
  return this_ptr->endFrame();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeLine_setEndFrame(QTimeLine * this_ptr, int frame) {
  this_ptr->setEndFrame(frame);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeLine_setFrameRange(QTimeLine * this_ptr, int startFrame, int endFrame) {
  this_ptr->setFrameRange(startFrame, endFrame);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeLine_updateInterval(QTimeLine const * this_ptr) {
  return this_ptr->updateInterval();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeLine_setUpdateInterval(QTimeLine * this_ptr, int interval) {
  this_ptr->setUpdateInterval(interval);
}


RITUAL_EXPORT QBindable< int > * ctr_qt_core_ffi_QTimeLine_bindableUpdateInterval(QTimeLine * this_ptr) {
  return new QBindable< int >(this_ptr->bindableUpdateInterval());
}


RITUAL_EXPORT QEasingCurve * ctr_qt_core_ffi_QTimeLine_easingCurve(QTimeLine const * this_ptr) {
  return new QEasingCurve(this_ptr->easingCurve());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeLine_setEasingCurve(QTimeLine * this_ptr, QEasingCurve const * curve) {
  this_ptr->setEasingCurve(*curve);
}


RITUAL_EXPORT QBindable< QEasingCurve > * ctr_qt_core_ffi_QTimeLine_bindableEasingCurve(QTimeLine * this_ptr) {
  return new QBindable< QEasingCurve >(this_ptr->bindableEasingCurve());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeLine_currentTime(QTimeLine const * this_ptr) {
  return this_ptr->currentTime();
}


RITUAL_EXPORT QBindable< int > * ctr_qt_core_ffi_QTimeLine_bindableCurrentTime(QTimeLine * this_ptr) {
  return new QBindable< int >(this_ptr->bindableCurrentTime());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeLine_currentFrame(QTimeLine const * this_ptr) {
  return this_ptr->currentFrame();
}


RITUAL_EXPORT double ctr_qt_core_ffi_QTimeLine_currentValue(QTimeLine const * this_ptr) {
  return this_ptr->currentValue();
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTimeLine_frameForTime(QTimeLine const * this_ptr, int msec) {
  return this_ptr->frameForTime(msec);
}


RITUAL_EXPORT double ctr_qt_core_ffi_QTimeLine_valueForTime(QTimeLine const * this_ptr, int msec) {
  return this_ptr->valueForTime(msec);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeLine_start(QTimeLine * this_ptr) {
  this_ptr->start();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeLine_resume(QTimeLine * this_ptr) {
  this_ptr->resume();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeLine_stop(QTimeLine * this_ptr) {
  this_ptr->stop();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeLine_setPaused(QTimeLine * this_ptr, bool paused) {
  this_ptr->setPaused(paused);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeLine_setCurrentTime(QTimeLine * this_ptr, int msec) {
  this_ptr->setCurrentTime(msec);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeLine_toggleDirection(QTimeLine * this_ptr) {
  this_ptr->toggleDirection();
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QTranslator_metaObject(QTranslator const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QTranslator_qt_metacast(QTranslator * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTranslator_qt_metacall(QTranslator * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTranslator_tr(char const * s, char const * c, int n) {
  return new QString(QTranslator::tr(s, c, n));
}


RITUAL_EXPORT QTranslator * ctr_qt_core_ffi_QTranslator_QTranslator(QObject * parent) {
  return new QTranslator(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTranslator_dQTranslator(QTranslator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTranslator_translate(QTranslator const * this_ptr, char const * context, char const * sourceText, char const * disambiguation, int n) {
  return new QString(this_ptr->translate(context, sourceText, disambiguation, n));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTranslator_isEmpty(QTranslator const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTranslator_language(QTranslator const * this_ptr) {
  return new QString(this_ptr->language());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTranslator_filePath(QTranslator const * this_ptr) {
  return new QString(this_ptr->filePath());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTranslator_load(QTranslator * this_ptr, QString const * filename, QString const * directory, QString const * search_delimiters, QString const * suffix) {
  return this_ptr->load(*filename, *directory, *search_delimiters, *suffix);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTranslator_load1(QTranslator * this_ptr, QLocale const * locale, QString const * filename, QString const * prefix, QString const * directory, QString const * suffix) {
  return this_ptr->load(*locale, *filename, *prefix, *directory, *suffix);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTranslator_load2(QTranslator * this_ptr, unsigned char const * data, int len, QString const * directory) {
  return this_ptr->load(data, len, *directory);
}


RITUAL_EXPORT QMetaObject const * ctr_qt_core_ffi_QTransposeProxyModel_metaObject(QTransposeProxyModel const * this_ptr) {
  return this_ptr->metaObject();
}


RITUAL_EXPORT void * ctr_qt_core_ffi_QTransposeProxyModel_qt_metacast(QTransposeProxyModel * this_ptr, char const * arg1) {
  return this_ptr->qt_metacast(arg1);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTransposeProxyModel_qt_metacall(QTransposeProxyModel * this_ptr, QMetaObject::Call arg1, int arg2, void * * arg3) {
  return this_ptr->qt_metacall(arg1, arg2, arg3);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QTransposeProxyModel_tr(char const * s, char const * c, int n) {
  return new QString(QTransposeProxyModel::tr(s, c, n));
}


RITUAL_EXPORT QTransposeProxyModel * ctr_qt_core_ffi_QTransposeProxyModel_QTransposeProxyModel(QObject * parent) {
  return new QTransposeProxyModel(parent);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTransposeProxyModel_dQTransposeProxyModel(QTransposeProxyModel * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTransposeProxyModel_setSourceModel(QTransposeProxyModel * this_ptr, QAbstractItemModel * newSourceModel) {
  this_ptr->setSourceModel(newSourceModel);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTransposeProxyModel_rowCount(QTransposeProxyModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->rowCount(*parent);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QTransposeProxyModel_columnCount(QTransposeProxyModel const * this_ptr, QModelIndex const * parent) {
  return this_ptr->columnCount(*parent);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QTransposeProxyModel_headerData(QTransposeProxyModel const * this_ptr, int section, Qt::Orientation orientation, int role) {
  return new QVariant(this_ptr->headerData(section, orientation, role));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTransposeProxyModel_setHeaderData(QTransposeProxyModel * this_ptr, int section, Qt::Orientation orientation, QVariant const * value, int role) {
  return this_ptr->setHeaderData(section, orientation, *value, role);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTransposeProxyModel_setItemData(QTransposeProxyModel * this_ptr, QModelIndex const * index, QMap< int, QVariant > const * roles) {
  return this_ptr->setItemData(*index, *roles);
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QTransposeProxyModel_span(QTransposeProxyModel const * this_ptr, QModelIndex const * index) {
  return new QSize(this_ptr->span(*index));
}


RITUAL_EXPORT QMap< int, QVariant > * ctr_qt_core_ffi_QTransposeProxyModel_itemData(QTransposeProxyModel const * this_ptr, QModelIndex const * index) {
  return new QMap< int, QVariant >(this_ptr->itemData(*index));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QTransposeProxyModel_mapFromSource(QTransposeProxyModel const * this_ptr, QModelIndex const * sourceIndex) {
  return new QModelIndex(this_ptr->mapFromSource(*sourceIndex));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QTransposeProxyModel_mapToSource(QTransposeProxyModel const * this_ptr, QModelIndex const * proxyIndex) {
  return new QModelIndex(this_ptr->mapToSource(*proxyIndex));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QTransposeProxyModel_parent(QTransposeProxyModel const * this_ptr, QModelIndex const * index) {
  return new QModelIndex(this_ptr->parent(*index));
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QTransposeProxyModel_index(QTransposeProxyModel const * this_ptr, int row, int column, QModelIndex const * parent) {
  return new QModelIndex(this_ptr->index(row, column, *parent));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTransposeProxyModel_insertRows(QTransposeProxyModel * this_ptr, int row, int count, QModelIndex const * parent) {
  return this_ptr->insertRows(row, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTransposeProxyModel_removeRows(QTransposeProxyModel * this_ptr, int row, int count, QModelIndex const * parent) {
  return this_ptr->removeRows(row, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTransposeProxyModel_moveRows(QTransposeProxyModel * this_ptr, QModelIndex const * sourceParent, int sourceRow, int count, QModelIndex const * destinationParent, int destinationChild) {
  return this_ptr->moveRows(*sourceParent, sourceRow, count, *destinationParent, destinationChild);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTransposeProxyModel_insertColumns(QTransposeProxyModel * this_ptr, int column, int count, QModelIndex const * parent) {
  return this_ptr->insertColumns(column, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTransposeProxyModel_removeColumns(QTransposeProxyModel * this_ptr, int column, int count, QModelIndex const * parent) {
  return this_ptr->removeColumns(column, count, *parent);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QTransposeProxyModel_moveColumns(QTransposeProxyModel * this_ptr, QModelIndex const * sourceParent, int sourceColumn, int count, QModelIndex const * destinationParent, int destinationChild) {
  return this_ptr->moveColumns(*sourceParent, sourceColumn, count, *destinationParent, destinationChild);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTransposeProxyModel_sort(QTransposeProxyModel * this_ptr, int column, Qt::SortOrder order) {
  this_ptr->sort(column, order);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash53(QUrlQuery const * key, unsigned long seed) {
  return qHash(*key, seed);
}


RITUAL_EXPORT QUrlQuery * ctr_qt_core_ffi_QUrlQuery_QUrlQuery() {
  return new QUrlQuery();
}


RITUAL_EXPORT QUrlQuery * ctr_qt_core_ffi_QUrlQuery_QUrlQuery1(QUrl const * url) {
  return new QUrlQuery(*url);
}


RITUAL_EXPORT QUrlQuery * ctr_qt_core_ffi_QUrlQuery_QUrlQuery2(QString const * queryString) {
  return new QUrlQuery(*queryString);
}


RITUAL_EXPORT QUrlQuery * ctr_qt_core_ffi_QUrlQuery_QUrlQuery4(QUrlQuery const * other) {
  return new QUrlQuery(*other);
}


RITUAL_EXPORT QUrlQuery * ctr_qt_core_ffi_QUrlQuery_operator_(QUrlQuery * this_ptr, QUrlQuery const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrlQuery_dQUrlQuery(QUrlQuery * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrlQuery_swap(QUrlQuery * this_ptr, QUrlQuery * other) {
  this_ptr->swap(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUrlQuery_isEmpty(QUrlQuery const * this_ptr) {
  return this_ptr->isEmpty();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUrlQuery_isDetached(QUrlQuery const * this_ptr) {
  return this_ptr->isDetached();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrlQuery_clear(QUrlQuery * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrlQuery_query(QUrlQuery const * this_ptr, int encoding) {
  return new QString(this_ptr->query(QFlags< QUrl::ComponentFormattingOption >(encoding)));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrlQuery_setQuery(QUrlQuery * this_ptr, QString const * queryString) {
  this_ptr->setQuery(*queryString);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrlQuery_toString(QUrlQuery const * this_ptr, int encoding) {
  return new QString(this_ptr->toString(QFlags< QUrl::ComponentFormattingOption >(encoding)));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrlQuery_setQueryDelimiters(QUrlQuery * this_ptr, QChar const * valueDelimiter, QChar const * pairDelimiter) {
  this_ptr->setQueryDelimiters(*valueDelimiter, *pairDelimiter);
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QUrlQuery_queryValueDelimiter(QUrlQuery const * this_ptr) {
  return new QChar(this_ptr->queryValueDelimiter());
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QUrlQuery_queryPairDelimiter(QUrlQuery const * this_ptr) {
  return new QChar(this_ptr->queryPairDelimiter());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QUrlQuery_hasQueryItem(QUrlQuery const * this_ptr, QString const * key) {
  return this_ptr->hasQueryItem(*key);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrlQuery_addQueryItem(QUrlQuery * this_ptr, QString const * key, QString const * value) {
  this_ptr->addQueryItem(*key, *value);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrlQuery_removeQueryItem(QUrlQuery * this_ptr, QString const * key) {
  this_ptr->removeQueryItem(*key);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QUrlQuery_queryItemValue(QUrlQuery const * this_ptr, QString const * key, int encoding) {
  return new QString(this_ptr->queryItemValue(*key, QFlags< QUrl::ComponentFormattingOption >(encoding)));
}


RITUAL_EXPORT QList< QString > * ctr_qt_core_ffi_QUrlQuery_allQueryItemValues(QUrlQuery const * this_ptr, QString const * key, int encoding) {
  return new QList< QString >(this_ptr->allQueryItemValues(*key, QFlags< QUrl::ComponentFormattingOption >(encoding)));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUrlQuery_removeAllQueryItems(QUrlQuery * this_ptr, QString const * key) {
  this_ptr->removeAllQueryItems(*key);
}


RITUAL_EXPORT char16_t ctr_qt_core_ffi_QUrlQuery_defaultQueryValueDelimiter() {
  return QUrlQuery::defaultQueryValueDelimiter();
}


RITUAL_EXPORT char16_t ctr_qt_core_ffi_QUrlQuery_defaultQueryPairDelimiter() {
  return QUrlQuery::defaultQueryPairDelimiter();
}


RITUAL_EXPORT QWaitCondition * ctr_qt_core_ffi_QWaitCondition_QWaitCondition() {
  return new QWaitCondition();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QWaitCondition_dQWaitCondition(QWaitCondition * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QWaitCondition_wait(QWaitCondition * this_ptr, QMutex * lockedMutex, QDeadlineTimer const * deadline) {
  return this_ptr->wait(lockedMutex, *deadline);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QWaitCondition_wait1(QWaitCondition * this_ptr, QMutex * lockedMutex, unsigned long time) {
  return this_ptr->wait(lockedMutex, time);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QWaitCondition_wait2(QWaitCondition * this_ptr, QReadWriteLock * lockedReadWriteLock, QDeadlineTimer const * deadline) {
  return this_ptr->wait(lockedReadWriteLock, *deadline);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QWaitCondition_wait3(QWaitCondition * this_ptr, QReadWriteLock * lockedReadWriteLock, unsigned long time) {
  return this_ptr->wait(lockedReadWriteLock, time);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QWaitCondition_wakeOne(QWaitCondition * this_ptr) {
  this_ptr->wakeOne();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QWaitCondition_wakeAll(QWaitCondition * this_ptr) {
  this_ptr->wakeAll();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QWaitCondition_notify_one(QWaitCondition * this_ptr) {
  this_ptr->notify_one();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QWaitCondition_notify_all(QWaitCondition * this_ptr) {
  this_ptr->notify_all();
}


RITUAL_EXPORT QXmlStreamAttribute * ctr_qt_core_ffi_QXmlStreamAttribute_QXmlStreamAttribute() {
  return new QXmlStreamAttribute();
}


RITUAL_EXPORT QXmlStreamAttribute * ctr_qt_core_ffi_QXmlStreamAttribute_QXmlStreamAttribute1(QString const * qualifiedName, QString const * value) {
  return new QXmlStreamAttribute(*qualifiedName, *value);
}


RITUAL_EXPORT QXmlStreamAttribute * ctr_qt_core_ffi_QXmlStreamAttribute_QXmlStreamAttribute2(QString const * namespaceUri, QString const * name, QString const * value) {
  return new QXmlStreamAttribute(*namespaceUri, *name, *value);
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamAttribute_namespaceUri(QXmlStreamAttribute const * this_ptr) {
  return new QStringView(this_ptr->namespaceUri());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamAttribute_name(QXmlStreamAttribute const * this_ptr) {
  return new QStringView(this_ptr->name());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamAttribute_qualifiedName(QXmlStreamAttribute const * this_ptr) {
  return new QStringView(this_ptr->qualifiedName());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamAttribute_prefix(QXmlStreamAttribute const * this_ptr) {
  return new QStringView(this_ptr->prefix());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamAttribute_value(QXmlStreamAttribute const * this_ptr) {
  return new QStringView(this_ptr->value());
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamAttribute_isDefault(QXmlStreamAttribute const * this_ptr) {
  return this_ptr->isDefault();
}


RITUAL_EXPORT QXmlStreamAttributes * ctr_qt_core_ffi_QXmlStreamAttributes_QXmlStreamAttributes() {
  return new QXmlStreamAttributes();
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamAttributes_value(QXmlStreamAttributes const * this_ptr, QAnyStringView const * namespaceUri, QAnyStringView const * name) {
  return new QStringView(this_ptr->value(*namespaceUri, *name));
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamAttributes_value1(QXmlStreamAttributes const * this_ptr, QAnyStringView const * qualifiedName) {
  return new QStringView(this_ptr->value(*qualifiedName));
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamAttributes_append(QXmlStreamAttributes * this_ptr, QString const * namespaceUri, QString const * name, QString const * value) {
  this_ptr->append(*namespaceUri, *name, *value);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamAttributes_append1(QXmlStreamAttributes * this_ptr, QString const * qualifiedName, QString const * value) {
  this_ptr->append(*qualifiedName, *value);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamAttributes_hasAttribute(QXmlStreamAttributes const * this_ptr, QAnyStringView const * qualifiedName) {
  return this_ptr->hasAttribute(*qualifiedName);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamAttributes_hasAttribute1(QXmlStreamAttributes const * this_ptr, QAnyStringView const * namespaceUri, QAnyStringView const * name) {
  return this_ptr->hasAttribute(*namespaceUri, *name);
}


RITUAL_EXPORT QXmlStreamNamespaceDeclaration * ctr_qt_core_ffi_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration() {
  return new QXmlStreamNamespaceDeclaration();
}


RITUAL_EXPORT QXmlStreamNamespaceDeclaration * ctr_qt_core_ffi_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration1(QString const * prefix, QString const * namespaceUri) {
  return new QXmlStreamNamespaceDeclaration(*prefix, *namespaceUri);
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamNamespaceDeclaration_prefix(QXmlStreamNamespaceDeclaration const * this_ptr) {
  return new QStringView(this_ptr->prefix());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamNamespaceDeclaration_namespaceUri(QXmlStreamNamespaceDeclaration const * this_ptr) {
  return new QStringView(this_ptr->namespaceUri());
}


RITUAL_EXPORT QXmlStreamNotationDeclaration * ctr_qt_core_ffi_QXmlStreamNotationDeclaration_QXmlStreamNotationDeclaration() {
  return new QXmlStreamNotationDeclaration();
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamNotationDeclaration_name(QXmlStreamNotationDeclaration const * this_ptr) {
  return new QStringView(this_ptr->name());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamNotationDeclaration_systemId(QXmlStreamNotationDeclaration const * this_ptr) {
  return new QStringView(this_ptr->systemId());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamNotationDeclaration_publicId(QXmlStreamNotationDeclaration const * this_ptr) {
  return new QStringView(this_ptr->publicId());
}


RITUAL_EXPORT QXmlStreamEntityDeclaration * ctr_qt_core_ffi_QXmlStreamEntityDeclaration_QXmlStreamEntityDeclaration() {
  return new QXmlStreamEntityDeclaration();
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamEntityDeclaration_name(QXmlStreamEntityDeclaration const * this_ptr) {
  return new QStringView(this_ptr->name());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamEntityDeclaration_notationName(QXmlStreamEntityDeclaration const * this_ptr) {
  return new QStringView(this_ptr->notationName());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamEntityDeclaration_systemId(QXmlStreamEntityDeclaration const * this_ptr) {
  return new QStringView(this_ptr->systemId());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamEntityDeclaration_publicId(QXmlStreamEntityDeclaration const * this_ptr) {
  return new QStringView(this_ptr->publicId());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamEntityDeclaration_value(QXmlStreamEntityDeclaration const * this_ptr) {
  return new QStringView(this_ptr->value());
}


RITUAL_EXPORT QXmlStreamEntityResolver * ctr_qt_core_ffi_QXmlStreamEntityResolver_QXmlStreamEntityResolver() {
  return new QXmlStreamEntityResolver();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamEntityResolver_dQXmlStreamEntityResolver(QXmlStreamEntityResolver * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QXmlStreamEntityResolver_resolveEntity(QXmlStreamEntityResolver * this_ptr, QString const * publicId, QString const * systemId) {
  return new QString(this_ptr->resolveEntity(*publicId, *systemId));
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QXmlStreamEntityResolver_resolveUndeclaredEntity(QXmlStreamEntityResolver * this_ptr, QString const * name) {
  return new QString(this_ptr->resolveUndeclaredEntity(*name));
}


RITUAL_EXPORT QXmlStreamReader * ctr_qt_core_ffi_QXmlStreamReader_QXmlStreamReader() {
  return new QXmlStreamReader();
}


RITUAL_EXPORT QXmlStreamReader * ctr_qt_core_ffi_QXmlStreamReader_QXmlStreamReader1(QIODevice * device) {
  return new QXmlStreamReader(device);
}


RITUAL_EXPORT QXmlStreamReader * ctr_qt_core_ffi_QXmlStreamReader_QXmlStreamReader2(QAnyStringView const * data) {
  return new QXmlStreamReader(*data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamReader_dQXmlStreamReader(QXmlStreamReader * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamReader_setDevice(QXmlStreamReader * this_ptr, QIODevice * device) {
  this_ptr->setDevice(device);
}


RITUAL_EXPORT QIODevice * ctr_qt_core_ffi_QXmlStreamReader_device(QXmlStreamReader const * this_ptr) {
  return this_ptr->device();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamReader_addData(QXmlStreamReader * this_ptr, QAnyStringView const * data) {
  this_ptr->addData(*data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamReader_clear(QXmlStreamReader * this_ptr) {
  this_ptr->clear();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_atEnd(QXmlStreamReader const * this_ptr) {
  return this_ptr->atEnd();
}


RITUAL_EXPORT QXmlStreamReader::TokenType ctr_qt_core_ffi_QXmlStreamReader_readNext(QXmlStreamReader * this_ptr) {
  return this_ptr->readNext();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_readNextStartElement(QXmlStreamReader * this_ptr) {
  return this_ptr->readNextStartElement();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamReader_skipCurrentElement(QXmlStreamReader * this_ptr) {
  this_ptr->skipCurrentElement();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QXmlStreamReader_readRawInnerData(QXmlStreamReader * this_ptr) {
  return new QString(this_ptr->readRawInnerData());
}


RITUAL_EXPORT QXmlStreamReader::TokenType ctr_qt_core_ffi_QXmlStreamReader_tokenType(QXmlStreamReader const * this_ptr) {
  return this_ptr->tokenType();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QXmlStreamReader_tokenString(QXmlStreamReader const * this_ptr) {
  return new QString(this_ptr->tokenString());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamReader_setNamespaceProcessing(QXmlStreamReader * this_ptr, bool arg1) {
  this_ptr->setNamespaceProcessing(arg1);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_namespaceProcessing(QXmlStreamReader const * this_ptr) {
  return this_ptr->namespaceProcessing();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_isStartDocument(QXmlStreamReader const * this_ptr) {
  return this_ptr->isStartDocument();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_isEndDocument(QXmlStreamReader const * this_ptr) {
  return this_ptr->isEndDocument();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_isStartElement(QXmlStreamReader const * this_ptr) {
  return this_ptr->isStartElement();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_isEndElement(QXmlStreamReader const * this_ptr) {
  return this_ptr->isEndElement();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_isCharacters(QXmlStreamReader const * this_ptr) {
  return this_ptr->isCharacters();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_isWhitespace(QXmlStreamReader const * this_ptr) {
  return this_ptr->isWhitespace();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_isCDATA(QXmlStreamReader const * this_ptr) {
  return this_ptr->isCDATA();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_isComment(QXmlStreamReader const * this_ptr) {
  return this_ptr->isComment();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_isDTD(QXmlStreamReader const * this_ptr) {
  return this_ptr->isDTD();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_isEntityReference(QXmlStreamReader const * this_ptr) {
  return this_ptr->isEntityReference();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_isProcessingInstruction(QXmlStreamReader const * this_ptr) {
  return this_ptr->isProcessingInstruction();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_isStandaloneDocument(QXmlStreamReader const * this_ptr) {
  return this_ptr->isStandaloneDocument();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_hasStandaloneDeclaration(QXmlStreamReader const * this_ptr) {
  return this_ptr->hasStandaloneDeclaration();
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamReader_documentVersion(QXmlStreamReader const * this_ptr) {
  return new QStringView(this_ptr->documentVersion());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamReader_documentEncoding(QXmlStreamReader const * this_ptr) {
  return new QStringView(this_ptr->documentEncoding());
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QXmlStreamReader_lineNumber(QXmlStreamReader const * this_ptr) {
  return this_ptr->lineNumber();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QXmlStreamReader_columnNumber(QXmlStreamReader const * this_ptr) {
  return this_ptr->columnNumber();
}


RITUAL_EXPORT long long ctr_qt_core_ffi_QXmlStreamReader_characterOffset(QXmlStreamReader const * this_ptr) {
  return this_ptr->characterOffset();
}


RITUAL_EXPORT QXmlStreamAttributes * ctr_qt_core_ffi_QXmlStreamReader_attributes(QXmlStreamReader const * this_ptr) {
  return new QXmlStreamAttributes(this_ptr->attributes());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QXmlStreamReader_readElementText(QXmlStreamReader * this_ptr, QXmlStreamReader::ReadElementTextBehaviour behaviour) {
  return new QString(this_ptr->readElementText(behaviour));
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamReader_name(QXmlStreamReader const * this_ptr) {
  return new QStringView(this_ptr->name());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamReader_namespaceUri(QXmlStreamReader const * this_ptr) {
  return new QStringView(this_ptr->namespaceUri());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamReader_qualifiedName(QXmlStreamReader const * this_ptr) {
  return new QStringView(this_ptr->qualifiedName());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamReader_prefix(QXmlStreamReader const * this_ptr) {
  return new QStringView(this_ptr->prefix());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamReader_processingInstructionTarget(QXmlStreamReader const * this_ptr) {
  return new QStringView(this_ptr->processingInstructionTarget());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamReader_processingInstructionData(QXmlStreamReader const * this_ptr) {
  return new QStringView(this_ptr->processingInstructionData());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamReader_text(QXmlStreamReader const * this_ptr) {
  return new QStringView(this_ptr->text());
}


RITUAL_EXPORT QList< QXmlStreamNamespaceDeclaration > * ctr_qt_core_ffi_QXmlStreamReader_namespaceDeclarations(QXmlStreamReader const * this_ptr) {
  return new QList< QXmlStreamNamespaceDeclaration >(this_ptr->namespaceDeclarations());
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamReader_addExtraNamespaceDeclaration(QXmlStreamReader * this_ptr, QXmlStreamNamespaceDeclaration const * extraNamespaceDeclaraction) {
  this_ptr->addExtraNamespaceDeclaration(*extraNamespaceDeclaraction);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamReader_addExtraNamespaceDeclarations(QXmlStreamReader * this_ptr, QList< QXmlStreamNamespaceDeclaration > const * extraNamespaceDeclaractions) {
  this_ptr->addExtraNamespaceDeclarations(*extraNamespaceDeclaractions);
}


RITUAL_EXPORT QList< QXmlStreamNotationDeclaration > * ctr_qt_core_ffi_QXmlStreamReader_notationDeclarations(QXmlStreamReader const * this_ptr) {
  return new QList< QXmlStreamNotationDeclaration >(this_ptr->notationDeclarations());
}


RITUAL_EXPORT QList< QXmlStreamEntityDeclaration > * ctr_qt_core_ffi_QXmlStreamReader_entityDeclarations(QXmlStreamReader const * this_ptr) {
  return new QList< QXmlStreamEntityDeclaration >(this_ptr->entityDeclarations());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamReader_dtdName(QXmlStreamReader const * this_ptr) {
  return new QStringView(this_ptr->dtdName());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamReader_dtdPublicId(QXmlStreamReader const * this_ptr) {
  return new QStringView(this_ptr->dtdPublicId());
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QXmlStreamReader_dtdSystemId(QXmlStreamReader const * this_ptr) {
  return new QStringView(this_ptr->dtdSystemId());
}


RITUAL_EXPORT int ctr_qt_core_ffi_QXmlStreamReader_entityExpansionLimit(QXmlStreamReader const * this_ptr) {
  return this_ptr->entityExpansionLimit();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamReader_setEntityExpansionLimit(QXmlStreamReader * this_ptr, int limit) {
  this_ptr->setEntityExpansionLimit(limit);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamReader_raiseError(QXmlStreamReader * this_ptr, QString const * message) {
  this_ptr->raiseError(*message);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QXmlStreamReader_errorString(QXmlStreamReader const * this_ptr) {
  return new QString(this_ptr->errorString());
}


RITUAL_EXPORT QXmlStreamReader::Error ctr_qt_core_ffi_QXmlStreamReader_error(QXmlStreamReader const * this_ptr) {
  return this_ptr->error();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamReader_hasError(QXmlStreamReader const * this_ptr) {
  return this_ptr->hasError();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamReader_setEntityResolver(QXmlStreamReader * this_ptr, QXmlStreamEntityResolver * resolver) {
  this_ptr->setEntityResolver(resolver);
}


RITUAL_EXPORT QXmlStreamEntityResolver * ctr_qt_core_ffi_QXmlStreamReader_entityResolver(QXmlStreamReader const * this_ptr) {
  return this_ptr->entityResolver();
}


RITUAL_EXPORT QXmlStreamWriter * ctr_qt_core_ffi_QXmlStreamWriter_QXmlStreamWriter() {
  return new QXmlStreamWriter();
}


RITUAL_EXPORT QXmlStreamWriter * ctr_qt_core_ffi_QXmlStreamWriter_QXmlStreamWriter1(QIODevice * device) {
  return new QXmlStreamWriter(device);
}


RITUAL_EXPORT QXmlStreamWriter * ctr_qt_core_ffi_QXmlStreamWriter_QXmlStreamWriter2(QByteArray * array) {
  return new QXmlStreamWriter(array);
}


RITUAL_EXPORT QXmlStreamWriter * ctr_qt_core_ffi_QXmlStreamWriter_QXmlStreamWriter3(QString * string) {
  return new QXmlStreamWriter(string);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_dQXmlStreamWriter(QXmlStreamWriter * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_setDevice(QXmlStreamWriter * this_ptr, QIODevice * device) {
  this_ptr->setDevice(device);
}


RITUAL_EXPORT QIODevice * ctr_qt_core_ffi_QXmlStreamWriter_device(QXmlStreamWriter const * this_ptr) {
  return this_ptr->device();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_setAutoFormatting(QXmlStreamWriter * this_ptr, bool arg1) {
  this_ptr->setAutoFormatting(arg1);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamWriter_autoFormatting(QXmlStreamWriter const * this_ptr) {
  return this_ptr->autoFormatting();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_setAutoFormattingIndent(QXmlStreamWriter * this_ptr, int spacesOrTabs) {
  this_ptr->setAutoFormattingIndent(spacesOrTabs);
}


RITUAL_EXPORT int ctr_qt_core_ffi_QXmlStreamWriter_autoFormattingIndent(QXmlStreamWriter const * this_ptr) {
  return this_ptr->autoFormattingIndent();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_setStopWritingOnError(QXmlStreamWriter * this_ptr, bool stop) {
  this_ptr->setStopWritingOnError(stop);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamWriter_stopWritingOnError(QXmlStreamWriter const * this_ptr) {
  return this_ptr->stopWritingOnError();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeAttribute(QXmlStreamWriter * this_ptr, QAnyStringView const * qualifiedName, QAnyStringView const * value) {
  this_ptr->writeAttribute(*qualifiedName, *value);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeAttribute1(QXmlStreamWriter * this_ptr, QAnyStringView const * namespaceUri, QAnyStringView const * name, QAnyStringView const * value) {
  this_ptr->writeAttribute(*namespaceUri, *name, *value);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeAttribute2(QXmlStreamWriter * this_ptr, QXmlStreamAttribute const * attribute) {
  this_ptr->writeAttribute(*attribute);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeAttributes(QXmlStreamWriter * this_ptr, QXmlStreamAttributes const * attributes) {
  this_ptr->writeAttributes(*attributes);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeCDATA(QXmlStreamWriter * this_ptr, QAnyStringView const * text) {
  this_ptr->writeCDATA(*text);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeCharacters(QXmlStreamWriter * this_ptr, QAnyStringView const * text) {
  this_ptr->writeCharacters(*text);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeComment(QXmlStreamWriter * this_ptr, QAnyStringView const * text) {
  this_ptr->writeComment(*text);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeDTD(QXmlStreamWriter * this_ptr, QAnyStringView const * dtd) {
  this_ptr->writeDTD(*dtd);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeEmptyElement(QXmlStreamWriter * this_ptr, QAnyStringView const * qualifiedName) {
  this_ptr->writeEmptyElement(*qualifiedName);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeEmptyElement1(QXmlStreamWriter * this_ptr, QAnyStringView const * namespaceUri, QAnyStringView const * name) {
  this_ptr->writeEmptyElement(*namespaceUri, *name);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeTextElement(QXmlStreamWriter * this_ptr, QAnyStringView const * qualifiedName, QAnyStringView const * text) {
  this_ptr->writeTextElement(*qualifiedName, *text);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeTextElement1(QXmlStreamWriter * this_ptr, QAnyStringView const * namespaceUri, QAnyStringView const * name, QAnyStringView const * text) {
  this_ptr->writeTextElement(*namespaceUri, *name, *text);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeEndDocument(QXmlStreamWriter * this_ptr) {
  this_ptr->writeEndDocument();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeEndElement(QXmlStreamWriter * this_ptr) {
  this_ptr->writeEndElement();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeEntityReference(QXmlStreamWriter * this_ptr, QAnyStringView const * name) {
  this_ptr->writeEntityReference(*name);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeNamespace(QXmlStreamWriter * this_ptr, QAnyStringView const * namespaceUri, QAnyStringView const * prefix) {
  this_ptr->writeNamespace(*namespaceUri, *prefix);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeDefaultNamespace(QXmlStreamWriter * this_ptr, QAnyStringView const * namespaceUri) {
  this_ptr->writeDefaultNamespace(*namespaceUri);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeProcessingInstruction(QXmlStreamWriter * this_ptr, QAnyStringView const * target, QAnyStringView const * data) {
  this_ptr->writeProcessingInstruction(*target, *data);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeStartDocument(QXmlStreamWriter * this_ptr) {
  this_ptr->writeStartDocument();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeStartDocument1(QXmlStreamWriter * this_ptr, QAnyStringView const * version) {
  this_ptr->writeStartDocument(*version);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeStartDocument2(QXmlStreamWriter * this_ptr, QAnyStringView const * version, bool standalone) {
  this_ptr->writeStartDocument(*version, standalone);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeStartElement(QXmlStreamWriter * this_ptr, QAnyStringView const * qualifiedName) {
  this_ptr->writeStartElement(*qualifiedName);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeStartElement1(QXmlStreamWriter * this_ptr, QAnyStringView const * namespaceUri, QAnyStringView const * name) {
  this_ptr->writeStartElement(*namespaceUri, *name);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_writeCurrentToken(QXmlStreamWriter * this_ptr, QXmlStreamReader const * reader) {
  this_ptr->writeCurrentToken(*reader);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamWriter_raiseError(QXmlStreamWriter * this_ptr, QAnyStringView const * message) {
  this_ptr->raiseError(*message);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QXmlStreamWriter_errorString(QXmlStreamWriter const * this_ptr) {
  return new QString(this_ptr->errorString());
}


RITUAL_EXPORT QXmlStreamWriter::Error ctr_qt_core_ffi_QXmlStreamWriter_error(QXmlStreamWriter const * this_ptr) {
  return this_ptr->error();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QXmlStreamWriter_hasError(QXmlStreamWriter const * this_ptr) {
  return this_ptr->hasError();
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_QObject_findChild_QObject_ptr(QObject const * this_ptr, QAnyStringView const * aName, int options) {
  return this_ptr->findChild< QObject * >(*aName, QFlags< Qt::FindChildOption >(options));
}


RITUAL_EXPORT QList< QObject * > * ctr_qt_core_ffi_QObject_findChildren_QObject_ptr(QObject const * this_ptr, QAnyStringView const * aName, int options) {
  return new QList< QObject * >(this_ptr->findChildren< QObject * >(*aName, QFlags< Qt::FindChildOption >(options)));
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_QObject_findChild_QObject_ptr1(QObject const * this_ptr, int options) {
  return this_ptr->findChild< QObject * >(QFlags< Qt::FindChildOption >(options));
}


RITUAL_EXPORT QList< QObject * > * ctr_qt_core_ffi_QObject_findChildren_QObject_ptr1(QObject const * this_ptr, int options) {
  return new QList< QObject * >(this_ptr->findChildren< QObject * >(QFlags< Qt::FindChildOption >(options)));
}


RITUAL_EXPORT QList< QObject * > * ctr_qt_core_ffi_QObject_findChildren_QObject_ptr2(QObject const * this_ptr, QRegularExpression const * re, int options) {
  return new QList< QObject * >(this_ptr->findChildren< QObject * >(*re, QFlags< Qt::FindChildOption >(options)));
}


RITUAL_EXPORT bool ctr_qt_core_ffi_static_cast_bool(QMetaObject::Connection const * connection) {
  return static_cast< bool >(*connection);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSysInfo_dQSysInfo(QSysInfo * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSysInfo * ctr_qt_core_ffi_QSysInfo_QSysInfo() {
  return new QSysInfo();
}


RITUAL_EXPORT QSysInfo * ctr_qt_core_ffi_QSysInfo_QSysInfo1(QSysInfo const * other) {
  return new QSysInfo(*other);
}


RITUAL_EXPORT QSysInfo * ctr_qt_core_ffi_QSysInfo_operator_(QSysInfo * this_ptr, QSysInfo const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMessageLogContext_dQMessageLogContext(QMessageLogContext * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMessageLogger_dQMessageLogger(QMessageLogger * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_q20_identity_didentity(q20::identity * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT q20::identity * ctr_qt_core_ffi_q20_identity_identity() {
  return new q20::identity();
}


RITUAL_EXPORT q20::identity * ctr_qt_core_ffi_q20_identity_identity1(q20::identity const * other) {
  return new q20::identity(*other);
}


RITUAL_EXPORT q20::identity * ctr_qt_core_ffi_q20_identity_operator_(q20::identity * this_ptr, q20::identity const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_q20_identity_is_transparent_dis_transparent(q20::identity::is_transparent * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT q20::identity::is_transparent * ctr_qt_core_ffi_q20_identity_is_transparent_is_transparent() {
  return new q20::identity::is_transparent();
}


RITUAL_EXPORT q20::identity::is_transparent * ctr_qt_core_ffi_q20_identity_is_transparent_is_transparent1(q20::identity::is_transparent const * other) {
  return new q20::identity::is_transparent(*other);
}


RITUAL_EXPORT q20::identity::is_transparent * ctr_qt_core_ffi_q20_identity_is_transparent_operator_(q20::identity::is_transparent * this_ptr, q20::identity::is_transparent const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_Qt_partial_ordering_dpartial_ordering(Qt::partial_ordering * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT Qt::partial_ordering * ctr_qt_core_ffi_Qt_partial_ordering_partial_ordering1(Qt::partial_ordering const * other) {
  return new Qt::partial_ordering(*other);
}


RITUAL_EXPORT Qt::partial_ordering * ctr_qt_core_ffi_Qt_partial_ordering_operator_(Qt::partial_ordering * this_ptr, Qt::partial_ordering const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_Qt_weak_ordering_dweak_ordering(Qt::weak_ordering * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT Qt::weak_ordering * ctr_qt_core_ffi_Qt_weak_ordering_weak_ordering1(Qt::weak_ordering const * other) {
  return new Qt::weak_ordering(*other);
}


RITUAL_EXPORT Qt::weak_ordering * ctr_qt_core_ffi_Qt_weak_ordering_operator_(Qt::weak_ordering * this_ptr, Qt::weak_ordering const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_Qt_strong_ordering_dstrong_ordering(Qt::strong_ordering * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT Qt::strong_ordering * ctr_qt_core_ffi_Qt_strong_ordering_strong_ordering1(Qt::strong_ordering const * other) {
  return new Qt::strong_ordering(*other);
}


RITUAL_EXPORT Qt::strong_ordering * ctr_qt_core_ffi_Qt_strong_ordering_operator_(Qt::strong_ordering * this_ptr, Qt::strong_ordering const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPartialOrdering_dQPartialOrdering(QPartialOrdering * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPartialOrdering * ctr_qt_core_ffi_QPartialOrdering_QPartialOrdering4(QPartialOrdering const * other) {
  return new QPartialOrdering(*other);
}


RITUAL_EXPORT QPartialOrdering * ctr_qt_core_ffi_QPartialOrdering_operator_(QPartialOrdering * this_ptr, QPartialOrdering const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_Qt_Disambiguated_t_dDisambiguated_t(Qt::Disambiguated_t * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT Qt::Disambiguated_t * ctr_qt_core_ffi_Qt_Disambiguated_t_Disambiguated_t1(Qt::Disambiguated_t const * other) {
  return new Qt::Disambiguated_t(*other);
}


RITUAL_EXPORT Qt::Disambiguated_t * ctr_qt_core_ffi_Qt_Disambiguated_t_operator_(Qt::Disambiguated_t * this_ptr, Qt::Disambiguated_t const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QKeyCombination_dQKeyCombination(QKeyCombination * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_QKeyCombination_QKeyCombination3() {
  return new QKeyCombination();
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_QKeyCombination_QKeyCombination4(QKeyCombination const * other) {
  return new QKeyCombination(*other);
}


RITUAL_EXPORT QKeyCombination * ctr_qt_core_ffi_QKeyCombination_operator_1(QKeyCombination * this_ptr, QKeyCombination const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMethodRawArguments_dQMethodRawArguments(QMethodRawArguments * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMethodRawArguments * ctr_qt_core_ffi_QMethodRawArguments_QMethodRawArguments() {
  return new QMethodRawArguments();
}


RITUAL_EXPORT QMethodRawArguments * ctr_qt_core_ffi_QMethodRawArguments_QMethodRawArguments1(QMethodRawArguments const * other) {
  return new QMethodRawArguments(*other);
}


RITUAL_EXPORT QMethodRawArguments * ctr_qt_core_ffi_QMethodRawArguments_operator_(QMethodRawArguments * this_ptr, QMethodRawArguments const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaMethodArgument_dQMetaMethodArgument(QMetaMethodArgument * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaMethodArgument * ctr_qt_core_ffi_QMetaMethodArgument_QMetaMethodArgument() {
  return new QMetaMethodArgument();
}


RITUAL_EXPORT QMetaMethodArgument * ctr_qt_core_ffi_QMetaMethodArgument_QMetaMethodArgument1(QMetaMethodArgument const * other) {
  return new QMetaMethodArgument(*other);
}


RITUAL_EXPORT QMetaMethodArgument * ctr_qt_core_ffi_QMetaMethodArgument_operator_(QMetaMethodArgument * this_ptr, QMetaMethodArgument const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaMethodReturnArgument_dQMetaMethodReturnArgument(QMetaMethodReturnArgument * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaMethodReturnArgument * ctr_qt_core_ffi_QMetaMethodReturnArgument_QMetaMethodReturnArgument() {
  return new QMetaMethodReturnArgument();
}


RITUAL_EXPORT QMetaMethodReturnArgument * ctr_qt_core_ffi_QMetaMethodReturnArgument_QMetaMethodReturnArgument1(QMetaMethodReturnArgument const * other) {
  return new QMetaMethodReturnArgument(*other);
}


RITUAL_EXPORT QMetaMethodReturnArgument * ctr_qt_core_ffi_QMetaMethodReturnArgument_operator_(QMetaMethodReturnArgument * this_ptr, QMetaMethodReturnArgument const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaObject_dQMetaObject(QMetaObject * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaObject * ctr_qt_core_ffi_QMetaObject_QMetaObject() {
  return new QMetaObject();
}


RITUAL_EXPORT QMetaObject * ctr_qt_core_ffi_QMetaObject_QMetaObject1(QMetaObject const * other) {
  return new QMetaObject(*other);
}


RITUAL_EXPORT QMetaObject * ctr_qt_core_ffi_QMetaObject_operator_(QMetaObject * this_ptr, QMetaObject const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaObject_SuperData_dSuperData(QMetaObject::SuperData * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaObject::SuperData * ctr_qt_core_ffi_QMetaObject_SuperData_SuperData3(QMetaObject::SuperData const * other) {
  return new QMetaObject::SuperData(*other);
}


RITUAL_EXPORT QMetaObject::SuperData * ctr_qt_core_ffi_QMetaObject_SuperData_operator_(QMetaObject::SuperData * this_ptr, QMetaObject::SuperData const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaObject_Data_dData(QMetaObject::Data * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaObject::Data * ctr_qt_core_ffi_QMetaObject_Data_Data() {
  return new QMetaObject::Data();
}


RITUAL_EXPORT QMetaObject::Data * ctr_qt_core_ffi_QMetaObject_Data_Data1(QMetaObject::Data const * other) {
  return new QMetaObject::Data(*other);
}


RITUAL_EXPORT QMetaObject::Data * ctr_qt_core_ffi_QMetaObject_Data_operator_(QMetaObject::Data * this_ptr, QMetaObject::Data const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLatin1Char_dQLatin1Char(QLatin1Char * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QLatin1Char * ctr_qt_core_ffi_QLatin1Char_QLatin1Char2(QLatin1Char const * other) {
  return new QLatin1Char(*other);
}


RITUAL_EXPORT QLatin1Char * ctr_qt_core_ffi_QLatin1Char_operator_(QLatin1Char * this_ptr, QLatin1Char const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QChar_dQChar(QChar * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QChar_QChar2(QChar const * other) {
  return new QChar(*other);
}


RITUAL_EXPORT QChar * ctr_qt_core_ffi_QChar_operator_(QChar * this_ptr, QChar const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArrayView_dQByteArrayView(QByteArrayView * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QByteArrayView_QByteArrayView1(QByteArrayView const * other) {
  return new QByteArrayView(*other);
}


RITUAL_EXPORT QByteArrayView * ctr_qt_core_ffi_QByteArrayView_operator_(QByteArrayView * this_ptr, QByteArrayView const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QByteArray_FromBase64Result_dFromBase64Result(QByteArray::FromBase64Result * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QByteArray::FromBase64Result * ctr_qt_core_ffi_QByteArray_FromBase64Result_FromBase64Result() {
  return new QByteArray::FromBase64Result();
}


RITUAL_EXPORT QByteArray::FromBase64Result * ctr_qt_core_ffi_QByteArray_FromBase64Result_FromBase64Result1(QByteArray::FromBase64Result const * other) {
  return new QByteArray::FromBase64Result(*other);
}


RITUAL_EXPORT QByteArray::FromBase64Result * ctr_qt_core_ffi_QByteArray_FromBase64Result_operator_3(QByteArray::FromBase64Result * this_ptr, QByteArray::FromBase64Result const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringView_dQStringView(QStringView * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QStringView_QStringView1(QStringView const * other) {
  return new QStringView(*other);
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QStringView_operator_(QStringView * this_ptr, QStringView const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLatin1String_dQLatin1String(QLatin1String * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_QLatin1String6(QLatin1String const * other) {
  return new QLatin1String(*other);
}


RITUAL_EXPORT QLatin1String * ctr_qt_core_ffi_QLatin1String_operator_(QLatin1String * this_ptr, QLatin1String const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAnyStringView_dQAnyStringView(QAnyStringView * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_QAnyStringView5(QAnyStringView const * other) {
  return new QAnyStringView(*other);
}


RITUAL_EXPORT QAnyStringView * ctr_qt_core_ffi_QAnyStringView_operator_(QAnyStringView * this_ptr, QAnyStringView const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QStringTokenizerBaseBase * ctr_qt_core_ffi_QStringTokenizerBaseBase_QStringTokenizerBaseBase1(QStringTokenizerBaseBase const * other) {
  return new QStringTokenizerBaseBase(*other);
}


RITUAL_EXPORT QStringTokenizerBaseBase * ctr_qt_core_ffi_QStringTokenizerBaseBase_operator_(QStringTokenizerBaseBase * this_ptr, QStringTokenizerBaseBase const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QStringConverterBase::State * ctr_qt_core_ffi_QStringConverterBase_State_State2() {
  return new QStringConverterBase::State();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringEncoder_dQStringEncoder(QStringEncoder * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringDecoder_dQStringDecoder(QStringDecoder * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QHashSeed_dQHashSeed(QHashSeed * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QHashSeed * ctr_qt_core_ffi_QHashSeed_QHashSeed1() {
  return new QHashSeed();
}


RITUAL_EXPORT QHashSeed * ctr_qt_core_ffi_QHashSeed_QHashSeed2(QHashSeed const * other) {
  return new QHashSeed(*other);
}


RITUAL_EXPORT QHashSeed * ctr_qt_core_ffi_QHashSeed_operator_(QHashSeed * this_ptr, QHashSeed const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QIODeviceBase * ctr_qt_core_ffi_QIODeviceBase_QIODeviceBase() {
  return new QIODeviceBase();
}


RITUAL_EXPORT QIODeviceBase * ctr_qt_core_ffi_QIODeviceBase_QIODeviceBase1(QIODeviceBase const * other) {
  return new QIODeviceBase(*other);
}


RITUAL_EXPORT QIODeviceBase * ctr_qt_core_ffi_QIODeviceBase_operator_(QIODeviceBase * this_ptr, QIODeviceBase const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_qfloat16_dqfloat16(qfloat16 * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_qfloat16_qfloat162(qfloat16 const * other) {
  return new qfloat16(*other);
}


RITUAL_EXPORT qfloat16 * ctr_qt_core_ffi_qfloat16_operator_(qfloat16 * this_ptr, qfloat16 const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_dQMetaContainerInterface(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QtMetaContainerPrivate::QMetaContainerInterface * ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_QMetaContainerInterface1(QtMetaContainerPrivate::QMetaContainerInterface const * other) {
  return new QtMetaContainerPrivate::QMetaContainerInterface(*other);
}


RITUAL_EXPORT QtMetaContainerPrivate::QMetaContainerInterface * ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_operator_(QtMetaContainerPrivate::QMetaContainerInterface * this_ptr, QtMetaContainerPrivate::QMetaContainerInterface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_dQMetaSequenceInterface(QtMetaContainerPrivate::QMetaSequenceInterface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QtMetaContainerPrivate::QMetaSequenceInterface * ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_QMetaSequenceInterface1(QtMetaContainerPrivate::QMetaSequenceInterface const * other) {
  return new QtMetaContainerPrivate::QMetaSequenceInterface(*other);
}


RITUAL_EXPORT QtMetaContainerPrivate::QMetaSequenceInterface * ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_operator_(QtMetaContainerPrivate::QMetaSequenceInterface * this_ptr, QtMetaContainerPrivate::QMetaSequenceInterface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_dQMetaAssociationInterface(QtMetaContainerPrivate::QMetaAssociationInterface * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QtMetaContainerPrivate::QMetaAssociationInterface * ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_QMetaAssociationInterface1(QtMetaContainerPrivate::QMetaAssociationInterface const * other) {
  return new QtMetaContainerPrivate::QMetaAssociationInterface(*other);
}


RITUAL_EXPORT QtMetaContainerPrivate::QMetaAssociationInterface * ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_operator_(QtMetaContainerPrivate::QMetaAssociationInterface * this_ptr, QtMetaContainerPrivate::QMetaAssociationInterface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaContainer_dQMetaContainer(QMetaContainer * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaContainer * ctr_qt_core_ffi_QMetaContainer_QMetaContainer2(QMetaContainer const * other) {
  return new QMetaContainer(*other);
}


RITUAL_EXPORT QMetaContainer * ctr_qt_core_ffi_QMetaContainer_operator_(QMetaContainer * this_ptr, QMetaContainer const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaSequence_dQMetaSequence(QMetaSequence * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaSequence * ctr_qt_core_ffi_QMetaSequence_QMetaSequence2(QMetaSequence const * other) {
  return new QMetaSequence(*other);
}


RITUAL_EXPORT QMetaSequence * ctr_qt_core_ffi_QMetaSequence_operator_(QMetaSequence * this_ptr, QMetaSequence const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaAssociation_dQMetaAssociation(QMetaAssociation * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaAssociation * ctr_qt_core_ffi_QMetaAssociation_QMetaAssociation2(QMetaAssociation const * other) {
  return new QMetaAssociation(*other);
}


RITUAL_EXPORT QMetaAssociation * ctr_qt_core_ffi_QMetaAssociation_operator_(QMetaAssociation * this_ptr, QMetaAssociation const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaType_dQMetaType(QMetaType * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QMetaType_QMetaType2(QMetaType const * other) {
  return new QMetaType(*other);
}


RITUAL_EXPORT QMetaType * ctr_qt_core_ffi_QMetaType_operator_(QMetaType * this_ptr, QMetaType const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBindingStatus_dQBindingStatus(QBindingStatus * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QBindingStatus * ctr_qt_core_ffi_QBindingStatus_QBindingStatus() {
  return new QBindingStatus();
}


RITUAL_EXPORT QBindingStatus * ctr_qt_core_ffi_QBindingStatus_QBindingStatus1(QBindingStatus const * other) {
  return new QBindingStatus(*other);
}


RITUAL_EXPORT QBindingStatus * ctr_qt_core_ffi_QBindingStatus_operator_(QBindingStatus * this_ptr, QBindingStatus const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QBindingStorage * ctr_qt_core_ffi_QBindingStorage_QBindingStorage1(QBindingStorage const * other) {
  return new QBindingStorage(*other);
}


RITUAL_EXPORT QBindingStorage * ctr_qt_core_ffi_QBindingStorage_operator_(QBindingStorage * this_ptr, QBindingStorage const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QObject * ctr_qt_core_ffi_QObject_QObject1() {
  return new QObject();
}


RITUAL_EXPORT QAnimationDriver * ctr_qt_core_ffi_QAnimationDriver_QAnimationDriver1() {
  return new QAnimationDriver();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDeadlineTimer_dQDeadlineTimer(QDeadlineTimer * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QDeadlineTimer * ctr_qt_core_ffi_QDeadlineTimer_QDeadlineTimer4(QDeadlineTimer const * other) {
  return new QDeadlineTimer(*other);
}


RITUAL_EXPORT QDeadlineTimer * ctr_qt_core_ffi_QDeadlineTimer_operator_(QDeadlineTimer * this_ptr, QDeadlineTimer const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QEventLoop * ctr_qt_core_ffi_QEventLoop_QEventLoop1() {
  return new QEventLoop();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractEventDispatcher_TimerInfo_dTimerInfo(QAbstractEventDispatcher::TimerInfo * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAbstractEventDispatcher::TimerInfo * ctr_qt_core_ffi_QAbstractEventDispatcher_TimerInfo_TimerInfo2(QAbstractEventDispatcher::TimerInfo const * other) {
  return new QAbstractEventDispatcher::TimerInfo(*other);
}


RITUAL_EXPORT QAbstractEventDispatcher::TimerInfo * ctr_qt_core_ffi_QAbstractEventDispatcher_TimerInfo_operator_(QAbstractEventDispatcher::TimerInfo * this_ptr, QAbstractEventDispatcher::TimerInfo const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAbstractEventDispatcher_TimerInfoV2_dTimerInfoV2(QAbstractEventDispatcher::TimerInfoV2 * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAbstractEventDispatcher::TimerInfoV2 * ctr_qt_core_ffi_QAbstractEventDispatcher_TimerInfoV2_TimerInfoV2() {
  return new QAbstractEventDispatcher::TimerInfoV2();
}


RITUAL_EXPORT QAbstractEventDispatcher::TimerInfoV2 * ctr_qt_core_ffi_QAbstractEventDispatcher_TimerInfoV2_TimerInfoV21(QAbstractEventDispatcher::TimerInfoV2 const * other) {
  return new QAbstractEventDispatcher::TimerInfoV2(*other);
}


RITUAL_EXPORT QAbstractEventDispatcher::TimerInfoV2 * ctr_qt_core_ffi_QAbstractEventDispatcher_TimerInfoV2_operator_(QAbstractEventDispatcher::TimerInfoV2 * this_ptr, QAbstractEventDispatcher::TimerInfoV2 const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QHashPrivate_SpanConstants_dSpanConstants(QHashPrivate::SpanConstants * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QHashPrivate::SpanConstants * ctr_qt_core_ffi_QHashPrivate_SpanConstants_SpanConstants() {
  return new QHashPrivate::SpanConstants();
}


RITUAL_EXPORT QHashPrivate::SpanConstants * ctr_qt_core_ffi_QHashPrivate_SpanConstants_SpanConstants1(QHashPrivate::SpanConstants const * other) {
  return new QHashPrivate::SpanConstants(*other);
}


RITUAL_EXPORT QHashPrivate::SpanConstants * ctr_qt_core_ffi_QHashPrivate_SpanConstants_operator_(QHashPrivate::SpanConstants * this_ptr, QHashPrivate::SpanConstants const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTextStreamManipulator_dQTextStreamManipulator(QTextStreamManipulator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTextStreamManipulator * ctr_qt_core_ffi_QTextStreamManipulator_QTextStreamManipulator1(QTextStreamManipulator const * other) {
  return new QTextStreamManipulator(*other);
}


RITUAL_EXPORT QTextStreamManipulator * ctr_qt_core_ffi_QTextStreamManipulator_operator_(QTextStreamManipulator * this_ptr, QTextStreamManipulator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAdoptSharedDataTag_dQAdoptSharedDataTag(QAdoptSharedDataTag * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAdoptSharedDataTag * ctr_qt_core_ffi_QAdoptSharedDataTag_QAdoptSharedDataTag1(QAdoptSharedDataTag const * other) {
  return new QAdoptSharedDataTag(*other);
}


RITUAL_EXPORT QAdoptSharedDataTag * ctr_qt_core_ffi_QAdoptSharedDataTag_operator_(QAdoptSharedDataTag * this_ptr, QAdoptSharedDataTag const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QVariantConstPointer_dQVariantConstPointer(QVariantConstPointer * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QVariantConstPointer * ctr_qt_core_ffi_QVariantConstPointer_QVariantConstPointer2(QVariantConstPointer const * other) {
  return new QVariantConstPointer(*other);
}


RITUAL_EXPORT QVariantConstPointer * ctr_qt_core_ffi_QVariantConstPointer_operator_1(QVariantConstPointer * this_ptr, QVariantConstPointer const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QModelRoleData_dQModelRoleData(QModelRoleData * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QModelRoleData * ctr_qt_core_ffi_QModelRoleData_QModelRoleData2(QModelRoleData const * other) {
  return new QModelRoleData(*other);
}


RITUAL_EXPORT QModelRoleData * ctr_qt_core_ffi_QModelRoleData_operator_(QModelRoleData * this_ptr, QModelRoleData const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QModelRoleDataSpan_dQModelRoleDataSpan(QModelRoleDataSpan * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QModelRoleDataSpan * ctr_qt_core_ffi_QModelRoleDataSpan_QModelRoleDataSpan3(QModelRoleDataSpan const * other) {
  return new QModelRoleDataSpan(*other);
}


RITUAL_EXPORT QModelRoleDataSpan * ctr_qt_core_ffi_QModelRoleDataSpan_operator_(QModelRoleDataSpan * this_ptr, QModelRoleDataSpan const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QModelIndex_dQModelIndex(QModelIndex * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QModelIndex_QModelIndex1(QModelIndex const * other) {
  return new QModelIndex(*other);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QModelIndex_operator_(QModelIndex * this_ptr, QModelIndex const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBasicMutex_dQBasicMutex(QBasicMutex * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAssociativeIterator_dQAssociativeIterator(QAssociativeIterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAssociativeIterator * ctr_qt_core_ffi_QAssociativeIterator_QAssociativeIterator2(QAssociativeIterator const * other) {
  return new QAssociativeIterator(*other);
}


RITUAL_EXPORT QAssociativeIterator * ctr_qt_core_ffi_QAssociativeIterator_operator_1(QAssociativeIterator * this_ptr, QAssociativeIterator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAssociativeConstIterator_dQAssociativeConstIterator(QAssociativeConstIterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAssociativeConstIterator * ctr_qt_core_ffi_QAssociativeConstIterator_QAssociativeConstIterator2(QAssociativeConstIterator const * other) {
  return new QAssociativeConstIterator(*other);
}


RITUAL_EXPORT QAssociativeConstIterator * ctr_qt_core_ffi_QAssociativeConstIterator_operator_1(QAssociativeConstIterator * this_ptr, QAssociativeConstIterator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QAssociativeIterable_dQAssociativeIterable(QAssociativeIterable * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QAssociativeIterable * ctr_qt_core_ffi_QAssociativeIterable_QAssociativeIterable4(QAssociativeIterable const * other) {
  return new QAssociativeIterable(*other);
}


RITUAL_EXPORT QAssociativeIterable * ctr_qt_core_ffi_QAssociativeIterable_operator_1(QAssociativeIterable * this_ptr, QAssociativeIterable const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBitArray_dQBitArray(QBitArray * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QBitRef_dQBitRef(QBitRef * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QBitRef * ctr_qt_core_ffi_QBitRef_QBitRef1(QBitRef const * other) {
  return new QBitRef(*other);
}


RITUAL_EXPORT QBuffer * ctr_qt_core_ffi_QBuffer_QBuffer2() {
  return new QBuffer();
}


RITUAL_EXPORT QStaticByteArrayMatcherBase * ctr_qt_core_ffi_QStaticByteArrayMatcherBase_QStaticByteArrayMatcherBase1(QStaticByteArrayMatcherBase const * other) {
  return new QStaticByteArrayMatcherBase(*other);
}


RITUAL_EXPORT QStaticByteArrayMatcherBase * ctr_qt_core_ffi_QStaticByteArrayMatcherBase_operator_(QStaticByteArrayMatcherBase * this_ptr, QStaticByteArrayMatcherBase const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCalendar_dQCalendar(QCalendar * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QCalendar * ctr_qt_core_ffi_QCalendar_QCalendar4(QCalendar const * other) {
  return new QCalendar(*other);
}


RITUAL_EXPORT QCalendar * ctr_qt_core_ffi_QCalendar_operator_(QCalendar * this_ptr, QCalendar const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCalendar_YearMonthDay_dYearMonthDay(QCalendar::YearMonthDay * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QCalendar::YearMonthDay * ctr_qt_core_ffi_QCalendar_YearMonthDay_YearMonthDay2(QCalendar::YearMonthDay const * other) {
  return new QCalendar::YearMonthDay(*other);
}


RITUAL_EXPORT QCalendar::YearMonthDay * ctr_qt_core_ffi_QCalendar_YearMonthDay_operator_(QCalendar::YearMonthDay * this_ptr, QCalendar::YearMonthDay const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCalendar_SystemId_dSystemId(QCalendar::SystemId * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QCalendar::SystemId * ctr_qt_core_ffi_QCalendar_SystemId_SystemId1(QCalendar::SystemId const * other) {
  return new QCalendar::SystemId(*other);
}


RITUAL_EXPORT QCalendar::SystemId * ctr_qt_core_ffi_QCalendar_SystemId_operator_(QCalendar::SystemId * this_ptr, QCalendar::SystemId const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborError_dQCborError(QCborError * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QCborError * ctr_qt_core_ffi_QCborError_QCborError() {
  return new QCborError();
}


RITUAL_EXPORT QCborError * ctr_qt_core_ffi_QCborError_QCborError1(QCborError const * other) {
  return new QCborError(*other);
}


RITUAL_EXPORT QCborError * ctr_qt_core_ffi_QCborError_operator_(QCborError * this_ptr, QCborError const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDate_dQDate(QDate * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_QDate3(QDate const * other) {
  return new QDate(*other);
}


RITUAL_EXPORT QDate * ctr_qt_core_ffi_QDate_operator_(QDate * this_ptr, QDate const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTime_dQTime(QTime * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_QTime2(QTime const * other) {
  return new QTime(*other);
}


RITUAL_EXPORT QTime * ctr_qt_core_ffi_QTime_operator_(QTime * this_ptr, QTime const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUuid_dQUuid(QUuid * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QUuid_QUuid4(QUuid const * other) {
  return new QUuid(*other);
}


RITUAL_EXPORT QUuid * ctr_qt_core_ffi_QUuid_operator_(QUuid * this_ptr, QUuid const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborParserError_dQCborParserError(QCborParserError * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QCborParserError * ctr_qt_core_ffi_QCborParserError_QCborParserError() {
  return new QCborParserError();
}


RITUAL_EXPORT QCborParserError * ctr_qt_core_ffi_QCborParserError_QCborParserError1(QCborParserError const * other) {
  return new QCborParserError(*other);
}


RITUAL_EXPORT QCborParserError * ctr_qt_core_ffi_QCborParserError_operator_(QCborParserError * this_ptr, QCborParserError const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborValueConstRef_dQCborValueConstRef(QCborValueConstRef * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborValueRef_dQCborValueRef(QCborValueRef * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborArray_Iterator_dIterator(QCborArray::Iterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QCborArray_ConstIterator_dConstIterator(QCborArray::ConstIterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUntypedPropertyData_dQUntypedPropertyData(QUntypedPropertyData * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QUntypedPropertyData * ctr_qt_core_ffi_QUntypedPropertyData_QUntypedPropertyData() {
  return new QUntypedPropertyData();
}


RITUAL_EXPORT QUntypedPropertyData * ctr_qt_core_ffi_QUntypedPropertyData_QUntypedPropertyData1(QUntypedPropertyData const * other) {
  return new QUntypedPropertyData(*other);
}


RITUAL_EXPORT QUntypedPropertyData * ctr_qt_core_ffi_QUntypedPropertyData_operator_(QUntypedPropertyData * this_ptr, QUntypedPropertyData const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPropertyProxyBindingData_dQPropertyProxyBindingData(QPropertyProxyBindingData * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPropertyProxyBindingData * ctr_qt_core_ffi_QPropertyProxyBindingData_QPropertyProxyBindingData() {
  return new QPropertyProxyBindingData();
}


RITUAL_EXPORT QPropertyProxyBindingData * ctr_qt_core_ffi_QPropertyProxyBindingData_QPropertyProxyBindingData1(QPropertyProxyBindingData const * other) {
  return new QPropertyProxyBindingData(*other);
}


RITUAL_EXPORT QPropertyProxyBindingData * ctr_qt_core_ffi_QPropertyProxyBindingData_operator_(QPropertyProxyBindingData * this_ptr, QPropertyProxyBindingData const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPropertyBindingSourceLocation_dQPropertyBindingSourceLocation(QPropertyBindingSourceLocation * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPropertyBindingSourceLocation * ctr_qt_core_ffi_QPropertyBindingSourceLocation_QPropertyBindingSourceLocation2(QPropertyBindingSourceLocation const * other) {
  return new QPropertyBindingSourceLocation(*other);
}


RITUAL_EXPORT QPropertyBindingSourceLocation * ctr_qt_core_ffi_QPropertyBindingSourceLocation_operator_(QPropertyBindingSourceLocation * this_ptr, QPropertyBindingSourceLocation const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPropertyObserverBase_dQPropertyObserverBase(QPropertyObserverBase * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPropertyObserverBase * ctr_qt_core_ffi_QPropertyObserverBase_QPropertyObserverBase() {
  return new QPropertyObserverBase();
}


RITUAL_EXPORT QPropertyObserverBase * ctr_qt_core_ffi_QPropertyObserverBase_QPropertyObserverBase1(QPropertyObserverBase const * other) {
  return new QPropertyObserverBase(*other);
}


RITUAL_EXPORT QPropertyObserverBase * ctr_qt_core_ffi_QPropertyObserverBase_operator_(QPropertyObserverBase * this_ptr, QPropertyObserverBase const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPropertyNotifier_dQPropertyNotifier(QPropertyNotifier * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QUntypedBindable_dQUntypedBindable(QUntypedBindable * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QUntypedBindable * ctr_qt_core_ffi_QUntypedBindable_QUntypedBindable1(QUntypedBindable const * other) {
  return new QUntypedBindable(*other);
}


RITUAL_EXPORT QUntypedBindable * ctr_qt_core_ffi_QUntypedBindable_operator_(QUntypedBindable * this_ptr, QUntypedBindable const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QTimer * ctr_qt_core_ffi_QTimer_QTimer1() {
  return new QTimer();
}


RITUAL_EXPORT QChronoTimer * ctr_qt_core_ffi_QChronoTimer_QChronoTimer1() {
  return new QChronoTimer();
}


RITUAL_EXPORT QConcatenateTablesProxyModel * ctr_qt_core_ffi_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel1() {
  return new QConcatenateTablesProxyModel();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDirListing_DirEntry_dDirEntry(QDirListing::DirEntry * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QDirListing::DirEntry * ctr_qt_core_ffi_QDirListing_DirEntry_DirEntry() {
  return new QDirListing::DirEntry();
}


RITUAL_EXPORT QDirListing::DirEntry * ctr_qt_core_ffi_QDirListing_DirEntry_DirEntry1(QDirListing::DirEntry const * other) {
  return new QDirListing::DirEntry(*other);
}


RITUAL_EXPORT QDirListing::DirEntry * ctr_qt_core_ffi_QDirListing_DirEntry_operator_(QDirListing::DirEntry * this_ptr, QDirListing::DirEntry const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDirListing_sentinel_dsentinel(QDirListing::sentinel * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QDirListing::sentinel * ctr_qt_core_ffi_QDirListing_sentinel_sentinel() {
  return new QDirListing::sentinel();
}


RITUAL_EXPORT QDirListing::sentinel * ctr_qt_core_ffi_QDirListing_sentinel_sentinel1(QDirListing::sentinel const * other) {
  return new QDirListing::sentinel(*other);
}


RITUAL_EXPORT QDirListing::sentinel * ctr_qt_core_ffi_QDirListing_sentinel_operator_(QDirListing::sentinel * this_ptr, QDirListing::sentinel const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QDirListing_const_iterator_dconst_iterator(QDirListing::const_iterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTimeZone_OffsetData_dOffsetData(QTimeZone::OffsetData * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTimeZone::OffsetData * ctr_qt_core_ffi_QTimeZone_OffsetData_OffsetData() {
  return new QTimeZone::OffsetData();
}


RITUAL_EXPORT QTimeZone::OffsetData * ctr_qt_core_ffi_QTimeZone_OffsetData_OffsetData1(QTimeZone::OffsetData const * other) {
  return new QTimeZone::OffsetData(*other);
}


RITUAL_EXPORT QTimeZone::OffsetData * ctr_qt_core_ffi_QTimeZone_OffsetData_operator_(QTimeZone::OffsetData * this_ptr, QTimeZone::OffsetData const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QDir * ctr_qt_core_ffi_QDir_QDir3() {
  return new QDir();
}


RITUAL_EXPORT QEasingCurve * ctr_qt_core_ffi_QEasingCurve_QEasingCurve3() {
  return new QEasingCurve();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QElapsedTimer_dQElapsedTimer(QElapsedTimer * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QElapsedTimer * ctr_qt_core_ffi_QElapsedTimer_QElapsedTimer1(QElapsedTimer const * other) {
  return new QElapsedTimer(*other);
}


RITUAL_EXPORT QElapsedTimer * ctr_qt_core_ffi_QElapsedTimer_operator_(QElapsedTimer * this_ptr, QElapsedTimer const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QUnhandledException * ctr_qt_core_ffi_QUnhandledException_QUnhandledException2() {
  return new QUnhandledException();
}


RITUAL_EXPORT QFactoryInterface * ctr_qt_core_ffi_QFactoryInterface_operator_(QFactoryInterface * this_ptr, QFactoryInterface const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QFileSelector * ctr_qt_core_ffi_QFileSelector_QFileSelector1() {
  return new QFileSelector();
}


RITUAL_EXPORT QFileSystemWatcher * ctr_qt_core_ffi_QFileSystemWatcher_QFileSystemWatcher2() {
  return new QFileSystemWatcher();
}


RITUAL_EXPORT QThread * ctr_qt_core_ffi_QThread_QThread1() {
  return new QThread();
}


RITUAL_EXPORT QThreadPool * ctr_qt_core_ffi_QThreadPool_QThreadPool1() {
  return new QThreadPool();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QFutureWatcherBase_dQFutureWatcherBase(QFutureWatcherBase * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QIdentityProxyModel * ctr_qt_core_ffi_QIdentityProxyModel_QIdentityProxyModel1() {
  return new QIdentityProxyModel();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QItemSelectionRange_dQItemSelectionRange(QItemSelectionRange * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QItemSelectionRange * ctr_qt_core_ffi_QItemSelectionRange_QItemSelectionRange3(QItemSelectionRange const * other) {
  return new QItemSelectionRange(*other);
}


RITUAL_EXPORT QItemSelectionRange * ctr_qt_core_ffi_QItemSelectionRange_operator_(QItemSelectionRange * this_ptr, QItemSelectionRange const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QItemSelectionModel * ctr_qt_core_ffi_QItemSelectionModel_QItemSelectionModel2() {
  return new QItemSelectionModel();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QItemSelection_dQItemSelection(QItemSelection * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QItemSelection * ctr_qt_core_ffi_QItemSelection_QItemSelection1() {
  return new QItemSelection();
}


RITUAL_EXPORT QItemSelection * ctr_qt_core_ffi_QItemSelection_QItemSelection2(QItemSelection const * other) {
  return new QItemSelection(*other);
}


RITUAL_EXPORT QItemSelection * ctr_qt_core_ffi_QItemSelection_operator_(QItemSelection * this_ptr, QItemSelection const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonParseError_dQJsonParseError(QJsonParseError * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QJsonParseError * ctr_qt_core_ffi_QJsonParseError_QJsonParseError() {
  return new QJsonParseError();
}


RITUAL_EXPORT QJsonParseError * ctr_qt_core_ffi_QJsonParseError_QJsonParseError1(QJsonParseError const * other) {
  return new QJsonParseError(*other);
}


RITUAL_EXPORT QJsonParseError * ctr_qt_core_ffi_QJsonParseError_operator_(QJsonParseError * this_ptr, QJsonParseError const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QJsonValue * ctr_qt_core_ffi_QJsonValue_QJsonValue14() {
  return new QJsonValue();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonValueConstRef_dQJsonValueConstRef(QJsonValueConstRef * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonValueRef_dQJsonValueRef(QJsonValueRef * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonArray_iterator_diterator(QJsonArray::iterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonArray_const_iterator_dconst_iterator(QJsonArray::const_iterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonObject_iterator_diterator(QJsonObject::iterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT void ctr_qt_core_ffi_QJsonObject_const_iterator_dconst_iterator(QJsonObject::const_iterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QLatin1StringMatcher * ctr_qt_core_ffi_QLatin1StringMatcher_QLatin1StringMatcher2(QLatin1StringMatcher const * other) {
  return new QLatin1StringMatcher(*other);
}


RITUAL_EXPORT QLatin1StringMatcher * ctr_qt_core_ffi_QLatin1StringMatcher_operator_(QLatin1StringMatcher * this_ptr, QLatin1StringMatcher const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QLibrary * ctr_qt_core_ffi_QLibrary_QLibrary4() {
  return new QLibrary();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QTypeRevision_dQTypeRevision(QTypeRevision * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QTypeRevision * ctr_qt_core_ffi_QTypeRevision_QTypeRevision1(QTypeRevision const * other) {
  return new QTypeRevision(*other);
}


RITUAL_EXPORT QTypeRevision * ctr_qt_core_ffi_QTypeRevision_operator_(QTypeRevision * this_ptr, QTypeRevision const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QVersionNumber_dQVersionNumber(QVersionNumber * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QVersionNumber * ctr_qt_core_ffi_QVersionNumber_QVersionNumber5(QVersionNumber const * other) {
  return new QVersionNumber(*other);
}


RITUAL_EXPORT QVersionNumber * ctr_qt_core_ffi_QVersionNumber_operator_(QVersionNumber * this_ptr, QVersionNumber const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLibraryInfo_dQLibraryInfo(QLibraryInfo * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QLibraryInfo * ctr_qt_core_ffi_QLibraryInfo_QLibraryInfo(QLibraryInfo const * other) {
  return new QLibraryInfo(*other);
}


RITUAL_EXPORT QLibraryInfo * ctr_qt_core_ffi_QLibraryInfo_operator_(QLibraryInfo * this_ptr, QLibraryInfo const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPoint_dQPoint(QPoint * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QPoint_QPoint2(QPoint const * other) {
  return new QPoint(*other);
}


RITUAL_EXPORT QPoint * ctr_qt_core_ffi_QPoint_operator_(QPoint * this_ptr, QPoint const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPointF_dQPointF(QPointF * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QPointF_QPointF3(QPointF const * other) {
  return new QPointF(*other);
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QPointF_operator_(QPointF * this_ptr, QPointF const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLine_dQLine(QLine * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QLine * ctr_qt_core_ffi_QLine_QLine3(QLine const * other) {
  return new QLine(*other);
}


RITUAL_EXPORT QLine * ctr_qt_core_ffi_QLine_operator_(QLine * this_ptr, QLine const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QLineF_dQLineF(QLineF * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QLineF * ctr_qt_core_ffi_QLineF_QLineF4(QLineF const * other) {
  return new QLineF(*other);
}


RITUAL_EXPORT QLineF * ctr_qt_core_ffi_QLineF_operator_(QLineF * this_ptr, QLineF const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMargins_dQMargins(QMargins * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_QMargins_QMargins2(QMargins const * other) {
  return new QMargins(*other);
}


RITUAL_EXPORT QMargins * ctr_qt_core_ffi_QMargins_operator_(QMargins * this_ptr, QMargins const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMarginsF_dQMarginsF(QMarginsF * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_QMarginsF_QMarginsF3(QMarginsF const * other) {
  return new QMarginsF(*other);
}


RITUAL_EXPORT QMarginsF * ctr_qt_core_ffi_QMarginsF_operator_(QMarginsF * this_ptr, QMarginsF const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaMethod_dQMetaMethod(QMetaMethod * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaMethod * ctr_qt_core_ffi_QMetaMethod_QMetaMethod1(QMetaMethod const * other) {
  return new QMetaMethod(*other);
}


RITUAL_EXPORT QMetaMethod * ctr_qt_core_ffi_QMetaMethod_operator_(QMetaMethod * this_ptr, QMetaMethod const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaEnum_dQMetaEnum(QMetaEnum * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaEnum * ctr_qt_core_ffi_QMetaEnum_QMetaEnum1(QMetaEnum const * other) {
  return new QMetaEnum(*other);
}


RITUAL_EXPORT QMetaEnum * ctr_qt_core_ffi_QMetaEnum_operator_(QMetaEnum * this_ptr, QMetaEnum const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaProperty_dQMetaProperty(QMetaProperty * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaProperty * ctr_qt_core_ffi_QMetaProperty_QMetaProperty1(QMetaProperty const * other) {
  return new QMetaProperty(*other);
}


RITUAL_EXPORT QMetaProperty * ctr_qt_core_ffi_QMetaProperty_operator_(QMetaProperty * this_ptr, QMetaProperty const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QMetaClassInfo_dQMetaClassInfo(QMetaClassInfo * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QMetaClassInfo * ctr_qt_core_ffi_QMetaClassInfo_QMetaClassInfo1(QMetaClassInfo const * other) {
  return new QMetaClassInfo(*other);
}


RITUAL_EXPORT QMetaClassInfo * ctr_qt_core_ffi_QMetaClassInfo_operator_(QMetaClassInfo * this_ptr, QMetaClassInfo const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QOperatingSystemVersionBase_dQOperatingSystemVersionBase(QOperatingSystemVersionBase * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QOperatingSystemVersionBase * ctr_qt_core_ffi_QOperatingSystemVersionBase_QOperatingSystemVersionBase1(QOperatingSystemVersionBase const * other) {
  return new QOperatingSystemVersionBase(*other);
}


RITUAL_EXPORT QOperatingSystemVersionBase * ctr_qt_core_ffi_QOperatingSystemVersionBase_operator_(QOperatingSystemVersionBase * this_ptr, QOperatingSystemVersionBase const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QOperatingSystemVersionUnexported_dQOperatingSystemVersionUnexported(QOperatingSystemVersionUnexported * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QOperatingSystemVersionUnexported * ctr_qt_core_ffi_QOperatingSystemVersionUnexported_QOperatingSystemVersionUnexported2(QOperatingSystemVersionUnexported const * other) {
  return new QOperatingSystemVersionUnexported(*other);
}


RITUAL_EXPORT QOperatingSystemVersionUnexported * ctr_qt_core_ffi_QOperatingSystemVersionUnexported_operator_(QOperatingSystemVersionUnexported * this_ptr, QOperatingSystemVersionUnexported const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QOperatingSystemVersion_dQOperatingSystemVersion(QOperatingSystemVersion * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QOperatingSystemVersion * ctr_qt_core_ffi_QOperatingSystemVersion_QOperatingSystemVersion2(QOperatingSystemVersion const * other) {
  return new QOperatingSystemVersion(*other);
}


RITUAL_EXPORT QOperatingSystemVersion * ctr_qt_core_ffi_QOperatingSystemVersion_operator_(QOperatingSystemVersion * this_ptr, QOperatingSystemVersion const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QParallelAnimationGroup * ctr_qt_core_ffi_QParallelAnimationGroup_QParallelAnimationGroup1() {
  return new QParallelAnimationGroup();
}


RITUAL_EXPORT QPauseAnimation * ctr_qt_core_ffi_QPauseAnimation_QPauseAnimation2() {
  return new QPauseAnimation();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPermission_dQPermission(QPermission * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPermission * ctr_qt_core_ffi_QPermission_QPermission1(QPermission const * other) {
  return new QPermission(*other);
}


RITUAL_EXPORT QPermission * ctr_qt_core_ffi_QPermission_operator_(QPermission * this_ptr, QPermission const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPluginMetaData_dQPluginMetaData(QPluginMetaData * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPluginMetaData * ctr_qt_core_ffi_QPluginMetaData_QPluginMetaData() {
  return new QPluginMetaData();
}


RITUAL_EXPORT QPluginMetaData * ctr_qt_core_ffi_QPluginMetaData_QPluginMetaData1(QPluginMetaData const * other) {
  return new QPluginMetaData(*other);
}


RITUAL_EXPORT QPluginMetaData * ctr_qt_core_ffi_QPluginMetaData_operator_(QPluginMetaData * this_ptr, QPluginMetaData const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPluginMetaData_Header_dHeader(QPluginMetaData::Header * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPluginMetaData::Header * ctr_qt_core_ffi_QPluginMetaData_Header_Header() {
  return new QPluginMetaData::Header();
}


RITUAL_EXPORT QPluginMetaData::Header * ctr_qt_core_ffi_QPluginMetaData_Header_Header1(QPluginMetaData::Header const * other) {
  return new QPluginMetaData::Header(*other);
}


RITUAL_EXPORT QPluginMetaData::Header * ctr_qt_core_ffi_QPluginMetaData_Header_operator_(QPluginMetaData::Header * this_ptr, QPluginMetaData::Header const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPluginMetaData_MagicHeader_dMagicHeader(QPluginMetaData::MagicHeader * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPluginMetaData::MagicHeader * ctr_qt_core_ffi_QPluginMetaData_MagicHeader_MagicHeader1(QPluginMetaData::MagicHeader const * other) {
  return new QPluginMetaData::MagicHeader(*other);
}


RITUAL_EXPORT QPluginMetaData::MagicHeader * ctr_qt_core_ffi_QPluginMetaData_MagicHeader_operator_(QPluginMetaData::MagicHeader * this_ptr, QPluginMetaData::MagicHeader const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPluginMetaData_ElfNoteHeader_dElfNoteHeader(QPluginMetaData::ElfNoteHeader * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPluginMetaData::ElfNoteHeader * ctr_qt_core_ffi_QPluginMetaData_ElfNoteHeader_ElfNoteHeader2(QPluginMetaData::ElfNoteHeader const * other) {
  return new QPluginMetaData::ElfNoteHeader(*other);
}


RITUAL_EXPORT QPluginMetaData::ElfNoteHeader * ctr_qt_core_ffi_QPluginMetaData_ElfNoteHeader_operator_(QPluginMetaData::ElfNoteHeader * this_ptr, QPluginMetaData::ElfNoteHeader const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStaticPlugin_dQStaticPlugin(QStaticPlugin * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QStaticPlugin * ctr_qt_core_ffi_QStaticPlugin_QStaticPlugin2(QStaticPlugin const * other) {
  return new QStaticPlugin(*other);
}


RITUAL_EXPORT QStaticPlugin * ctr_qt_core_ffi_QStaticPlugin_operator_(QStaticPlugin * this_ptr, QStaticPlugin const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QPluginLoader * ctr_qt_core_ffi_QPluginLoader_QPluginLoader2() {
  return new QPluginLoader();
}


RITUAL_EXPORT QProcess * ctr_qt_core_ffi_QProcess_QProcess1() {
  return new QProcess();
}


#ifndef _WIN32
RITUAL_EXPORT void ctr_qt_core_ffi_QProcess_UnixProcessParameters_dUnixProcessParameters(QProcess::UnixProcessParameters * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QProcess::UnixProcessParameters * ctr_qt_core_ffi_QProcess_UnixProcessParameters_UnixProcessParameters() {
  return new QProcess::UnixProcessParameters();
}


RITUAL_EXPORT QProcess::UnixProcessParameters * ctr_qt_core_ffi_QProcess_UnixProcessParameters_UnixProcessParameters1(QProcess::UnixProcessParameters const * other) {
  return new QProcess::UnixProcessParameters(*other);
}


RITUAL_EXPORT QProcess::UnixProcessParameters * ctr_qt_core_ffi_QProcess_UnixProcessParameters_operator_(QProcess::UnixProcessParameters * this_ptr, QProcess::UnixProcessParameters const * other) {
  return &this_ptr->operator=(*other);
}
#endif


RITUAL_EXPORT QVariantAnimation * ctr_qt_core_ffi_QVariantAnimation_QVariantAnimation1() {
  return new QVariantAnimation();
}


RITUAL_EXPORT QPropertyAnimation * ctr_qt_core_ffi_QPropertyAnimation_QPropertyAnimation2() {
  return new QPropertyAnimation();
}


RITUAL_EXPORT QRandomGenerator * ctr_qt_core_ffi_QRandomGenerator_QRandomGenerator5() {
  return new QRandomGenerator();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRandomGenerator64_dQRandomGenerator64(QRandomGenerator64 * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRandomGenerator64 * ctr_qt_core_ffi_QRandomGenerator64_QRandomGenerator645() {
  return new QRandomGenerator64();
}


RITUAL_EXPORT QRandomGenerator64 * ctr_qt_core_ffi_QRandomGenerator64_QRandomGenerator646(QRandomGenerator64 const * other) {
  return new QRandomGenerator64(*other);
}


RITUAL_EXPORT QRandomGenerator64 * ctr_qt_core_ffi_QRandomGenerator64_operator_(QRandomGenerator64 * this_ptr, QRandomGenerator64 const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRangeModelImplBase_dQRangeModelImplBase(QRangeModelImplBase * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QReadWriteLock * ctr_qt_core_ffi_QReadWriteLock_QReadWriteLock1() {
  return new QReadWriteLock();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSize_dQSize(QSize * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSize_QSize2(QSize const * other) {
  return new QSize(*other);
}


RITUAL_EXPORT QSize * ctr_qt_core_ffi_QSize_operator_(QSize * this_ptr, QSize const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSizeF_dQSizeF(QSizeF * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_QSizeF3(QSizeF const * other) {
  return new QSizeF(*other);
}


RITUAL_EXPORT QSizeF * ctr_qt_core_ffi_QSizeF_operator_(QSizeF * this_ptr, QSizeF const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRect_dQRect(QRect * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_QRect4(QRect const * other) {
  return new QRect(*other);
}


RITUAL_EXPORT QRect * ctr_qt_core_ffi_QRect_operator_2(QRect * this_ptr, QRect const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QRectF_dQRectF(QRectF * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_QRectF5(QRectF const * other) {
  return new QRectF(*other);
}


RITUAL_EXPORT QRectF * ctr_qt_core_ffi_QRectF_operator_2(QRectF * this_ptr, QRectF const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QResource * ctr_qt_core_ffi_QResource_QResource1() {
  return new QResource();
}


RITUAL_EXPORT QSaveFile * ctr_qt_core_ffi_QSaveFile_QSaveFile3() {
  return new QSaveFile();
}


RITUAL_EXPORT QSemaphore * ctr_qt_core_ffi_QSemaphore_QSemaphore1() {
  return new QSemaphore();
}


RITUAL_EXPORT QSequentialAnimationGroup * ctr_qt_core_ffi_QSequentialAnimationGroup_QSequentialAnimationGroup1() {
  return new QSequentialAnimationGroup();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSequentialIterator_dQSequentialIterator(QSequentialIterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSequentialIterator * ctr_qt_core_ffi_QSequentialIterator_QSequentialIterator2(QSequentialIterator const * other) {
  return new QSequentialIterator(*other);
}


RITUAL_EXPORT QSequentialIterator * ctr_qt_core_ffi_QSequentialIterator_operator_1(QSequentialIterator * this_ptr, QSequentialIterator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSequentialConstIterator_dQSequentialConstIterator(QSequentialConstIterator * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSequentialConstIterator * ctr_qt_core_ffi_QSequentialConstIterator_QSequentialConstIterator2(QSequentialConstIterator const * other) {
  return new QSequentialConstIterator(*other);
}


RITUAL_EXPORT QSequentialConstIterator * ctr_qt_core_ffi_QSequentialConstIterator_operator_1(QSequentialConstIterator * this_ptr, QSequentialConstIterator const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSequentialIterable_dQSequentialIterable(QSequentialIterable * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSequentialIterable * ctr_qt_core_ffi_QSequentialIterable_QSequentialIterable4(QSequentialIterable const * other) {
  return new QSequentialIterable(*other);
}


RITUAL_EXPORT QSequentialIterable * ctr_qt_core_ffi_QSequentialIterable_operator_1(QSequentialIterable * this_ptr, QSequentialIterable const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QSettings * ctr_qt_core_ffi_QSettings_QSettings6() {
  return new QSettings();
}


RITUAL_EXPORT QSharedMemory * ctr_qt_core_ffi_QSharedMemory_QSharedMemory3() {
  return new QSharedMemory();
}


RITUAL_EXPORT QSignalMapper * ctr_qt_core_ffi_QSignalMapper_QSignalMapper1() {
  return new QSignalMapper();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QSocketDescriptor_dQSocketDescriptor(QSocketDescriptor * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QSocketDescriptor * ctr_qt_core_ffi_QSocketDescriptor_QSocketDescriptor1() {
  return new QSocketDescriptor();
}


RITUAL_EXPORT QSocketDescriptor * ctr_qt_core_ffi_QSocketDescriptor_QSocketDescriptor2(QSocketDescriptor const * other) {
  return new QSocketDescriptor(*other);
}


RITUAL_EXPORT QSocketDescriptor * ctr_qt_core_ffi_QSocketDescriptor_operator_(QSocketDescriptor * this_ptr, QSocketDescriptor const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT QSortFilterProxyModel * ctr_qt_core_ffi_QSortFilterProxyModel_QSortFilterProxyModel1() {
  return new QSortFilterProxyModel();
}


RITUAL_EXPORT QStandardPaths * ctr_qt_core_ffi_QStandardPaths_QStandardPaths(QStandardPaths const * other) {
  return new QStandardPaths(*other);
}


RITUAL_EXPORT QStandardPaths * ctr_qt_core_ffi_QStandardPaths_operator_(QStandardPaths * this_ptr, QStandardPaths const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QStringListModel_dQStringListModel(QStringListModel * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QStringListModel * ctr_qt_core_ffi_QStringListModel_QStringListModel2() {
  return new QStringListModel();
}


RITUAL_EXPORT QTimeLine * ctr_qt_core_ffi_QTimeLine_QTimeLine1() {
  return new QTimeLine();
}


RITUAL_EXPORT QTranslator * ctr_qt_core_ffi_QTranslator_QTranslator1() {
  return new QTranslator();
}


RITUAL_EXPORT QTransposeProxyModel * ctr_qt_core_ffi_QTransposeProxyModel_QTransposeProxyModel1() {
  return new QTransposeProxyModel();
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamAttribute_dQXmlStreamAttribute(QXmlStreamAttribute * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QXmlStreamAttribute * ctr_qt_core_ffi_QXmlStreamAttribute_QXmlStreamAttribute3(QXmlStreamAttribute const * other) {
  return new QXmlStreamAttribute(*other);
}


RITUAL_EXPORT QXmlStreamAttribute * ctr_qt_core_ffi_QXmlStreamAttribute_operator_(QXmlStreamAttribute * this_ptr, QXmlStreamAttribute const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamAttributes_dQXmlStreamAttributes(QXmlStreamAttributes * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QXmlStreamAttributes * ctr_qt_core_ffi_QXmlStreamAttributes_QXmlStreamAttributes1(QXmlStreamAttributes const * other) {
  return new QXmlStreamAttributes(*other);
}


RITUAL_EXPORT QXmlStreamAttributes * ctr_qt_core_ffi_QXmlStreamAttributes_operator_(QXmlStreamAttributes * this_ptr, QXmlStreamAttributes const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamNamespaceDeclaration_dQXmlStreamNamespaceDeclaration(QXmlStreamNamespaceDeclaration * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QXmlStreamNamespaceDeclaration * ctr_qt_core_ffi_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration2(QXmlStreamNamespaceDeclaration const * other) {
  return new QXmlStreamNamespaceDeclaration(*other);
}


RITUAL_EXPORT QXmlStreamNamespaceDeclaration * ctr_qt_core_ffi_QXmlStreamNamespaceDeclaration_operator_(QXmlStreamNamespaceDeclaration * this_ptr, QXmlStreamNamespaceDeclaration const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamNotationDeclaration_dQXmlStreamNotationDeclaration(QXmlStreamNotationDeclaration * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QXmlStreamNotationDeclaration * ctr_qt_core_ffi_QXmlStreamNotationDeclaration_QXmlStreamNotationDeclaration1(QXmlStreamNotationDeclaration const * other) {
  return new QXmlStreamNotationDeclaration(*other);
}


RITUAL_EXPORT QXmlStreamNotationDeclaration * ctr_qt_core_ffi_QXmlStreamNotationDeclaration_operator_(QXmlStreamNotationDeclaration * this_ptr, QXmlStreamNotationDeclaration const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QXmlStreamEntityDeclaration_dQXmlStreamEntityDeclaration(QXmlStreamEntityDeclaration * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QXmlStreamEntityDeclaration * ctr_qt_core_ffi_QXmlStreamEntityDeclaration_QXmlStreamEntityDeclaration1(QXmlStreamEntityDeclaration const * other) {
  return new QXmlStreamEntityDeclaration(*other);
}


RITUAL_EXPORT QXmlStreamEntityDeclaration * ctr_qt_core_ffi_QXmlStreamEntityDeclaration_operator_(QXmlStreamEntityDeclaration * this_ptr, QXmlStreamEntityDeclaration const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT void ctr_qt_core_ffi_QPointer_QObject_dQPointer(QPointer< QObject > * this_ptr) {
  delete this_ptr;
}


RITUAL_EXPORT QPointer< QObject > * ctr_qt_core_ffi_QPointer_QObject_QPointer() {
  return new QPointer< QObject >();
}


RITUAL_EXPORT QPointer< QObject > * ctr_qt_core_ffi_QPointer_QObject_QPointer1(QPointer< QObject > const * other) {
  return new QPointer< QObject >(*other);
}


RITUAL_EXPORT QPointer< QObject > * ctr_qt_core_ffi_QPointer_QObject_operator_(QPointer< QObject > * this_ptr, QPointer< QObject > const * other) {
  return &this_ptr->operator=(*other);
}


RITUAL_EXPORT Qt::totally_ordered_wrapper< QAbstractItemModel const * > * ctr_qt_core_ffi_Qt_totally_ordered_wrapper_QAbstractItemModel_const_ptr_totally_ordered_wrapper() {
  return new Qt::totally_ordered_wrapper< QAbstractItemModel const * >();
}


RITUAL_EXPORT Qt::totally_ordered_wrapper< QAbstractItemModel const * > * ctr_qt_core_ffi_Qt_totally_ordered_wrapper_QAbstractItemModel_const_ptr_totally_ordered_wrapper1(QAbstractItemModel const * p) {
  return new Qt::totally_ordered_wrapper< QAbstractItemModel const * >(p);
}


RITUAL_EXPORT QAbstractItemModel const * ctr_qt_core_ffi_Qt_totally_ordered_wrapper_QAbstractItemModel_const_ptr_get(Qt::totally_ordered_wrapper< QAbstractItemModel const * > const * this_ptr) {
  return this_ptr->get();
}


RITUAL_EXPORT void ctr_qt_core_ffi_Qt_totally_ordered_wrapper_QAbstractItemModel_const_ptr_reset(Qt::totally_ordered_wrapper< QAbstractItemModel const * > * this_ptr, QAbstractItemModel const * p) {
  this_ptr->reset(p);
}


RITUAL_EXPORT QAbstractItemModel const * ctr_qt_core_ffi_Qt_totally_ordered_wrapper_QAbstractItemModel_const_ptr_operator__(Qt::totally_ordered_wrapper< QAbstractItemModel const * > const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT bool ctr_qt_core_ffi_Qt_totally_ordered_wrapper_QAbstractItemModel_const_ptr_operator_bool(Qt::totally_ordered_wrapper< QAbstractItemModel const * > const * this_ptr) {
  return this_ptr->operator bool();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QStringEncoder_DecodedData_QString_const_ref_operator_QByteArray(QStringEncoder::DecodedData< QString const & > const * this_ptr) {
  return new QByteArray(this_ptr->operator QByteArray());
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QStringEncoder_DecodedData_QStringView_operator_QByteArray(QStringEncoder::DecodedData< QStringView > const * this_ptr) {
  return new QByteArray(this_ptr->operator QByteArray());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QStringDecoder_EncodedData_QByteArray_const_ref_operator_QString(QStringDecoder::EncodedData< QByteArray const & > const * this_ptr) {
  return new QString(this_ptr->operator QString());
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QStringDecoder_EncodedData_QByteArrayView_operator_QString(QStringDecoder::EncodedData< QByteArrayView > const * this_ptr) {
  return new QString(this_ptr->operator QString());
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash54(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::SplitBehaviorFlags >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash55(int flags, unsigned long seed) {
  return qHash(QFlags< QStringConverterBase::Flag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash56(int flags, unsigned long seed) {
  return qHash(QFlags< QtMetaContainerPrivate::IteratorCapability >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash57(int flags, unsigned long seed) {
  return qHash(QFlags< QtMetaContainerPrivate::AddRemoveCapability >(flags), seed);
}


#ifndef _WIN32
RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash58(int flags, unsigned long seed) {
  return qHash(QFlags< QProcess::UnixProcessFlag >(flags), seed);
}
#endif


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash59(int flags, unsigned long seed) {
  return qHash(QFlags< QtOrderingPrivate::QtOrderingType >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash60(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::MouseButton >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash61(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::Orientation >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash62(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::AlignmentFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash63(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::WindowType >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash64(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::WindowState >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash65(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::ScreenOrientation >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash66(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::ImageConversionFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash67(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::KeyboardModifier >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash68(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::Modifier >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash69(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::DockWidgetArea >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash70(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::ToolBarArea >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash71(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::Edge >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash72(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::InputMethodQuery >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash73(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::InputMethodHint >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash74(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::DropAction >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash75(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::ItemFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash76(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::MatchFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash77(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::TextInteractionFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash78(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::TouchPointState >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash79(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::GestureFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash80(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::MouseEventFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash82(int flags, unsigned long seed) {
  return qHash(QFlags< QByteArray::Base64Option >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash83(int flags, unsigned long seed) {
  return qHash(QFlags< QString::SectionFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash84(int flags, unsigned long seed) {
  return qHash(QFlags< QIODeviceBase::OpenModeFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash85(int flags, unsigned long seed) {
  return qHash(QFlags< QMetaType::TypeFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash86(int flags, unsigned long seed) {
  return qHash(QFlags< Qt::FindChildOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash87(int flags, unsigned long seed) {
  return qHash(QFlags< QEventLoop::ProcessEventsFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash88(int flags, unsigned long seed) {
  return qHash(QFlags< QTextStream::NumberFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash89(int flags, unsigned long seed) {
  return qHash(QFlags< QAbstractItemModel::CheckIndexOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash90(int flags, unsigned long seed) {
  return qHash(QFlags< QLocale::DataSizeFormat >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash91(int flags, unsigned long seed) {
  return qHash(QFlags< QLocale::LanguageCodeType >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash92(int flags, unsigned long seed) {
  return qHash(QFlags< QLocale::NumberOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash93(int flags, unsigned long seed) {
  return qHash(QFlags< QRegularExpression::PatternOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash94(int flags, unsigned long seed) {
  return qHash(QFlags< QRegularExpression::MatchOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash95(int flags, unsigned long seed) {
  return qHash(QFlags< QRegularExpression::WildcardConversionOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash96(int flags, unsigned long seed) {
  return qHash(QFlags< QUrl::UserInputResolutionOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash97(int flags, unsigned long seed) {
  return qHash(QFlags< QUrl::ComponentFormattingOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash98(int flags, unsigned long seed) {
  return qHash(QFlags< QUrl::AceProcessingOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash99(int flags, unsigned long seed) {
  return qHash(QFlags< QCborValue::EncodingOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash100(int flags, unsigned long seed) {
  return qHash(QFlags< QCborValue::DiagnosticNotationOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash101(int flags, unsigned long seed) {
  return qHash(QFlags< QCommandLineOption::Flag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash102(int flags, unsigned long seed) {
  return qHash(QFlags< QFileDevice::Permission >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash103(int flags, unsigned long seed) {
  return qHash(QFlags< QFileDevice::MemoryMapFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash104(int flags, unsigned long seed) {
  return qHash(QFlags< QFileDevice::FileHandleFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash105(int flags, unsigned long seed) {
  return qHash(QFlags< QDirListing::IteratorFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash106(int flags, unsigned long seed) {
  return qHash(QFlags< QDir::SortFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash107(int flags, unsigned long seed) {
  return qHash(QFlags< QDir::Filter >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash108(int flags, unsigned long seed) {
  return qHash(QFlags< QDirIterator::IteratorFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash109(int flags, unsigned long seed) {
  return qHash(QFlags< QItemSelectionModel::SelectionFlag >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash110(int flags, unsigned long seed) {
  return qHash(QFlags< QLibrary::LoadHint >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash111(int flags, unsigned long seed) {
  return qHash(QFlags< QBluetoothPermission::CommunicationMode >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash112(int flags, unsigned long seed) {
  return qHash(QFlags< QSortFilterProxyModel::Direction >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash113(int flags, unsigned long seed) {
  return qHash(QFlags< QStandardPaths::LocateOption >(flags), seed);
}


RITUAL_EXPORT unsigned long ctr_qt_core_ffi_qHash114(int flags, unsigned long seed) {
  return qHash(QFlags< QTextBoundaryFinder::BoundaryReason >(flags), seed);
}


RITUAL_EXPORT QList< QItemSelectionRange >::iterator * ctr_qt_core_ffi_QList_QItemSelectionRange_iterator_iterator() {
  return new QList< QItemSelectionRange >::iterator();
}


RITUAL_EXPORT QList< QObject * >::iterator * ctr_qt_core_ffi_QList_QObject_ptr_iterator_iterator() {
  return new QList< QObject * >::iterator();
}


RITUAL_EXPORT QList< QString >::iterator * ctr_qt_core_ffi_QList_QString_iterator_iterator() {
  return new QList< QString >::iterator();
}


RITUAL_EXPORT QList< QXmlStreamAttribute >::iterator * ctr_qt_core_ffi_QList_QXmlStreamAttribute_iterator_iterator() {
  return new QList< QXmlStreamAttribute >::iterator();
}


RITUAL_EXPORT QList< QByteArray >::iterator * ctr_qt_core_ffi_QList_QByteArray_iterator_iterator() {
  return new QList< QByteArray >::iterator();
}


RITUAL_EXPORT QList< unsigned int >::iterator * ctr_qt_core_ffi_QList_unsigned_int_iterator_iterator() {
  return new QList< unsigned int >::iterator();
}


RITUAL_EXPORT QList< QStringView >::iterator * ctr_qt_core_ffi_QList_QStringView_iterator_iterator() {
  return new QList< QStringView >::iterator();
}


RITUAL_EXPORT QList< QAbstractEventDispatcher::TimerInfo >::iterator * ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfo_iterator_iterator() {
  return new QList< QAbstractEventDispatcher::TimerInfo >::iterator();
}


RITUAL_EXPORT QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator * ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfoV2_iterator_iterator() {
  return new QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator();
}


RITUAL_EXPORT QList< QVariant >::iterator * ctr_qt_core_ffi_QList_QVariant_iterator_iterator() {
  return new QList< QVariant >::iterator();
}


RITUAL_EXPORT QList< QModelIndex >::iterator * ctr_qt_core_ffi_QList_QModelIndex_iterator_iterator() {
  return new QList< QModelIndex >::iterator();
}


RITUAL_EXPORT QList< int >::iterator * ctr_qt_core_ffi_QList_int_iterator_iterator() {
  return new QList< int >::iterator();
}


RITUAL_EXPORT QList< QPersistentModelIndex >::iterator * ctr_qt_core_ffi_QList_QPersistentModelIndex_iterator_iterator() {
  return new QList< QPersistentModelIndex >::iterator();
}


RITUAL_EXPORT QList< Qt::DayOfWeek >::iterator * ctr_qt_core_ffi_QList_Qt_DayOfWeek_iterator_iterator() {
  return new QList< Qt::DayOfWeek >::iterator();
}


RITUAL_EXPORT QList< QLocale >::iterator * ctr_qt_core_ffi_QList_QLocale_iterator_iterator() {
  return new QList< QLocale >::iterator();
}


RITUAL_EXPORT QList< QLocale::Country >::iterator * ctr_qt_core_ffi_QList_QLocale_Country_iterator_iterator() {
  return new QList< QLocale::Country >::iterator();
}


RITUAL_EXPORT QList< QUrl >::iterator * ctr_qt_core_ffi_QList_QUrl_iterator_iterator() {
  return new QList< QUrl >::iterator();
}


RITUAL_EXPORT QList< QCborValue >::iterator * ctr_qt_core_ffi_QList_QCborValue_iterator_iterator() {
  return new QList< QCborValue >::iterator();
}


RITUAL_EXPORT QList< QCommandLineOption >::iterator * ctr_qt_core_ffi_QList_QCommandLineOption_iterator_iterator() {
  return new QList< QCommandLineOption >::iterator();
}


RITUAL_EXPORT QList< QAbstractItemModel * >::iterator * ctr_qt_core_ffi_QList_QAbstractItemModel_ptr_iterator_iterator() {
  return new QList< QAbstractItemModel * >::iterator();
}


RITUAL_EXPORT QList< QTimeZone::OffsetData >::iterator * ctr_qt_core_ffi_QList_QTimeZone_OffsetData_iterator_iterator() {
  return new QList< QTimeZone::OffsetData >::iterator();
}


RITUAL_EXPORT QList< QFileInfo >::iterator * ctr_qt_core_ffi_QList_QFileInfo_iterator_iterator() {
  return new QList< QFileInfo >::iterator();
}


RITUAL_EXPORT QList< QPointF >::iterator * ctr_qt_core_ffi_QList_QPointF_iterator_iterator() {
  return new QList< QPointF >::iterator();
}


RITUAL_EXPORT QList< QMimeType >::iterator * ctr_qt_core_ffi_QList_QMimeType_iterator_iterator() {
  return new QList< QMimeType >::iterator();
}


RITUAL_EXPORT QList< QStaticPlugin >::iterator * ctr_qt_core_ffi_QList_QStaticPlugin_iterator_iterator() {
  return new QList< QStaticPlugin >::iterator();
}


RITUAL_EXPORT QList< QStorageInfo >::iterator * ctr_qt_core_ffi_QList_QStorageInfo_iterator_iterator() {
  return new QList< QStorageInfo >::iterator();
}


RITUAL_EXPORT QList< QXmlStreamNamespaceDeclaration >::iterator * ctr_qt_core_ffi_QList_QXmlStreamNamespaceDeclaration_iterator_iterator() {
  return new QList< QXmlStreamNamespaceDeclaration >::iterator();
}


RITUAL_EXPORT QList< QXmlStreamNotationDeclaration >::iterator * ctr_qt_core_ffi_QList_QXmlStreamNotationDeclaration_iterator_iterator() {
  return new QList< QXmlStreamNotationDeclaration >::iterator();
}


RITUAL_EXPORT QList< QXmlStreamEntityDeclaration >::iterator * ctr_qt_core_ffi_QList_QXmlStreamEntityDeclaration_iterator_iterator() {
  return new QList< QXmlStreamEntityDeclaration >::iterator();
}


RITUAL_EXPORT QItemSelectionRange * ctr_qt_core_ffi_QList_QItemSelectionRange_iterator_operator_(QList< QItemSelectionRange >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QObject * * ctr_qt_core_ffi_QList_QObject_ptr_iterator_operator_(QList< QObject * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QList_QString_iterator_operator_(QList< QString >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QXmlStreamAttribute * ctr_qt_core_ffi_QList_QXmlStreamAttribute_iterator_operator_(QList< QXmlStreamAttribute >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QList_QByteArray_iterator_operator_(QList< QByteArray >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT unsigned int * ctr_qt_core_ffi_QList_unsigned_int_iterator_operator_(QList< unsigned int >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QList_QStringView_iterator_operator_(QList< QStringView >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QAbstractEventDispatcher::TimerInfo * ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfo_iterator_operator_(QList< QAbstractEventDispatcher::TimerInfo >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QAbstractEventDispatcher::TimerInfoV2 * ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfoV2_iterator_operator_(QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QList_QVariant_iterator_operator_(QList< QVariant >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QList_QModelIndex_iterator_operator_(QList< QModelIndex >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT int * ctr_qt_core_ffi_QList_int_iterator_operator_(QList< int >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QPersistentModelIndex * ctr_qt_core_ffi_QList_QPersistentModelIndex_iterator_operator_(QList< QPersistentModelIndex >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT Qt::DayOfWeek * ctr_qt_core_ffi_QList_Qt_DayOfWeek_iterator_operator_(QList< Qt::DayOfWeek >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QList_QLocale_iterator_operator_(QList< QLocale >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QLocale::Country * ctr_qt_core_ffi_QList_QLocale_Country_iterator_operator_(QList< QLocale::Country >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QList_QUrl_iterator_operator_(QList< QUrl >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QList_QCborValue_iterator_operator_(QList< QCborValue >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QCommandLineOption * ctr_qt_core_ffi_QList_QCommandLineOption_iterator_operator_(QList< QCommandLineOption >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QAbstractItemModel * * ctr_qt_core_ffi_QList_QAbstractItemModel_ptr_iterator_operator_(QList< QAbstractItemModel * >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QTimeZone::OffsetData * ctr_qt_core_ffi_QList_QTimeZone_OffsetData_iterator_operator_(QList< QTimeZone::OffsetData >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QFileInfo * ctr_qt_core_ffi_QList_QFileInfo_iterator_operator_(QList< QFileInfo >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QList_QPointF_iterator_operator_(QList< QPointF >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QList_QMimeType_iterator_operator_(QList< QMimeType >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QStaticPlugin * ctr_qt_core_ffi_QList_QStaticPlugin_iterator_operator_(QList< QStaticPlugin >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QStorageInfo * ctr_qt_core_ffi_QList_QStorageInfo_iterator_operator_(QList< QStorageInfo >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QXmlStreamNamespaceDeclaration * ctr_qt_core_ffi_QList_QXmlStreamNamespaceDeclaration_iterator_operator_(QList< QXmlStreamNamespaceDeclaration >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QXmlStreamNotationDeclaration * ctr_qt_core_ffi_QList_QXmlStreamNotationDeclaration_iterator_operator_(QList< QXmlStreamNotationDeclaration >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QXmlStreamEntityDeclaration * ctr_qt_core_ffi_QList_QXmlStreamEntityDeclaration_iterator_operator_(QList< QXmlStreamEntityDeclaration >::iterator const * this_ptr) {
  return &this_ptr->operator*();
}


RITUAL_EXPORT QItemSelectionRange * ctr_qt_core_ffi_QList_QItemSelectionRange_iterator_operator__(QList< QItemSelectionRange >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QObject * * ctr_qt_core_ffi_QList_QObject_ptr_iterator_operator__(QList< QObject * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QList_QString_iterator_operator__(QList< QString >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QXmlStreamAttribute * ctr_qt_core_ffi_QList_QXmlStreamAttribute_iterator_operator__(QList< QXmlStreamAttribute >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QList_QByteArray_iterator_operator__(QList< QByteArray >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT unsigned int * ctr_qt_core_ffi_QList_unsigned_int_iterator_operator__(QList< unsigned int >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QList_QStringView_iterator_operator__(QList< QStringView >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QAbstractEventDispatcher::TimerInfo * ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfo_iterator_operator__(QList< QAbstractEventDispatcher::TimerInfo >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QAbstractEventDispatcher::TimerInfoV2 * ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfoV2_iterator_operator__(QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QList_QVariant_iterator_operator__(QList< QVariant >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QList_QModelIndex_iterator_operator__(QList< QModelIndex >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT int * ctr_qt_core_ffi_QList_int_iterator_operator__(QList< int >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QPersistentModelIndex * ctr_qt_core_ffi_QList_QPersistentModelIndex_iterator_operator__(QList< QPersistentModelIndex >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT Qt::DayOfWeek * ctr_qt_core_ffi_QList_Qt_DayOfWeek_iterator_operator__(QList< Qt::DayOfWeek >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QList_QLocale_iterator_operator__(QList< QLocale >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QLocale::Country * ctr_qt_core_ffi_QList_QLocale_Country_iterator_operator__(QList< QLocale::Country >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QList_QUrl_iterator_operator__(QList< QUrl >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QList_QCborValue_iterator_operator__(QList< QCborValue >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QCommandLineOption * ctr_qt_core_ffi_QList_QCommandLineOption_iterator_operator__(QList< QCommandLineOption >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QAbstractItemModel * * ctr_qt_core_ffi_QList_QAbstractItemModel_ptr_iterator_operator__(QList< QAbstractItemModel * >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QTimeZone::OffsetData * ctr_qt_core_ffi_QList_QTimeZone_OffsetData_iterator_operator__(QList< QTimeZone::OffsetData >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QFileInfo * ctr_qt_core_ffi_QList_QFileInfo_iterator_operator__(QList< QFileInfo >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QList_QPointF_iterator_operator__(QList< QPointF >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QList_QMimeType_iterator_operator__(QList< QMimeType >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QStaticPlugin * ctr_qt_core_ffi_QList_QStaticPlugin_iterator_operator__(QList< QStaticPlugin >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QStorageInfo * ctr_qt_core_ffi_QList_QStorageInfo_iterator_operator__(QList< QStorageInfo >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QXmlStreamNamespaceDeclaration * ctr_qt_core_ffi_QList_QXmlStreamNamespaceDeclaration_iterator_operator__(QList< QXmlStreamNamespaceDeclaration >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QXmlStreamNotationDeclaration * ctr_qt_core_ffi_QList_QXmlStreamNotationDeclaration_iterator_operator__(QList< QXmlStreamNotationDeclaration >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QXmlStreamEntityDeclaration * ctr_qt_core_ffi_QList_QXmlStreamEntityDeclaration_iterator_operator__(QList< QXmlStreamEntityDeclaration >::iterator const * this_ptr) {
  return this_ptr->operator->();
}


RITUAL_EXPORT QItemSelectionRange * ctr_qt_core_ffi_QList_QItemSelectionRange_iterator_operator__1(QList< QItemSelectionRange >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QObject * * ctr_qt_core_ffi_QList_QObject_ptr_iterator_operator__1(QList< QObject * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QString * ctr_qt_core_ffi_QList_QString_iterator_operator__1(QList< QString >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QXmlStreamAttribute * ctr_qt_core_ffi_QList_QXmlStreamAttribute_iterator_operator__1(QList< QXmlStreamAttribute >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QByteArray * ctr_qt_core_ffi_QList_QByteArray_iterator_operator__1(QList< QByteArray >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT unsigned int * ctr_qt_core_ffi_QList_unsigned_int_iterator_operator__1(QList< unsigned int >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QStringView * ctr_qt_core_ffi_QList_QStringView_iterator_operator__1(QList< QStringView >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QAbstractEventDispatcher::TimerInfo * ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfo_iterator_operator__1(QList< QAbstractEventDispatcher::TimerInfo >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QAbstractEventDispatcher::TimerInfoV2 * ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfoV2_iterator_operator__1(QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QVariant * ctr_qt_core_ffi_QList_QVariant_iterator_operator__1(QList< QVariant >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QModelIndex * ctr_qt_core_ffi_QList_QModelIndex_iterator_operator__1(QList< QModelIndex >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT int * ctr_qt_core_ffi_QList_int_iterator_operator__1(QList< int >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QPersistentModelIndex * ctr_qt_core_ffi_QList_QPersistentModelIndex_iterator_operator__1(QList< QPersistentModelIndex >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT Qt::DayOfWeek * ctr_qt_core_ffi_QList_Qt_DayOfWeek_iterator_operator__1(QList< Qt::DayOfWeek >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QLocale * ctr_qt_core_ffi_QList_QLocale_iterator_operator__1(QList< QLocale >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QLocale::Country * ctr_qt_core_ffi_QList_QLocale_Country_iterator_operator__1(QList< QLocale::Country >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QUrl * ctr_qt_core_ffi_QList_QUrl_iterator_operator__1(QList< QUrl >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QCborValue * ctr_qt_core_ffi_QList_QCborValue_iterator_operator__1(QList< QCborValue >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QCommandLineOption * ctr_qt_core_ffi_QList_QCommandLineOption_iterator_operator__1(QList< QCommandLineOption >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QAbstractItemModel * * ctr_qt_core_ffi_QList_QAbstractItemModel_ptr_iterator_operator__1(QList< QAbstractItemModel * >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QTimeZone::OffsetData * ctr_qt_core_ffi_QList_QTimeZone_OffsetData_iterator_operator__1(QList< QTimeZone::OffsetData >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QFileInfo * ctr_qt_core_ffi_QList_QFileInfo_iterator_operator__1(QList< QFileInfo >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QPointF * ctr_qt_core_ffi_QList_QPointF_iterator_operator__1(QList< QPointF >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QMimeType * ctr_qt_core_ffi_QList_QMimeType_iterator_operator__1(QList< QMimeType >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QStaticPlugin * ctr_qt_core_ffi_QList_QStaticPlugin_iterator_operator__1(QList< QStaticPlugin >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QStorageInfo * ctr_qt_core_ffi_QList_QStorageInfo_iterator_operator__1(QList< QStorageInfo >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QXmlStreamNamespaceDeclaration * ctr_qt_core_ffi_QList_QXmlStreamNamespaceDeclaration_iterator_operator__1(QList< QXmlStreamNamespaceDeclaration >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QXmlStreamNotationDeclaration * ctr_qt_core_ffi_QList_QXmlStreamNotationDeclaration_iterator_operator__1(QList< QXmlStreamNotationDeclaration >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT QXmlStreamEntityDeclaration * ctr_qt_core_ffi_QList_QXmlStreamEntityDeclaration_iterator_operator__1(QList< QXmlStreamEntityDeclaration >::iterator const * this_ptr, long long j) {
  return &this_ptr->operator[](j);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QItemSelectionRange_iterator_operator__2(QList< QItemSelectionRange >::iterator const * this_ptr, QList< QItemSelectionRange >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QObject_ptr_iterator_operator__2(QList< QObject * >::iterator const * this_ptr, QList< QObject * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QString_iterator_operator__2(QList< QString >::iterator const * this_ptr, QList< QString >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamAttribute_iterator_operator__2(QList< QXmlStreamAttribute >::iterator const * this_ptr, QList< QXmlStreamAttribute >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QByteArray_iterator_operator__2(QList< QByteArray >::iterator const * this_ptr, QList< QByteArray >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_unsigned_int_iterator_operator__2(QList< unsigned int >::iterator const * this_ptr, QList< unsigned int >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStringView_iterator_operator__2(QList< QStringView >::iterator const * this_ptr, QList< QStringView >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfo_iterator_operator__2(QList< QAbstractEventDispatcher::TimerInfo >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfo >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfoV2_iterator_operator__2(QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QVariant_iterator_operator__2(QList< QVariant >::iterator const * this_ptr, QList< QVariant >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QModelIndex_iterator_operator__2(QList< QModelIndex >::iterator const * this_ptr, QList< QModelIndex >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_int_iterator_operator__2(QList< int >::iterator const * this_ptr, QList< int >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPersistentModelIndex_iterator_operator__2(QList< QPersistentModelIndex >::iterator const * this_ptr, QList< QPersistentModelIndex >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_Qt_DayOfWeek_iterator_operator__2(QList< Qt::DayOfWeek >::iterator const * this_ptr, QList< Qt::DayOfWeek >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_iterator_operator__2(QList< QLocale >::iterator const * this_ptr, QList< QLocale >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_Country_iterator_operator__2(QList< QLocale::Country >::iterator const * this_ptr, QList< QLocale::Country >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QUrl_iterator_operator__2(QList< QUrl >::iterator const * this_ptr, QList< QUrl >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCborValue_iterator_operator__2(QList< QCborValue >::iterator const * this_ptr, QList< QCborValue >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCommandLineOption_iterator_operator__2(QList< QCommandLineOption >::iterator const * this_ptr, QList< QCommandLineOption >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractItemModel_ptr_iterator_operator__2(QList< QAbstractItemModel * >::iterator const * this_ptr, QList< QAbstractItemModel * >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QTimeZone_OffsetData_iterator_operator__2(QList< QTimeZone::OffsetData >::iterator const * this_ptr, QList< QTimeZone::OffsetData >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QFileInfo_iterator_operator__2(QList< QFileInfo >::iterator const * this_ptr, QList< QFileInfo >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPointF_iterator_operator__2(QList< QPointF >::iterator const * this_ptr, QList< QPointF >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QMimeType_iterator_operator__2(QList< QMimeType >::iterator const * this_ptr, QList< QMimeType >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStaticPlugin_iterator_operator__2(QList< QStaticPlugin >::iterator const * this_ptr, QList< QStaticPlugin >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStorageInfo_iterator_operator__2(QList< QStorageInfo >::iterator const * this_ptr, QList< QStorageInfo >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNamespaceDeclaration_iterator_operator__2(QList< QXmlStreamNamespaceDeclaration >::iterator const * this_ptr, QList< QXmlStreamNamespaceDeclaration >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNotationDeclaration_iterator_operator__2(QList< QXmlStreamNotationDeclaration >::iterator const * this_ptr, QList< QXmlStreamNotationDeclaration >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamEntityDeclaration_iterator_operator__2(QList< QXmlStreamEntityDeclaration >::iterator const * this_ptr, QList< QXmlStreamEntityDeclaration >::iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QItemSelectionRange_iterator_operator_1(QList< QItemSelectionRange >::iterator const * this_ptr, QList< QItemSelectionRange >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QObject_ptr_iterator_operator_1(QList< QObject * >::iterator const * this_ptr, QList< QObject * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QString_iterator_operator_1(QList< QString >::iterator const * this_ptr, QList< QString >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamAttribute_iterator_operator_1(QList< QXmlStreamAttribute >::iterator const * this_ptr, QList< QXmlStreamAttribute >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QByteArray_iterator_operator_1(QList< QByteArray >::iterator const * this_ptr, QList< QByteArray >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_unsigned_int_iterator_operator_1(QList< unsigned int >::iterator const * this_ptr, QList< unsigned int >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStringView_iterator_operator_1(QList< QStringView >::iterator const * this_ptr, QList< QStringView >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfo_iterator_operator_1(QList< QAbstractEventDispatcher::TimerInfo >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfo >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfoV2_iterator_operator_1(QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QVariant_iterator_operator_1(QList< QVariant >::iterator const * this_ptr, QList< QVariant >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QModelIndex_iterator_operator_1(QList< QModelIndex >::iterator const * this_ptr, QList< QModelIndex >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_int_iterator_operator_1(QList< int >::iterator const * this_ptr, QList< int >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPersistentModelIndex_iterator_operator_1(QList< QPersistentModelIndex >::iterator const * this_ptr, QList< QPersistentModelIndex >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_Qt_DayOfWeek_iterator_operator_1(QList< Qt::DayOfWeek >::iterator const * this_ptr, QList< Qt::DayOfWeek >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_iterator_operator_1(QList< QLocale >::iterator const * this_ptr, QList< QLocale >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_Country_iterator_operator_1(QList< QLocale::Country >::iterator const * this_ptr, QList< QLocale::Country >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QUrl_iterator_operator_1(QList< QUrl >::iterator const * this_ptr, QList< QUrl >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCborValue_iterator_operator_1(QList< QCborValue >::iterator const * this_ptr, QList< QCborValue >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCommandLineOption_iterator_operator_1(QList< QCommandLineOption >::iterator const * this_ptr, QList< QCommandLineOption >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractItemModel_ptr_iterator_operator_1(QList< QAbstractItemModel * >::iterator const * this_ptr, QList< QAbstractItemModel * >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QTimeZone_OffsetData_iterator_operator_1(QList< QTimeZone::OffsetData >::iterator const * this_ptr, QList< QTimeZone::OffsetData >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QFileInfo_iterator_operator_1(QList< QFileInfo >::iterator const * this_ptr, QList< QFileInfo >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPointF_iterator_operator_1(QList< QPointF >::iterator const * this_ptr, QList< QPointF >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QMimeType_iterator_operator_1(QList< QMimeType >::iterator const * this_ptr, QList< QMimeType >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStaticPlugin_iterator_operator_1(QList< QStaticPlugin >::iterator const * this_ptr, QList< QStaticPlugin >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStorageInfo_iterator_operator_1(QList< QStorageInfo >::iterator const * this_ptr, QList< QStorageInfo >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNamespaceDeclaration_iterator_operator_1(QList< QXmlStreamNamespaceDeclaration >::iterator const * this_ptr, QList< QXmlStreamNamespaceDeclaration >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNotationDeclaration_iterator_operator_1(QList< QXmlStreamNotationDeclaration >::iterator const * this_ptr, QList< QXmlStreamNotationDeclaration >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamEntityDeclaration_iterator_operator_1(QList< QXmlStreamEntityDeclaration >::iterator const * this_ptr, QList< QXmlStreamEntityDeclaration >::iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QItemSelectionRange_iterator_operator__4(QList< QItemSelectionRange >::iterator const * this_ptr, QList< QItemSelectionRange >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QObject_ptr_iterator_operator__4(QList< QObject * >::iterator const * this_ptr, QList< QObject * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QString_iterator_operator__4(QList< QString >::iterator const * this_ptr, QList< QString >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamAttribute_iterator_operator__4(QList< QXmlStreamAttribute >::iterator const * this_ptr, QList< QXmlStreamAttribute >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QByteArray_iterator_operator__4(QList< QByteArray >::iterator const * this_ptr, QList< QByteArray >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_unsigned_int_iterator_operator__4(QList< unsigned int >::iterator const * this_ptr, QList< unsigned int >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStringView_iterator_operator__4(QList< QStringView >::iterator const * this_ptr, QList< QStringView >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfo_iterator_operator__4(QList< QAbstractEventDispatcher::TimerInfo >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfo >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfoV2_iterator_operator__4(QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QVariant_iterator_operator__4(QList< QVariant >::iterator const * this_ptr, QList< QVariant >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QModelIndex_iterator_operator__4(QList< QModelIndex >::iterator const * this_ptr, QList< QModelIndex >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_int_iterator_operator__4(QList< int >::iterator const * this_ptr, QList< int >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPersistentModelIndex_iterator_operator__4(QList< QPersistentModelIndex >::iterator const * this_ptr, QList< QPersistentModelIndex >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_Qt_DayOfWeek_iterator_operator__4(QList< Qt::DayOfWeek >::iterator const * this_ptr, QList< Qt::DayOfWeek >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_iterator_operator__4(QList< QLocale >::iterator const * this_ptr, QList< QLocale >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_Country_iterator_operator__4(QList< QLocale::Country >::iterator const * this_ptr, QList< QLocale::Country >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QUrl_iterator_operator__4(QList< QUrl >::iterator const * this_ptr, QList< QUrl >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCborValue_iterator_operator__4(QList< QCborValue >::iterator const * this_ptr, QList< QCborValue >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCommandLineOption_iterator_operator__4(QList< QCommandLineOption >::iterator const * this_ptr, QList< QCommandLineOption >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractItemModel_ptr_iterator_operator__4(QList< QAbstractItemModel * >::iterator const * this_ptr, QList< QAbstractItemModel * >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QTimeZone_OffsetData_iterator_operator__4(QList< QTimeZone::OffsetData >::iterator const * this_ptr, QList< QTimeZone::OffsetData >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QFileInfo_iterator_operator__4(QList< QFileInfo >::iterator const * this_ptr, QList< QFileInfo >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPointF_iterator_operator__4(QList< QPointF >::iterator const * this_ptr, QList< QPointF >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QMimeType_iterator_operator__4(QList< QMimeType >::iterator const * this_ptr, QList< QMimeType >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStaticPlugin_iterator_operator__4(QList< QStaticPlugin >::iterator const * this_ptr, QList< QStaticPlugin >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStorageInfo_iterator_operator__4(QList< QStorageInfo >::iterator const * this_ptr, QList< QStorageInfo >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNamespaceDeclaration_iterator_operator__4(QList< QXmlStreamNamespaceDeclaration >::iterator const * this_ptr, QList< QXmlStreamNamespaceDeclaration >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNotationDeclaration_iterator_operator__4(QList< QXmlStreamNotationDeclaration >::iterator const * this_ptr, QList< QXmlStreamNotationDeclaration >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamEntityDeclaration_iterator_operator__4(QList< QXmlStreamEntityDeclaration >::iterator const * this_ptr, QList< QXmlStreamEntityDeclaration >::iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QItemSelectionRange_iterator_operator_2(QList< QItemSelectionRange >::iterator const * this_ptr, QList< QItemSelectionRange >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QObject_ptr_iterator_operator_2(QList< QObject * >::iterator const * this_ptr, QList< QObject * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QString_iterator_operator_2(QList< QString >::iterator const * this_ptr, QList< QString >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamAttribute_iterator_operator_2(QList< QXmlStreamAttribute >::iterator const * this_ptr, QList< QXmlStreamAttribute >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QByteArray_iterator_operator_2(QList< QByteArray >::iterator const * this_ptr, QList< QByteArray >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_unsigned_int_iterator_operator_2(QList< unsigned int >::iterator const * this_ptr, QList< unsigned int >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStringView_iterator_operator_2(QList< QStringView >::iterator const * this_ptr, QList< QStringView >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfo_iterator_operator_2(QList< QAbstractEventDispatcher::TimerInfo >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfo >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfoV2_iterator_operator_2(QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QVariant_iterator_operator_2(QList< QVariant >::iterator const * this_ptr, QList< QVariant >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QModelIndex_iterator_operator_2(QList< QModelIndex >::iterator const * this_ptr, QList< QModelIndex >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_int_iterator_operator_2(QList< int >::iterator const * this_ptr, QList< int >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPersistentModelIndex_iterator_operator_2(QList< QPersistentModelIndex >::iterator const * this_ptr, QList< QPersistentModelIndex >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_Qt_DayOfWeek_iterator_operator_2(QList< Qt::DayOfWeek >::iterator const * this_ptr, QList< Qt::DayOfWeek >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_iterator_operator_2(QList< QLocale >::iterator const * this_ptr, QList< QLocale >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_Country_iterator_operator_2(QList< QLocale::Country >::iterator const * this_ptr, QList< QLocale::Country >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QUrl_iterator_operator_2(QList< QUrl >::iterator const * this_ptr, QList< QUrl >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCborValue_iterator_operator_2(QList< QCborValue >::iterator const * this_ptr, QList< QCborValue >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCommandLineOption_iterator_operator_2(QList< QCommandLineOption >::iterator const * this_ptr, QList< QCommandLineOption >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractItemModel_ptr_iterator_operator_2(QList< QAbstractItemModel * >::iterator const * this_ptr, QList< QAbstractItemModel * >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QTimeZone_OffsetData_iterator_operator_2(QList< QTimeZone::OffsetData >::iterator const * this_ptr, QList< QTimeZone::OffsetData >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QFileInfo_iterator_operator_2(QList< QFileInfo >::iterator const * this_ptr, QList< QFileInfo >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPointF_iterator_operator_2(QList< QPointF >::iterator const * this_ptr, QList< QPointF >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QMimeType_iterator_operator_2(QList< QMimeType >::iterator const * this_ptr, QList< QMimeType >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStaticPlugin_iterator_operator_2(QList< QStaticPlugin >::iterator const * this_ptr, QList< QStaticPlugin >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStorageInfo_iterator_operator_2(QList< QStorageInfo >::iterator const * this_ptr, QList< QStorageInfo >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNamespaceDeclaration_iterator_operator_2(QList< QXmlStreamNamespaceDeclaration >::iterator const * this_ptr, QList< QXmlStreamNamespaceDeclaration >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNotationDeclaration_iterator_operator_2(QList< QXmlStreamNotationDeclaration >::iterator const * this_ptr, QList< QXmlStreamNotationDeclaration >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamEntityDeclaration_iterator_operator_2(QList< QXmlStreamEntityDeclaration >::iterator const * this_ptr, QList< QXmlStreamEntityDeclaration >::iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QItemSelectionRange_iterator_operator__5(QList< QItemSelectionRange >::iterator const * this_ptr, QList< QItemSelectionRange >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QObject_ptr_iterator_operator__5(QList< QObject * >::iterator const * this_ptr, QList< QObject * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QString_iterator_operator__5(QList< QString >::iterator const * this_ptr, QList< QString >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamAttribute_iterator_operator__5(QList< QXmlStreamAttribute >::iterator const * this_ptr, QList< QXmlStreamAttribute >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QByteArray_iterator_operator__5(QList< QByteArray >::iterator const * this_ptr, QList< QByteArray >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_unsigned_int_iterator_operator__5(QList< unsigned int >::iterator const * this_ptr, QList< unsigned int >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStringView_iterator_operator__5(QList< QStringView >::iterator const * this_ptr, QList< QStringView >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfo_iterator_operator__5(QList< QAbstractEventDispatcher::TimerInfo >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfo >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfoV2_iterator_operator__5(QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QVariant_iterator_operator__5(QList< QVariant >::iterator const * this_ptr, QList< QVariant >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QModelIndex_iterator_operator__5(QList< QModelIndex >::iterator const * this_ptr, QList< QModelIndex >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_int_iterator_operator__5(QList< int >::iterator const * this_ptr, QList< int >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPersistentModelIndex_iterator_operator__5(QList< QPersistentModelIndex >::iterator const * this_ptr, QList< QPersistentModelIndex >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_Qt_DayOfWeek_iterator_operator__5(QList< Qt::DayOfWeek >::iterator const * this_ptr, QList< Qt::DayOfWeek >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_iterator_operator__5(QList< QLocale >::iterator const * this_ptr, QList< QLocale >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_Country_iterator_operator__5(QList< QLocale::Country >::iterator const * this_ptr, QList< QLocale::Country >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QUrl_iterator_operator__5(QList< QUrl >::iterator const * this_ptr, QList< QUrl >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCborValue_iterator_operator__5(QList< QCborValue >::iterator const * this_ptr, QList< QCborValue >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCommandLineOption_iterator_operator__5(QList< QCommandLineOption >::iterator const * this_ptr, QList< QCommandLineOption >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractItemModel_ptr_iterator_operator__5(QList< QAbstractItemModel * >::iterator const * this_ptr, QList< QAbstractItemModel * >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QTimeZone_OffsetData_iterator_operator__5(QList< QTimeZone::OffsetData >::iterator const * this_ptr, QList< QTimeZone::OffsetData >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QFileInfo_iterator_operator__5(QList< QFileInfo >::iterator const * this_ptr, QList< QFileInfo >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPointF_iterator_operator__5(QList< QPointF >::iterator const * this_ptr, QList< QPointF >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QMimeType_iterator_operator__5(QList< QMimeType >::iterator const * this_ptr, QList< QMimeType >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStaticPlugin_iterator_operator__5(QList< QStaticPlugin >::iterator const * this_ptr, QList< QStaticPlugin >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStorageInfo_iterator_operator__5(QList< QStorageInfo >::iterator const * this_ptr, QList< QStorageInfo >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNamespaceDeclaration_iterator_operator__5(QList< QXmlStreamNamespaceDeclaration >::iterator const * this_ptr, QList< QXmlStreamNamespaceDeclaration >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNotationDeclaration_iterator_operator__5(QList< QXmlStreamNotationDeclaration >::iterator const * this_ptr, QList< QXmlStreamNotationDeclaration >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamEntityDeclaration_iterator_operator__5(QList< QXmlStreamEntityDeclaration >::iterator const * this_ptr, QList< QXmlStreamEntityDeclaration >::iterator const * other) {
  return this_ptr->operator>=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QItemSelectionRange_iterator_operator__6(QList< QItemSelectionRange >::iterator const * this_ptr, QList< QItemSelectionRange >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QObject_ptr_iterator_operator__6(QList< QObject * >::iterator const * this_ptr, QList< QObject * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QString_iterator_operator__6(QList< QString >::iterator const * this_ptr, QList< QString >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamAttribute_iterator_operator__6(QList< QXmlStreamAttribute >::iterator const * this_ptr, QList< QXmlStreamAttribute >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QByteArray_iterator_operator__6(QList< QByteArray >::iterator const * this_ptr, QList< QByteArray >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_unsigned_int_iterator_operator__6(QList< unsigned int >::iterator const * this_ptr, QList< unsigned int >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStringView_iterator_operator__6(QList< QStringView >::iterator const * this_ptr, QList< QStringView >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfo_iterator_operator__6(QList< QAbstractEventDispatcher::TimerInfo >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfo >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfoV2_iterator_operator__6(QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfoV2 >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QVariant_iterator_operator__6(QList< QVariant >::iterator const * this_ptr, QList< QVariant >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QModelIndex_iterator_operator__6(QList< QModelIndex >::iterator const * this_ptr, QList< QModelIndex >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_int_iterator_operator__6(QList< int >::iterator const * this_ptr, QList< int >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPersistentModelIndex_iterator_operator__6(QList< QPersistentModelIndex >::iterator const * this_ptr, QList< QPersistentModelIndex >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_Qt_DayOfWeek_iterator_operator__6(QList< Qt::DayOfWeek >::iterator const * this_ptr, QList< Qt::DayOfWeek >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_iterator_operator__6(QList< QLocale >::iterator const * this_ptr, QList< QLocale >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_Country_iterator_operator__6(QList< QLocale::Country >::iterator const * this_ptr, QList< QLocale::Country >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QUrl_iterator_operator__6(QList< QUrl >::iterator const * this_ptr, QList< QUrl >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCborValue_iterator_operator__6(QList< QCborValue >::iterator const * this_ptr, QList< QCborValue >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCommandLineOption_iterator_operator__6(QList< QCommandLineOption >::iterator const * this_ptr, QList< QCommandLineOption >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractItemModel_ptr_iterator_operator__6(QList< QAbstractItemModel * >::iterator const * this_ptr, QList< QAbstractItemModel * >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QTimeZone_OffsetData_iterator_operator__6(QList< QTimeZone::OffsetData >::iterator const * this_ptr, QList< QTimeZone::OffsetData >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QFileInfo_iterator_operator__6(QList< QFileInfo >::iterator const * this_ptr, QList< QFileInfo >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPointF_iterator_operator__6(QList< QPointF >::iterator const * this_ptr, QList< QPointF >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QMimeType_iterator_operator__6(QList< QMimeType >::iterator const * this_ptr, QList< QMimeType >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStaticPlugin_iterator_operator__6(QList< QStaticPlugin >::iterator const * this_ptr, QList< QStaticPlugin >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStorageInfo_iterator_operator__6(QList< QStorageInfo >::iterator const * this_ptr, QList< QStorageInfo >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNamespaceDeclaration_iterator_operator__6(QList< QXmlStreamNamespaceDeclaration >::iterator const * this_ptr, QList< QXmlStreamNamespaceDeclaration >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNotationDeclaration_iterator_operator__6(QList< QXmlStreamNotationDeclaration >::iterator const * this_ptr, QList< QXmlStreamNotationDeclaration >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamEntityDeclaration_iterator_operator__6(QList< QXmlStreamEntityDeclaration >::iterator const * this_ptr, QList< QXmlStreamEntityDeclaration >::const_iterator const * o) {
  return this_ptr->operator==(*o);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QItemSelectionRange_iterator_operator_3(QList< QItemSelectionRange >::iterator const * this_ptr, QList< QItemSelectionRange >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QObject_ptr_iterator_operator_3(QList< QObject * >::iterator const * this_ptr, QList< QObject * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QString_iterator_operator_3(QList< QString >::iterator const * this_ptr, QList< QString >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamAttribute_iterator_operator_3(QList< QXmlStreamAttribute >::iterator const * this_ptr, QList< QXmlStreamAttribute >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QByteArray_iterator_operator_3(QList< QByteArray >::iterator const * this_ptr, QList< QByteArray >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_unsigned_int_iterator_operator_3(QList< unsigned int >::iterator const * this_ptr, QList< unsigned int >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStringView_iterator_operator_3(QList< QStringView >::iterator const * this_ptr, QList< QStringView >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfo_iterator_operator_3(QList< QAbstractEventDispatcher::TimerInfo >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfo >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfoV2_iterator_operator_3(QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfoV2 >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QVariant_iterator_operator_3(QList< QVariant >::iterator const * this_ptr, QList< QVariant >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QModelIndex_iterator_operator_3(QList< QModelIndex >::iterator const * this_ptr, QList< QModelIndex >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_int_iterator_operator_3(QList< int >::iterator const * this_ptr, QList< int >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPersistentModelIndex_iterator_operator_3(QList< QPersistentModelIndex >::iterator const * this_ptr, QList< QPersistentModelIndex >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_Qt_DayOfWeek_iterator_operator_3(QList< Qt::DayOfWeek >::iterator const * this_ptr, QList< Qt::DayOfWeek >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_iterator_operator_3(QList< QLocale >::iterator const * this_ptr, QList< QLocale >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_Country_iterator_operator_3(QList< QLocale::Country >::iterator const * this_ptr, QList< QLocale::Country >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QUrl_iterator_operator_3(QList< QUrl >::iterator const * this_ptr, QList< QUrl >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCborValue_iterator_operator_3(QList< QCborValue >::iterator const * this_ptr, QList< QCborValue >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCommandLineOption_iterator_operator_3(QList< QCommandLineOption >::iterator const * this_ptr, QList< QCommandLineOption >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractItemModel_ptr_iterator_operator_3(QList< QAbstractItemModel * >::iterator const * this_ptr, QList< QAbstractItemModel * >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QTimeZone_OffsetData_iterator_operator_3(QList< QTimeZone::OffsetData >::iterator const * this_ptr, QList< QTimeZone::OffsetData >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QFileInfo_iterator_operator_3(QList< QFileInfo >::iterator const * this_ptr, QList< QFileInfo >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPointF_iterator_operator_3(QList< QPointF >::iterator const * this_ptr, QList< QPointF >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QMimeType_iterator_operator_3(QList< QMimeType >::iterator const * this_ptr, QList< QMimeType >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStaticPlugin_iterator_operator_3(QList< QStaticPlugin >::iterator const * this_ptr, QList< QStaticPlugin >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStorageInfo_iterator_operator_3(QList< QStorageInfo >::iterator const * this_ptr, QList< QStorageInfo >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNamespaceDeclaration_iterator_operator_3(QList< QXmlStreamNamespaceDeclaration >::iterator const * this_ptr, QList< QXmlStreamNamespaceDeclaration >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNotationDeclaration_iterator_operator_3(QList< QXmlStreamNotationDeclaration >::iterator const * this_ptr, QList< QXmlStreamNotationDeclaration >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamEntityDeclaration_iterator_operator_3(QList< QXmlStreamEntityDeclaration >::iterator const * this_ptr, QList< QXmlStreamEntityDeclaration >::const_iterator const * other) {
  return this_ptr->operator<(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QItemSelectionRange_iterator_operator__8(QList< QItemSelectionRange >::iterator const * this_ptr, QList< QItemSelectionRange >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QObject_ptr_iterator_operator__8(QList< QObject * >::iterator const * this_ptr, QList< QObject * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QString_iterator_operator__8(QList< QString >::iterator const * this_ptr, QList< QString >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamAttribute_iterator_operator__8(QList< QXmlStreamAttribute >::iterator const * this_ptr, QList< QXmlStreamAttribute >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QByteArray_iterator_operator__8(QList< QByteArray >::iterator const * this_ptr, QList< QByteArray >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_unsigned_int_iterator_operator__8(QList< unsigned int >::iterator const * this_ptr, QList< unsigned int >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStringView_iterator_operator__8(QList< QStringView >::iterator const * this_ptr, QList< QStringView >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfo_iterator_operator__8(QList< QAbstractEventDispatcher::TimerInfo >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfo >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractEventDispatcher_TimerInfoV2_iterator_operator__8(QList< QAbstractEventDispatcher::TimerInfoV2 >::iterator const * this_ptr, QList< QAbstractEventDispatcher::TimerInfoV2 >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QVariant_iterator_operator__8(QList< QVariant >::iterator const * this_ptr, QList< QVariant >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QModelIndex_iterator_operator__8(QList< QModelIndex >::iterator const * this_ptr, QList< QModelIndex >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_int_iterator_operator__8(QList< int >::iterator const * this_ptr, QList< int >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPersistentModelIndex_iterator_operator__8(QList< QPersistentModelIndex >::iterator const * this_ptr, QList< QPersistentModelIndex >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_Qt_DayOfWeek_iterator_operator__8(QList< Qt::DayOfWeek >::iterator const * this_ptr, QList< Qt::DayOfWeek >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_iterator_operator__8(QList< QLocale >::iterator const * this_ptr, QList< QLocale >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QLocale_Country_iterator_operator__8(QList< QLocale::Country >::iterator const * this_ptr, QList< QLocale::Country >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QUrl_iterator_operator__8(QList< QUrl >::iterator const * this_ptr, QList< QUrl >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCborValue_iterator_operator__8(QList< QCborValue >::iterator const * this_ptr, QList< QCborValue >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QCommandLineOption_iterator_operator__8(QList< QCommandLineOption >::iterator const * this_ptr, QList< QCommandLineOption >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QAbstractItemModel_ptr_iterator_operator__8(QList< QAbstractItemModel * >::iterator const * this_ptr, QList< QAbstractItemModel * >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QTimeZone_OffsetData_iterator_operator__8(QList< QTimeZone::OffsetData >::iterator const * this_ptr, QList< QTimeZone::OffsetData >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QFileInfo_iterator_operator__8(QList< QFileInfo >::iterator const * this_ptr, QList< QFileInfo >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QPointF_iterator_operator__8(QList< QPointF >::iterator const * this_ptr, QList< QPointF >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QMimeType_iterator_operator__8(QList< QMimeType >::iterator const * this_ptr, QList< QMimeType >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStaticPlugin_iterator_operator__8(QList< QStaticPlugin >::iterator const * this_ptr, QList< QStaticPlugin >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QStorageInfo_iterator_operator__8(QList< QStorageInfo >::iterator const * this_ptr, QList< QStorageInfo >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNamespaceDeclaration_iterator_operator__8(QList< QXmlStreamNamespaceDeclaration >::iterator const * this_ptr, QList< QXmlStreamNamespaceDeclaration >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamNotationDeclaration_iterator_operator__8(QList< QXmlStreamNotationDeclaration >::iterator const * this_ptr, QList< QXmlStreamNotationDeclaration >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QXmlStreamEntityDeclaration_iterator_operator__8(QList< QXmlStreamEntityDeclaration >::iterator const * this_ptr, QList< QXmlStreamEntityDeclaration >::const_iterator const * other) {
  return this_ptr->operator<=(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QItemSelectionRange_iterator_operator_4(QList< QItemSelectionRange >::iterator const * this_ptr, QList< QItemSelectionRange >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QObject_ptr_iterator_operator_4(QList< QObject * >::iterator const * this_ptr, QList< QObject * >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


RITUAL_EXPORT bool ctr_qt_core_ffi_QList_QString_iterator_operator_4(QList< QString >::iterator const * this_ptr, QList< QString >::const_iterator const * other) {
  return this_ptr->operator>(*other);
}


} // extern "C"
