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
