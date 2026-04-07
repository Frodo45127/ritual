#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! C++ namespace: <span style='color: green;'>```QtMetaContainerPrivate```</span>

/// C++ enum: <span style='color: green;'>```QtMetaContainerPrivate::IteratorCapability```</span>.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(transparent)]
pub struct IteratorCapability(::std::os::raw::c_int);

impl From<::std::os::raw::c_int> for IteratorCapability {
    fn from(value: ::std::os::raw::c_int) -> Self {
        IteratorCapability(value)
    }
}

impl From<IteratorCapability> for ::std::os::raw::c_int {
    fn from(value: IteratorCapability) -> Self {
        value.0
    }
}

impl IteratorCapability {
    pub fn to_int(&self) -> ::std::os::raw::c_int {
        self.0
    }
}

impl IteratorCapability {
    /// C++ enum variant: <span style='color: green;'>```InputCapability = 1```</span>
    #[allow(non_upper_case_globals)]
    pub const InputCapability: crate::qt_meta_container_private::IteratorCapability =
        crate::qt_meta_container_private::IteratorCapability(1);
    /// C++ enum variant: <span style='color: green;'>```ForwardCapability = 2```</span>
    #[allow(non_upper_case_globals)]
    pub const ForwardCapability: crate::qt_meta_container_private::IteratorCapability =
        crate::qt_meta_container_private::IteratorCapability(2);
    /// C++ enum variant: <span style='color: green;'>```BiDirectionalCapability = 4```</span>
    #[allow(non_upper_case_globals)]
    pub const BiDirectionalCapability: crate::qt_meta_container_private::IteratorCapability =
        crate::qt_meta_container_private::IteratorCapability(4);
    /// C++ enum variant: <span style='color: green;'>```RandomAccessCapability = 8```</span>
    #[allow(non_upper_case_globals)]
    pub const RandomAccessCapability: crate::qt_meta_container_private::IteratorCapability =
        crate::qt_meta_container_private::IteratorCapability(8);
}

/// C++ enum: <span style='color: green;'>```QtMetaContainerPrivate::AddRemoveCapability```</span>.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(transparent)]
pub struct AddRemoveCapability(::std::os::raw::c_int);

impl From<::std::os::raw::c_int> for AddRemoveCapability {
    fn from(value: ::std::os::raw::c_int) -> Self {
        AddRemoveCapability(value)
    }
}

impl From<AddRemoveCapability> for ::std::os::raw::c_int {
    fn from(value: AddRemoveCapability) -> Self {
        value.0
    }
}

impl AddRemoveCapability {
    pub fn to_int(&self) -> ::std::os::raw::c_int {
        self.0
    }
}

impl AddRemoveCapability {
    /// C++ enum variant: <span style='color: green;'>```CanAddAtBegin = 1```</span>
    #[allow(non_upper_case_globals)]
    pub const CanAddAtBegin: crate::qt_meta_container_private::AddRemoveCapability =
        crate::qt_meta_container_private::AddRemoveCapability(1);
    /// C++ enum variant: <span style='color: green;'>```CanRemoveAtBegin = 2```</span>
    #[allow(non_upper_case_globals)]
    pub const CanRemoveAtBegin: crate::qt_meta_container_private::AddRemoveCapability =
        crate::qt_meta_container_private::AddRemoveCapability(2);
    /// C++ enum variant: <span style='color: green;'>```CanAddAtEnd = 4```</span>
    #[allow(non_upper_case_globals)]
    pub const CanAddAtEnd: crate::qt_meta_container_private::AddRemoveCapability =
        crate::qt_meta_container_private::AddRemoveCapability(4);
    /// C++ enum variant: <span style='color: green;'>```CanRemoveAtEnd = 8```</span>
    #[allow(non_upper_case_globals)]
    pub const CanRemoveAtEnd: crate::qt_meta_container_private::AddRemoveCapability =
        crate::qt_meta_container_private::AddRemoveCapability(8);
}

pub mod q_meta_container_interface {
    //! C++ type: <span style='color: green;'>```QtMetaContainerPrivate::QMetaContainerInterface```</span>

    /// C++ enum: <span style='color: green;'>```QtMetaContainerPrivate::QMetaContainerInterface::Position```</span>.
    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    #[repr(transparent)]
    pub struct Position(::std::os::raw::c_int);

    impl From<::std::os::raw::c_int> for Position {
        fn from(value: ::std::os::raw::c_int) -> Self {
            Position(value)
        }
    }

    impl From<Position> for ::std::os::raw::c_int {
        fn from(value: Position) -> Self {
            value.0
        }
    }

    impl Position {
        pub fn to_int(&self) -> ::std::os::raw::c_int {
            self.0
        }
    }

