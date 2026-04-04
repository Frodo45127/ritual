#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! C++ namespace: <span style='color: green;'>```q20```</span>

pub mod identity {
    //! C++ type: <span style='color: green;'>```q20::identity```</span>

    /// C++ class: <span style='color: green;'>```q20::identity::is_transparent```</span>.
    #[repr(C)]
    pub struct IsTransparent {
        _unused: u8,
    }
    impl IsTransparent {
        /// Calls C++ function: <span style='color: green;'>```q20::identity::is_transparent& q20::identity::is_transparent::operator=(const q20::identity::is_transparent& other)```</span>.
        #[inline(always)]
        pub unsafe fn copy_from(
            &self,
            other: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::q20::identity::IsTransparent>>,
        ) -> ::cpp_core::Ref<crate::q20::identity::IsTransparent> {
            let ffi_result = {
                crate::__ffi::ctr_qt_core_ffi_q20_identity_is_transparent_operator_(self as *const crate::q20::identity::IsTransparent as *mut crate::q20::identity::IsTransparent, ::cpp_core::CastInto::<::cpp_core::Ref<crate::q20::identity::IsTransparent>>::cast_into(other).as_raw_ptr())
            };
            ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
        }

        /// Calls C++ function: <span style='color: green;'>```[constructor] void q20::identity::is_transparent::is_transparent()```</span>.
        #[inline(always)]
        pub unsafe fn new() -> ::cpp_core::CppBox<crate::q20::identity::IsTransparent> {
            let ffi_result =
                { crate::__ffi::ctr_qt_core_ffi_q20_identity_is_transparent_is_transparent() };
            ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
        }

        /// Calls C++ function: <span style='color: green;'>```[constructor] void q20::identity::is_transparent::is_transparent(const q20::identity::is_transparent& other)```</span>.
        #[inline(always)]
        pub unsafe fn new_copy(
            other: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::q20::identity::IsTransparent>>,
        ) -> ::cpp_core::CppBox<crate::q20::identity::IsTransparent> {
            let ffi_result = {
                crate::__ffi::ctr_qt_core_ffi_q20_identity_is_transparent_is_transparent1(::cpp_core::CastInto::<::cpp_core::Ref<crate::q20::identity::IsTransparent>>::cast_into(other).as_raw_ptr())
            };
            ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
        }
    }

    impl ::cpp_core::CppDeletable for crate::q20::identity::IsTransparent {
        /// Calls C++ function: <span style='color: green;'>```[destructor] void q20::identity::is_transparent::~is_transparent()```</span>.
        #[inline(always)]
        unsafe fn delete(&self) {
            crate::__ffi::ctr_qt_core_ffi_q20_identity_is_transparent_dis_transparent(
                self as *const crate::q20::identity::IsTransparent
                    as *mut crate::q20::identity::IsTransparent,
            )
        }
    }
}
/// C++ class: <span style='color: green;'>```q20::identity```</span>.
#[repr(C)]
pub struct Identity {
    _unused: u8,
}
impl Identity {
    /// Calls C++ function: <span style='color: green;'>```q20::identity& q20::identity::operator=(const q20::identity& other)```</span>.
    #[inline(always)]
    pub unsafe fn copy_from(
        &self,
        other: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::q20::Identity>>,
    ) -> ::cpp_core::Ref<crate::q20::Identity> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_q20_identity_operator_(
                self as *const crate::q20::Identity as *mut crate::q20::Identity,
                ::cpp_core::CastInto::<::cpp_core::Ref<crate::q20::Identity>>::cast_into(other)
                    .as_raw_ptr(),
            )
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void q20::identity::identity()```</span>.
    #[inline(always)]
    pub unsafe fn new() -> ::cpp_core::CppBox<crate::q20::Identity> {
        let ffi_result = { crate::__ffi::ctr_qt_core_ffi_q20_identity_identity() };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void q20::identity::identity(const q20::identity& other)```</span>.
    #[inline(always)]
    pub unsafe fn new_copy(
        other: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::q20::Identity>>,
    ) -> ::cpp_core::CppBox<crate::q20::Identity> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_q20_identity_identity1(
                ::cpp_core::CastInto::<::cpp_core::Ref<crate::q20::Identity>>::cast_into(other)
                    .as_raw_ptr(),
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }
}

impl ::cpp_core::CppDeletable for crate::q20::Identity {
    /// Calls C++ function: <span style='color: green;'>```[destructor] void q20::identity::~identity()```</span>.
    #[inline(always)]
    unsafe fn delete(&self) {
        crate::__ffi::ctr_qt_core_ffi_q20_identity_didentity(
            self as *const crate::q20::Identity as *mut crate::q20::Identity,
        )
    }
}

/// Calls C++ function: <span style='color: green;'>```bool q20::is_constant_evaluated()```</span>.
#[inline(always)]
pub unsafe fn is_constant_evaluated() -> bool {
    crate::__ffi::ctr_qt_core_ffi_q20_is_constant_evaluated()
}
