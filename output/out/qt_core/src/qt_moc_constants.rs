#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! C++ namespace: <span style='color: green;'>```QtMocConstants```</span>

/// C++ enum: <span style='color: green;'>```QtMocConstants::PropertyFlags```</span>.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(transparent)]
pub struct PropertyFlags(::std::os::raw::c_int);

impl From<::std::os::raw::c_int> for PropertyFlags {
    fn from(value: ::std::os::raw::c_int) -> Self {
        PropertyFlags(value)
    }
}

impl From<PropertyFlags> for ::std::os::raw::c_int {
    fn from(value: PropertyFlags) -> Self {
        value.0
    }
}

impl PropertyFlags {
    pub fn to_int(&self) -> ::std::os::raw::c_int {
        self.0
    }
}

impl PropertyFlags {
    /// C++ enum variant: <span style='color: green;'>```Invalid = 0```</span>
    #[allow(non_upper_case_globals)]
    pub const Invalid: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(0);
    /// C++ enum variant: <span style='color: green;'>```Readable = 1```</span>
    #[allow(non_upper_case_globals)]
    pub const Readable: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(1);
    /// C++ enum variant: <span style='color: green;'>```Writable = 2```</span>
    #[allow(non_upper_case_globals)]
    pub const Writable: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(2);
    /// C++ enum variant: <span style='color: green;'>```Resettable = 4```</span>
    #[allow(non_upper_case_globals)]
    pub const Resettable: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(4);
    /// C++ enum variant: <span style='color: green;'>```EnumOrFlag = 8```</span>
    #[allow(non_upper_case_globals)]
    pub const EnumOrFlag: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(8);
    /// C++ enum variant: <span style='color: green;'>```Alias = 16```</span>
    #[allow(non_upper_case_globals)]
    pub const Alias: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(16);
    /// C++ enum variant: <span style='color: green;'>```Virtual = 32```</span>
    #[allow(non_upper_case_globals)]
    pub const Virtual: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(32);
    /// C++ enum variant: <span style='color: green;'>```Override = 64```</span>
    #[allow(non_upper_case_globals)]
    pub const Override: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(64);
    /// C++ enum variant: <span style='color: green;'>```StdCppSet = 256```</span>
    #[allow(non_upper_case_globals)]
    pub const StdCppSet: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(256);
    /// C++ enum variant: <span style='color: green;'>```Constant = 1024```</span>
    #[allow(non_upper_case_globals)]
    pub const Constant: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(1024);
    /// C++ enum variant: <span style='color: green;'>```Final = 2048```</span>
    #[allow(non_upper_case_globals)]
    pub const Final: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(2048);
    /// C++ enum variant: <span style='color: green;'>```Designable = 4096```</span>
    #[allow(non_upper_case_globals)]
    pub const Designable: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(4096);
    /// C++ enum variant: <span style='color: green;'>```Scriptable = 16384```</span>
    #[allow(non_upper_case_globals)]
    pub const Scriptable: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(16384);
    /// C++ enum variant: <span style='color: green;'>```Stored = 65536```</span>
    #[allow(non_upper_case_globals)]
    pub const Stored: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(65536);
    /// C++ enum variant: <span style='color: green;'>```User = 1048576```</span>
    #[allow(non_upper_case_globals)]
    pub const User: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(1048576);
    /// C++ enum variant: <span style='color: green;'>```Required = 16777216```</span>
    #[allow(non_upper_case_globals)]
    pub const Required: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(16777216);
    /// C++ enum variant: <span style='color: green;'>```Bindable = 33554432```</span>
    #[allow(non_upper_case_globals)]
    pub const Bindable: crate::qt_moc_constants::PropertyFlags =
        crate::qt_moc_constants::PropertyFlags(33554432);
}

/// C++ enum: <span style='color: green;'>```QtMocConstants::MethodFlags```</span>.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(transparent)]
pub struct MethodFlags(::std::os::raw::c_int);

impl From<::std::os::raw::c_int> for MethodFlags {
    fn from(value: ::std::os::raw::c_int) -> Self {
        MethodFlags(value)
    }
}

impl From<MethodFlags> for ::std::os::raw::c_int {
    fn from(value: MethodFlags) -> Self {
        value.0
    }
}

impl MethodFlags {
    pub fn to_int(&self) -> ::std::os::raw::c_int {
        self.0
    }
}