    impl Position {
        /// C++ enum variant: <span style='color: green;'>```AtBegin = 0```</span>
        #[allow(non_upper_case_globals)]
        pub const AtBegin: crate::qt_meta_container_private::q_meta_container_interface::Position =
            crate::qt_meta_container_private::q_meta_container_interface::Position(0);
        /// C++ enum variant: <span style='color: green;'>```AtEnd = 1```</span>
        #[allow(non_upper_case_globals)]
        pub const AtEnd: crate::qt_meta_container_private::q_meta_container_interface::Position =
            crate::qt_meta_container_private::q_meta_container_interface::Position(1);
        /// C++ enum variant: <span style='color: green;'>```Unspecified = 2```</span>
        #[allow(non_upper_case_globals)]
        pub const Unspecified:
            crate::qt_meta_container_private::q_meta_container_interface::Position =
            crate::qt_meta_container_private::q_meta_container_interface::Position(2);
    }
}
/// C++ class: <span style='color: green;'>```QtMetaContainerPrivate::QMetaContainerInterface```</span>.
#[repr(C)]
pub struct QMetaContainerInterface {
    _unused: u8,
}
impl QMetaContainerInterface {
    /// Returns the value of the <span style='color: green;'>```advanceConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn advance_const_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void, ::std::os::raw::c_longlong)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_advanceConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface)
    }

    /// Returns the value of the <span style='color: green;'>```advanceIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn advance_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void, ::std::os::raw::c_longlong)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_advanceIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface)
    }

    /// Returns the value of the <span style='color: green;'>```clearFn```</span> field.
    #[inline(always)]
    pub unsafe fn clear_fn(&self) -> ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)> {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_clearFn(
            self as *const crate::qt_meta_container_private::QMetaContainerInterface,
        )
    }

    /// Returns the value of the <span style='color: green;'>```compareConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn compare_const_iterator_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(*const ::std::ffi::c_void, *const ::std::ffi::c_void) -> bool,
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_compareConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface)
    }

    /// Returns the value of the <span style='color: green;'>```compareIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn compare_iterator_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(*const ::std::ffi::c_void, *const ::std::ffi::c_void) -> bool,
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_compareIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface)
    }

    /// Returns the value of the <span style='color: green;'>```copyConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn copy_const_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void, *const ::std::ffi::c_void)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_copyConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface)
    }

    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::QMetaContainerInterface& QtMetaContainerPrivate::QMetaContainerInterface::operator=(const QtMetaContainerPrivate::QMetaContainerInterface& other)```</span>.
    #[inline(always)]
    pub unsafe fn copy_from(
        &self,
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::qt_meta_container_private::QMetaContainerInterface>,
        >,
    ) -> ::cpp_core::Ref<crate::qt_meta_container_private::QMetaContainerInterface> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_operator_(
                self as *const crate::qt_meta_container_private::QMetaContainerInterface
                    as *mut crate::qt_meta_container_private::QMetaContainerInterface,
                ::cpp_core::CastInto::<
                    ::cpp_core::Ref<crate::qt_meta_container_private::QMetaContainerInterface>,
                >::cast_into(other)
                .as_raw_ptr(),
            )
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Returns the value of the <span style='color: green;'>```copyIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn copy_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void, *const ::std::ffi::c_void)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_copyIteratorFn(
            self as *const crate::qt_meta_container_private::QMetaContainerInterface,
        )
    }

    /// Returns the value of the <span style='color: green;'>```createConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn create_const_iterator_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(
            *const ::std::ffi::c_void,
            crate::qt_meta_container_private::q_meta_container_interface::Position,
        ) -> *mut ::std::ffi::c_void,
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_createConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface)
    }

    /// Returns the value of the <span style='color: green;'>```createIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn create_iterator_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(
            *mut ::std::ffi::c_void,
            crate::qt_meta_container_private::q_meta_container_interface::Position,
        ) -> *mut ::std::ffi::c_void,
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_createIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface)
    }

    /// Returns the value of the <span style='color: green;'>```destroyConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn destroy_const_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*const ::std::ffi::c_void)> {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_destroyConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface)
    }

    /// Returns the value of the <span style='color: green;'>```destroyIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn destroy_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*const ::std::ffi::c_void)> {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_destroyIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface)
    }

    /// Returns the value of the <span style='color: green;'>```diffConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn diff_const_iterator_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(
            *const ::std::ffi::c_void,
            *const ::std::ffi::c_void,
        ) -> ::std::os::raw::c_longlong,
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_diffConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface)
    }

    /// Returns the value of the <span style='color: green;'>```diffIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn diff_iterator_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(
            *const ::std::ffi::c_void,
            *const ::std::ffi::c_void,
        ) -> ::std::os::raw::c_longlong,
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_diffIteratorFn(
            self as *const crate::qt_meta_container_private::QMetaContainerInterface,
        )
    }

    /// Returns a reference to the <span style='color: green;'>```iteratorCapabilities```</span> field.
    #[inline(always)]
    pub unsafe fn iterator_capabilities(
        &self,
    ) -> crate::QFlags<crate::qt_meta_container_private::IteratorCapability> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_iteratorCapabilities(self as *const crate::qt_meta_container_private::QMetaContainerInterface)
        };
        crate::QFlags::from(ffi_result)
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::QMetaContainerInterface::QMetaContainerInterface()```</span>.
    #[inline(always)]
    pub unsafe fn new(
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::QMetaContainerInterface> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_QMetaContainerInterface()
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::QMetaContainerInterface::QMetaContainerInterface(const QtMetaContainerPrivate::QMetaContainerInterface& other)```</span>.
    #[inline(always)]
    pub unsafe fn new_copy(
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::qt_meta_container_private::QMetaContainerInterface>,
        >,
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::QMetaContainerInterface> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_QMetaContainerInterface1(::cpp_core::CastInto::<::cpp_core::Ref<crate::qt_meta_container_private::QMetaContainerInterface>>::cast_into(other).as_raw_ptr())
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Returns the value of the <span style='color: green;'>```revision```</span> field.
    #[inline(always)]
    pub unsafe fn revision(&self) -> ::std::os::raw::c_ushort {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_revision(
            self as *const crate::qt_meta_container_private::QMetaContainerInterface,
        )
    }

    /// Sets the value of the <span style='color: green;'>```advanceConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_advance_const_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, ::std::os::raw::c_longlong),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_advanceConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface as *mut crate::qt_meta_container_private::QMetaContainerInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```advanceIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_advance_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, ::std::os::raw::c_longlong),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_advanceIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface as *mut crate::qt_meta_container_private::QMetaContainerInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```clearFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_clear_fn(
        &self,
        value: ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void)>,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_clearFn(
            self as *const crate::qt_meta_container_private::QMetaContainerInterface
                as *mut crate::qt_meta_container_private::QMetaContainerInterface,
            value,
        )
    }

    /// Sets the value of the <span style='color: green;'>```compareConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_compare_const_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*const ::std::ffi::c_void, *const ::std::ffi::c_void) -> bool,
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_compareConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface as *mut crate::qt_meta_container_private::QMetaContainerInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```compareIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_compare_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*const ::std::ffi::c_void, *const ::std::ffi::c_void) -> bool,
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_compareIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface as *mut crate::qt_meta_container_private::QMetaContainerInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```copyConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_copy_const_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const ::std::ffi::c_void),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_copyConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface as *mut crate::qt_meta_container_private::QMetaContainerInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```copyIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_copy_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const ::std::ffi::c_void),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_copyIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface as *mut crate::qt_meta_container_private::QMetaContainerInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```createConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_create_const_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(
                *const ::std::ffi::c_void,
                crate::qt_meta_container_private::q_meta_container_interface::Position,
            ) -> *mut ::std::ffi::c_void,
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_createConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface as *mut crate::qt_meta_container_private::QMetaContainerInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```createIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_create_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(
                *mut ::std::ffi::c_void,
                crate::qt_meta_container_private::q_meta_container_interface::Position,
            ) -> *mut ::std::ffi::c_void,
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_createIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface as *mut crate::qt_meta_container_private::QMetaContainerInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```destroyConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_destroy_const_iterator_fn(
        &self,
        value: ::std::option::Option<extern "C" fn(*const ::std::ffi::c_void)>,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_destroyConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface as *mut crate::qt_meta_container_private::QMetaContainerInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```destroyIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_destroy_iterator_fn(
        &self,
        value: ::std::option::Option<extern "C" fn(*const ::std::ffi::c_void)>,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_destroyIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface as *mut crate::qt_meta_container_private::QMetaContainerInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```diffConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_diff_const_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(
                *const ::std::ffi::c_void,
                *const ::std::ffi::c_void,
            ) -> ::std::os::raw::c_longlong,
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_diffConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface as *mut crate::qt_meta_container_private::QMetaContainerInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```diffIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_diff_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(
                *const ::std::ffi::c_void,
                *const ::std::ffi::c_void,
            ) -> ::std::os::raw::c_longlong,
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_diffIteratorFn(self as *const crate::qt_meta_container_private::QMetaContainerInterface as *mut crate::qt_meta_container_private::QMetaContainerInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```iteratorCapabilities```</span> field.
    #[inline(always)]
    pub unsafe fn set_iterator_capabilities(
        &self,
        value: crate::QFlags<crate::qt_meta_container_private::IteratorCapability>,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_iteratorCapabilities(self as *const crate::qt_meta_container_private::QMetaContainerInterface as *mut crate::qt_meta_container_private::QMetaContainerInterface, value.to_int())
    }

    /// Sets the value of the <span style='color: green;'>```revision```</span> field.
    #[inline(always)]
    pub unsafe fn set_revision(&self, value: ::std::os::raw::c_ushort) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_revision(
            self as *const crate::qt_meta_container_private::QMetaContainerInterface
                as *mut crate::qt_meta_container_private::QMetaContainerInterface,
            value,
        )
    }

    /// Sets the value of the <span style='color: green;'>```sizeFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_size_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*const ::std::ffi::c_void) -> ::std::os::raw::c_longlong,
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaContainerInterface_sizeFn(
            self as *const crate::qt_meta_container_private::QMetaContainerInterface
                as *mut crate::qt_meta_container_private::QMetaContainerInterface,
            value,
        )
    }

    /// Returns the value of the <span style='color: green;'>```sizeFn```</span> field.
    #[inline(always)]
    pub unsafe fn size_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*const ::std::ffi::c_void) -> ::std::os::raw::c_longlong>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_sizeFn(
            self as *const crate::qt_meta_container_private::QMetaContainerInterface,
        )
    }
}

