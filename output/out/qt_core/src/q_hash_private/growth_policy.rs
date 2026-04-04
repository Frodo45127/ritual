#![cfg_attr(feature = "ritual_rustdoc_nightly", feature(doc_cfg))]
//! C++ namespace: <span style='color: green;'>```QHashPrivate::GrowthPolicy```</span>

/// Calls C++ function: <span style='color: green;'>```size_t QHashPrivate::GrowthPolicy::bucketForHash(size_t nBuckets, size_t hash)```</span>.
#[inline(always)]
pub unsafe fn bucket_for_hash(n_buckets: usize, hash: usize) -> usize {
    crate::__ffi::ctr_qt_core_ffi_QHashPrivate_GrowthPolicy_bucketForHash(n_buckets, hash)
}

/// Calls C++ function: <span style='color: green;'>```size_t QHashPrivate::GrowthPolicy::bucketsForCapacity(size_t requestedCapacity)```</span>.
#[inline(always)]
pub unsafe fn buckets_for_capacity(requested_capacity: usize) -> usize {
    crate::__ffi::ctr_qt_core_ffi_QHashPrivate_GrowthPolicy_bucketsForCapacity(requested_capacity)
}
