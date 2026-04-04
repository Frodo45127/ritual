#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! C++ namespace: <span style='color: green;'>```QRangeModelDetails```</span>

/// C++ enum: <span style='color: green;'>```QRangeModelDetails::Mutable```</span>.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(transparent)]
pub struct Mutable(::std::os::raw::c_int);

impl From<::std::os::raw::c_int> for Mutable {
    fn from(value: ::std::os::raw::c_int) -> Self {
        Mutable(value)
    }
}

impl From<Mutable> for ::std::os::raw::c_int {
    fn from(value: Mutable) -> Self {
        value.0
    }
}

impl Mutable {
    pub fn to_int(&self) -> ::std::os::raw::c_int {
        self.0
    }
}

impl Mutable {
    /// C++ enum variant: <span style='color: green;'>```Yes = 0```</span>
    #[allow(non_upper_case_globals)]
    pub const Yes: crate::q_range_model_details::Mutable = crate::q_range_model_details::Mutable(0);
    /// C++ enum variant: <span style='color: green;'>```No = 1```</span>
    #[allow(non_upper_case_globals)]
    pub const No: crate::q_range_model_details::Mutable = crate::q_range_model_details::Mutable(1);
}

pub mod auto_connect_context {
    //! C++ type: <span style='color: green;'>```QRangeModelDetails::AutoConnectContext```</span>

    /// C++ enum: <span style='color: green;'>```QRangeModelDetails::AutoConnectContext::AutoConnectMapping```</span>.
    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    #[repr(transparent)]
    pub struct AutoConnectMapping(::std::os::raw::c_int);

    impl From<::std::os::raw::c_int> for AutoConnectMapping {
        fn from(value: ::std::os::raw::c_int) -> Self {
            AutoConnectMapping(value)
        }
    }

    impl From<AutoConnectMapping> for ::std::os::raw::c_int {
        fn from(value: AutoConnectMapping) -> Self {
            value.0
        }
    }

    impl AutoConnectMapping {
        pub fn to_int(&self) -> ::std::os::raw::c_int {
            self.0
        }
    }