impl MethodFlags {
    /// C++ enum variant: <span style='color: green;'>```AccessPrivate = 0```</span>
    #[allow(non_upper_case_globals)]
    pub const AccessPrivate: crate::qt_moc_constants::MethodFlags =
        crate::qt_moc_constants::MethodFlags(0);
    /// C++ enum variant: <span style='color: green;'>```AccessProtected = 1```</span>
    #[allow(non_upper_case_globals)]
    pub const AccessProtected: crate::qt_moc_constants::MethodFlags =
        crate::qt_moc_constants::MethodFlags(1);
    /// C++ enum variant: <span style='color: green;'>```AccessPublic = 2```</span>
    #[allow(non_upper_case_globals)]
    pub const AccessPublic: crate::qt_moc_constants::MethodFlags =
        crate::qt_moc_constants::MethodFlags(2);
    /// C++ enum variant: <span style='color: green;'>```AccessMask = 3```</span>
    #[allow(non_upper_case_globals)]
    pub const AccessMask: crate::qt_moc_constants::MethodFlags =
        crate::qt_moc_constants::MethodFlags(3);
    /// C++ enum variant: <span style='color: green;'>```MethodMethod = 0```</span>
    #[allow(non_upper_case_globals)]
    pub const MethodMethod: crate::qt_moc_constants::MethodFlags =
        crate::qt_moc_constants::MethodFlags(0);
    /// C++ enum variant: <span style='color: green;'>```MethodSignal = 4```</span>
    #[allow(non_upper_case_globals)]
    pub const MethodSignal: crate::qt_moc_constants::MethodFlags =
        crate::qt_moc_constants::MethodFlags(4);
    /// C++ enum variant: <span style='color: green;'>```MethodSlot = 8```</span>
    #[allow(non_upper_case_globals)]
    pub const MethodSlot: crate::qt_moc_constants::MethodFlags =
        crate::qt_moc_constants::MethodFlags(8);
    /// C++ enum variant: <span style='color: green;'>```MethodConstructor = 12```</span>
    #[allow(non_upper_case_globals)]
    pub const MethodConstructor: crate::qt_moc_constants::MethodFlags =
        crate::qt_moc_constants::MethodFlags(12);
    /// C++ enum variant: <span style='color: green;'>```MethodTypeMask = 12```</span>
    #[allow(non_upper_case_globals)]
    pub const MethodTypeMask: crate::qt_moc_constants::MethodFlags =
        crate::qt_moc_constants::MethodFlags(12);
    /// C++ enum variant: <span style='color: green;'>```MethodCompatibility = 16```</span>
    #[allow(non_upper_case_globals)]
    pub const MethodCompatibility: crate::qt_moc_constants::MethodFlags =
        crate::qt_moc_constants::MethodFlags(16);
    /// C++ enum variant: <span style='color: green;'>```MethodCloned = 32```</span>
    #[allow(non_upper_case_globals)]
    pub const MethodCloned: crate::qt_moc_constants::MethodFlags =
        crate::qt_moc_constants::MethodFlags(32);
    /// C++ enum variant: <span style='color: green;'>```MethodScriptable = 64```</span>
    #[allow(non_upper_case_globals)]
    pub const MethodScriptable: crate::qt_moc_constants::MethodFlags =
        crate::qt_moc_constants::MethodFlags(64);
    /// C++ enum variant: <span style='color: green;'>```MethodRevisioned = 128```</span>
    #[allow(non_upper_case_globals)]
    pub const MethodRevisioned: crate::qt_moc_constants::MethodFlags =
        crate::qt_moc_constants::MethodFlags(128);
    /// C++ enum variant: <span style='color: green;'>```MethodIsConst = 256```</span>
    #[allow(non_upper_case_globals)]
    pub const MethodIsConst: crate::qt_moc_constants::MethodFlags =
        crate::qt_moc_constants::MethodFlags(256);
}

/// C++ enum: <span style='color: green;'>```QtMocConstants::MetaObjectFlag```</span>.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(transparent)]
pub struct MetaObjectFlag(::std::os::raw::c_int);

impl From<::std::os::raw::c_int> for MetaObjectFlag {
    fn from(value: ::std::os::raw::c_int) -> Self {
        MetaObjectFlag(value)
    }
}

impl From<MetaObjectFlag> for ::std::os::raw::c_int {
    fn from(value: MetaObjectFlag) -> Self {
        value.0
    }
}

impl MetaObjectFlag {
    pub fn to_int(&self) -> ::std::os::raw::c_int {
        self.0
    }
}

