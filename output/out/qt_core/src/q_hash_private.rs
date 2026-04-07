#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! C++ namespace: <span style='color: green;'>```QHashPrivate```</span>

/// C++ class: <span style='color: green;'>```QHashPrivate::SpanConstants```</span>.
#[repr(C)]
pub struct SpanConstants {
    _unused: u8,
}
impl SpanConstants {
    /// Calls C++ function: <span style='color: green;'>```QHashPrivate::SpanConstants& QHashPrivate::SpanConstants::operator=(const QHashPrivate::SpanConstants& other)```</span>.
    #[inline(always)]
    pub unsafe fn copy_from(
        &self,
        other: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::q_hash_private::SpanConstants>>,
    ) -> ::cpp_core::Ref<crate::q_hash_private::SpanConstants> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QHashPrivate_SpanConstants_operator_(self as *const crate::q_hash_private::SpanConstants as *mut crate::q_hash_private::SpanConstants, ::cpp_core::CastInto::<::cpp_core::Ref<crate::q_hash_private::SpanConstants>>::cast_into(other).as_raw_ptr())
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Returns the value of the <span style='color: green;'>```LocalBucketMask```</span> field.
    #[inline(always)]
    pub unsafe fn local_bucket_mask() -> ::std::os::raw::c_ulonglong {
        crate::__ffi::ctr_qt_core_ffi_QHashPrivate_SpanConstants_LocalBucketMask()
    }

    /// Returns the value of the <span style='color: green;'>```NEntries```</span> field.
    #[inline(always)]
    pub unsafe fn n_entries() -> ::std::os::raw::c_ulonglong {
        crate::__ffi::ctr_qt_core_ffi_QHashPrivate_SpanConstants_NEntries()
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QHashPrivate::SpanConstants::SpanConstants()```</span>.
    #[inline(always)]
    pub unsafe fn new() -> ::cpp_core::CppBox<crate::q_hash_private::SpanConstants> {
        let ffi_result =
            { crate::__ffi::ctr_qt_core_ffi_QHashPrivate_SpanConstants_SpanConstants() };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QHashPrivate::SpanConstants::SpanConstants(const QHashPrivate::SpanConstants& other)```</span>.
    #[inline(always)]
    pub unsafe fn new_copy(
        other: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::q_hash_private::SpanConstants>>,
    ) -> ::cpp_core::CppBox<crate::q_hash_private::SpanConstants> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QHashPrivate_SpanConstants_SpanConstants1(::cpp_core::CastInto::<::cpp_core::Ref<crate::q_hash_private::SpanConstants>>::cast_into(other).as_raw_ptr())
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Returns the value of the <span style='color: green;'>```SpanShift```</span> field.
    #[inline(always)]
    pub unsafe fn span_shift() -> ::std::os::raw::c_ulonglong {
        crate::__ffi::ctr_qt_core_ffi_QHashPrivate_SpanConstants_SpanShift()
    }

    /// Returns the value of the <span style='color: green;'>```UnusedEntry```</span> field.
    #[inline(always)]
    pub unsafe fn unused_entry() -> ::std::os::raw::c_ulonglong {
        crate::__ffi::ctr_qt_core_ffi_QHashPrivate_SpanConstants_UnusedEntry()
    }
}

pub mod growth_policy;
impl ::cpp_core::CppDeletable for crate::q_hash_private::SpanConstants {
    /// Calls C++ function: <span style='color: green;'>```[destructor] void QHashPrivate::SpanConstants::~SpanConstants()```</span>.
    #[inline(always)]
    unsafe fn delete(&self) {
        crate::__ffi::ctr_qt_core_ffi_QHashPrivate_SpanConstants_dSpanConstants(
            self as *const crate::q_hash_private::SpanConstants
                as *mut crate::q_hash_private::SpanConstants,
        )
    }
}

/// Calls C++ function: <span style='color: green;'>```unsigned long long QHashPrivate::hash(unsigned long long key, unsigned long long seed)```</span>.
#[inline(always)]
pub unsafe fn hash(
    key: ::std::os::raw::c_ulonglong,
    seed: ::std::os::raw::c_ulonglong,
) -> ::std::os::raw::c_ulonglong {
    crate::__ffi::ctr_qt_core_ffi_QHashPrivate_hash(key, seed)
}