    impl AutoConnectMapping {
        /// C++ enum variant: <span style='color: green;'>```Roles = 0```</span>
        #[allow(non_upper_case_globals)]
        pub const Roles: crate::q_range_model_details::auto_connect_context::AutoConnectMapping =
            crate::q_range_model_details::auto_connect_context::AutoConnectMapping(0);
        /// C++ enum variant: <span style='color: green;'>```Columns = 1```</span>
        #[allow(non_upper_case_globals)]
        pub const Columns: crate::q_range_model_details::auto_connect_context::AutoConnectMapping =
            crate::q_range_model_details::auto_connect_context::AutoConnectMapping(1);
    }
}
/// C++ class: <span style='color: green;'>```QRangeModelDetails::AutoConnectContext```</span>.
#[repr(C)]
pub struct AutoConnectContext {
    _unused: u8,
}
impl AutoConnectContext {
    /// Returns the value of the <span style='color: green;'>```mapping```</span> field.
    #[inline(always)]
    pub unsafe fn mapping(
        &self,
    ) -> crate::q_range_model_details::auto_connect_context::AutoConnectMapping {
        crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_AutoConnectContext_mapping(
            self as *const crate::q_range_model_details::AutoConnectContext,
        )
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QRangeModelDetails::AutoConnectContext::AutoConnectContext(QObject* parent)```</span>.
    #[inline(always)]
    pub unsafe fn new(
        parent: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QObject>>,
    ) -> crate::QBox<crate::q_range_model_details::AutoConnectContext> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_AutoConnectContext_AutoConnectContext(
                ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QObject>>::cast_into(parent)
                    .as_raw_ptr() as *mut crate::QObject,
            )
        };
        crate::QBox::from_raw(ffi_result)
    }

    /// Sets the value of the <span style='color: green;'>```mapping```</span> field.
    #[inline(always)]
    pub unsafe fn set_mapping(
        &self,
        value: crate::q_range_model_details::auto_connect_context::AutoConnectMapping,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QRangeModelDetails_AutoConnectContext_mapping(
            self as *const crate::q_range_model_details::AutoConnectContext
                as *mut crate::q_range_model_details::AutoConnectContext,
            value,
        )
    }
}

/// C++ class: <span style='color: green;'>```QRangeModelDetails::PropertyCache```</span>.
#[repr(C)]
pub struct PropertyCache {
    _unused: u8,
}
impl PropertyCache {
    /// Returns the value of the <span style='color: green;'>```cachesProperties```</span> field.
    #[inline(always)]
    pub unsafe fn caches_properties() -> bool {
        crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_PropertyCache_cachesProperties()
    }

    /// Calls C++ function: <span style='color: green;'>```QRangeModelDetails::PropertyCache& QRangeModelDetails::PropertyCache::operator=(const QRangeModelDetails::PropertyCache& other)```</span>.
    #[inline(always)]
    pub unsafe fn copy_from(
        &self,
        other: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::q_range_model_details::PropertyCache>>,
    ) -> ::cpp_core::Ref<crate::q_range_model_details::PropertyCache> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_PropertyCache_operator_(self as *const crate::q_range_model_details::PropertyCache as *mut crate::q_range_model_details::PropertyCache, ::cpp_core::CastInto::<::cpp_core::Ref<crate::q_range_model_details::PropertyCache>>::cast_into(other).as_raw_ptr())
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Calls C++ function: <span style='color: green;'>```void QRangeModelDetails::PropertyCache::invalidateCaches()```</span>.
    #[inline(always)]
    pub unsafe fn invalidate_caches(&self) {
        crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_PropertyCache_invalidateCaches(
            self as *const crate::q_range_model_details::PropertyCache
                as *mut crate::q_range_model_details::PropertyCache,
        )
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QRangeModelDetails::PropertyCache::PropertyCache()```</span>.
    #[inline(always)]
    pub unsafe fn new() -> ::cpp_core::Ref<crate::q_range_model_details::PropertyCache> {
        let ffi_result =
            { crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_PropertyCache_PropertyCache() };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QRangeModelDetails::PropertyCache::PropertyCache(const QRangeModelDetails::PropertyCache& other)```</span>.
    #[inline(always)]
    pub unsafe fn new_copy(
        other: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::q_range_model_details::PropertyCache>>,
    ) -> ::cpp_core::Ref<crate::q_range_model_details::PropertyCache> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_PropertyCache_PropertyCache1(::cpp_core::CastInto::<::cpp_core::Ref<crate::q_range_model_details::PropertyCache>>::cast_into(other).as_raw_ptr())
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Returns a reference to the <span style='color: green;'>```properties```</span> field.
    #[inline(always)]
    pub unsafe fn properties(&self) -> ::cpp_core::Ref<crate::QHashOfIntQMetaProperty> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_PropertyCache_properties(
                self as *const crate::q_range_model_details::PropertyCache,
            )
        };
        ::cpp_core::Ref::from_raw(ffi_result as *mut crate::QHashOfIntQMetaProperty)
            .expect("attempted to construct a null Ref")
    }

    /// Returns a mutable reference to the <span style='color: green;'>```properties```</span> field.
    #[inline(always)]
    pub unsafe fn properties_mut(&self) -> ::cpp_core::Ref<crate::QHashOfIntQMetaProperty> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_PropertyCache_properties_mut(
                self as *const crate::q_range_model_details::PropertyCache
                    as *mut crate::q_range_model_details::PropertyCache,
            )
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Sets the value of the <span style='color: green;'>```properties```</span> field.
    #[inline(always)]
    pub unsafe fn set_properties(
        &self,
        value: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QHashOfIntQMetaProperty>>,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QRangeModelDetails_PropertyCache_properties(
            self as *const crate::q_range_model_details::PropertyCache
                as *mut crate::q_range_model_details::PropertyCache,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QHashOfIntQMetaProperty>>::cast_into(
                value,
            )
            .as_raw_ptr(),
        )
    }
}

pub mod connection_storage {
    //! C++ type: <span style='color: green;'>```QRangeModelDetails::ConnectionStorage```</span>

    /// C++ class: <span style='color: green;'>```QRangeModelDetails::ConnectionStorage::Connection```</span>.
    #[repr(C)]
    pub struct Connection {
        _unused: u8,
    }
    impl Connection {
        /// Calls C++ function: <span style='color: green;'>```QRangeModelDetails::ConnectionStorage::Connection& QRangeModelDetails::ConnectionStorage::Connection::operator=(const QRangeModelDetails::ConnectionStorage::Connection& other)```</span>.
        #[inline(always)]
        pub unsafe fn copy_from(
            &self,
            other: impl ::cpp_core::CastInto<
                ::cpp_core::Ref<crate::q_range_model_details::connection_storage::Connection>,
            >,
        ) -> ::cpp_core::Ref<crate::q_range_model_details::connection_storage::Connection> {
            let ffi_result = {
                crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_ConnectionStorage_Connection_operator_(self as *const crate::q_range_model_details::connection_storage::Connection as *mut crate::q_range_model_details::connection_storage::Connection, ::cpp_core::CastInto::<::cpp_core::Ref<crate::q_range_model_details::connection_storage::Connection>>::cast_into(other).as_raw_ptr())
            };
            ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
        }

        /// Calls C++ function: <span style='color: green;'>```[constructor] void QRangeModelDetails::ConnectionStorage::Connection::Connection()```</span>.
        #[inline(always)]
        pub unsafe fn new(
        ) -> ::cpp_core::CppBox<crate::q_range_model_details::connection_storage::Connection>
        {
            let ffi_result = {
                crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_ConnectionStorage_Connection_Connection()
            };
            ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
        }

        /// Calls C++ function: <span style='color: green;'>```[constructor] void QRangeModelDetails::ConnectionStorage::Connection::Connection(const QRangeModelDetails::ConnectionStorage::Connection& other)```</span>.
        #[inline(always)]
        pub unsafe fn new_copy(
            other: impl ::cpp_core::CastInto<
                ::cpp_core::Ref<crate::q_range_model_details::connection_storage::Connection>,
            >,
        ) -> ::cpp_core::CppBox<crate::q_range_model_details::connection_storage::Connection>
        {
            let ffi_result = {
                crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_ConnectionStorage_Connection_Connection1(::cpp_core::CastInto::<::cpp_core::Ref<crate::q_range_model_details::connection_storage::Connection>>::cast_into(other).as_raw_ptr())
            };
            ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
        }

        /// Returns the value of the <span style='color: green;'>```role```</span> field.
        #[inline(always)]
        pub unsafe fn role(&self) -> ::std::os::raw::c_int {
            crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_ConnectionStorage_Connection_role(
                self as *const crate::q_range_model_details::connection_storage::Connection,
            )
        }

        /// Returns the value of the <span style='color: green;'>```sender```</span> field.
        #[inline(always)]
        pub unsafe fn sender(&self) -> crate::QPtr<crate::QObject> {
            let ffi_result = {
                crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_ConnectionStorage_Connection_sender(
                    self as *const crate::q_range_model_details::connection_storage::Connection,
                )
            };
            crate::QPtr::from_raw(ffi_result as *mut crate::QObject)
        }

        /// Sets the value of the <span style='color: green;'>```role```</span> field.
        #[inline(always)]
        pub unsafe fn set_role(&self, value: ::std::os::raw::c_int) {
            crate::__ffi::ctr_qt_core_ffi_set_QRangeModelDetails_ConnectionStorage_Connection_role(
                self as *const crate::q_range_model_details::connection_storage::Connection
                    as *mut crate::q_range_model_details::connection_storage::Connection,
                value,
            )
        }

        /// Sets the value of the <span style='color: green;'>```sender```</span> field.
        #[inline(always)]
        pub unsafe fn set_sender(
            &self,
            value: impl ::cpp_core::CastInto<::cpp_core::Ptr<crate::QObject>>,
        ) {
            crate::__ffi::ctr_qt_core_ffi_set_QRangeModelDetails_ConnectionStorage_Connection_sender(
                self as *const crate::q_range_model_details::connection_storage::Connection
                    as *mut crate::q_range_model_details::connection_storage::Connection,
                ::cpp_core::CastInto::<::cpp_core::Ptr<crate::QObject>>::cast_into(value)
                    .as_raw_ptr(),
            )
        }
    }

    impl ::cpp_core::CppDeletable for crate::q_range_model_details::connection_storage::Connection {
        /// Calls C++ function: <span style='color: green;'>```[destructor] void QRangeModelDetails::ConnectionStorage::Connection::~Connection()```</span>.
        #[inline(always)]
        unsafe fn delete(&self) {
            crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_ConnectionStorage_Connection_dConnection(self as *const crate::q_range_model_details::connection_storage::Connection as *mut crate::q_range_model_details::connection_storage::Connection)
        }
    }
}
/// C++ class: <span style='color: green;'>```QRangeModelDetails::ConnectionStorage```</span>.
#[repr(C)]
pub struct ConnectionStorage {
    _unused: u8,
}
impl ConnectionStorage {
    /// Returns a reference to the <span style='color: green;'>```connections```</span> field.
    #[inline(always)]
    pub unsafe fn connections(&self) -> ::cpp_core::Ref<crate::QSetOfConnection> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_ConnectionStorage_connections(
                self as *const crate::q_range_model_details::ConnectionStorage,
            )
        };
        ::cpp_core::Ref::from_raw(ffi_result as *mut crate::QSetOfConnection)
            .expect("attempted to construct a null Ref")
    }

    /// Returns a mutable reference to the <span style='color: green;'>```connections```</span> field.
    #[inline(always)]
    pub unsafe fn connections_mut(&self) -> ::cpp_core::Ref<crate::QSetOfConnection> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_ConnectionStorage_connections_mut(
                self as *const crate::q_range_model_details::ConnectionStorage
                    as *mut crate::q_range_model_details::ConnectionStorage,
            )
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Returns the value of the <span style='color: green;'>```context```</span> field.
    #[inline(always)]
    pub unsafe fn context(&self) -> crate::QPtr<crate::q_range_model_details::AutoConnectContext> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_ConnectionStorage_context(
                self as *const crate::q_range_model_details::ConnectionStorage,
            )
        };
        crate::QPtr::from_raw(ffi_result)
    }

    /// Calls C++ function: <span style='color: green;'>```QRangeModelDetails::ConnectionStorage& QRangeModelDetails::ConnectionStorage::operator=(const QRangeModelDetails::ConnectionStorage& other)```</span>.
    #[inline(always)]
    pub unsafe fn copy_from(
        &self,
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::q_range_model_details::ConnectionStorage>,
        >,
    ) -> ::cpp_core::Ref<crate::q_range_model_details::ConnectionStorage> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_ConnectionStorage_operator_(
                self as *const crate::q_range_model_details::ConnectionStorage
                    as *mut crate::q_range_model_details::ConnectionStorage,
                ::cpp_core::CastInto::<
                    ::cpp_core::Ref<crate::q_range_model_details::ConnectionStorage>,
                >::cast_into(other)
                .as_raw_ptr(),
            )
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QRangeModelDetails::ConnectionStorage::ConnectionStorage()```</span>.
    #[inline(always)]
    pub unsafe fn new() -> ::cpp_core::Ref<crate::q_range_model_details::ConnectionStorage> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_ConnectionStorage_ConnectionStorage()
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Calls C++ function: <span style='color: green;'>```[constructor] void QRangeModelDetails::ConnectionStorage::ConnectionStorage(const QRangeModelDetails::ConnectionStorage& other)```</span>.
    #[inline(always)]
    pub unsafe fn new_copy(
        other: impl ::cpp_core::CastInto<
            ::cpp_core::Ref<crate::q_range_model_details::ConnectionStorage>,
        >,
    ) -> ::cpp_core::Ref<crate::q_range_model_details::ConnectionStorage> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_ConnectionStorage_ConnectionStorage1(
                ::cpp_core::CastInto::<
                    ::cpp_core::Ref<crate::q_range_model_details::ConnectionStorage>,
                >::cast_into(other)
                .as_raw_ptr(),
            )
        };
        ::cpp_core::Ref::from_raw(ffi_result).expect("attempted to construct a null Ref")
    }

