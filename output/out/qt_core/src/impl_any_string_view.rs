//! Implements conversions from Qt string types to QAnyStringView.
//!
//! In Qt6, many methods that previously accepted `const QString&` now accept
//! `QAnyStringView`, which is implicitly constructible from QString, QByteArray,
//! QLatin1String, and QStringView in C++.
//!
//! These `StaticUpcast` implementations allow passing these types directly to
//! methods expecting `impl CastInto<Ref<QAnyStringView>>`.

use crate::{QAnyStringView, QByteArray, QLatin1String, QString, QStringView};
use cpp_core::{Ptr, StaticUpcast};

impl StaticUpcast<QAnyStringView> for QString {
    unsafe fn static_upcast(ptr: Ptr<Self>) -> Ptr<QAnyStringView> {
        if ptr.is_null() {
            return Ptr::null();
        }
        Ptr::from_raw(
            crate::__ffi::ctr_qt_core_ffi_QAnyStringView_QAnyStringView2(ptr.as_raw_ptr()),
        )
    }
}

impl StaticUpcast<QAnyStringView> for QByteArray {
    unsafe fn static_upcast(ptr: Ptr<Self>) -> Ptr<QAnyStringView> {
        if ptr.is_null() {
            return Ptr::null();
        }
        Ptr::from_raw(
            crate::__ffi::ctr_qt_core_ffi_QAnyStringView_QAnyStringView1(ptr.as_raw_ptr()),
        )
    }
}

impl StaticUpcast<QAnyStringView> for QLatin1String {
    unsafe fn static_upcast(ptr: Ptr<Self>) -> Ptr<QAnyStringView> {
        if ptr.is_null() {
            return Ptr::null();
        }
        Ptr::from_raw(
            crate::__ffi::ctr_qt_core_ffi_QAnyStringView_QAnyStringView3(ptr.as_raw_ptr()),
        )
    }
}

impl StaticUpcast<QAnyStringView> for QStringView {
    unsafe fn static_upcast(ptr: Ptr<Self>) -> Ptr<QAnyStringView> {
        if ptr.is_null() {
            return Ptr::null();
        }
        Ptr::from_raw(
            crate::__ffi::ctr_qt_core_ffi_QAnyStringView_QAnyStringView4(ptr.as_raw_ptr()),
        )
    }
}