/// C++ class: <span style='color: green;'>```QtMetaContainerPrivate::QMetaSequenceInterface```</span>.
#[repr(C)]
pub struct QMetaSequenceInterface {
    _unused: u8,
}
impl QMetaSequenceInterface {
    /// Returns a reference to the <span style='color: green;'>```addRemoveCapabilities```</span> field.
    #[inline(always)]
    pub unsafe fn add_remove_capabilities(
        &self,
    ) -> crate::QFlags<crate::qt_meta_container_private::AddRemoveCapability> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_addRemoveCapabilities(self as *const crate::qt_meta_container_private::QMetaSequenceInterface)
        };
        crate::QFlags::from(ffi_result)
    }

    /// Returns the value of the <span style='color: green;'>```addValueFn```</span> field.
    #[inline(always)]
    pub unsafe fn add_value_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(
            *mut ::std::ffi::c_void,
            *const ::std::ffi::c_void,
            crate::qt_meta_container_private::q_meta_container_interface::Position,
        ),
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_addValueFn(
            self as *const crate::qt_meta_container_private::QMetaSequenceInterface,
        )
    }

    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::QMetaSequenceInterface& QtMetaContainerPrivate::QMetaSequenceInterface::operator=(const QtMetaContainerPrivate::QMetaSequenceInterface& other)```</span>.
    #[inline(always)]
    pub unsafe fn copy_from(
        &self,
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::qt_meta_container_private::QMetaSequenceInterface>,
        >,
    ) -> ::cpp_core::Ref<crate::qt_meta_container_private::QMetaSequenceInterface> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_operator_(
                self as *const crate::qt_meta_container_private::QMetaSequenceInterface
                    as *mut crate::qt_meta_container_private::QMetaSequenceInterface,
                ::cpp_core::CastInto::<
                    ::cpp_core::Ref<crate::qt_meta_container_private::QMetaSequenceInterface>,
                >::cast_into(other)
                .as_raw_ptr(),
            )
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Returns the value of the <span style='color: green;'>```eraseRangeAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn erase_range_at_iterator_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(
            *mut ::std::ffi::c_void,
            *const ::std::ffi::c_void,
            *const ::std::ffi::c_void,
        ),
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_eraseRangeAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface)
    }

    /// Returns the value of the <span style='color: green;'>```eraseValueAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn erase_value_at_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void, *const ::std::ffi::c_void)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_eraseValueAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface)
    }

    /// Returns the value of the <span style='color: green;'>```insertValueAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn insert_value_at_iterator_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(
            *mut ::std::ffi::c_void,
            *const ::std::ffi::c_void,
            *const ::std::ffi::c_void,
        ),
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_insertValueAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface)
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::QMetaSequenceInterface::QMetaSequenceInterface()```</span>.
    #[inline(always)]
    pub unsafe fn new(
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::QMetaSequenceInterface> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_QMetaSequenceInterface()
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::QMetaSequenceInterface::QMetaSequenceInterface(const QtMetaContainerPrivate::QMetaSequenceInterface& other)```</span>.
    #[inline(always)]
    pub unsafe fn new_copy(
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::qt_meta_container_private::QMetaSequenceInterface>,
        >,
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::QMetaSequenceInterface> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_QMetaSequenceInterface1(::cpp_core::CastInto::<::cpp_core::Ref<crate::qt_meta_container_private::QMetaSequenceInterface>>::cast_into(other).as_raw_ptr())
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Returns the value of the <span style='color: green;'>```removeValueFn```</span> field.
    #[inline(always)]
    pub unsafe fn remove_value_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(
            *mut ::std::ffi::c_void,
            crate::qt_meta_container_private::q_meta_container_interface::Position,
        ),
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_removeValueFn(
            self as *const crate::qt_meta_container_private::QMetaSequenceInterface,
        )
    }

    /// Sets the value of the <span style='color: green;'>```addRemoveCapabilities```</span> field.
    #[inline(always)]
    pub unsafe fn set_add_remove_capabilities(
        &self,
        value: crate::QFlags<crate::qt_meta_container_private::AddRemoveCapability>,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_addRemoveCapabilities(self as *const crate::qt_meta_container_private::QMetaSequenceInterface as *mut crate::qt_meta_container_private::QMetaSequenceInterface, value.to_int())
    }

    /// Sets the value of the <span style='color: green;'>```addValueFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_add_value_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(
                *mut ::std::ffi::c_void,
                *const ::std::ffi::c_void,
                crate::qt_meta_container_private::q_meta_container_interface::Position,
            ),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_addValueFn(
            self as *const crate::qt_meta_container_private::QMetaSequenceInterface
                as *mut crate::qt_meta_container_private::QMetaSequenceInterface,
            value,
        )
    }

    /// Sets the value of the <span style='color: green;'>```eraseRangeAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_erase_range_at_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(
                *mut ::std::ffi::c_void,
                *const ::std::ffi::c_void,
                *const ::std::ffi::c_void,
            ),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_eraseRangeAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface as *mut crate::qt_meta_container_private::QMetaSequenceInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```eraseValueAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_erase_value_at_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const ::std::ffi::c_void),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_eraseValueAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface as *mut crate::qt_meta_container_private::QMetaSequenceInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```insertValueAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_insert_value_at_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(
                *mut ::std::ffi::c_void,
                *const ::std::ffi::c_void,
                *const ::std::ffi::c_void,
            ),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_insertValueAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface as *mut crate::qt_meta_container_private::QMetaSequenceInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```removeValueFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_remove_value_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(
                *mut ::std::ffi::c_void,
                crate::qt_meta_container_private::q_meta_container_interface::Position,
            ),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_removeValueFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface as *mut crate::qt_meta_container_private::QMetaSequenceInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```setValueAtIndexFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_set_value_at_index_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(
                *mut ::std::ffi::c_void,
                ::std::os::raw::c_longlong,
                *const ::std::ffi::c_void,
            ),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_setValueAtIndexFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface as *mut crate::qt_meta_container_private::QMetaSequenceInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```setValueAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_set_value_at_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*const ::std::ffi::c_void, *const ::std::ffi::c_void),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_setValueAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface as *mut crate::qt_meta_container_private::QMetaSequenceInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```valueAtConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_value_at_const_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*const ::std::ffi::c_void, *mut ::std::ffi::c_void),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_valueAtConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface as *mut crate::qt_meta_container_private::QMetaSequenceInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```valueAtIndexFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_value_at_index_fn_mut(
        &self,
        value: ::std::option::Option<
            extern "C" fn(
                *const ::std::ffi::c_void,
                ::std::os::raw::c_longlong,
                *mut ::std::ffi::c_void,
            ),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_valueAtIndexFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface as *mut crate::qt_meta_container_private::QMetaSequenceInterface, value)
    }

    /// Returns the value of the <span style='color: green;'>```setValueAtIndexFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_value_at_index_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(
            *mut ::std::ffi::c_void,
            ::std::os::raw::c_longlong,
            *const ::std::ffi::c_void,
        ),
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_setValueAtIndexFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface)
    }

    /// Sets the value of the <span style='color: green;'>```valueAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_value_at_iterator_fn_mut(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*const ::std::ffi::c_void, *mut ::std::ffi::c_void),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaSequenceInterface_valueAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface as *mut crate::qt_meta_container_private::QMetaSequenceInterface, value)
    }

    /// Returns the value of the <span style='color: green;'>```setValueAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_value_at_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*const ::std::ffi::c_void, *const ::std::ffi::c_void)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_setValueAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface)
    }

    /// Returns the value of the <span style='color: green;'>```valueAtConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn value_at_const_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*const ::std::ffi::c_void, *mut ::std::ffi::c_void)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_valueAtConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface)
    }

    /// Returns the value of the <span style='color: green;'>```valueAtIndexFn```</span> field.
    #[inline(always)]
    pub unsafe fn value_at_index_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(
            *const ::std::ffi::c_void,
            ::std::os::raw::c_longlong,
            *mut ::std::ffi::c_void,
        ),
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_valueAtIndexFn(
            self as *const crate::qt_meta_container_private::QMetaSequenceInterface,
        )
    }

    /// Returns the value of the <span style='color: green;'>```valueAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn value_at_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*const ::std::ffi::c_void, *mut ::std::ffi::c_void)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_valueAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaSequenceInterface)
    }
}

