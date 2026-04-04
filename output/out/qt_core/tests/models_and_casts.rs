use qt_core::{QAbstractItemModel, QAbstractTableModel, QStringListModel};

#[test]
fn models_and_casts() {
    unsafe {
        let string_list_model = QStringListModel::new();

        let abstract_model = string_list_model.static_upcast::<QAbstractItemModel>();
        assert_eq!(abstract_model.row_count_0a(), 0);

        let string_list_model_back = abstract_model.dynamic_cast::<QStringListModel>();
        assert!(
            !string_list_model_back.is_null(),
            "dynamic_cast should be successful"
        );
        assert_eq!(string_list_model_back.row_count_0a(), 0);

        assert!(abstract_model
            .dynamic_cast::<QAbstractTableModel>()
            .is_null());
    }
}