    /// Sets the value of the <span style='color: green;'>```connections```</span> field.
    #[inline(always)]
    pub unsafe fn set_connections(
        &self,
        value: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QSetOfConnection>>,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QRangeModelDetails_ConnectionStorage_connections(
            self as *const crate::q_range_model_details::ConnectionStorage
                as *mut crate::q_range_model_details::ConnectionStorage,
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QSetOfConnection>>::cast_into(value)
                .as_raw_ptr(),
        )
    }

    /// Sets the value of the <span style='color: green;'>```context```</span> field.
    #[inline(always)]
    pub unsafe fn set_context(
        &self,
        value: impl ::cpp_core::CastInto<
            ::cpp_core::Ptr<crate::q_range_model_details::AutoConnectContext>,
        >,
    ) {
        crate::__ffi::ctr_qt_core_ffi_set_QRangeModelDetails_ConnectionStorage_context(self as *const crate::q_range_model_details::ConnectionStorage as *mut crate::q_range_model_details::ConnectionStorage, ::cpp_core::CastInto::<::cpp_core::Ptr<crate::q_range_model_details::AutoConnectContext>>::cast_into(value).as_raw_ptr() as *mut crate::q_range_model_details::AutoConnectContext)
    }
}

impl ::cpp_core::CppDeletable for crate::q_range_model_details::AutoConnectContext {
    /// Calls C++ function: <span style='color: green;'>```virtual [destructor] void QRangeModelDetails::AutoConnectContext::~AutoConnectContext()```</span>.
    #[inline(always)]
    unsafe fn delete(&self) {
        crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_AutoConnectContext_dAutoConnectContext(
            self as *const crate::q_range_model_details::AutoConnectContext
                as *mut crate::q_range_model_details::AutoConnectContext,
        )
    }
}