/// C++ class: <span style='color: green;'>```QtMetaContainerPrivate::QMetaAssociationInterface```</span>.
#[repr(C)]
pub struct QMetaAssociationInterface {
    _unused: u8,
}
impl QMetaAssociationInterface {
    /// Returns the value of the <span style='color: green;'>```containsKeyFn```</span> field.
    #[inline(always)]
    pub unsafe fn contains_key_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(*const ::std::ffi::c_void, *const ::std::ffi::c_void) -> bool,
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_containsKeyFn(
            self as *const crate::qt_meta_container_private::QMetaAssociationInterface,
        )
    }

    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::QMetaAssociationInterface& QtMetaContainerPrivate::QMetaAssociationInterface::operator=(const QtMetaContainerPrivate::QMetaAssociationInterface& other)```</span>.
    #[inline(always)]
    pub unsafe fn copy_from(
        &self,
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::qt_meta_container_private::QMetaAssociationInterface>,
        >,
    ) -> ::cpp_core::Ref<crate::qt_meta_container_private::QMetaAssociationInterface> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_operator_(
                self as *const crate::qt_meta_container_private::QMetaAssociationInterface
                    as *mut crate::qt_meta_container_private::QMetaAssociationInterface,
                ::cpp_core::CastInto::<
                    ::cpp_core::Ref<crate::qt_meta_container_private::QMetaAssociationInterface>,
                >::cast_into(other)
                .as_raw_ptr(),
            )
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Returns the value of the <span style='color: green;'>```createConstIteratorAtKeyFn```</span> field.
    #[inline(always)]
    pub unsafe fn create_const_iterator_at_key_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(
            *const ::std::ffi::c_void,
            *const ::std::ffi::c_void,
        ) -> *mut ::std::ffi::c_void,
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_createConstIteratorAtKeyFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface)
    }

    /// Returns the value of the <span style='color: green;'>```createIteratorAtKeyFn```</span> field.
    #[inline(always)]
    pub unsafe fn create_iterator_at_key_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(
            *mut ::std::ffi::c_void,
            *const ::std::ffi::c_void,
        ) -> *mut ::std::ffi::c_void,
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_createIteratorAtKeyFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface)
    }

    /// Returns the value of the <span style='color: green;'>```eraseKeyAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn erase_key_at_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void, *const ::std::ffi::c_void)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_eraseKeyAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface)
    }

    /// Returns the value of the <span style='color: green;'>```insertKeyFn```</span> field.
    #[inline(always)]
    pub unsafe fn insert_key_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void, *const ::std::ffi::c_void)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_insertKeyFn(
            self as *const crate::qt_meta_container_private::QMetaAssociationInterface,
        )
    }

    /// Returns the value of the <span style='color: green;'>```keyAtConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn key_at_const_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*const ::std::ffi::c_void, *mut ::std::ffi::c_void)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_keyAtConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface)
    }

    /// Returns the value of the <span style='color: green;'>```keyAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn key_at_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*const ::std::ffi::c_void, *mut ::std::ffi::c_void)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_keyAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface)
    }

    /// Returns the value of the <span style='color: green;'>```mappedAtConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn mapped_at_const_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*const ::std::ffi::c_void, *mut ::std::ffi::c_void)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_mappedAtConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface)
    }

    /// Returns the value of the <span style='color: green;'>```mappedAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn mapped_at_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*const ::std::ffi::c_void, *mut ::std::ffi::c_void)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_mappedAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface)
    }

    /// Returns the value of the <span style='color: green;'>```mappedAtKeyFn```</span> field.
    #[inline(always)]
    pub unsafe fn mapped_at_key_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(
            *const ::std::ffi::c_void,
            *const ::std::ffi::c_void,
            *mut ::std::ffi::c_void,
        ),
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_mappedAtKeyFn(
            self as *const crate::qt_meta_container_private::QMetaAssociationInterface,
        )
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::QMetaAssociationInterface::QMetaAssociationInterface()```</span>.
    #[inline(always)]
    pub unsafe fn new(
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::QMetaAssociationInterface> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_QMetaAssociationInterface()
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::QMetaAssociationInterface::QMetaAssociationInterface(const QtMetaContainerPrivate::QMetaAssociationInterface& other)```</span>.
    #[inline(always)]
    pub unsafe fn new_copy(
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::qt_meta_container_private::QMetaAssociationInterface>,
        >,
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::QMetaAssociationInterface> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_QMetaAssociationInterface1(::cpp_core::CastInto::<::cpp_core::Ref<crate::qt_meta_container_private::QMetaAssociationInterface>>::cast_into(other).as_raw_ptr())
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Returns the value of the <span style='color: green;'>```removeKeyFn```</span> field.
    #[inline(always)]
    pub unsafe fn remove_key_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*mut ::std::ffi::c_void, *const ::std::ffi::c_void)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_removeKeyFn(
            self as *const crate::qt_meta_container_private::QMetaAssociationInterface,
        )
    }

    /// Sets the value of the <span style='color: green;'>```containsKeyFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_contains_key_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*const ::std::ffi::c_void, *const ::std::ffi::c_void) -> bool,
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_containsKeyFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface as *mut crate::qt_meta_container_private::QMetaAssociationInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```createConstIteratorAtKeyFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_create_const_iterator_at_key_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(
                *const ::std::ffi::c_void,
                *const ::std::ffi::c_void,
            ) -> *mut ::std::ffi::c_void,
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_createConstIteratorAtKeyFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface as *mut crate::qt_meta_container_private::QMetaAssociationInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```createIteratorAtKeyFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_create_iterator_at_key_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(
                *mut ::std::ffi::c_void,
                *const ::std::ffi::c_void,
            ) -> *mut ::std::ffi::c_void,
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_createIteratorAtKeyFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface as *mut crate::qt_meta_container_private::QMetaAssociationInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```eraseKeyAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_erase_key_at_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const ::std::ffi::c_void),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_eraseKeyAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface as *mut crate::qt_meta_container_private::QMetaAssociationInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```insertKeyFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_insert_key_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const ::std::ffi::c_void),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_insertKeyFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface as *mut crate::qt_meta_container_private::QMetaAssociationInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```keyAtConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_key_at_const_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*const ::std::ffi::c_void, *mut ::std::ffi::c_void),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_keyAtConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface as *mut crate::qt_meta_container_private::QMetaAssociationInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```keyAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_key_at_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*const ::std::ffi::c_void, *mut ::std::ffi::c_void),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_keyAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface as *mut crate::qt_meta_container_private::QMetaAssociationInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```mappedAtConstIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_mapped_at_const_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*const ::std::ffi::c_void, *mut ::std::ffi::c_void),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_mappedAtConstIteratorFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface as *mut crate::qt_meta_container_private::QMetaAssociationInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```mappedAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_mapped_at_iterator_fn_mut(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*const ::std::ffi::c_void, *mut ::std::ffi::c_void),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_mappedAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface as *mut crate::qt_meta_container_private::QMetaAssociationInterface, value)
    }

    /// Returns the value of the <span style='color: green;'>```setMappedAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_mapped_at_iterator_fn(
        &self,
    ) -> ::std::option::Option<extern "C" fn(*const ::std::ffi::c_void, *const ::std::ffi::c_void)>
    {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_setMappedAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface)
    }

    /// Sets the value of the <span style='color: green;'>```mappedAtKeyFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_mapped_at_key_fn_mut(
        &self,
        value: ::std::option::Option<
            extern "C" fn(
                *const ::std::ffi::c_void,
                *const ::std::ffi::c_void,
                *mut ::std::ffi::c_void,
            ),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_mappedAtKeyFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface as *mut crate::qt_meta_container_private::QMetaAssociationInterface, value)
    }

    /// Returns the value of the <span style='color: green;'>```setMappedAtKeyFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_mapped_at_key_fn(
        &self,
    ) -> ::std::option::Option<
        extern "C" fn(
            *mut ::std::ffi::c_void,
            *const ::std::ffi::c_void,
            *const ::std::ffi::c_void,
        ),
    > {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_setMappedAtKeyFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface)
    }

    /// Sets the value of the <span style='color: green;'>```removeKeyFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_remove_key_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*mut ::std::ffi::c_void, *const ::std::ffi::c_void),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_removeKeyFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface as *mut crate::qt_meta_container_private::QMetaAssociationInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```setMappedAtIteratorFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_set_mapped_at_iterator_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(*const ::std::ffi::c_void, *const ::std::ffi::c_void),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_setMappedAtIteratorFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface as *mut crate::qt_meta_container_private::QMetaAssociationInterface, value)
    }

    /// Sets the value of the <span style='color: green;'>```setMappedAtKeyFn```</span> field.
    #[inline(always)]
    pub unsafe fn set_set_mapped_at_key_fn(
        &self,
        value: ::std::option::Option<
            extern "C" fn(
                *mut ::std::ffi::c_void,
                *const ::std::ffi::c_void,
                *const ::std::ffi::c_void,
            ),
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QtMetaContainerPrivate_QMetaAssociationInterface_setMappedAtKeyFn(self as *const crate::qt_meta_container_private::QMetaAssociationInterface as *mut crate::qt_meta_container_private::QMetaAssociationInterface, value)
    }
}

