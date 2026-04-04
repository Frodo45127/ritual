#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! C++ namespace: <span style='color: green;'>```QtOrderingPrivate```</span>

/// C++ enum: <span style='color: green;'>```QtOrderingPrivate::QtOrderingType```</span>.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(transparent)]
pub struct QtOrderingType(::std::os::raw::c_int);

impl From<::std::os::raw::c_int> for QtOrderingType {
    fn from(value: ::std::os::raw::c_int) -> Self {
        QtOrderingType(value)
    }
}

impl From<QtOrderingType> for ::std::os::raw::c_int {
    fn from(value: QtOrderingType) -> Self {
        value.0
    }
}

impl QtOrderingType {
    pub fn to_int(&self) -> ::std::os::raw::c_int {
        self.0
    }
}

impl QtOrderingType {
    /// C++ enum variant: <span style='color: green;'>```QtOrder = 0```</span>
    #[allow(non_upper_case_globals)]
    pub const QtOrder: crate::qt_ordering_private::QtOrderingType =
        crate::qt_ordering_private::QtOrderingType(0);
    /// C++ enum variant: <span style='color: green;'>```StdOrder = 1```</span>
    #[allow(non_upper_case_globals)]
    pub const StdOrder: crate::qt_ordering_private::QtOrderingType =
        crate::qt_ordering_private::QtOrderingType(1);
    /// C++ enum variant: <span style='color: green;'>```Partial = 0```</span>
    #[allow(non_upper_case_globals)]
    pub const Partial: crate::qt_ordering_private::QtOrderingType =
        crate::qt_ordering_private::QtOrderingType(0);
    /// C++ enum variant: <span style='color: green;'>```Weak = 32```</span>
    #[allow(non_upper_case_globals)]
    pub const Weak: crate::qt_ordering_private::QtOrderingType =
        crate::qt_ordering_private::QtOrderingType(32);
    /// C++ enum variant: <span style='color: green;'>```Strong = 64```</span>
    #[allow(non_upper_case_globals)]
    pub const Strong: crate::qt_ordering_private::QtOrderingType =
        crate::qt_ordering_private::QtOrderingType(64);
    /// C++ enum variant: <span style='color: green;'>```StrengthMask = 96```</span>
    #[allow(non_upper_case_globals)]
    pub const StrengthMask: crate::qt_ordering_private::QtOrderingType =
        crate::qt_ordering_private::QtOrderingType(96);
}

impl From<crate::qt_ordering_private::QtOrderingType>
    for crate::QFlags<crate::qt_ordering_private::QtOrderingType>
{
    fn from(value: crate::qt_ordering_private::QtOrderingType) -> Self {
        Self::from(value.to_int())
    }
}

impl<T: Into<crate::QFlags<crate::qt_ordering_private::QtOrderingType>>> std::ops::BitOr<T>
    for crate::qt_ordering_private::QtOrderingType
{
    type Output = crate::QFlags<crate::qt_ordering_private::QtOrderingType>;
    fn bitor(self, rhs: T) -> crate::QFlags<crate::qt_ordering_private::QtOrderingType> {
        Into::<crate::QFlags<crate::qt_ordering_private::QtOrderingType>>::into(self) | rhs
    }
}