impl MetaObjectFlag {
    /// C++ enum variant: <span style='color: green;'>```DynamicMetaObject = 1```</span>
    #[allow(non_upper_case_globals)]
    pub const DynamicMetaObject: crate::qt_moc_constants::MetaObjectFlag =
        crate::qt_moc_constants::MetaObjectFlag(1);
    /// C++ enum variant: <span style='color: green;'>```RequiresVariantMetaObject = 2```</span>
    #[allow(non_upper_case_globals)]
    pub const RequiresVariantMetaObject: crate::qt_moc_constants::MetaObjectFlag =
        crate::qt_moc_constants::MetaObjectFlag(2);
    /// C++ enum variant: <span style='color: green;'>```PropertyAccessInStaticMetaCall = 4```</span>
    #[allow(non_upper_case_globals)]
    pub const PropertyAccessInStaticMetaCall: crate::qt_moc_constants::MetaObjectFlag =
        crate::qt_moc_constants::MetaObjectFlag(4);
    /// C++ enum variant: <span style='color: green;'>```AllocatedMetaObject = 8```</span>
    #[allow(non_upper_case_globals)]
    pub const AllocatedMetaObject: crate::qt_moc_constants::MetaObjectFlag =
        crate::qt_moc_constants::MetaObjectFlag(8);
}

/// C++ enum: <span style='color: green;'>```QtMocConstants::MetaDataFlags```</span>.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(transparent)]
pub struct MetaDataFlags(::std::os::raw::c_int);

impl From<::std::os::raw::c_int> for MetaDataFlags {
    fn from(value: ::std::os::raw::c_int) -> Self {
        MetaDataFlags(value)
    }
}

impl From<MetaDataFlags> for ::std::os::raw::c_int {
    fn from(value: MetaDataFlags) -> Self {
        value.0
    }
}

impl MetaDataFlags {
    pub fn to_int(&self) -> ::std::os::raw::c_int {
        self.0
    }
}

impl MetaDataFlags {
    /// C++ enum variant: <span style='color: green;'>```IsUnresolvedType = -2147483648```</span>
    #[allow(non_upper_case_globals)]
    pub const IsUnresolvedType: crate::qt_moc_constants::MetaDataFlags =
        crate::qt_moc_constants::MetaDataFlags(-2147483648);
    /// C++ enum variant: <span style='color: green;'>```TypeNameIndexMask = 2147483647```</span>
    #[allow(non_upper_case_globals)]
    pub const TypeNameIndexMask: crate::qt_moc_constants::MetaDataFlags =
        crate::qt_moc_constants::MetaDataFlags(2147483647);
    /// C++ enum variant: <span style='color: green;'>```IsUnresolvedSignal = 1879048192```</span>
    #[allow(non_upper_case_globals)]
    pub const IsUnresolvedSignal: crate::qt_moc_constants::MetaDataFlags =
        crate::qt_moc_constants::MetaDataFlags(1879048192);
}

/// C++ enum: <span style='color: green;'>```QtMocConstants::EnumFlags```</span>.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(transparent)]
pub struct EnumFlags(::std::os::raw::c_int);

impl From<::std::os::raw::c_int> for EnumFlags {
    fn from(value: ::std::os::raw::c_int) -> Self {
        EnumFlags(value)
    }
}

impl From<EnumFlags> for ::std::os::raw::c_int {
    fn from(value: EnumFlags) -> Self {
        value.0
    }
}

impl EnumFlags {
    pub fn to_int(&self) -> ::std::os::raw::c_int {
        self.0
    }
}

impl EnumFlags {
    /// C++ enum variant: <span style='color: green;'>```EnumIsFlag = 1```</span>
    #[allow(non_upper_case_globals)]
    pub const EnumIsFlag: crate::qt_moc_constants::EnumFlags =
        crate::qt_moc_constants::EnumFlags(1);
    /// C++ enum variant: <span style='color: green;'>```EnumIsScoped = 2```</span>
    #[allow(non_upper_case_globals)]
    pub const EnumIsScoped: crate::qt_moc_constants::EnumFlags =
        crate::qt_moc_constants::EnumFlags(2);
    /// C++ enum variant: <span style='color: green;'>```EnumIs64Bit = 64```</span>
    #[allow(non_upper_case_globals)]
    pub const EnumIs64Bit: crate::qt_moc_constants::EnumFlags =
        crate::qt_moc_constants::EnumFlags(64);
}