impl From<crate::qt_meta_container_private::IteratorCapability>
    for crate::QFlags<crate::qt_meta_container_private::IteratorCapability>
{
    fn from(value: crate::qt_meta_container_private::IteratorCapability) -> Self {
        Self::from(value.to_int())
    }
}

impl<T: Into<crate::QFlags<crate::qt_meta_container_private::IteratorCapability>>>
    std::ops::BitOr<T> for crate::qt_meta_container_private::IteratorCapability
{
    type Output = crate::QFlags<crate::qt_meta_container_private::IteratorCapability>;
    fn bitor(self, rhs: T) -> crate::QFlags<crate::qt_meta_container_private::IteratorCapability> {
        Into::<crate::QFlags<crate::qt_meta_container_private::IteratorCapability>>::into(self)
            | rhs
    }
}

impl From<crate::qt_meta_container_private::AddRemoveCapability>
    for crate::QFlags<crate::qt_meta_container_private::AddRemoveCapability>
{
    fn from(value: crate::qt_meta_container_private::AddRemoveCapability) -> Self {
        Self::from(value.to_int())
    }
}

impl<T: Into<crate::QFlags<crate::qt_meta_container_private::AddRemoveCapability>>>
    std::ops::BitOr<T> for crate::qt_meta_container_private::AddRemoveCapability
{
    type Output = crate::QFlags<crate::qt_meta_container_private::AddRemoveCapability>;
    fn bitor(self, rhs: T) -> crate::QFlags<crate::qt_meta_container_private::AddRemoveCapability> {
        Into::<crate::QFlags<crate::qt_meta_container_private::AddRemoveCapability>>::into(self)
            | rhs
    }
}

