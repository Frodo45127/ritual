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

/// C++ class: <span style='color: green;'>```QtMetaContainerPrivate::AssociativeIterator```</span>.
#[repr(C)]
pub struct AssociativeIterator {
    _unused: u8,
}
impl AssociativeIterator {
    /// Returns the value of the <span style='color: green;'>```CanNoexceptAssignQVariant```</span> field.
    #[inline(always)]
    pub unsafe fn can_noexcept_assign_q_variant() -> bool {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeIterator_CanNoexceptAssignQVariant()
    }

    /// Returns the value of the <span style='color: green;'>```CanNoexceptConvertToQVariant```</span> field.
    #[inline(always)]
    pub unsafe fn can_noexcept_convert_to_q_variant() -> bool {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeIterator_CanNoexceptConvertToQVariant()
    }

    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::AssociativeIterator& QtMetaContainerPrivate::AssociativeIterator::operator=(const QtMetaContainerPrivate::AssociativeIterator& other)```</span>.
    #[inline(always)]
    pub unsafe fn copy_from(
        &self,
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::qt_meta_container_private::AssociativeIterator>,
        >,
    ) -> ::cpp_core::Ref<crate::qt_meta_container_private::AssociativeIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeIterator_operator_1(
                self as *const crate::qt_meta_container_private::AssociativeIterator
                    as *mut crate::qt_meta_container_private::AssociativeIterator,
                ::cpp_core::CastInto::<
                    ::cpp_core::Ref<crate::qt_meta_container_private::AssociativeIterator>,
                >::cast_into(other)
                .as_raw_ptr(),
            )
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant::Reference<QtMetaContainerPrivate::AssociativeIterator> QtMetaContainerPrivate::AssociativeIterator::operator*() const```</span>.
    #[inline(always)]
    pub unsafe fn indirection(
        &self,
    ) -> ::cpp_core::CppBox<crate::q_variant::ReferenceOfAssociativeIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeIterator_operator_(
                self as *const crate::qt_meta_container_private::AssociativeIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant QtMetaContainerPrivate::AssociativeIterator::key() const```</span>.
    #[inline(always)]
    pub unsafe fn key(&self) -> ::cpp_core::CppBox<crate::QVariant> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeIterator_key(
                self as *const crate::qt_meta_container_private::AssociativeIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::AssociativeIterator::AssociativeIterator(const QtMetaContainerPrivate::AssociativeIterator& other)```</span>.
    #[inline(always)]
    pub unsafe fn new_copy(
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::qt_meta_container_private::AssociativeIterator>,
        >,
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::AssociativeIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeIterator_AssociativeIterator2(::cpp_core::CastInto::<::cpp_core::Ref<crate::qt_meta_container_private::AssociativeIterator>>::cast_into(other).as_raw_ptr())
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant::Pointer<QtMetaContainerPrivate::AssociativeIterator> QtMetaContainerPrivate::AssociativeIterator::operator->() const```</span>.
    #[inline(always)]
    pub unsafe fn struct_deref(
        &self,
    ) -> ::cpp_core::CppBox<crate::q_variant::PointerOfAssociativeIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeIterator_operator__(
                self as *const crate::qt_meta_container_private::AssociativeIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant::Reference<QtMetaContainerPrivate::AssociativeIterator> QtMetaContainerPrivate::AssociativeIterator::value() const```</span>.
    #[inline(always)]
    pub unsafe fn value(
        &self,
    ) -> ::cpp_core::CppBox<crate::q_variant::ReferenceOfAssociativeIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeIterator_value(
                self as *const crate::qt_meta_container_private::AssociativeIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }
}

/// C++ class: <span style='color: green;'>```QtMetaContainerPrivate::AssociativeConstIterator```</span>.
#[repr(C)]
pub struct AssociativeConstIterator {
    _unused: u8,
}
impl AssociativeConstIterator {
    /// Returns the value of the <span style='color: green;'>```CanNoexceptConvertToQVariant```</span> field.
    #[inline(always)]
    pub unsafe fn can_noexcept_convert_to_q_variant() -> bool {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeConstIterator_CanNoexceptConvertToQVariant()
    }

    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::AssociativeConstIterator& QtMetaContainerPrivate::AssociativeConstIterator::operator=(const QtMetaContainerPrivate::AssociativeConstIterator& other)```</span>.
    #[inline(always)]
    pub unsafe fn copy_from(
        &self,
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::qt_meta_container_private::AssociativeConstIterator>,
        >,
    ) -> ::cpp_core::Ref<crate::qt_meta_container_private::AssociativeConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeConstIterator_operator_1(
                self as *const crate::qt_meta_container_private::AssociativeConstIterator
                    as *mut crate::qt_meta_container_private::AssociativeConstIterator,
                ::cpp_core::CastInto::<
                    ::cpp_core::Ref<crate::qt_meta_container_private::AssociativeConstIterator>,
                >::cast_into(other)
                .as_raw_ptr(),
            )
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant QtMetaContainerPrivate::AssociativeConstIterator::operator*() const```</span>.
    #[inline(always)]
    pub unsafe fn indirection(&self) -> ::cpp_core::CppBox<crate::QVariant> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeConstIterator_operator_(
                self as *const crate::qt_meta_container_private::AssociativeConstIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant QtMetaContainerPrivate::AssociativeConstIterator::key() const```</span>.
    #[inline(always)]
    pub unsafe fn key(&self) -> ::cpp_core::CppBox<crate::QVariant> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeConstIterator_key(
                self as *const crate::qt_meta_container_private::AssociativeConstIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::AssociativeConstIterator::AssociativeConstIterator(const QtMetaContainerPrivate::AssociativeConstIterator& other)```</span>.
    #[inline(always)]
    pub unsafe fn new_copy(
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::qt_meta_container_private::AssociativeConstIterator>,
        >,
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::AssociativeConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeConstIterator_AssociativeConstIterator2(::cpp_core::CastInto::<::cpp_core::Ref<crate::qt_meta_container_private::AssociativeConstIterator>>::cast_into(other).as_raw_ptr())
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant::ConstPointer<QtMetaContainerPrivate::AssociativeConstIterator> QtMetaContainerPrivate::AssociativeConstIterator::operator->() const```</span>.
    #[inline(always)]
    pub unsafe fn struct_deref(
        &self,
    ) -> ::cpp_core::CppBox<crate::q_variant::ConstPointerOfAssociativeConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeConstIterator_operator__(
                self as *const crate::qt_meta_container_private::AssociativeConstIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant QtMetaContainerPrivate::AssociativeConstIterator::value() const```</span>.
    #[inline(always)]
    pub unsafe fn value(&self) -> ::cpp_core::CppBox<crate::QVariant> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeConstIterator_value(
                self as *const crate::qt_meta_container_private::AssociativeConstIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }
}

/// C++ class: <span style='color: green;'>```QtMetaContainerPrivate::Association```</span>.
#[repr(C)]
pub struct Association {
    _unused: u8,
}
impl Association {
    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::AssociativeConstIterator, void> QtMetaContainerPrivate::Association::begin() const```</span>.
    #[inline(always)]
    pub unsafe fn begin(
        &self,
    ) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfAssociativeConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_begin(
                self as *const crate::qt_meta_container_private::Association,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::AssociativeConstIterator, void> QtMetaContainerPrivate::Association::constBegin() const```</span>.
    #[inline(always)]
    pub unsafe fn const_begin(
        &self,
    ) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfAssociativeConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_constBegin(
                self as *const crate::qt_meta_container_private::Association,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::AssociativeConstIterator, void> QtMetaContainerPrivate::Association::constEnd() const```</span>.
    #[inline(always)]
    pub unsafe fn const_end(
        &self,
    ) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfAssociativeConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_constEnd(
                self as *const crate::qt_meta_container_private::Association,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::AssociativeConstIterator, void> QtMetaContainerPrivate::Association::constFind(const QVariant& key) const```</span>.
    #[inline(always)]
    pub unsafe fn const_find(
        &self,
        key: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVariant>>,
    ) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfAssociativeConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_constFind(
                self as *const crate::qt_meta_container_private::Association,
                ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVariant>>::cast_into(key)
                    .as_raw_ptr(),
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```bool QtMetaContainerPrivate::Association::containsKey(const QVariant& key) const```</span>.
    #[inline(always)]
    pub unsafe fn contains_key(
        &self,
        key: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVariant>>,
    ) -> bool {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_containsKey(
            self as *const crate::qt_meta_container_private::Association,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVariant>>::cast_into(key).as_raw_ptr(),
        )
    }

    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::Association& QtMetaContainerPrivate::Association::operator=(const QtMetaContainerPrivate::Association& other)```</span>.
    #[inline(always)]
    pub unsafe fn copy_from(
        &self,
        other: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::qt_meta_container_private::Association>>,
    ) -> ::cpp_core::Ref<crate::qt_meta_container_private::Association> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_operator_1(
                self as *const crate::qt_meta_container_private::Association
                    as *mut crate::qt_meta_container_private::Association,
                ::cpp_core::CastInto::<
                    ::cpp_core::Ref<crate::qt_meta_container_private::Association>,
                >::cast_into(other)
                .as_raw_ptr(),
            )
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::AssociativeConstIterator, void> QtMetaContainerPrivate::Association::end() const```</span>.
    #[inline(always)]
    pub unsafe fn end(
        &self,
    ) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfAssociativeConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_end(
                self as *const crate::qt_meta_container_private::Association,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::AssociativeConstIterator, void> QtMetaContainerPrivate::Association::find(const QVariant& key) const```</span>.
    #[inline(always)]
    pub unsafe fn find(
        &self,
        key: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVariant>>,
    ) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfAssociativeConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_find(
                self as *const crate::qt_meta_container_private::Association,
                ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVariant>>::cast_into(key)
                    .as_raw_ptr(),
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```void QtMetaContainerPrivate::Association::insertKey(const QVariant& key)```</span>.
    #[inline(always)]
    pub unsafe fn insert_key(
        &self,
        key: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVariant>>,
    ) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_insertKey(
            self as *const crate::qt_meta_container_private::Association
                as *mut crate::qt_meta_container_private::Association,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVariant>>::cast_into(key).as_raw_ptr(),
        )
    }

    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::AssociativeIterator, void> QtMetaContainerPrivate::Association::mutableBegin()```</span>.
    #[inline(always)]
    pub unsafe fn mutable_begin(
        &self,
    ) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfAssociativeIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_mutableBegin(
                self as *const crate::qt_meta_container_private::Association
                    as *mut crate::qt_meta_container_private::Association,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::AssociativeIterator, void> QtMetaContainerPrivate::Association::mutableEnd()```</span>.
    #[inline(always)]
    pub unsafe fn mutable_end(
        &self,
    ) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfAssociativeIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_mutableEnd(
                self as *const crate::qt_meta_container_private::Association
                    as *mut crate::qt_meta_container_private::Association,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::AssociativeIterator, void> QtMetaContainerPrivate::Association::mutableFind(const QVariant& key)```</span>.
    #[inline(always)]
    pub unsafe fn mutable_find(
        &self,
        key: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVariant>>,
    ) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfAssociativeIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_mutableFind(
                self as *const crate::qt_meta_container_private::Association
                    as *mut crate::qt_meta_container_private::Association,
                ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVariant>>::cast_into(key)
                    .as_raw_ptr(),
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::Association::Association()```</span>.
    #[inline(always)]
    pub unsafe fn new() -> ::cpp_core::CppBox<crate::qt_meta_container_private::Association> {
        let ffi_result =
            { crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_Association() };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::Association::Association(const QMetaAssociation& metaAssociation, QMetaType metaType, void* iterable)```</span>.
    #[inline(always)]
    pub unsafe fn from_q_meta_association_q_meta_type_void(
        meta_association: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMetaAssociation>>,
        meta_type: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMetaType>>,
        iterable: *mut ::std::ffi::c_void,
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::Association> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_Association1(
                ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMetaAssociation>>::cast_into(
                    meta_association,
                )
                .as_raw_ptr(),
                ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMetaType>>::cast_into(meta_type)
                    .as_raw_ptr(),
                iterable,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::Association::Association(const QMetaAssociation& metaAssociation, QMetaType metaType, const void* iterable)```</span>.
    #[inline(always)]
    pub unsafe fn from_q_meta_association_q_meta_type_void2(
        meta_association: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMetaAssociation>>,
        meta_type: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMetaType>>,
        iterable: *const ::std::ffi::c_void,
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::Association> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_Association2(
                ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMetaAssociation>>::cast_into(
                    meta_association,
                )
                .as_raw_ptr(),
                ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMetaType>>::cast_into(meta_type)
                    .as_raw_ptr(),
                iterable,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::Association::Association(const QtMetaContainerPrivate::Association& other)```</span>.
    #[inline(always)]
    pub unsafe fn new_copy(
        other: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::qt_meta_container_private::Association>>,
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::Association> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_Association4(
                ::cpp_core::CastInto::<
                    ::cpp_core::Ref<crate::qt_meta_container_private::Association>,
                >::cast_into(other)
                .as_raw_ptr(),
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```void QtMetaContainerPrivate::Association::removeKey(const QVariant& key)```</span>.
    #[inline(always)]
    pub unsafe fn remove_key(
        &self,
        key: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVariant>>,
    ) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_removeKey(
            self as *const crate::qt_meta_container_private::Association
                as *mut crate::qt_meta_container_private::Association,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVariant>>::cast_into(key).as_raw_ptr(),
        )
    }

    /// Calls C++ function: <span style='color: green;'>```void QtMetaContainerPrivate::Association::setValue(const QVariant& key, const QVariant& mapped)```</span>.
    #[inline(always)]
    pub unsafe fn set_value(
        &self,
        key: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVariant>>,
        mapped: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVariant>>,
    ) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_setValue(
            self as *const crate::qt_meta_container_private::Association
                as *mut crate::qt_meta_container_private::Association,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVariant>>::cast_into(key).as_raw_ptr(),
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVariant>>::cast_into(mapped)
                .as_raw_ptr(),
        )
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant QtMetaContainerPrivate::Association::value(const QVariant& key) const```</span>.
    #[inline(always)]
    pub unsafe fn value(
        &self,
        key: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVariant>>,
    ) -> ::cpp_core::CppBox<crate::QVariant> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_value(
                self as *const crate::qt_meta_container_private::Association,
                ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVariant>>::cast_into(key)
                    .as_raw_ptr(),
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }
}

/// C++ class: <span style='color: green;'>```QtMetaContainerPrivate::SequentialIterator```</span>.
#[repr(C)]
pub struct SequentialIterator {
    _unused: u8,
}
impl SequentialIterator {
    /// Returns the value of the <span style='color: green;'>```CanNoexceptAssignQVariant```</span> field.
    #[inline(always)]
    pub unsafe fn can_noexcept_assign_q_variant() -> bool {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialIterator_CanNoexceptAssignQVariant()
    }

    /// Returns the value of the <span style='color: green;'>```CanNoexceptConvertToQVariant```</span> field.
    #[inline(always)]
    pub unsafe fn can_noexcept_convert_to_q_variant() -> bool {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialIterator_CanNoexceptConvertToQVariant()
    }

    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::SequentialIterator& QtMetaContainerPrivate::SequentialIterator::operator=(const QtMetaContainerPrivate::SequentialIterator& other)```</span>.
    #[inline(always)]
    pub unsafe fn copy_from(
        &self,
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::qt_meta_container_private::SequentialIterator>,
        >,
    ) -> ::cpp_core::Ref<crate::qt_meta_container_private::SequentialIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialIterator_operator_1(
                self as *const crate::qt_meta_container_private::SequentialIterator
                    as *mut crate::qt_meta_container_private::SequentialIterator,
                ::cpp_core::CastInto::<
                    ::cpp_core::Ref<crate::qt_meta_container_private::SequentialIterator>,
                >::cast_into(other)
                .as_raw_ptr(),
            )
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant::Reference<QtMetaContainerPrivate::SequentialIterator> QtMetaContainerPrivate::SequentialIterator::operator[](long long n) const```</span>.
    #[inline(always)]
    pub unsafe fn index(
        &self,
        n: ::std::os::raw::c_longlong,
    ) -> ::cpp_core::CppBox<crate::q_variant::ReferenceOfSequentialIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialIterator_operator__1(
                self as *const crate::qt_meta_container_private::SequentialIterator,
                n,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant::Reference<QtMetaContainerPrivate::SequentialIterator> QtMetaContainerPrivate::SequentialIterator::operator*() const```</span>.
    #[inline(always)]
    pub unsafe fn indirection(
        &self,
    ) -> ::cpp_core::CppBox<crate::q_variant::ReferenceOfSequentialIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialIterator_operator_(
                self as *const crate::qt_meta_container_private::SequentialIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::SequentialIterator::SequentialIterator(const QtMetaContainerPrivate::SequentialIterator& other)```</span>.
    #[inline(always)]
    pub unsafe fn new_copy(
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::qt_meta_container_private::SequentialIterator>,
        >,
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::SequentialIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialIterator_SequentialIterator2(::cpp_core::CastInto::<::cpp_core::Ref<crate::qt_meta_container_private::SequentialIterator>>::cast_into(other).as_raw_ptr())
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant::Pointer<QtMetaContainerPrivate::SequentialIterator> QtMetaContainerPrivate::SequentialIterator::operator->() const```</span>.
    #[inline(always)]
    pub unsafe fn struct_deref(
        &self,
    ) -> ::cpp_core::CppBox<crate::q_variant::PointerOfSequentialIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialIterator_operator__(
                self as *const crate::qt_meta_container_private::SequentialIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }
}

/// C++ class: <span style='color: green;'>```QtMetaContainerPrivate::SequentialConstIterator```</span>.
#[repr(C)]
pub struct SequentialConstIterator {
    _unused: u8,
}
impl SequentialConstIterator {
    /// Returns the value of the <span style='color: green;'>```CanNoexceptConvertToQVariant```</span> field.
    #[inline(always)]
    pub unsafe fn can_noexcept_convert_to_q_variant() -> bool {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialConstIterator_CanNoexceptConvertToQVariant()
    }

    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::SequentialConstIterator& QtMetaContainerPrivate::SequentialConstIterator::operator=(const QtMetaContainerPrivate::SequentialConstIterator& other)```</span>.
    #[inline(always)]
    pub unsafe fn copy_from(
        &self,
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::qt_meta_container_private::SequentialConstIterator>,
        >,
    ) -> ::cpp_core::Ref<crate::qt_meta_container_private::SequentialConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialConstIterator_operator_1(
                self as *const crate::qt_meta_container_private::SequentialConstIterator
                    as *mut crate::qt_meta_container_private::SequentialConstIterator,
                ::cpp_core::CastInto::<
                    ::cpp_core::Ref<crate::qt_meta_container_private::SequentialConstIterator>,
                >::cast_into(other)
                .as_raw_ptr(),
            )
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant QtMetaContainerPrivate::SequentialConstIterator::operator[](long long n) const```</span>.
    #[inline(always)]
    pub unsafe fn index(
        &self,
        n: ::std::os::raw::c_longlong,
    ) -> ::cpp_core::CppBox<crate::QVariant> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialConstIterator_operator__1(
                self as *const crate::qt_meta_container_private::SequentialConstIterator,
                n,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant QtMetaContainerPrivate::SequentialConstIterator::operator*() const```</span>.
    #[inline(always)]
    pub unsafe fn indirection(&self) -> ::cpp_core::CppBox<crate::QVariant> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialConstIterator_operator_(
                self as *const crate::qt_meta_container_private::SequentialConstIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::SequentialConstIterator::SequentialConstIterator(const QtMetaContainerPrivate::SequentialConstIterator& other)```</span>.
    #[inline(always)]
    pub unsafe fn new_copy(
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::qt_meta_container_private::SequentialConstIterator>,
        >,
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::SequentialConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialConstIterator_SequentialConstIterator2(::cpp_core::CastInto::<::cpp_core::Ref<crate::qt_meta_container_private::SequentialConstIterator>>::cast_into(other).as_raw_ptr())
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant::ConstPointer<QtMetaContainerPrivate::SequentialConstIterator> QtMetaContainerPrivate::SequentialConstIterator::operator->() const```</span>.
    #[inline(always)]
    pub unsafe fn struct_deref(
        &self,
    ) -> ::cpp_core::CppBox<crate::q_variant::ConstPointerOfSequentialConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialConstIterator_operator__(
                self as *const crate::qt_meta_container_private::SequentialConstIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }
}

pub mod sequence {
    //! C++ type: <span style='color: green;'>```QtMetaContainerPrivate::Sequence```</span>

    /// C++ enum: <span style='color: green;'>```QtMetaContainerPrivate::Sequence::Position```</span>.
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
        /// C++ enum variant: <span style='color: green;'>```Unspecified = 0```</span>
        #[allow(non_upper_case_globals)]
        pub const Unspecified: crate::qt_meta_container_private::sequence::Position =
            crate::qt_meta_container_private::sequence::Position(0);
        /// C++ enum variant: <span style='color: green;'>```AtBegin = 1```</span>
        #[allow(non_upper_case_globals)]
        pub const AtBegin: crate::qt_meta_container_private::sequence::Position =
            crate::qt_meta_container_private::sequence::Position(1);
        /// C++ enum variant: <span style='color: green;'>```AtEnd = 2```</span>
        #[allow(non_upper_case_globals)]
        pub const AtEnd: crate::qt_meta_container_private::sequence::Position =
            crate::qt_meta_container_private::sequence::Position(2);
    }
}
/// C++ class: <span style='color: green;'>```QtMetaContainerPrivate::Sequence```</span>.
#[repr(C)]
pub struct Sequence {
    _unused: u8,
}
impl Sequence {
    /// Calls C++ function: <span style='color: green;'>```void QtMetaContainerPrivate::Sequence::addValue(const QVariant& value, QtMetaContainerPrivate::Sequence::Position position = …)```</span>.
    #[inline(always)]
    pub unsafe fn add_value_2a(
        &self,
        value: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVariant>>,
        position: crate::qt_meta_container_private::sequence::Position,
    ) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_addValue(
            self as *const crate::qt_meta_container_private::Sequence
                as *mut crate::qt_meta_container_private::Sequence,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVariant>>::cast_into(value).as_raw_ptr(),
            position,
        )
    }

    /// Calls C++ function: <span style='color: green;'>```void QtMetaContainerPrivate::Sequence::addValue(const QVariant& value)```</span>.
    #[inline(always)]
    pub unsafe fn add_value_1a(
        &self,
        value: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVariant>>,
    ) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_addValue1(
            self as *const crate::qt_meta_container_private::Sequence
                as *mut crate::qt_meta_container_private::Sequence,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVariant>>::cast_into(value).as_raw_ptr(),
        )
    }

    /// Calls C++ function: <span style='color: green;'>```void QtMetaContainerPrivate::Sequence::append(const QVariant& value)```</span>.
    #[inline(always)]
    pub unsafe fn append(
        &self,
        value: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVariant>>,
    ) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_append(
            self as *const crate::qt_meta_container_private::Sequence
                as *mut crate::qt_meta_container_private::Sequence,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVariant>>::cast_into(value).as_raw_ptr(),
        )
    }

    /// Calls C++ function: <span style='color: green;'>```QVariant QtMetaContainerPrivate::Sequence::at(long long idx) const```</span>.
    #[inline(always)]
    pub unsafe fn at(
        &self,
        idx: ::std::os::raw::c_longlong,
    ) -> ::cpp_core::CppBox<crate::QVariant> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_at(
                self as *const crate::qt_meta_container_private::Sequence,
                idx,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::SequentialConstIterator, void> QtMetaContainerPrivate::Sequence::begin() const```</span>.
    #[inline(always)]
    pub unsafe fn begin(
        &self,
    ) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfSequentialConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_begin(
                self as *const crate::qt_meta_container_private::Sequence,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::SequentialConstIterator, void> QtMetaContainerPrivate::Sequence::constBegin() const```</span>.
    #[inline(always)]
    pub unsafe fn const_begin(
        &self,
    ) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfSequentialConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_constBegin(
                self as *const crate::qt_meta_container_private::Sequence,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::SequentialConstIterator, void> QtMetaContainerPrivate::Sequence::constEnd() const```</span>.
    #[inline(always)]
    pub unsafe fn const_end(
        &self,
    ) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfSequentialConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_constEnd(
                self as *const crate::qt_meta_container_private::Sequence,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::Sequence& QtMetaContainerPrivate::Sequence::operator=(const QtMetaContainerPrivate::Sequence& other)```</span>.
    #[inline(always)]
    pub unsafe fn copy_from(
        &self,
        other: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::qt_meta_container_private::Sequence>>,
    ) -> ::cpp_core::Ref<crate::qt_meta_container_private::Sequence> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_operator_1(self as *const crate::qt_meta_container_private::Sequence as *mut crate::qt_meta_container_private::Sequence, ::cpp_core::CastInto::<::cpp_core::Ref<crate::qt_meta_container_private::Sequence>>::cast_into(other).as_raw_ptr())
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::SequentialConstIterator, void> QtMetaContainerPrivate::Sequence::end() const```</span>.
    #[inline(always)]
    pub unsafe fn end(
        &self,
    ) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfSequentialConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_end(
                self as *const crate::qt_meta_container_private::Sequence,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::SequentialIterator, void> QtMetaContainerPrivate::Sequence::mutableBegin()```</span>.
    #[inline(always)]
    pub unsafe fn mutable_begin(
        &self,
    ) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfSequentialIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_mutableBegin(
                self as *const crate::qt_meta_container_private::Sequence
                    as *mut crate::qt_meta_container_private::Sequence,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::SequentialIterator, void> QtMetaContainerPrivate::Sequence::mutableEnd()```</span>.
    #[inline(always)]
    pub unsafe fn mutable_end(
        &self,
    ) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfSequentialIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_mutableEnd(
                self as *const crate::qt_meta_container_private::Sequence
                    as *mut crate::qt_meta_container_private::Sequence,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::Sequence::Sequence()```</span>.
    #[inline(always)]
    pub unsafe fn new() -> ::cpp_core::CppBox<crate::qt_meta_container_private::Sequence> {
        let ffi_result =
            { crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_Sequence() };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::Sequence::Sequence(const QMetaSequence& metaSequence, QMetaType metaType, void* iterable)```</span>.
    #[inline(always)]
    pub unsafe fn from_q_meta_sequence_q_meta_type_void(
        meta_sequence: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMetaSequence>>,
        meta_type: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMetaType>>,
        iterable: *mut ::std::ffi::c_void,
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::Sequence> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_Sequence1(
                ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMetaSequence>>::cast_into(
                    meta_sequence,
                )
                .as_raw_ptr(),
                ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMetaType>>::cast_into(meta_type)
                    .as_raw_ptr(),
                iterable,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::Sequence::Sequence(const QMetaSequence& metaSequence, QMetaType metaType, const void* iterable)```</span>.
    #[inline(always)]
    pub unsafe fn from_q_meta_sequence_q_meta_type_void2(
        meta_sequence: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMetaSequence>>,
        meta_type: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QMetaType>>,
        iterable: *const ::std::ffi::c_void,
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::Sequence> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_Sequence2(
                ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMetaSequence>>::cast_into(
                    meta_sequence,
                )
                .as_raw_ptr(),
                ::cpp_core::CastInto::<::cpp_core::Ref<crate::QMetaType>>::cast_into(meta_type)
                    .as_raw_ptr(),
                iterable,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QtMetaContainerPrivate::Sequence::Sequence(const QtMetaContainerPrivate::Sequence& other)```</span>.
    #[inline(always)]
    pub unsafe fn new_copy(
        other: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::qt_meta_container_private::Sequence>>,
    ) -> ::cpp_core::CppBox<crate::qt_meta_container_private::Sequence> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_Sequence4(::cpp_core::CastInto::<::cpp_core::Ref<crate::qt_meta_container_private::Sequence>>::cast_into(other).as_raw_ptr())
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }

    /// Calls C++ function: <span style='color: green;'>```void QtMetaContainerPrivate::Sequence::prepend(const QVariant& value)```</span>.
    #[inline(always)]
    pub unsafe fn prepend(
        &self,
        value: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVariant>>,
    ) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_prepend(
            self as *const crate::qt_meta_container_private::Sequence
                as *mut crate::qt_meta_container_private::Sequence,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVariant>>::cast_into(value).as_raw_ptr(),
        )
    }

    /// Calls C++ function: <span style='color: green;'>```void QtMetaContainerPrivate::Sequence::removeFirst()```</span>.
    #[inline(always)]
    pub unsafe fn remove_first(&self) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_removeFirst(
            self as *const crate::qt_meta_container_private::Sequence
                as *mut crate::qt_meta_container_private::Sequence,
        )
    }

    /// Calls C++ function: <span style='color: green;'>```void QtMetaContainerPrivate::Sequence::removeLast()```</span>.
    #[inline(always)]
    pub unsafe fn remove_last(&self) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_removeLast(
            self as *const crate::qt_meta_container_private::Sequence
                as *mut crate::qt_meta_container_private::Sequence,
        )
    }

    /// Calls C++ function: <span style='color: green;'>```void QtMetaContainerPrivate::Sequence::removeValue(QtMetaContainerPrivate::Sequence::Position position = …)```</span>.
    #[inline(always)]
    pub unsafe fn remove_value_1a(
        &self,
        position: crate::qt_meta_container_private::sequence::Position,
    ) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_removeValue(
            self as *const crate::qt_meta_container_private::Sequence
                as *mut crate::qt_meta_container_private::Sequence,
            position,
        )
    }

    /// Calls C++ function: <span style='color: green;'>```void QtMetaContainerPrivate::Sequence::removeValue()```</span>.
    #[inline(always)]
    pub unsafe fn remove_value_0a(&self) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_removeValue1(
            self as *const crate::qt_meta_container_private::Sequence
                as *mut crate::qt_meta_container_private::Sequence,
        )
    }

    /// Calls C++ function: <span style='color: green;'>```void QtMetaContainerPrivate::Sequence::setAt(long long idx, const QVariant& value)```</span>.
    #[inline(always)]
    pub unsafe fn set_at(
        &self,
        idx: ::std::os::raw::c_longlong,
        value: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QVariant>>,
    ) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_setAt(
            self as *const crate::qt_meta_container_private::Sequence
                as *mut crate::qt_meta_container_private::Sequence,
            idx,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QVariant>>::cast_into(value).as_raw_ptr(),
        )
    }

    /// Calls C++ function: <span style='color: green;'>```QMetaType QtMetaContainerPrivate::Sequence::valueMetaType() const```</span>.
    #[inline(always)]
    pub unsafe fn value_meta_type(&self) -> ::cpp_core::CppBox<crate::QMetaType> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_valueMetaType(
                self as *const crate::qt_meta_container_private::Sequence,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
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

impl ::cpp_core::ops::Indirection for crate::qt_meta_container_private::AssociativeIterator {
    type Output = ::cpp_core::CppBox<crate::q_variant::ReferenceOfAssociativeIterator>;
    /// Calls C++ function: <span style='color: green;'>```QVariant::Reference<QtMetaContainerPrivate::AssociativeIterator> QtMetaContainerPrivate::AssociativeIterator::operator*() const```</span>.
    #[inline(always)]
    unsafe fn indirection(
        &self,
    ) -> ::cpp_core::CppBox<crate::q_variant::ReferenceOfAssociativeIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeIterator_operator_(
                self as *const crate::qt_meta_container_private::AssociativeIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }
}

impl ::cpp_core::ops::Indirection for crate::qt_meta_container_private::AssociativeConstIterator {
    type Output = ::cpp_core::CppBox<crate::QVariant>;
    /// Calls C++ function: <span style='color: green;'>```QVariant QtMetaContainerPrivate::AssociativeConstIterator::operator*() const```</span>.
    #[inline(always)]
    unsafe fn indirection(&self) -> ::cpp_core::CppBox<crate::QVariant> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeConstIterator_operator_(
                self as *const crate::qt_meta_container_private::AssociativeConstIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }
}

impl ::cpp_core::ops::Begin for crate::qt_meta_container_private::Association {
    type Output = ::cpp_core::CppBox<crate::QTaggedIteratorOfAssociativeConstIterator>;
    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::AssociativeConstIterator, void> QtMetaContainerPrivate::Association::begin() const```</span>.
    #[inline(always)]
    unsafe fn begin(&self) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfAssociativeConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_begin(
                self as *const crate::qt_meta_container_private::Association,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }
}

impl ::cpp_core::ops::End for crate::qt_meta_container_private::Association {
    type Output = ::cpp_core::CppBox<crate::QTaggedIteratorOfAssociativeConstIterator>;
    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::AssociativeConstIterator, void> QtMetaContainerPrivate::Association::end() const```</span>.
    #[inline(always)]
    unsafe fn end(&self) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfAssociativeConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_end(
                self as *const crate::qt_meta_container_private::Association,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }
}

impl ::cpp_core::ops::Indirection for crate::qt_meta_container_private::SequentialIterator {
    type Output = ::cpp_core::CppBox<crate::q_variant::ReferenceOfSequentialIterator>;
    /// Calls C++ function: <span style='color: green;'>```QVariant::Reference<QtMetaContainerPrivate::SequentialIterator> QtMetaContainerPrivate::SequentialIterator::operator*() const```</span>.
    #[inline(always)]
    unsafe fn indirection(
        &self,
    ) -> ::cpp_core::CppBox<crate::q_variant::ReferenceOfSequentialIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialIterator_operator_(
                self as *const crate::qt_meta_container_private::SequentialIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }
}

impl ::cpp_core::ops::Indirection for crate::qt_meta_container_private::SequentialConstIterator {
    type Output = ::cpp_core::CppBox<crate::QVariant>;
    /// Calls C++ function: <span style='color: green;'>```QVariant QtMetaContainerPrivate::SequentialConstIterator::operator*() const```</span>.
    #[inline(always)]
    unsafe fn indirection(&self) -> ::cpp_core::CppBox<crate::QVariant> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialConstIterator_operator_(
                self as *const crate::qt_meta_container_private::SequentialConstIterator,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }
}

impl ::cpp_core::ops::Begin for crate::qt_meta_container_private::Sequence {
    type Output = ::cpp_core::CppBox<crate::QTaggedIteratorOfSequentialConstIterator>;
    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::SequentialConstIterator, void> QtMetaContainerPrivate::Sequence::begin() const```</span>.
    #[inline(always)]
    unsafe fn begin(&self) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfSequentialConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_begin(
                self as *const crate::qt_meta_container_private::Sequence,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
    }
}

impl ::cpp_core::ops::End for crate::qt_meta_container_private::Sequence {
    type Output = ::cpp_core::CppBox<crate::QTaggedIteratorOfSequentialConstIterator>;
    /// Calls C++ function: <span style='color: green;'>```QTaggedIterator<QtMetaContainerPrivate::SequentialConstIterator, void> QtMetaContainerPrivate::Sequence::end() const```</span>.
    #[inline(always)]
    unsafe fn end(&self) -> ::cpp_core::CppBox<crate::QTaggedIteratorOfSequentialConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_end(
                self as *const crate::qt_meta_container_private::Sequence,
            )
        };
        ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
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

impl ::cpp_core::CppDeletable for crate::qt_meta_container_private::AssociativeIterator {
    /// Calls C++ function: <span style='color: green;'>```[destructor] void QtMetaContainerPrivate::AssociativeIterator::~AssociativeIterator()```</span>.
    #[inline(always)]
    unsafe fn delete(&self) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeIterator_dAssociativeIterator(self as *const crate::qt_meta_container_private::AssociativeIterator as *mut crate::qt_meta_container_private::AssociativeIterator)
    }
}

impl ::cpp_core::CppDeletable for crate::qt_meta_container_private::AssociativeConstIterator {
    /// Calls C++ function: <span style='color: green;'>```[destructor] void QtMetaContainerPrivate::AssociativeConstIterator::~AssociativeConstIterator()```</span>.
    #[inline(always)]
    unsafe fn delete(&self) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_AssociativeConstIterator_dAssociativeConstIterator(self as *const crate::qt_meta_container_private::AssociativeConstIterator as *mut crate::qt_meta_container_private::AssociativeConstIterator)
    }
}

impl ::cpp_core::CppDeletable for crate::qt_meta_container_private::Association {
    /// Calls C++ function: <span style='color: green;'>```[destructor] void QtMetaContainerPrivate::Association::~Association()```</span>.
    #[inline(always)]
    unsafe fn delete(&self) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Association_dAssociation(
            self as *const crate::qt_meta_container_private::Association
                as *mut crate::qt_meta_container_private::Association,
        )
    }
}

impl ::cpp_core::CppDeletable for crate::qt_meta_container_private::SequentialIterator {
    /// Calls C++ function: <span style='color: green;'>```[destructor] void QtMetaContainerPrivate::SequentialIterator::~SequentialIterator()```</span>.
    #[inline(always)]
    unsafe fn delete(&self) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialIterator_dSequentialIterator(
            self as *const crate::qt_meta_container_private::SequentialIterator
                as *mut crate::qt_meta_container_private::SequentialIterator,
        )
    }
}

impl ::cpp_core::CppDeletable for crate::qt_meta_container_private::SequentialConstIterator {
    /// Calls C++ function: <span style='color: green;'>```[destructor] void QtMetaContainerPrivate::SequentialConstIterator::~SequentialConstIterator()```</span>.
    #[inline(always)]
    unsafe fn delete(&self) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_SequentialConstIterator_dSequentialConstIterator(self as *const crate::qt_meta_container_private::SequentialConstIterator as *mut crate::qt_meta_container_private::SequentialConstIterator)
    }
}

impl ::cpp_core::CppDeletable for crate::qt_meta_container_private::Sequence {
    /// Calls C++ function: <span style='color: green;'>```[destructor] void QtMetaContainerPrivate::Sequence::~Sequence()```</span>.
    #[inline(always)]
    unsafe fn delete(&self) {
        crate::__ffi::ctr_qt_core_ffi_QtMetaContainerPrivate_Sequence_dSequence(
            self as *const crate::qt_meta_container_private::Sequence
                as *mut crate::qt_meta_container_private::Sequence,
        )
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

impl ::cpp_core::StaticDowncast<crate::qt_meta_container_private::AssociativeIterator>
    for crate::QIteratorOfQMetaAssociation
{
    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::AssociativeIterator* static_cast<QtMetaContainerPrivate::AssociativeIterator*>(QIterator<QMetaAssociation>* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_downcast(
        ptr: ::cpp_core::Ptr<crate::QIteratorOfQMetaAssociation>,
    ) -> ::cpp_core::Ptr<crate::qt_meta_container_private::AssociativeIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_AssociativeIterator_ptr(
                ptr.as_raw_ptr() as *mut crate::QIteratorOfQMetaAssociation,
            )
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::cpp_core::StaticUpcast<crate::QIteratorOfQMetaAssociation>
    for crate::qt_meta_container_private::AssociativeIterator
{
    /// Calls C++ function: <span style='color: green;'>```QIterator<QMetaAssociation>* static_cast<QIterator<QMetaAssociation>*>(QtMetaContainerPrivate::AssociativeIterator* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_upcast(
        ptr: ::cpp_core::Ptr<crate::qt_meta_container_private::AssociativeIterator>,
    ) -> ::cpp_core::Ptr<crate::QIteratorOfQMetaAssociation> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QIterator_QMetaAssociation_ptr1(
                ptr.as_raw_ptr() as *mut crate::qt_meta_container_private::AssociativeIterator,
            )
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::std::ops::Deref for crate::qt_meta_container_private::AssociativeIterator {
    type Target = crate::QIteratorOfQMetaAssociation;
    /// Calls C++ function: <span style='color: green;'>```QIterator<QMetaAssociation>* static_cast<QIterator<QMetaAssociation>*>(QtMetaContainerPrivate::AssociativeIterator* ptr)```</span>.
    #[inline(always)]
    fn deref(&self) -> &crate::QIteratorOfQMetaAssociation {
        let ffi_result = {
            unsafe {
                crate::__ffi::ctr_qt_core_ffi_static_cast_QIterator_QMetaAssociation_ptr1(
                    self as *const crate::qt_meta_container_private::AssociativeIterator
                        as *mut crate::qt_meta_container_private::AssociativeIterator,
                )
            }
        };
        unsafe { ffi_result.as_ref() }.expect("Attempted to convert null pointer to reference")
    }
}

impl ::cpp_core::StaticDowncast<crate::qt_meta_container_private::AssociativeConstIterator>
    for crate::QConstIteratorOfQMetaAssociation
{
    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::AssociativeConstIterator* static_cast<QtMetaContainerPrivate::AssociativeConstIterator*>(QConstIterator<QMetaAssociation>* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_downcast(
        ptr: ::cpp_core::Ptr<crate::QConstIteratorOfQMetaAssociation>,
    ) -> ::cpp_core::Ptr<crate::qt_meta_container_private::AssociativeConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_AssociativeConstIterator_ptr(ptr.as_raw_ptr() as *mut crate::QConstIteratorOfQMetaAssociation)
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::cpp_core::StaticUpcast<crate::QConstIteratorOfQMetaAssociation>
    for crate::qt_meta_container_private::AssociativeConstIterator
{
    /// Calls C++ function: <span style='color: green;'>```QConstIterator<QMetaAssociation>* static_cast<QConstIterator<QMetaAssociation>*>(QtMetaContainerPrivate::AssociativeConstIterator* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_upcast(
        ptr: ::cpp_core::Ptr<crate::qt_meta_container_private::AssociativeConstIterator>,
    ) -> ::cpp_core::Ptr<crate::QConstIteratorOfQMetaAssociation> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QConstIterator_QMetaAssociation_ptr1(
                ptr.as_raw_ptr() as *mut crate::qt_meta_container_private::AssociativeConstIterator,
            )
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::std::ops::Deref for crate::qt_meta_container_private::AssociativeConstIterator {
    type Target = crate::QConstIteratorOfQMetaAssociation;
    /// Calls C++ function: <span style='color: green;'>```QConstIterator<QMetaAssociation>* static_cast<QConstIterator<QMetaAssociation>*>(QtMetaContainerPrivate::AssociativeConstIterator* ptr)```</span>.
    #[inline(always)]
    fn deref(&self) -> &crate::QConstIteratorOfQMetaAssociation {
        let ffi_result = {
            unsafe {
                crate::__ffi::ctr_qt_core_ffi_static_cast_QConstIterator_QMetaAssociation_ptr1(
                    self as *const crate::qt_meta_container_private::AssociativeConstIterator
                        as *mut crate::qt_meta_container_private::AssociativeConstIterator,
                )
            }
        };
        unsafe { ffi_result.as_ref() }.expect("Attempted to convert null pointer to reference")
    }
}

impl ::cpp_core::StaticDowncast<crate::qt_meta_container_private::Association>
    for crate::QIterableOfQMetaAssociation
{
    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::Association* static_cast<QtMetaContainerPrivate::Association*>(QIterable<QMetaAssociation>* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_downcast(
        ptr: ::cpp_core::Ptr<crate::QIterableOfQMetaAssociation>,
    ) -> ::cpp_core::Ptr<crate::qt_meta_container_private::Association> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_Association_ptr(
                ptr.as_raw_ptr() as *mut crate::QIterableOfQMetaAssociation,
            )
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::cpp_core::StaticUpcast<crate::QIterableOfQMetaAssociation>
    for crate::qt_meta_container_private::Association
{
    /// Calls C++ function: <span style='color: green;'>```QIterable<QMetaAssociation>* static_cast<QIterable<QMetaAssociation>*>(QtMetaContainerPrivate::Association* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_upcast(
        ptr: ::cpp_core::Ptr<crate::qt_meta_container_private::Association>,
    ) -> ::cpp_core::Ptr<crate::QIterableOfQMetaAssociation> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QIterable_QMetaAssociation_ptr1(
                ptr.as_raw_ptr() as *mut crate::qt_meta_container_private::Association,
            )
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::std::ops::Deref for crate::qt_meta_container_private::Association {
    type Target = crate::QIterableOfQMetaAssociation;
    /// Calls C++ function: <span style='color: green;'>```QIterable<QMetaAssociation>* static_cast<QIterable<QMetaAssociation>*>(QtMetaContainerPrivate::Association* ptr)```</span>.
    #[inline(always)]
    fn deref(&self) -> &crate::QIterableOfQMetaAssociation {
        let ffi_result = {
            unsafe {
                crate::__ffi::ctr_qt_core_ffi_static_cast_QIterable_QMetaAssociation_ptr1(
                    self as *const crate::qt_meta_container_private::Association
                        as *mut crate::qt_meta_container_private::Association,
                )
            }
        };
        unsafe { ffi_result.as_ref() }.expect("Attempted to convert null pointer to reference")
    }
}

impl ::cpp_core::StaticDowncast<crate::qt_meta_container_private::SequentialIterator>
    for crate::QIteratorOfQMetaSequence
{
    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::SequentialIterator* static_cast<QtMetaContainerPrivate::SequentialIterator*>(QIterator<QMetaSequence>* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_downcast(
        ptr: ::cpp_core::Ptr<crate::QIteratorOfQMetaSequence>,
    ) -> ::cpp_core::Ptr<crate::qt_meta_container_private::SequentialIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_SequentialIterator_ptr(
                ptr.as_raw_ptr() as *mut crate::QIteratorOfQMetaSequence,
            )
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::cpp_core::StaticUpcast<crate::QIteratorOfQMetaSequence>
    for crate::qt_meta_container_private::SequentialIterator
{
    /// Calls C++ function: <span style='color: green;'>```QIterator<QMetaSequence>* static_cast<QIterator<QMetaSequence>*>(QtMetaContainerPrivate::SequentialIterator* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_upcast(
        ptr: ::cpp_core::Ptr<crate::qt_meta_container_private::SequentialIterator>,
    ) -> ::cpp_core::Ptr<crate::QIteratorOfQMetaSequence> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QIterator_QMetaSequence_ptr(
                ptr.as_raw_ptr() as *mut crate::qt_meta_container_private::SequentialIterator
            )
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::std::ops::Deref for crate::qt_meta_container_private::SequentialIterator {
    type Target = crate::QIteratorOfQMetaSequence;
    /// Calls C++ function: <span style='color: green;'>```QIterator<QMetaSequence>* static_cast<QIterator<QMetaSequence>*>(QtMetaContainerPrivate::SequentialIterator* ptr)```</span>.
    #[inline(always)]
    fn deref(&self) -> &crate::QIteratorOfQMetaSequence {
        let ffi_result = {
            unsafe {
                crate::__ffi::ctr_qt_core_ffi_static_cast_QIterator_QMetaSequence_ptr(
                    self as *const crate::qt_meta_container_private::SequentialIterator
                        as *mut crate::qt_meta_container_private::SequentialIterator,
                )
            }
        };
        unsafe { ffi_result.as_ref() }.expect("Attempted to convert null pointer to reference")
    }
}

impl ::cpp_core::StaticDowncast<crate::qt_meta_container_private::SequentialConstIterator>
    for crate::QConstIteratorOfQMetaSequence
{
    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::SequentialConstIterator* static_cast<QtMetaContainerPrivate::SequentialConstIterator*>(QConstIterator<QMetaSequence>* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_downcast(
        ptr: ::cpp_core::Ptr<crate::QConstIteratorOfQMetaSequence>,
    ) -> ::cpp_core::Ptr<crate::qt_meta_container_private::SequentialConstIterator> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_SequentialConstIterator_ptr(ptr.as_raw_ptr() as *mut crate::QConstIteratorOfQMetaSequence)
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::cpp_core::StaticUpcast<crate::QConstIteratorOfQMetaSequence>
    for crate::qt_meta_container_private::SequentialConstIterator
{
    /// Calls C++ function: <span style='color: green;'>```QConstIterator<QMetaSequence>* static_cast<QConstIterator<QMetaSequence>*>(QtMetaContainerPrivate::SequentialConstIterator* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_upcast(
        ptr: ::cpp_core::Ptr<crate::qt_meta_container_private::SequentialConstIterator>,
    ) -> ::cpp_core::Ptr<crate::QConstIteratorOfQMetaSequence> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QConstIterator_QMetaSequence_ptr(
                ptr.as_raw_ptr() as *mut crate::qt_meta_container_private::SequentialConstIterator,
            )
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::std::ops::Deref for crate::qt_meta_container_private::SequentialConstIterator {
    type Target = crate::QConstIteratorOfQMetaSequence;
    /// Calls C++ function: <span style='color: green;'>```QConstIterator<QMetaSequence>* static_cast<QConstIterator<QMetaSequence>*>(QtMetaContainerPrivate::SequentialConstIterator* ptr)```</span>.
    #[inline(always)]
    fn deref(&self) -> &crate::QConstIteratorOfQMetaSequence {
        let ffi_result = {
            unsafe {
                crate::__ffi::ctr_qt_core_ffi_static_cast_QConstIterator_QMetaSequence_ptr(
                    self as *const crate::qt_meta_container_private::SequentialConstIterator
                        as *mut crate::qt_meta_container_private::SequentialConstIterator,
                )
            }
        };
        unsafe { ffi_result.as_ref() }.expect("Attempted to convert null pointer to reference")
    }
}

impl ::cpp_core::StaticDowncast<crate::qt_meta_container_private::Sequence>
    for crate::QIterableOfQMetaSequence
{
    /// Calls C++ function: <span style='color: green;'>```QtMetaContainerPrivate::Sequence* static_cast<QtMetaContainerPrivate::Sequence*>(QIterable<QMetaSequence>* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_downcast(
        ptr: ::cpp_core::Ptr<crate::QIterableOfQMetaSequence>,
    ) -> ::cpp_core::Ptr<crate::qt_meta_container_private::Sequence> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QtMetaContainerPrivate_Sequence_ptr(
                ptr.as_raw_ptr() as *mut crate::QIterableOfQMetaSequence,
            )
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::cpp_core::StaticUpcast<crate::QIterableOfQMetaSequence>
    for crate::qt_meta_container_private::Sequence
{
    /// Calls C++ function: <span style='color: green;'>```QIterable<QMetaSequence>* static_cast<QIterable<QMetaSequence>*>(QtMetaContainerPrivate::Sequence* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_upcast(
        ptr: ::cpp_core::Ptr<crate::qt_meta_container_private::Sequence>,
    ) -> ::cpp_core::Ptr<crate::QIterableOfQMetaSequence> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QIterable_QMetaSequence_ptr(
                ptr.as_raw_ptr() as *mut crate::qt_meta_container_private::Sequence
            )
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::std::ops::Deref for crate::qt_meta_container_private::Sequence {
    type Target = crate::QIterableOfQMetaSequence;
    /// Calls C++ function: <span style='color: green;'>```QIterable<QMetaSequence>* static_cast<QIterable<QMetaSequence>*>(QtMetaContainerPrivate::Sequence* ptr)```</span>.
    #[inline(always)]
    fn deref(&self) -> &crate::QIterableOfQMetaSequence {
        let ffi_result = {
            unsafe {
                crate::__ffi::ctr_qt_core_ffi_static_cast_QIterable_QMetaSequence_ptr(
                    self as *const crate::qt_meta_container_private::Sequence
                        as *mut crate::qt_meta_container_private::Sequence,
                )
            }
        };
        unsafe { ffi_result.as_ref() }.expect("Attempted to convert null pointer to reference")
    }
}