impl ::cpp_core::StaticDowncast<crate::q_range_model_details::AutoConnectContext>
    for crate::QObject
{
    /// Calls C++ function: <span style='color: green;'>```QRangeModelDetails::AutoConnectContext* static_cast<QRangeModelDetails::AutoConnectContext*>(QObject* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_downcast(
        ptr: ::cpp_core::Ptr<crate::QObject>,
    ) -> ::cpp_core::Ptr<crate::q_range_model_details::AutoConnectContext> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QRangeModelDetails_AutoConnectContext_ptr(
                ptr.as_raw_ptr() as *mut crate::QObject,
            )
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::cpp_core::StaticUpcast<crate::QObject> for crate::q_range_model_details::AutoConnectContext {
    /// Calls C++ function: <span style='color: green;'>```QObject* static_cast<QObject*>(QRangeModelDetails::AutoConnectContext* ptr)```</span>.
    #[inline(always)]
    unsafe fn static_upcast(
        ptr: ::cpp_core::Ptr<crate::q_range_model_details::AutoConnectContext>,
    ) -> ::cpp_core::Ptr<crate::QObject> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_static_cast_QObject_ptr34(
                ptr.as_raw_ptr() as *mut crate::q_range_model_details::AutoConnectContext
            )
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

impl ::std::ops::Deref for crate::q_range_model_details::AutoConnectContext {
    type Target = crate::QObject;
    /// Calls C++ function: <span style='color: green;'>```QObject* static_cast<QObject*>(QRangeModelDetails::AutoConnectContext* ptr)```</span>.
    #[inline(always)]
    fn deref(&self) -> &crate::QObject {
        let ffi_result = {
            unsafe {
                crate::__ffi::ctr_qt_core_ffi_static_cast_QObject_ptr34(
                    self as *const crate::q_range_model_details::AutoConnectContext
                        as *mut crate::q_range_model_details::AutoConnectContext,
                )
            }
        };
        unsafe { ffi_result.as_ref() }.expect("Attempted to convert null pointer to reference")
    }
}

impl ::cpp_core::DynamicCast<crate::q_range_model_details::AutoConnectContext> for crate::QObject {
    /// Calls C++ function: <span style='color: green;'>```QRangeModelDetails::AutoConnectContext* dynamic_cast<QRangeModelDetails::AutoConnectContext*>(QObject* ptr)```</span>.
    #[inline(always)]
    unsafe fn dynamic_cast(
        ptr: ::cpp_core::Ptr<crate::QObject>,
    ) -> ::cpp_core::Ptr<crate::q_range_model_details::AutoConnectContext> {
        let ffi_result = {
            crate::__ffi::ctr_qt_core_ffi_dynamic_cast_QRangeModelDetails_AutoConnectContext_ptr(
                ptr.as_raw_ptr() as *mut crate::QObject,
            )
        };
        ::cpp_core::Ptr::from_raw(ffi_result)
    }
}

/// Calls C++ function: <span style='color: green;'>```QVariant QRangeModelDetails::qVariantAtIndex(const QModelIndex& index)```</span>.
#[inline(always)]
pub unsafe fn q_variant_at_index(
    index: impl ::cpp_core::CastInto<::cpp_core::Ref<crate::QModelIndex>>,
) -> ::cpp_core::CppBox<crate::QVariant> {
    let ffi_result = {
        crate::__ffi::ctr_qt_core_ffi_QRangeModelDetails_qVariantAtIndex(
            ::cpp_core::CastInto::<::cpp_core::Ref<crate::QModelIndex>>::cast_into(index)
                .as_raw_ptr(),
        )
    };
    ::cpp_core::CppBox::from_raw(ffi_result).expect("attempted to construct a null CppBox")
}