impl ::cpp_core::CppDeletable for crate::qt_meta_container_private::QMetaContainerInterface {
    /// Calls C++ function: <span style='color: green;'>```[destructor] void QtMetaContainerPrivate::QMetaContainerInterface::~QMetaContainerInterface()```</span>.
    #[inline(always)]
    unsafe fn delete(&self) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaContainerInterface_dQMetaContainerInterface(self as *const crate::qt_meta_container_private::QMetaContainerInterface as *mut crate::qt_meta_container_private::QMetaContainerInterface)
    }
}

impl ::cpp_core::CppDeletable for crate::qt_meta_container_private::QMetaSequenceInterface {
    /// Calls C++ function: <span style='color: green;'>```[destructor] void QtMetaContainerPrivate::QMetaSequenceInterface::~QMetaSequenceInterface()```</span>.
    #[inline(always)]
    unsafe fn delete(&self) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaSequenceInterface_dQMetaSequenceInterface(self as *const crate::qt_meta_container_private::QMetaSequenceInterface as *mut crate::qt_meta_container_private::QMetaSequenceInterface)
    }
}

impl ::cpp_core::CppDeletable for crate::qt_meta_container_private::QMetaAssociationInterface {
    /// Calls C++ function: <span style='color: green;'>```[destructor] void QtMetaContainerPrivate::QMetaAssociationInterface::~QMetaAssociationInterface()```</span>.
    #[inline(always)]
    unsafe fn delete(&self) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_QMetaAssociationInterface_dQMetaAssociationInterface(self as *const crate::qt_meta_container_private::QMetaAssociationInterface as *mut crate::qt_meta_container_private::QMetaAssociationInterface)
    }
}

