/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[91];
    char stringdata0[2315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "InitializeValues"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 22), // "on_button_quit_clicked"
QT_MOC_LITERAL(4, 52, 22), // "on_Tabs_currentChanged"
QT_MOC_LITERAL(5, 75, 21), // "GetCurrentLabelNumber"
QT_MOC_LITERAL(6, 97, 11), // "AddNewLabel"
QT_MOC_LITERAL(7, 109, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 126, 8), // "newLabel"
QT_MOC_LITERAL(9, 135, 34), // "on_pushButton_label_delete_cl..."
QT_MOC_LITERAL(10, 170, 15), // "DeleteAllLabels"
QT_MOC_LITERAL(11, 186, 17), // "UnselectAllLabels"
QT_MOC_LITERAL(12, 204, 39), // "on_listWidget_labels_currentI..."
QT_MOC_LITERAL(13, 244, 11), // "currentItem"
QT_MOC_LITERAL(14, 256, 32), // "on_listWidget_labels_itemChanged"
QT_MOC_LITERAL(15, 289, 31), // "on_pushButton_label_add_clicked"
QT_MOC_LITERAL(16, 321, 32), // "on_pushButton_label_hide_clicked"
QT_MOC_LITERAL(17, 354, 32), // "on_pushButton_label_draw_clicked"
QT_MOC_LITERAL(18, 387, 32), // "on_pushButton_label_join_clicked"
QT_MOC_LITERAL(19, 420, 32), // "on_pushButton_draw_clear_clicked"
QT_MOC_LITERAL(20, 453, 34), // "on_pushButton_draw_grabcut_cl..."
QT_MOC_LITERAL(21, 488, 44), // "on_pushButton_draw_grabcut_it..."
QT_MOC_LITERAL(22, 533, 9), // "DrawColor"
QT_MOC_LITERAL(23, 543, 9), // "cv::Vec3b"
QT_MOC_LITERAL(24, 553, 25), // "on_pushButton_psd_clicked"
QT_MOC_LITERAL(25, 579, 25), // "on_pushButton_tif_clicked"
QT_MOC_LITERAL(26, 605, 12), // "SavePSDorTIF"
QT_MOC_LITERAL(27, 618, 11), // "std::string"
QT_MOC_LITERAL(28, 630, 4), // "type"
QT_MOC_LITERAL(29, 635, 15), // "SaveDirBaseFile"
QT_MOC_LITERAL(30, 651, 23), // "on_button_image_clicked"
QT_MOC_LITERAL(31, 675, 30), // "on_button_save_session_clicked"
QT_MOC_LITERAL(32, 706, 30), // "on_button_load_session_clicked"
QT_MOC_LITERAL(33, 737, 27), // "on_button_save_conf_clicked"
QT_MOC_LITERAL(34, 765, 27), // "on_button_load_conf_clicked"
QT_MOC_LITERAL(35, 793, 8), // "SaveUndo"
QT_MOC_LITERAL(36, 802, 22), // "on_button_undo_clicked"
QT_MOC_LITERAL(37, 825, 24), // "on_checkBox_mask_clicked"
QT_MOC_LITERAL(38, 850, 25), // "on_checkBox_image_clicked"
QT_MOC_LITERAL(39, 876, 24), // "on_checkBox_grid_clicked"
QT_MOC_LITERAL(40, 901, 29), // "on_checkBox_selection_clicked"
QT_MOC_LITERAL(41, 931, 25), // "on_checkBox_holes_clicked"
QT_MOC_LITERAL(42, 957, 44), // "on_horizontalSlider_blend_ima..."
QT_MOC_LITERAL(43, 1002, 43), // "on_horizontalSlider_blend_mas..."
QT_MOC_LITERAL(44, 1046, 43), // "on_horizontalSlider_blend_gri..."
QT_MOC_LITERAL(45, 1090, 32), // "on_pushButton_zoom_minus_clicked"
QT_MOC_LITERAL(46, 1123, 31), // "on_pushButton_zoom_plus_clicked"
QT_MOC_LITERAL(47, 1155, 30), // "on_pushButton_zoom_fit_clicked"
QT_MOC_LITERAL(48, 1186, 30), // "on_pushButton_zoom_100_clicked"
QT_MOC_LITERAL(49, 1217, 42), // "on_comboBox_grid_color_curren..."
QT_MOC_LITERAL(50, 1260, 41), // "on_comboBox_algorithm_current..."
QT_MOC_LITERAL(51, 1302, 48), // "on_horizontalScrollBar_segmen..."
QT_MOC_LITERAL(52, 1351, 46), // "on_verticalScrollBar_segmenta..."
QT_MOC_LITERAL(53, 1398, 16), // "ShowCurrentColor"
QT_MOC_LITERAL(54, 1415, 3), // "red"
QT_MOC_LITERAL(55, 1419, 5), // "green"
QT_MOC_LITERAL(56, 1425, 4), // "blue"
QT_MOC_LITERAL(57, 1430, 32), // "on_pushButton_color_pick_clicked"
QT_MOC_LITERAL(58, 1463, 31), // "on_pushButton_color_red_clicked"
QT_MOC_LITERAL(59, 1495, 33), // "on_pushButton_color_green_cli..."
QT_MOC_LITERAL(60, 1529, 32), // "on_pushButton_color_blue_clicked"
QT_MOC_LITERAL(61, 1562, 32), // "on_pushButton_color_cyan_clicked"
QT_MOC_LITERAL(62, 1595, 35), // "on_pushButton_color_magenta_c..."
QT_MOC_LITERAL(63, 1631, 34), // "on_pushButton_color_yellow_cl..."
QT_MOC_LITERAL(64, 1666, 34), // "on_pushButton_color_orange_cl..."
QT_MOC_LITERAL(65, 1701, 33), // "on_pushButton_color_brown_cli..."
QT_MOC_LITERAL(66, 1735, 33), // "on_pushButton_color_olive_cli..."
QT_MOC_LITERAL(67, 1769, 32), // "on_pushButton_color_navy_clicked"
QT_MOC_LITERAL(68, 1802, 35), // "on_pushButton_color_emerald_c..."
QT_MOC_LITERAL(69, 1838, 34), // "on_pushButton_color_purple_cl..."
QT_MOC_LITERAL(70, 1873, 32), // "on_pushButton_color_lime_clicked"
QT_MOC_LITERAL(71, 1906, 32), // "on_pushButton_color_rose_clicked"
QT_MOC_LITERAL(72, 1939, 34), // "on_pushButton_color_violet_cl..."
QT_MOC_LITERAL(73, 1974, 33), // "on_pushButton_color_azure_cli..."
QT_MOC_LITERAL(74, 2008, 34), // "on_pushButton_color_malibu_cl..."
QT_MOC_LITERAL(75, 2043, 34), // "on_pushButton_color_laurel_cl..."
QT_MOC_LITERAL(76, 2078, 23), // "on_button_apply_clicked"
QT_MOC_LITERAL(77, 2102, 26), // "on_button_original_clicked"
QT_MOC_LITERAL(78, 2129, 25), // "on_button_compute_clicked"
QT_MOC_LITERAL(79, 2155, 13), // "keyPressEvent"
QT_MOC_LITERAL(80, 2169, 10), // "QKeyEvent*"
QT_MOC_LITERAL(81, 2180, 8), // "keyEvent"
QT_MOC_LITERAL(82, 2189, 15), // "keyReleaseEvent"
QT_MOC_LITERAL(83, 2205, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(84, 2223, 12), // "QMouseEvent*"
QT_MOC_LITERAL(85, 2236, 12), // "eventRelease"
QT_MOC_LITERAL(86, 2249, 15), // "mousePressEvent"
QT_MOC_LITERAL(87, 2265, 10), // "eventPress"
QT_MOC_LITERAL(88, 2276, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(89, 2291, 10), // "wheelEvent"
QT_MOC_LITERAL(90, 2302, 12) // "QWheelEvent*"

    },
    "MainWindow\0InitializeValues\0\0"
    "on_button_quit_clicked\0on_Tabs_currentChanged\0"
    "GetCurrentLabelNumber\0AddNewLabel\0"
    "QListWidgetItem*\0newLabel\0"
    "on_pushButton_label_delete_clicked\0"
    "DeleteAllLabels\0UnselectAllLabels\0"
    "on_listWidget_labels_currentItemChanged\0"
    "currentItem\0on_listWidget_labels_itemChanged\0"
    "on_pushButton_label_add_clicked\0"
    "on_pushButton_label_hide_clicked\0"
    "on_pushButton_label_draw_clicked\0"
    "on_pushButton_label_join_clicked\0"
    "on_pushButton_draw_clear_clicked\0"
    "on_pushButton_draw_grabcut_clicked\0"
    "on_pushButton_draw_grabcut_iteration_clicked\0"
    "DrawColor\0cv::Vec3b\0on_pushButton_psd_clicked\0"
    "on_pushButton_tif_clicked\0SavePSDorTIF\0"
    "std::string\0type\0SaveDirBaseFile\0"
    "on_button_image_clicked\0"
    "on_button_save_session_clicked\0"
    "on_button_load_session_clicked\0"
    "on_button_save_conf_clicked\0"
    "on_button_load_conf_clicked\0SaveUndo\0"
    "on_button_undo_clicked\0on_checkBox_mask_clicked\0"
    "on_checkBox_image_clicked\0"
    "on_checkBox_grid_clicked\0"
    "on_checkBox_selection_clicked\0"
    "on_checkBox_holes_clicked\0"
    "on_horizontalSlider_blend_image_valueChanged\0"
    "on_horizontalSlider_blend_mask_valueChanged\0"
    "on_horizontalSlider_blend_grid_valueChanged\0"
    "on_pushButton_zoom_minus_clicked\0"
    "on_pushButton_zoom_plus_clicked\0"
    "on_pushButton_zoom_fit_clicked\0"
    "on_pushButton_zoom_100_clicked\0"
    "on_comboBox_grid_color_currentIndexChanged\0"
    "on_comboBox_algorithm_currentIndexChanged\0"
    "on_horizontalScrollBar_segmentation_valueChanged\0"
    "on_verticalScrollBar_segmentation_valueChanged\0"
    "ShowCurrentColor\0red\0green\0blue\0"
    "on_pushButton_color_pick_clicked\0"
    "on_pushButton_color_red_clicked\0"
    "on_pushButton_color_green_clicked\0"
    "on_pushButton_color_blue_clicked\0"
    "on_pushButton_color_cyan_clicked\0"
    "on_pushButton_color_magenta_clicked\0"
    "on_pushButton_color_yellow_clicked\0"
    "on_pushButton_color_orange_clicked\0"
    "on_pushButton_color_brown_clicked\0"
    "on_pushButton_color_olive_clicked\0"
    "on_pushButton_color_navy_clicked\0"
    "on_pushButton_color_emerald_clicked\0"
    "on_pushButton_color_purple_clicked\0"
    "on_pushButton_color_lime_clicked\0"
    "on_pushButton_color_rose_clicked\0"
    "on_pushButton_color_violet_clicked\0"
    "on_pushButton_color_azure_clicked\0"
    "on_pushButton_color_malibu_clicked\0"
    "on_pushButton_color_laurel_clicked\0"
    "on_button_apply_clicked\0"
    "on_button_original_clicked\0"
    "on_button_compute_clicked\0keyPressEvent\0"
    "QKeyEvent*\0keyEvent\0keyReleaseEvent\0"
    "mouseReleaseEvent\0QMouseEvent*\0"
    "eventRelease\0mousePressEvent\0eventPress\0"
    "mouseMoveEvent\0wheelEvent\0QWheelEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      74,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  384,    2, 0x08 /* Private */,
       3,    0,  385,    2, 0x08 /* Private */,
       4,    1,  386,    2, 0x08 /* Private */,
       5,    0,  389,    2, 0x08 /* Private */,
       6,    1,  390,    2, 0x08 /* Private */,
       9,    0,  393,    2, 0x08 /* Private */,
      10,    1,  394,    2, 0x08 /* Private */,
      11,    0,  397,    2, 0x08 /* Private */,
      12,    1,  398,    2, 0x08 /* Private */,
      14,    1,  401,    2, 0x08 /* Private */,
      15,    0,  404,    2, 0x08 /* Private */,
      16,    0,  405,    2, 0x08 /* Private */,
      17,    0,  406,    2, 0x08 /* Private */,
      18,    0,  407,    2, 0x08 /* Private */,
      19,    0,  408,    2, 0x08 /* Private */,
      20,    0,  409,    2, 0x08 /* Private */,
      21,    0,  410,    2, 0x08 /* Private */,
      22,    0,  411,    2, 0x08 /* Private */,
      24,    0,  412,    2, 0x08 /* Private */,
      25,    0,  413,    2, 0x08 /* Private */,
      26,    1,  414,    2, 0x08 /* Private */,
      29,    0,  417,    2, 0x08 /* Private */,
      30,    0,  418,    2, 0x08 /* Private */,
      31,    0,  419,    2, 0x08 /* Private */,
      32,    0,  420,    2, 0x08 /* Private */,
      33,    0,  421,    2, 0x08 /* Private */,
      34,    0,  422,    2, 0x08 /* Private */,
      35,    0,  423,    2, 0x08 /* Private */,
      36,    0,  424,    2, 0x08 /* Private */,
      37,    0,  425,    2, 0x08 /* Private */,
      38,    0,  426,    2, 0x08 /* Private */,
      39,    0,  427,    2, 0x08 /* Private */,
      40,    0,  428,    2, 0x08 /* Private */,
      41,    0,  429,    2, 0x08 /* Private */,
      42,    0,  430,    2, 0x08 /* Private */,
      43,    0,  431,    2, 0x08 /* Private */,
      44,    0,  432,    2, 0x08 /* Private */,
      45,    0,  433,    2, 0x08 /* Private */,
      46,    0,  434,    2, 0x08 /* Private */,
      47,    0,  435,    2, 0x08 /* Private */,
      48,    0,  436,    2, 0x08 /* Private */,
      49,    1,  437,    2, 0x08 /* Private */,
      50,    1,  440,    2, 0x08 /* Private */,
      51,    0,  443,    2, 0x08 /* Private */,
      52,    0,  444,    2, 0x08 /* Private */,
      53,    3,  445,    2, 0x08 /* Private */,
      57,    0,  452,    2, 0x08 /* Private */,
      58,    0,  453,    2, 0x08 /* Private */,
      59,    0,  454,    2, 0x08 /* Private */,
      60,    0,  455,    2, 0x08 /* Private */,
      61,    0,  456,    2, 0x08 /* Private */,
      62,    0,  457,    2, 0x08 /* Private */,
      63,    0,  458,    2, 0x08 /* Private */,
      64,    0,  459,    2, 0x08 /* Private */,
      65,    0,  460,    2, 0x08 /* Private */,
      66,    0,  461,    2, 0x08 /* Private */,
      67,    0,  462,    2, 0x08 /* Private */,
      68,    0,  463,    2, 0x08 /* Private */,
      69,    0,  464,    2, 0x08 /* Private */,
      70,    0,  465,    2, 0x08 /* Private */,
      71,    0,  466,    2, 0x08 /* Private */,
      72,    0,  467,    2, 0x08 /* Private */,
      73,    0,  468,    2, 0x08 /* Private */,
      74,    0,  469,    2, 0x08 /* Private */,
      75,    0,  470,    2, 0x08 /* Private */,
      76,    0,  471,    2, 0x08 /* Private */,
      77,    0,  472,    2, 0x08 /* Private */,
      78,    0,  473,    2, 0x08 /* Private */,
      79,    1,  474,    2, 0x08 /* Private */,
      82,    1,  477,    2, 0x08 /* Private */,
      83,    1,  480,    2, 0x08 /* Private */,
      86,    1,  483,    2, 0x08 /* Private */,
      88,    1,  486,    2, 0x08 /* Private */,
      89,    1,  489,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Int,
    0x80000000 | 7, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,   13,
    QMetaType::Void, 0x80000000 | 7,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   54,   55,   56,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 80,   81,
    QMetaType::Void, 0x80000000 | 80,   81,
    QMetaType::Void, 0x80000000 | 84,   85,
    QMetaType::Void, 0x80000000 | 84,   87,
    QMetaType::Void, 0x80000000 | 84,   87,
    QMetaType::Void, 0x80000000 | 90,   89,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InitializeValues(); break;
        case 1: _t->on_button_quit_clicked(); break;
        case 2: _t->on_Tabs_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: { int _r = _t->GetCurrentLabelNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { QListWidgetItem* _r = _t->AddNewLabel((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QListWidgetItem**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->on_pushButton_label_delete_clicked(); break;
        case 6: _t->DeleteAllLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->UnselectAllLabels(); break;
        case 8: _t->on_listWidget_labels_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->on_listWidget_labels_itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->on_pushButton_label_add_clicked(); break;
        case 11: _t->on_pushButton_label_hide_clicked(); break;
        case 12: _t->on_pushButton_label_draw_clicked(); break;
        case 13: _t->on_pushButton_label_join_clicked(); break;
        case 14: _t->on_pushButton_draw_clear_clicked(); break;
        case 15: _t->on_pushButton_draw_grabcut_clicked(); break;
        case 16: _t->on_pushButton_draw_grabcut_iteration_clicked(); break;
        case 17: { cv::Vec3b _r = _t->DrawColor();
            if (_a[0]) *reinterpret_cast< cv::Vec3b*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->on_pushButton_psd_clicked(); break;
        case 19: _t->on_pushButton_tif_clicked(); break;
        case 20: _t->SavePSDorTIF((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 21: _t->SaveDirBaseFile(); break;
        case 22: _t->on_button_image_clicked(); break;
        case 23: _t->on_button_save_session_clicked(); break;
        case 24: _t->on_button_load_session_clicked(); break;
        case 25: _t->on_button_save_conf_clicked(); break;
        case 26: _t->on_button_load_conf_clicked(); break;
        case 27: _t->SaveUndo(); break;
        case 28: _t->on_button_undo_clicked(); break;
        case 29: _t->on_checkBox_mask_clicked(); break;
        case 30: _t->on_checkBox_image_clicked(); break;
        case 31: _t->on_checkBox_grid_clicked(); break;
        case 32: _t->on_checkBox_selection_clicked(); break;
        case 33: _t->on_checkBox_holes_clicked(); break;
        case 34: _t->on_horizontalSlider_blend_image_valueChanged(); break;
        case 35: _t->on_horizontalSlider_blend_mask_valueChanged(); break;
        case 36: _t->on_horizontalSlider_blend_grid_valueChanged(); break;
        case 37: _t->on_pushButton_zoom_minus_clicked(); break;
        case 38: _t->on_pushButton_zoom_plus_clicked(); break;
        case 39: _t->on_pushButton_zoom_fit_clicked(); break;
        case 40: _t->on_pushButton_zoom_100_clicked(); break;
        case 41: _t->on_comboBox_grid_color_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->on_comboBox_algorithm_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->on_horizontalScrollBar_segmentation_valueChanged(); break;
        case 44: _t->on_verticalScrollBar_segmentation_valueChanged(); break;
        case 45: _t->ShowCurrentColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 46: _t->on_pushButton_color_pick_clicked(); break;
        case 47: _t->on_pushButton_color_red_clicked(); break;
        case 48: _t->on_pushButton_color_green_clicked(); break;
        case 49: _t->on_pushButton_color_blue_clicked(); break;
        case 50: _t->on_pushButton_color_cyan_clicked(); break;
        case 51: _t->on_pushButton_color_magenta_clicked(); break;
        case 52: _t->on_pushButton_color_yellow_clicked(); break;
        case 53: _t->on_pushButton_color_orange_clicked(); break;
        case 54: _t->on_pushButton_color_brown_clicked(); break;
        case 55: _t->on_pushButton_color_olive_clicked(); break;
        case 56: _t->on_pushButton_color_navy_clicked(); break;
        case 57: _t->on_pushButton_color_emerald_clicked(); break;
        case 58: _t->on_pushButton_color_purple_clicked(); break;
        case 59: _t->on_pushButton_color_lime_clicked(); break;
        case 60: _t->on_pushButton_color_rose_clicked(); break;
        case 61: _t->on_pushButton_color_violet_clicked(); break;
        case 62: _t->on_pushButton_color_azure_clicked(); break;
        case 63: _t->on_pushButton_color_malibu_clicked(); break;
        case 64: _t->on_pushButton_color_laurel_clicked(); break;
        case 65: _t->on_button_apply_clicked(); break;
        case 66: _t->on_button_original_clicked(); break;
        case 67: _t->on_button_compute_clicked(); break;
        case 68: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 69: _t->keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 70: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 71: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 72: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 73: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 74)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 74;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
