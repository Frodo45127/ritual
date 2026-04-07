#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! C++ namespace: <span style='color: green;'>```QtFuture```</span>

/// C++ enum: <span style='color: green;'>```QtFuture::Launch```</span>.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(transparent)]
pub struct Launch(::std::os::raw::c_int);

impl From<::std::os::raw::c_int> for Launch {
    fn from(value: ::std::os::raw::c_int) -> Self {
        Launch(value)
    }
}

impl From<Launch> for ::std::os::raw::c_int {
    fn from(value: Launch) -> Self {
        value.0
    }
}

impl Launch {
    pub fn to_int(&self) -> ::std::os::raw::c_int {
        self.0
    }
}

impl Launch {
    /// C++ enum variant: <span style='color: green;'>```Sync = 0```</span>
    #[allow(non_upper_case_globals)]
    pub const Sync: crate::qt_future::Launch = crate::qt_future::Launch(0);
    /// C++ enum variant: <span style='color: green;'>```Async = 1```</span>
    #[allow(non_upper_case_globals)]
    pub const Async: crate::qt_future::Launch = crate::qt_future::Launch(1);
    /// C++ enum variant: <span style='color: green;'>```Inherit = 2```</span>
    #[allow(non_upper_case_globals)]
    pub const Inherit: crate::qt_future::Launch = crate::qt_future::Launch(2);
}

/// Calls C++ function: <span style='color: green;'>```QFuture<void> QtFuture::makeExceptionalFuture<void>(const QException& exception)```</span>.
#[inline(always)]
pub unsafe fn make_exceptional_future(
    exception: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QException>>,
) -> ::cpp_core::CppBox<crate::QFutureOf> {
    let ffi_result = {
        crate::__ffi::ctr_qt_core_ffi_QtFuture_makeExceptionalFuture_void1(
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QException>>::cast_into(exception)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QFuture<void> QtFuture::makeReadyFuture<void>()```</span>.
#[inline(always)]
pub unsafe fn make_ready_future() -> ::cpp_core::CppBox<crate::QFutureOf> {
    let ffi_result = { crate::__ffi::ctr_qt_core_ffi_QtFuture_makeReadyFuture_void() };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}

/// Calls C++ function: <span style='color: green;'>```QFuture<void> QtFuture::makeReadyVoidFuture()```</span>.
#[inline(always)]
pub unsafe fn make_ready_void_future() -> ::cpp_core::CppBox<crate::QFutureOf> {
    let ffi_result = { crate::__ffi::ctr_qt_core_ffi_QtFuture_makeReadyVoidFuture() };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}