impl ::cpp_core::StaticDowncast<crate::qt_meta_container_private::QMetaSequenceInterface>
    for crate::qt_meta_container_private::QMetaContainerInterface
{
    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::QMetaSequenceInterface* static_cast<QtMetaContainerPrivate::QMetaSequenceInterface*>(QtMetaContainerPrivate::QMetaContainerInterface* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_downcast(
        ptr: ::cpp_core::Ptr<crate::qt_meta_container_private::QMetaContainerInterface>,
    ) -> ::cpp_core::Ptr<crate::qt_meta_container_private::QMetaSequenceInterface> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_QMetaSequenceInterface_ptr(ptr.as_raw_ptr() as *mut crate::qt_meta_container_private::QMetaContainerInterface)
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::cpp_core::StaticUpcast<crate::qt_meta_container_private::QMetaContainerInterface>
    for crate::qt_meta_container_private::QMetaSequenceInterface
{
    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::QMetaContainerInterface* static_cast<QtMetaContainerPrivate::QMetaContainerInterface*>(QtMetaContainerPrivate::QMetaSequenceInterface* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_upcast(
        ptr: ::cpp_core::Ptr<crate::qt_meta_container_private::QMetaSequenceInterface>,
    ) -> ::cpp_core::Ptr<crate::qt_meta_container_private::QMetaContainerInterface> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_QMetaContainerInterface_ptr(ptr.as_raw_ptr() as *mut crate::qt_meta_container_private::QMetaSequenceInterface)
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::std::ops::Deref for crate::qt_meta_container_private::QMetaSequenceInterface {
    type Target = crate::qt_meta_container_private::QMetaContainerInterface;
    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::QMetaContainerInterface* static_cast<QtMetaContainerPrivate::QMetaContainerInterface*>(QtMetaContainerPrivate::QMetaSequenceInterface* ptr)```</span>.
    #[inline(always)]
    fn deref(&self) -> &crate::qt_meta_container_private::QMetaContainerInterface {
        let ffi_result = {
            unsafe {
                crate::__ffi::ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_QMetaContainerInterface_ptr(self as *const crate::qt_meta_container_private::QMetaSequenceInterface as *mut crate::qt_meta_container_private::QMetaSequenceInterface)
            }
        };
        unsafe { ffi_result.as_ref() }.expect("Attempted to convert null pointer to reference")
    }
}

impl ::cpp_core::StaticDowncast<crate::qt_meta_container_private::QMetaAssociationInterface>
    for crate::qt_meta_container_private::QMetaContainerInterface
{
    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::QMetaAssociationInterface* static_cast<QtMetaContainerPrivate::QMetaAssociationInterface*>(QtMetaContainerPrivate::QMetaContainerInterface* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_downcast(
        ptr: ::cpp_core::Ptr<crate::qt_meta_container_private::QMetaContainerInterface>,
    ) -> ::cpp_core::Ptr<crate::qt_meta_container_private::QMetaAssociationInterface> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_QMetaAssociationInterface_ptr(ptr.as_raw_ptr() as *mut crate::qt_meta_container_private::QMetaContainerInterface)
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::cpp_core::StaticUpcast<crate::qt_meta_container_private::QMetaContainerInterface>
    for crate::qt_meta_container_private::QMetaAssociationInterface
{
    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::QMetaContainerInterface* static_cast<QtMetaContainerPrivate::QMetaContainerInterface*>(QtMetaContainerPrivate::QMetaAssociationInterface* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_upcast(
        ptr: ::cpp_core::Ptr<crate::qt_meta_container_private::QMetaAssociationInterface>,
    ) -> ::cpp_core::Ptr<crate::qt_meta_container_private::QMetaContainerInterface> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_QMetaContainerInterface_ptr1(ptr.as_raw_ptr() as *mut crate::qt_meta_container_private::QMetaAssociationInterface)
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::std::ops::Deref for crate::qt_meta_container_private::QMetaAssociationInterface {
    type Target = crate::qt_meta_container_private::QMetaContainerInterface;
    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::QMetaContainerInterface* static_cast<QtMetaContainerPrivate::QMetaContainerInterface*>(QtMetaContainerPrivate::QMetaAssociationInterface* ptr)```</span>.
    #[inline(always)]
    fn deref(&self) -> &crate::qt_meta_container_private::QMetaContainerInterface {
        let ffi_result = {
            unsafe {
                crate::__ffi::ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_QMetaContainerInterface_ptr1(self as *const crate::qt_meta_container_private::QMetaAssociationInterface as *mut crate::qt_meta_container_private::QMetaAssociationInterface)
            }
        };
        unsafe { ffi_result.as_ref() }.expect("Attempted to convert null pointer to reference")
    }
}
