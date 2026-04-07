#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! C++ namespace: <span style='color: green;'>```QtTsan```</span>

/// Calls C++ function: <span style='color: green;'>```void QtTsan::futexAcquire(void* arg1, void* arg2 = …)```</span>.
#[inline(always)]
pub unsafe fn futex_acquire_2a(arg1: *mut ::std::ffi::c_void, arg2: *mut ::std::ffi::c_void) {
    crate::__ffi::ctr_qt_core_ffi_QtTsan_futexAcquire(arg1, arg2)
}

/// Calls C++ function: <span style='color: green;'>```void QtTsan::futexAcquire(void* arg1)```</span>.
#[inline(always)]
pub unsafe fn futex_acquire_1a(arg1: *mut ::std::ffi::c_void) {
    crate::__ffi::ctr_qt_core_ffi_QtTsan_futexAcquire1(arg1)
}

/// Calls C++ function: <span style='color: green;'>```void QtTsan::futexRelease(void* arg1, void* arg2 = …)```</span>.
#[inline(always)]
pub unsafe fn futex_release_2a(arg1: *mut ::std::ffi::c_void, arg2: *mut ::std::ffi::c_void) {
    crate::__ffi::ctr_qt_core_ffi_QtTsan_futexRelease(arg1, arg2)
}

/// Calls C++ function: <span style='color: green;'>```void QtTsan::futexRelease(void* arg1)```</span>.
#[inline(always)]
pub unsafe fn futex_release_1a(arg1: *mut ::std::ffi::c_void) {
    crate::__ffi::ctr_qt_core_ffi_QtTsan_futexRelease1(arg1)
}

/// Calls C++ function: <span style='color: green;'>```void QtTsan::mutexPostLock(void* arg1, unsigned int arg2, int arg3)```</span>.
#[inline(always)]
pub unsafe fn mutex_post_lock(
    arg1: *mut ::std::ffi::c_void,
    arg2: ::std::os::raw::c_uint,
    arg3: ::std::os::raw::c_int,
) {
    crate::__ffi::ctr_qt_core_ffi_QtTsan_mutexPostLock(arg1, arg2, arg3)
}

/// Calls C++ function: <span style='color: green;'>```void QtTsan::mutexPostUnlock(void* arg1, unsigned int arg2)```</span>.
#[inline(always)]
pub unsafe fn mutex_post_unlock(arg1: *mut ::std::ffi::c_void, arg2: ::std::os::raw::c_uint) {
    crate::__ffi::ctr_qt_core_ffi_QtTsan_mutexPostUnlock(arg1, arg2)
}

/// Calls C++ function: <span style='color: green;'>```void QtTsan::mutexPreLock(void* arg1, unsigned int arg2)```</span>.
#[inline(always)]
pub unsafe fn mutex_pre_lock(arg1: *mut ::std::ffi::c_void, arg2: ::std::os::raw::c_uint) {
    crate::__ffi::ctr_qt_core_ffi_QtTsan_mutexPreLock(arg1, arg2)
}

/// Calls C++ function: <span style='color: green;'>```void QtTsan::mutexPreUnlock(void* arg1, unsigned int arg2)```</span>.
#[inline(always)]
pub unsafe fn mutex_pre_unlock(arg1: *mut ::std::ffi::c_void, arg2: ::std::os::raw::c_uint) {
    crate::__ffi::ctr_qt_core_ffi_QtTsan_mutexPreUnlock(arg1, arg2)
}
