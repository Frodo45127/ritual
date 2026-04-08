#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! C++ namespace: <span style='color: green;'>```QHashPrivate::GrowthPolicy```</span>

/// Calls C++ function: <span style='color: green;'>```unsigned long QHashPrivate::GrowthPolicy::bucketForHash(unsigned long nBuckets, unsigned long hash)```</span>.
#[inline(always)]
pub unsafe fn bucket_for_hash(
    n_buckets: ::std::os::raw::c_ulong,
    hash: ::std::os::raw::c_ulong,
) -> ::std::os::raw::c_ulong {
    crate::__ffi::ctr_qt_core_ffi_QHashPrivate_GrowthPolicy_bucketForHash(n_buckets, hash)
}

/// Calls C++ function: <span style='color: green;'>```unsigned long QHashPrivate::GrowthPolicy::bucketsForCapacity(unsigned long requestedCapacity)```</span>.
#[inline(always)]
pub unsafe fn buckets_for_capacity(
    requested_capacity: ::std::os::raw::c_ulong,
) -> ::std::os::raw::c_ulong {
    crate::__ffi::ctr_qt_core_ffi_QHashPrivate_GrowthPolicy_bucketsForCapacity(requested_capacity)
}
