/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame_view_parameters;
    QSlider *horizontalSlider_blend_mask;
    QPushButton *checkBox_image;
    QPushButton *checkBox_mask;
    QPushButton *checkBox_grid;
    QComboBox *comboBox_grid_color;
    QSlider *horizontalSlider_blend_image;
    QSlider *horizontalSlider_blend_grid;
    QPushButton *checkBox_holes;
    QLabel *label_holes;
    QPushButton *checkBox_selection;
    QFrame *frame_image_resolution;
    QLabel *label_image_icon;
    QLabel *label_image_width;
    QLabel *label_image_height;
    QLabel *label_px;
    QLabel *label_X;
    QLabel *label_filename;
    QScrollBar *horizontalScrollBar_segmentation;
    QScrollBar *verticalScrollBar_segmentation;
    QLabel *label_segmentation;
    QTabWidget *Tabs;
    QWidget *tab_image;
    QPushButton *button_image;
    QPushButton *button_apply;
    QPushButton *button_original;
    QFrame *frame_denoise;
    QLabel *label_PSNR;
    QSlider *horizontalSlider_luminance;
    QLabel *label_chrominance;
    QSlider *horizontalSlider_chrominance;
    QLabel *label_psnr;
    QCheckBox *checkBox_denoise;
    QLabel *label_luminance;
    QLabel *label_luminance_value;
    QLabel *label_chrominance_value;
    QFrame *frame_contours;
    QSpinBox *spinBox_contours_thickness;
    QComboBox *comboBox_contours_aperture;
    QCheckBox *checkBox_contours;
    QSpinBox *spinBox_contours_sigma;
    QFrame *frame_filters;
    QSpinBox *spinBox_color_balance_percent;
    QCheckBox *checkBox_normalize;
    QCheckBox *checkBox_color_balance;
    QCheckBox *checkBox_gaussian_blur;
    QCheckBox *checkBox_equalize;
    QPushButton *button_load_session;
    QWidget *tab_segmentation;
    QPushButton *button_compute;
    QFrame *frame_lcd;
    QLabel *label_cells;
    QLCDNumber *lcd_cells;
    QLabel *label_cells_text;
    QComboBox *comboBox_algorithm;
    QLabel *label_algorithm;
    QFrame *frame_slic;
    QLabel *label_region_size;
    QSlider *horizontalSlider_iterations;
    QSlider *horizontalSlider_region_size;
    QSlider *horizontalSlider_ruler;
    QLabel *label_connectivity;
    QLabel *label_iterations;
    QSlider *horizontalSlider_connectivity;
    QLabel *label_value_ruler;
    QLabel *label_value_region_size;
    QLabel *label_ruler;
    QLabel *label_value_connectivity_percent;
    QLabel *label_value_connectivity;
    QLabel *label_value_iterations;
    QDoubleSpinBox *doubleSpinBox_ratio;
    QLabel *label_ratio;
    QLabel *label_value_num_histogram_bins;
    QLabel *label_prior;
    QSlider *horizontalSlider_prior;
    QLabel *label_value_num_levels;
    QLabel *label_value_prior;
    QSlider *horizontalSlider_num_levels;
    QLabel *label_superpixels;
    QLabel *label_value_num_superpixels;
    QSlider *horizontalSlider_num_superpixels;
    QLabel *label_levels;
    QLabel *label_histograms;
    QSlider *horizontalSlider_num_histogram_bins;
    QCheckBox *checkBox_double_step;
    QPushButton *button_save_conf;
    QPushButton *button_load_conf;
    QCheckBox *checkBox_thick;
    QCheckBox *checkBox_lab_colors;
    QWidget *tab_labels;
    QPushButton *button_undo;
    QListWidget *listWidget_labels;
    QFrame *frame_pick_colors;
    QPushButton *pushButton_color_red;
    QPushButton *pushButton_color_brown;
    QPushButton *pushButton_color_orange;
    QPushButton *pushButton_color_yellow;
    QPushButton *pushButton_color_pick;
    QPushButton *pushButton_color_green;
    QPushButton *pushButton_color_olive;
    QPushButton *pushButton_color_cyan;
    QPushButton *pushButton_color_emerald;
    QPushButton *pushButton_color_blue;
    QPushButton *pushButton_color_navy;
    QPushButton *pushButton_color_magenta;
    QPushButton *pushButton_color_purple;
    QPushButton *pushButton_color_lime;
    QPushButton *pushButton_color_laurel;
    QPushButton *pushButton_color_malibu;
    QPushButton *pushButton_color_violet;
    QPushButton *pushButton_color_rose;
    QPushButton *pushButton_color_azure;
    QPushButton *pushButton_label_delete;
    QPushButton *pushButton_label_add;
    QPushButton *pushButton_label_hide;
    QPushButton *pushButton_label_draw;
    QPushButton *pushButton_label_join;
    QLabel *label_color_icon;
    QLabel *label_color;
    QLabel *label_thumbnail;
    QFrame *frame_about;
    QFrame *frame_zoom;
    QPushButton *pushButton_zoom_plus;
    QPushButton *pushButton_zoom_100;
    QPushButton *pushButton_zoom_minus;
    QPushButton *pushButton_zoom_fit;
    QLabel *label_zoom;
    QPushButton *button_quit;
    QFrame *frame_draw;
    QLabel *label_draw_size;
    QSlider *horizontalSlider_draw_size;
    QRadioButton *radioButton_draw_mask;
    QRadioButton *radioButton_draw_reject;
    QPushButton *pushButton_draw_clear;
    QPushButton *pushButton_draw_grabcut;
    QRadioButton *radioButton_draw_maybe;
    QLabel *label_draw_size_icon;
    QPushButton *pushButton_draw_grabcut_iteration;
    QPushButton *button_save_session;
    QPushButton *pushButton_psd;
    QPushButton *pushButton_tif;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1916, 1076);
        MainWindow->setMinimumSize(QSize(1366, 768));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/label.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame_view_parameters = new QFrame(centralWidget);
        frame_view_parameters->setObjectName(QString::fromUtf8("frame_view_parameters"));
        frame_view_parameters->setGeometry(QRect(390, 70, 111, 341));
        frame_view_parameters->setFrameShape(QFrame::StyledPanel);
        frame_view_parameters->setFrameShadow(QFrame::Sunken);
        frame_view_parameters->setLineWidth(2);
        horizontalSlider_blend_mask = new QSlider(frame_view_parameters);
        horizontalSlider_blend_mask->setObjectName(QString::fromUtf8("horizontalSlider_blend_mask"));
        horizontalSlider_blend_mask->setGeometry(QRect(10, 94, 91, 29));
        horizontalSlider_blend_mask->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_blend_mask->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_blend_mask->setMaximum(100);
        horizontalSlider_blend_mask->setValue(90);
        horizontalSlider_blend_mask->setOrientation(Qt::Horizontal);
        horizontalSlider_blend_mask->setTickPosition(QSlider::NoTicks);
        checkBox_image = new QPushButton(frame_view_parameters);
        checkBox_image->setObjectName(QString::fromUtf8("checkBox_image"));
        checkBox_image->setGeometry(QRect(10, 8, 91, 31));
        checkBox_image->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox_image->setFocusPolicy(Qt::NoFocus);
        checkBox_image->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:checked {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/hide.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/icons/image.png"), QSize(), QIcon::Normal, QIcon::On);
        checkBox_image->setIcon(icon1);
        checkBox_image->setIconSize(QSize(25, 25));
        checkBox_image->setCheckable(true);
        checkBox_image->setChecked(true);
        checkBox_mask = new QPushButton(frame_view_parameters);
        checkBox_mask->setObjectName(QString::fromUtf8("checkBox_mask"));
        checkBox_mask->setGeometry(QRect(10, 67, 91, 31));
        checkBox_mask->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox_mask->setFocusPolicy(Qt::NoFocus);
        checkBox_mask->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:checked {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/hide.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/icons/mask.png"), QSize(), QIcon::Normal, QIcon::On);
        checkBox_mask->setIcon(icon2);
        checkBox_mask->setIconSize(QSize(24, 24));
        checkBox_mask->setCheckable(true);
        checkBox_mask->setChecked(true);
        checkBox_grid = new QPushButton(frame_view_parameters);
        checkBox_grid->setObjectName(QString::fromUtf8("checkBox_grid"));
        checkBox_grid->setGeometry(QRect(10, 126, 91, 31));
        checkBox_grid->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox_grid->setFocusPolicy(Qt::NoFocus);
        checkBox_grid->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:checked {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/hide.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/icons/grid.png"), QSize(), QIcon::Normal, QIcon::On);
        checkBox_grid->setIcon(icon3);
        checkBox_grid->setIconSize(QSize(25, 25));
        checkBox_grid->setCheckable(true);
        checkBox_grid->setChecked(true);
        comboBox_grid_color = new QComboBox(frame_view_parameters);
        comboBox_grid_color->setObjectName(QString::fromUtf8("comboBox_grid_color"));
        comboBox_grid_color->setGeometry(QRect(10, 180, 91, 20));
        comboBox_grid_color->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_grid_color->setFocusPolicy(Qt::NoFocus);
        horizontalSlider_blend_image = new QSlider(frame_view_parameters);
        horizontalSlider_blend_image->setObjectName(QString::fromUtf8("horizontalSlider_blend_image"));
        horizontalSlider_blend_image->setGeometry(QRect(10, 35, 91, 29));
        horizontalSlider_blend_image->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_blend_image->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_blend_image->setMaximum(100);
        horizontalSlider_blend_image->setValue(50);
        horizontalSlider_blend_image->setOrientation(Qt::Horizontal);
        horizontalSlider_blend_image->setTickPosition(QSlider::NoTicks);
        horizontalSlider_blend_grid = new QSlider(frame_view_parameters);
        horizontalSlider_blend_grid->setObjectName(QString::fromUtf8("horizontalSlider_blend_grid"));
        horizontalSlider_blend_grid->setGeometry(QRect(10, 153, 91, 29));
        horizontalSlider_blend_grid->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_blend_grid->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_blend_grid->setMaximum(100);
        horizontalSlider_blend_grid->setValue(90);
        horizontalSlider_blend_grid->setOrientation(Qt::Horizontal);
        horizontalSlider_blend_grid->setTickPosition(QSlider::NoTicks);
        checkBox_holes = new QPushButton(frame_view_parameters);
        checkBox_holes->setObjectName(QString::fromUtf8("checkBox_holes"));
        checkBox_holes->setGeometry(QRect(10, 260, 91, 31));
        checkBox_holes->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox_holes->setFocusPolicy(Qt::NoFocus);
        checkBox_holes->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:checked {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/hide.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/icons/holes.png"), QSize(), QIcon::Normal, QIcon::On);
        checkBox_holes->setIcon(icon4);
        checkBox_holes->setIconSize(QSize(25, 25));
        checkBox_holes->setCheckable(true);
        checkBox_holes->setChecked(false);
        label_holes = new QLabel(frame_view_parameters);
        label_holes->setObjectName(QString::fromUtf8("label_holes"));
        label_holes->setGeometry(QRect(10, 300, 91, 21));
        label_holes->setFrameShape(QFrame::StyledPanel);
        label_holes->setFrameShadow(QFrame::Sunken);
        label_holes->setLineWidth(2);
        label_holes->setAlignment(Qt::AlignCenter);
        checkBox_selection = new QPushButton(frame_view_parameters);
        checkBox_selection->setObjectName(QString::fromUtf8("checkBox_selection"));
        checkBox_selection->setGeometry(QRect(10, 210, 91, 31));
        checkBox_selection->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox_selection->setFocusPolicy(Qt::NoFocus);
        checkBox_selection->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:checked {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/hide.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8(":/icons/selection.png"), QSize(), QIcon::Normal, QIcon::On);
        checkBox_selection->setIcon(icon5);
        checkBox_selection->setIconSize(QSize(24, 24));
        checkBox_selection->setCheckable(true);
        checkBox_selection->setChecked(true);
        frame_image_resolution = new QFrame(centralWidget);
        frame_image_resolution->setObjectName(QString::fromUtf8("frame_image_resolution"));
        frame_image_resolution->setGeometry(QRect(505, 3, 171, 21));
        frame_image_resolution->setFrameShape(QFrame::StyledPanel);
        frame_image_resolution->setFrameShadow(QFrame::Sunken);
        frame_image_resolution->setLineWidth(2);
        label_image_icon = new QLabel(frame_image_resolution);
        label_image_icon->setObjectName(QString::fromUtf8("label_image_icon"));
        label_image_icon->setGeometry(QRect(0, 1, 21, 21));
        label_image_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/image.png")));
        label_image_icon->setScaledContents(true);
        label_image_width = new QLabel(frame_image_resolution);
        label_image_width->setObjectName(QString::fromUtf8("label_image_width"));
        label_image_width->setGeometry(QRect(20, 0, 51, 21));
        label_image_width->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_image_height = new QLabel(frame_image_resolution);
        label_image_height->setObjectName(QString::fromUtf8("label_image_height"));
        label_image_height->setGeometry(QRect(90, 0, 51, 21));
        label_px = new QLabel(frame_image_resolution);
        label_px->setObjectName(QString::fromUtf8("label_px"));
        label_px->setGeometry(QRect(147, 0, 16, 21));
        label_X = new QLabel(frame_image_resolution);
        label_X->setObjectName(QString::fromUtf8("label_X"));
        label_X->setGeometry(QRect(77, 0, 16, 21));
        label_filename = new QLabel(centralWidget);
        label_filename->setObjectName(QString::fromUtf8("label_filename"));
        label_filename->setGeometry(QRect(685, 3, 1206, 21));
        label_filename->setFrameShape(QFrame::StyledPanel);
        label_filename->setFrameShadow(QFrame::Sunken);
        label_filename->setLineWidth(2);
        label_filename->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        horizontalScrollBar_segmentation = new QScrollBar(centralWidget);
        horizontalScrollBar_segmentation->setObjectName(QString::fromUtf8("horizontalScrollBar_segmentation"));
        horizontalScrollBar_segmentation->setGeometry(QRect(520, 970, 1361, 20));
        horizontalScrollBar_segmentation->setOrientation(Qt::Horizontal);
        verticalScrollBar_segmentation = new QScrollBar(centralWidget);
        verticalScrollBar_segmentation->setObjectName(QString::fromUtf8("verticalScrollBar_segmentation"));
        verticalScrollBar_segmentation->setGeometry(QRect(1900, 37, 20, 921));
        verticalScrollBar_segmentation->setOrientation(Qt::Vertical);
        label_segmentation = new QLabel(centralWidget);
        label_segmentation->setObjectName(QString::fromUtf8("label_segmentation"));
        label_segmentation->setGeometry(QRect(524, 38, 1361, 921));
        label_segmentation->setCursor(QCursor(Qt::ArrowCursor));
        label_segmentation->setMouseTracking(false);
        label_segmentation->setFrameShape(QFrame::StyledPanel);
        label_segmentation->setFrameShadow(QFrame::Sunken);
        label_segmentation->setLineWidth(2);
        label_segmentation->setAlignment(Qt::AlignCenter);
        Tabs = new QTabWidget(centralWidget);
        Tabs->setObjectName(QString::fromUtf8("Tabs"));
        Tabs->setGeometry(QRect(20, 3, 351, 451));
        Tabs->setFocusPolicy(Qt::NoFocus);
        Tabs->setIconSize(QSize(16, 16));
        tab_image = new QWidget();
        tab_image->setObjectName(QString::fromUtf8("tab_image"));
        button_image = new QPushButton(tab_image);
        button_image->setObjectName(QString::fromUtf8("button_image"));
        button_image->setGeometry(QRect(20, 16, 131, 61));
        button_image->setCursor(QCursor(Qt::PointingHandCursor));
        button_image->setFocusPolicy(Qt::NoFocus);
        button_image->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/image.png"), QSize(), QIcon::Normal, QIcon::On);
        button_image->setIcon(icon6);
        button_image->setIconSize(QSize(32, 32));
        button_apply = new QPushButton(tab_image);
        button_apply->setObjectName(QString::fromUtf8("button_apply"));
        button_apply->setGeometry(QRect(24, 306, 121, 81));
        QFont font;
        button_apply->setFont(font);
        button_apply->setCursor(QCursor(Qt::PointingHandCursor));
        button_apply->setFocusPolicy(Qt::NoFocus);
        button_apply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"	font-size: 20px;\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/compute.png"), QSize(), QIcon::Normal, QIcon::On);
        button_apply->setIcon(icon7);
        button_apply->setIconSize(QSize(32, 32));
        button_original = new QPushButton(tab_image);
        button_original->setObjectName(QString::fromUtf8("button_original"));
        button_original->setGeometry(QRect(210, 366, 101, 33));
        button_original->setCursor(QCursor(Qt::PointingHandCursor));
        button_original->setFocusPolicy(Qt::NoFocus);
        button_original->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/undo.png"), QSize(), QIcon::Normal, QIcon::On);
        button_original->setIcon(icon8);
        button_original->setIconSize(QSize(24, 24));
        frame_denoise = new QFrame(tab_image);
        frame_denoise->setObjectName(QString::fromUtf8("frame_denoise"));
        frame_denoise->setGeometry(QRect(167, 90, 171, 189));
        frame_denoise->setFrameShape(QFrame::StyledPanel);
        frame_denoise->setFrameShadow(QFrame::Sunken);
        frame_denoise->setLineWidth(2);
        label_PSNR = new QLabel(frame_denoise);
        label_PSNR->setObjectName(QString::fromUtf8("label_PSNR"));
        label_PSNR->setGeometry(QRect(20, 158, 41, 17));
        horizontalSlider_luminance = new QSlider(frame_denoise);
        horizontalSlider_luminance->setObjectName(QString::fromUtf8("horizontalSlider_luminance"));
        horizontalSlider_luminance->setGeometry(QRect(5, 57, 131, 29));
        horizontalSlider_luminance->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_luminance->setMinimum(1);
        horizontalSlider_luminance->setMaximum(100);
        horizontalSlider_luminance->setValue(3);
        horizontalSlider_luminance->setOrientation(Qt::Horizontal);
        horizontalSlider_luminance->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_luminance->setTickInterval(10);
        label_chrominance = new QLabel(frame_denoise);
        label_chrominance->setObjectName(QString::fromUtf8("label_chrominance"));
        label_chrominance->setGeometry(QRect(35, 98, 91, 17));
        horizontalSlider_chrominance = new QSlider(frame_denoise);
        horizontalSlider_chrominance->setObjectName(QString::fromUtf8("horizontalSlider_chrominance"));
        horizontalSlider_chrominance->setGeometry(QRect(5, 112, 131, 29));
        horizontalSlider_chrominance->setMinimum(1);
        horizontalSlider_chrominance->setMaximum(100);
        horizontalSlider_chrominance->setValue(3);
        horizontalSlider_chrominance->setOrientation(Qt::Horizontal);
        horizontalSlider_chrominance->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_chrominance->setTickInterval(10);
        label_psnr = new QLabel(frame_denoise);
        label_psnr->setObjectName(QString::fromUtf8("label_psnr"));
        label_psnr->setGeometry(QRect(65, 160, 71, 17));
        label_psnr->setFrameShape(QFrame::StyledPanel);
        label_psnr->setFrameShadow(QFrame::Sunken);
        label_psnr->setAlignment(Qt::AlignCenter);
        checkBox_denoise = new QCheckBox(frame_denoise);
        checkBox_denoise->setObjectName(QString::fromUtf8("checkBox_denoise"));
        checkBox_denoise->setGeometry(QRect(3, 5, 151, 31));
        checkBox_denoise->setFocusPolicy(Qt::NoFocus);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/denoise.png"), QSize(), QIcon::Normal, QIcon::On);
        checkBox_denoise->setIcon(icon9);
        checkBox_denoise->setIconSize(QSize(26, 26));
        checkBox_denoise->setChecked(false);
        label_luminance = new QLabel(frame_denoise);
        label_luminance->setObjectName(QString::fromUtf8("label_luminance"));
        label_luminance->setGeometry(QRect(35, 46, 81, 17));
        label_luminance_value = new QLabel(frame_denoise);
        label_luminance_value->setObjectName(QString::fromUtf8("label_luminance_value"));
        label_luminance_value->setGeometry(QRect(139, 55, 31, 17));
        label_luminance_value->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_chrominance_value = new QLabel(frame_denoise);
        label_chrominance_value->setObjectName(QString::fromUtf8("label_chrominance_value"));
        label_chrominance_value->setGeometry(QRect(139, 113, 31, 17));
        label_chrominance_value->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        frame_contours = new QFrame(tab_image);
        frame_contours->setObjectName(QString::fromUtf8("frame_contours"));
        frame_contours->setGeometry(QRect(167, 284, 171, 71));
        frame_contours->setFrameShape(QFrame::StyledPanel);
        frame_contours->setFrameShadow(QFrame::Sunken);
        frame_contours->setLineWidth(2);
        spinBox_contours_thickness = new QSpinBox(frame_contours);
        spinBox_contours_thickness->setObjectName(QString::fromUtf8("spinBox_contours_thickness"));
        spinBox_contours_thickness->setGeometry(QRect(115, 35, 45, 31));
        spinBox_contours_thickness->setFocusPolicy(Qt::ClickFocus);
        spinBox_contours_thickness->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_contours_thickness->setMinimum(1);
        spinBox_contours_thickness->setMaximum(10);
        spinBox_contours_thickness->setValue(2);
        comboBox_contours_aperture = new QComboBox(frame_contours);
        comboBox_contours_aperture->addItem(QString());
        comboBox_contours_aperture->addItem(QString());
        comboBox_contours_aperture->addItem(QString());
        comboBox_contours_aperture->setObjectName(QString::fromUtf8("comboBox_contours_aperture"));
        comboBox_contours_aperture->setGeometry(QRect(75, 35, 35, 31));
        comboBox_contours_aperture->setFocusPolicy(Qt::ClickFocus);
        checkBox_contours = new QCheckBox(frame_contours);
        checkBox_contours->setObjectName(QString::fromUtf8("checkBox_contours"));
        checkBox_contours->setGeometry(QRect(3, 4, 151, 31));
        checkBox_contours->setFocusPolicy(Qt::NoFocus);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/contours.png"), QSize(), QIcon::Normal, QIcon::On);
        checkBox_contours->setIcon(icon10);
        checkBox_contours->setIconSize(QSize(26, 26));
        checkBox_contours->setChecked(false);
        spinBox_contours_sigma = new QSpinBox(frame_contours);
        spinBox_contours_sigma->setObjectName(QString::fromUtf8("spinBox_contours_sigma"));
        spinBox_contours_sigma->setGeometry(QRect(15, 35, 53, 31));
        spinBox_contours_sigma->setFocusPolicy(Qt::ClickFocus);
        spinBox_contours_sigma->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_contours_sigma->setMinimum(1);
        spinBox_contours_sigma->setMaximum(100);
        spinBox_contours_sigma->setValue(33);
        frame_filters = new QFrame(tab_image);
        frame_filters->setObjectName(QString::fromUtf8("frame_filters"));
        frame_filters->setGeometry(QRect(9, 90, 154, 189));
        frame_filters->setFrameShape(QFrame::StyledPanel);
        frame_filters->setFrameShadow(QFrame::Sunken);
        frame_filters->setLineWidth(2);
        spinBox_color_balance_percent = new QSpinBox(frame_filters);
        spinBox_color_balance_percent->setObjectName(QString::fromUtf8("spinBox_color_balance_percent"));
        spinBox_color_balance_percent->setGeometry(QRect(56, 150, 61, 31));
        spinBox_color_balance_percent->setFocusPolicy(Qt::ClickFocus);
        spinBox_color_balance_percent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_color_balance_percent->setMinimum(1);
        spinBox_color_balance_percent->setMaximum(100);
        spinBox_color_balance_percent->setValue(1);
        checkBox_normalize = new QCheckBox(frame_filters);
        checkBox_normalize->setObjectName(QString::fromUtf8("checkBox_normalize"));
        checkBox_normalize->setGeometry(QRect(3, 80, 151, 31));
        checkBox_normalize->setFocusPolicy(Qt::NoFocus);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/normalize.png"), QSize(), QIcon::Normal, QIcon::On);
        checkBox_normalize->setIcon(icon11);
        checkBox_normalize->setIconSize(QSize(24, 24));
        checkBox_normalize->setChecked(false);
        checkBox_color_balance = new QCheckBox(frame_filters);
        checkBox_color_balance->setObjectName(QString::fromUtf8("checkBox_color_balance"));
        checkBox_color_balance->setGeometry(QRect(3, 117, 151, 31));
        checkBox_color_balance->setFocusPolicy(Qt::NoFocus);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/color-balance.png"), QSize(), QIcon::Normal, QIcon::On);
        checkBox_color_balance->setIcon(icon12);
        checkBox_color_balance->setIconSize(QSize(24, 24));
        checkBox_color_balance->setChecked(false);
        checkBox_gaussian_blur = new QCheckBox(frame_filters);
        checkBox_gaussian_blur->setObjectName(QString::fromUtf8("checkBox_gaussian_blur"));
        checkBox_gaussian_blur->setGeometry(QRect(3, 5, 151, 31));
        checkBox_gaussian_blur->setFocusPolicy(Qt::NoFocus);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/blur.png"), QSize(), QIcon::Normal, QIcon::On);
        checkBox_gaussian_blur->setIcon(icon13);
        checkBox_gaussian_blur->setIconSize(QSize(24, 24));
        checkBox_gaussian_blur->setChecked(false);
        checkBox_equalize = new QCheckBox(frame_filters);
        checkBox_equalize->setObjectName(QString::fromUtf8("checkBox_equalize"));
        checkBox_equalize->setGeometry(QRect(3, 40, 151, 31));
        checkBox_equalize->setFocusPolicy(Qt::NoFocus);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/equalize.png"), QSize(), QIcon::Normal, QIcon::On);
        checkBox_equalize->setIcon(icon14);
        checkBox_equalize->setIconSize(QSize(24, 24));
        checkBox_equalize->setChecked(false);
        button_load_session = new QPushButton(tab_image);
        button_load_session->setObjectName(QString::fromUtf8("button_load_session"));
        button_load_session->setGeometry(QRect(182, 16, 141, 61));
        button_load_session->setCursor(QCursor(Qt::PointingHandCursor));
        button_load_session->setFocusPolicy(Qt::NoFocus);
        button_load_session->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/session-load.png"), QSize(), QIcon::Normal, QIcon::On);
        button_load_session->setIcon(icon15);
        button_load_session->setIconSize(QSize(30, 30));
        button_load_session->setCheckable(true);
        Tabs->addTab(tab_image, icon6, QString());
        frame_filters->raise();
        frame_contours->raise();
        frame_denoise->raise();
        button_image->raise();
        button_apply->raise();
        button_original->raise();
        button_load_session->raise();
        tab_segmentation = new QWidget();
        tab_segmentation->setObjectName(QString::fromUtf8("tab_segmentation"));
        button_compute = new QPushButton(tab_segmentation);
        button_compute->setObjectName(QString::fromUtf8("button_compute"));
        button_compute->setGeometry(QRect(16, 306, 161, 51));
        button_compute->setFont(font);
        button_compute->setCursor(QCursor(Qt::PointingHandCursor));
        button_compute->setFocusPolicy(Qt::NoFocus);
        button_compute->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"   font-size: 20px;\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        button_compute->setIcon(icon7);
        button_compute->setIconSize(QSize(32, 32));
        frame_lcd = new QFrame(tab_segmentation);
        frame_lcd->setObjectName(QString::fromUtf8("frame_lcd"));
        frame_lcd->setGeometry(QRect(192, 316, 141, 31));
        frame_lcd->setFrameShape(QFrame::StyledPanel);
        frame_lcd->setFrameShadow(QFrame::Sunken);
        frame_lcd->setLineWidth(2);
        label_cells = new QLabel(frame_lcd);
        label_cells->setObjectName(QString::fromUtf8("label_cells"));
        label_cells->setGeometry(QRect(10, 5, 21, 21));
        label_cells->setPixmap(QPixmap(QString::fromUtf8(":/icons/grid.png")));
        label_cells->setScaledContents(true);
        lcd_cells = new QLCDNumber(frame_lcd);
        lcd_cells->setObjectName(QString::fromUtf8("lcd_cells"));
        lcd_cells->setGeometry(QRect(35, 5, 61, 21));
        lcd_cells->setStyleSheet(QString::fromUtf8("QLCDNumber{ \n"
"    background-color: rgb(64, 64,64);\n"
"}"));
        lcd_cells->setDigitCount(6);
        label_cells_text = new QLabel(frame_lcd);
        label_cells_text->setObjectName(QString::fromUtf8("label_cells_text"));
        label_cells_text->setGeometry(QRect(102, 6, 41, 17));
        comboBox_algorithm = new QComboBox(tab_segmentation);
        comboBox_algorithm->setObjectName(QString::fromUtf8("comboBox_algorithm"));
        comboBox_algorithm->setGeometry(QRect(147, 20, 121, 35));
        comboBox_algorithm->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_algorithm->setFocusPolicy(Qt::ClickFocus);
        comboBox_algorithm->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 5px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"   font-size: 26px;\n"
"	text-align: center;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: lightgray;\n"
"}\n"
"\n"
"QComboBox:item {\n"
"    font-size:16px;\n"
"	color:white;\n"
"	background-color:rgb(64,64,64);\n"
"}\n"
"QComboBox:item:selected {\n"
"    border: 2px solid black;\n"
"	background-color:black;\n"
"}\n"
"QComboBox:item:checked {\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        comboBox_algorithm->setMaxVisibleItems(5);
        label_algorithm = new QLabel(tab_segmentation);
        label_algorithm->setObjectName(QString::fromUtf8("label_algorithm"));
        label_algorithm->setGeometry(QRect(70, 29, 71, 17));
        label_algorithm->setStyleSheet(QString::fromUtf8(""));
        label_algorithm->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_slic = new QFrame(tab_segmentation);
        frame_slic->setObjectName(QString::fromUtf8("frame_slic"));
        frame_slic->setGeometry(QRect(9, 69, 331, 193));
        frame_slic->setFrameShape(QFrame::StyledPanel);
        frame_slic->setFrameShadow(QFrame::Sunken);
        frame_slic->setLineWidth(2);
        label_region_size = new QLabel(frame_slic);
        label_region_size->setObjectName(QString::fromUtf8("label_region_size"));
        label_region_size->setGeometry(QRect(10, 50, 81, 20));
        label_region_size->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        horizontalSlider_iterations = new QSlider(frame_slic);
        horizontalSlider_iterations->setObjectName(QString::fromUtf8("horizontalSlider_iterations"));
        horizontalSlider_iterations->setGeometry(QRect(100, 9, 191, 29));
        horizontalSlider_iterations->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_iterations->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_iterations->setMinimum(1);
        horizontalSlider_iterations->setMaximum(50);
        horizontalSlider_iterations->setValue(10);
        horizontalSlider_iterations->setOrientation(Qt::Horizontal);
        horizontalSlider_iterations->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_region_size = new QSlider(frame_slic);
        horizontalSlider_region_size->setObjectName(QString::fromUtf8("horizontalSlider_region_size"));
        horizontalSlider_region_size->setGeometry(QRect(94, 48, 191, 29));
        horizontalSlider_region_size->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_region_size->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_region_size->setMinimum(1);
        horizontalSlider_region_size->setMaximum(200);
        horizontalSlider_region_size->setValue(30);
        horizontalSlider_region_size->setOrientation(Qt::Horizontal);
        horizontalSlider_region_size->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_ruler = new QSlider(frame_slic);
        horizontalSlider_ruler->setObjectName(QString::fromUtf8("horizontalSlider_ruler"));
        horizontalSlider_ruler->setGeometry(QRect(94, 128, 191, 29));
        horizontalSlider_ruler->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_ruler->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_ruler->setMinimum(1);
        horizontalSlider_ruler->setMaximum(100);
        horizontalSlider_ruler->setValue(30);
        horizontalSlider_ruler->setOrientation(Qt::Horizontal);
        horizontalSlider_ruler->setTickPosition(QSlider::TicksBelow);
        label_connectivity = new QLabel(frame_slic);
        label_connectivity->setObjectName(QString::fromUtf8("label_connectivity"));
        label_connectivity->setGeometry(QRect(0, 90, 91, 20));
        label_connectivity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_iterations = new QLabel(frame_slic);
        label_iterations->setObjectName(QString::fromUtf8("label_iterations"));
        label_iterations->setGeometry(QRect(16, 11, 81, 20));
        label_iterations->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        horizontalSlider_connectivity = new QSlider(frame_slic);
        horizontalSlider_connectivity->setObjectName(QString::fromUtf8("horizontalSlider_connectivity"));
        horizontalSlider_connectivity->setGeometry(QRect(94, 88, 191, 29));
        horizontalSlider_connectivity->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_connectivity->setMinimum(0);
        horizontalSlider_connectivity->setMaximum(100);
        horizontalSlider_connectivity->setValue(25);
        horizontalSlider_connectivity->setOrientation(Qt::Horizontal);
        horizontalSlider_connectivity->setTickPosition(QSlider::TicksBelow);
        label_value_ruler = new QLabel(frame_slic);
        label_value_ruler->setObjectName(QString::fromUtf8("label_value_ruler"));
        label_value_ruler->setGeometry(QRect(280, 130, 31, 20));
        label_value_ruler->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_value_region_size = new QLabel(frame_slic);
        label_value_region_size->setObjectName(QString::fromUtf8("label_value_region_size"));
        label_value_region_size->setGeometry(QRect(280, 50, 31, 20));
        label_value_region_size->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_ruler = new QLabel(frame_slic);
        label_ruler->setObjectName(QString::fromUtf8("label_ruler"));
        label_ruler->setGeometry(QRect(50, 129, 41, 20));
        label_ruler->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_value_connectivity_percent = new QLabel(frame_slic);
        label_value_connectivity_percent->setObjectName(QString::fromUtf8("label_value_connectivity_percent"));
        label_value_connectivity_percent->setGeometry(QRect(312, 92, 16, 17));
        label_value_connectivity = new QLabel(frame_slic);
        label_value_connectivity->setObjectName(QString::fromUtf8("label_value_connectivity"));
        label_value_connectivity->setGeometry(QRect(280, 90, 31, 20));
        label_value_connectivity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_value_iterations = new QLabel(frame_slic);
        label_value_iterations->setObjectName(QString::fromUtf8("label_value_iterations"));
        label_value_iterations->setGeometry(QRect(280, 10, 31, 20));
        label_value_iterations->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_ratio = new QDoubleSpinBox(frame_slic);
        doubleSpinBox_ratio->setObjectName(QString::fromUtf8("doubleSpinBox_ratio"));
        doubleSpinBox_ratio->setGeometry(QRect(97, 127, 69, 27));
        doubleSpinBox_ratio->setDecimals(3);
        doubleSpinBox_ratio->setMaximum(2.000000000000000);
        doubleSpinBox_ratio->setSingleStep(0.100000000000000);
        doubleSpinBox_ratio->setValue(0.075000000000000);
        label_ratio = new QLabel(frame_slic);
        label_ratio->setObjectName(QString::fromUtf8("label_ratio"));
        label_ratio->setGeometry(QRect(50, 130, 41, 20));
        label_ratio->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_value_num_histogram_bins = new QLabel(frame_slic);
        label_value_num_histogram_bins->setObjectName(QString::fromUtf8("label_value_num_histogram_bins"));
        label_value_num_histogram_bins->setGeometry(QRect(280, 131, 31, 20));
        label_value_num_histogram_bins->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_prior = new QLabel(frame_slic);
        label_prior->setObjectName(QString::fromUtf8("label_prior"));
        label_prior->setGeometry(QRect(15, 101, 81, 20));
        label_prior->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        horizontalSlider_prior = new QSlider(frame_slic);
        horizontalSlider_prior->setObjectName(QString::fromUtf8("horizontalSlider_prior"));
        horizontalSlider_prior->setGeometry(QRect(100, 98, 191, 29));
        horizontalSlider_prior->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_prior->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_prior->setMinimum(0);
        horizontalSlider_prior->setMaximum(5);
        horizontalSlider_prior->setPageStep(1);
        horizontalSlider_prior->setValue(2);
        horizontalSlider_prior->setOrientation(Qt::Horizontal);
        horizontalSlider_prior->setTickPosition(QSlider::NoTicks);
        label_value_num_levels = new QLabel(frame_slic);
        label_value_num_levels->setObjectName(QString::fromUtf8("label_value_num_levels"));
        label_value_num_levels->setGeometry(QRect(282, 72, 31, 20));
        label_value_num_levels->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_value_prior = new QLabel(frame_slic);
        label_value_prior->setObjectName(QString::fromUtf8("label_value_prior"));
        label_value_prior->setGeometry(QRect(281, 100, 31, 20));
        label_value_prior->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        horizontalSlider_num_levels = new QSlider(frame_slic);
        horizontalSlider_num_levels->setObjectName(QString::fromUtf8("horizontalSlider_num_levels"));
        horizontalSlider_num_levels->setGeometry(QRect(100, 70, 191, 29));
        horizontalSlider_num_levels->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_num_levels->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_num_levels->setMinimum(1);
        horizontalSlider_num_levels->setMaximum(50);
        horizontalSlider_num_levels->setValue(4);
        horizontalSlider_num_levels->setOrientation(Qt::Horizontal);
        horizontalSlider_num_levels->setTickPosition(QSlider::NoTicks);
        label_superpixels = new QLabel(frame_slic);
        label_superpixels->setObjectName(QString::fromUtf8("label_superpixels"));
        label_superpixels->setGeometry(QRect(15, 42, 81, 20));
        label_superpixels->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_value_num_superpixels = new QLabel(frame_slic);
        label_value_num_superpixels->setObjectName(QString::fromUtf8("label_value_num_superpixels"));
        label_value_num_superpixels->setGeometry(QRect(296, 41, 31, 20));
        label_value_num_superpixels->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        horizontalSlider_num_superpixels = new QSlider(frame_slic);
        horizontalSlider_num_superpixels->setObjectName(QString::fromUtf8("horizontalSlider_num_superpixels"));
        horizontalSlider_num_superpixels->setGeometry(QRect(100, 40, 191, 29));
        horizontalSlider_num_superpixels->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_num_superpixels->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_num_superpixels->setMinimum(1);
        horizontalSlider_num_superpixels->setMaximum(10000);
        horizontalSlider_num_superpixels->setValue(1000);
        horizontalSlider_num_superpixels->setOrientation(Qt::Horizontal);
        horizontalSlider_num_superpixels->setTickPosition(QSlider::NoTicks);
        horizontalSlider_num_superpixels->setTickInterval(500);
        label_levels = new QLabel(frame_slic);
        label_levels->setObjectName(QString::fromUtf8("label_levels"));
        label_levels->setGeometry(QRect(10, 70, 81, 20));
        label_levels->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_histograms = new QLabel(frame_slic);
        label_histograms->setObjectName(QString::fromUtf8("label_histograms"));
        label_histograms->setGeometry(QRect(15, 130, 81, 20));
        label_histograms->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        horizontalSlider_num_histogram_bins = new QSlider(frame_slic);
        horizontalSlider_num_histogram_bins->setObjectName(QString::fromUtf8("horizontalSlider_num_histogram_bins"));
        horizontalSlider_num_histogram_bins->setGeometry(QRect(100, 127, 191, 29));
        horizontalSlider_num_histogram_bins->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_num_histogram_bins->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_num_histogram_bins->setMinimum(1);
        horizontalSlider_num_histogram_bins->setMaximum(50);
        horizontalSlider_num_histogram_bins->setValue(5);
        horizontalSlider_num_histogram_bins->setOrientation(Qt::Horizontal);
        horizontalSlider_num_histogram_bins->setTickPosition(QSlider::NoTicks);
        checkBox_double_step = new QCheckBox(frame_slic);
        checkBox_double_step->setObjectName(QString::fromUtf8("checkBox_double_step"));
        checkBox_double_step->setGeometry(QRect(80, 156, 191, 31));
        checkBox_double_step->setFocusPolicy(Qt::ClickFocus);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/double-step.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox_double_step->setIcon(icon16);
        checkBox_double_step->setIconSize(QSize(24, 24));
        checkBox_double_step->setChecked(false);
        horizontalSlider_connectivity->raise();
        horizontalSlider_ruler->raise();
        horizontalSlider_prior->raise();
        horizontalSlider_num_histogram_bins->raise();
        horizontalSlider_num_levels->raise();
        label_region_size->raise();
        horizontalSlider_iterations->raise();
        horizontalSlider_region_size->raise();
        label_connectivity->raise();
        label_iterations->raise();
        label_value_ruler->raise();
        label_value_region_size->raise();
        label_ruler->raise();
        label_value_connectivity_percent->raise();
        label_value_connectivity->raise();
        label_value_iterations->raise();
        doubleSpinBox_ratio->raise();
        label_ratio->raise();
        label_value_num_histogram_bins->raise();
        label_prior->raise();
        label_value_num_levels->raise();
        label_value_prior->raise();
        label_superpixels->raise();
        label_value_num_superpixels->raise();
        horizontalSlider_num_superpixels->raise();
        label_levels->raise();
        label_histograms->raise();
        checkBox_double_step->raise();
        button_save_conf = new QPushButton(tab_segmentation);
        button_save_conf->setObjectName(QString::fromUtf8("button_save_conf"));
        button_save_conf->setGeometry(QRect(176, 370, 121, 31));
        button_save_conf->setCursor(QCursor(Qt::PointingHandCursor));
        button_save_conf->setFocusPolicy(Qt::NoFocus);
        button_save_conf->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/save.png"), QSize(), QIcon::Normal, QIcon::On);
        button_save_conf->setIcon(icon17);
        button_save_conf->setIconSize(QSize(24, 24));
        button_load_conf = new QPushButton(tab_segmentation);
        button_load_conf->setObjectName(QString::fromUtf8("button_load_conf"));
        button_load_conf->setGeometry(QRect(46, 370, 121, 31));
        button_load_conf->setCursor(QCursor(Qt::PointingHandCursor));
        button_load_conf->setFocusPolicy(Qt::NoFocus);
        button_load_conf->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/config.png"), QSize(), QIcon::Normal, QIcon::On);
        button_load_conf->setIcon(icon18);
        button_load_conf->setIconSize(QSize(23, 23));
        checkBox_thick = new QCheckBox(tab_segmentation);
        checkBox_thick->setObjectName(QString::fromUtf8("checkBox_thick"));
        checkBox_thick->setGeometry(QRect(190, 265, 131, 31));
        checkBox_thick->setFocusPolicy(Qt::ClickFocus);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/icons/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox_thick->setIcon(icon19);
        checkBox_thick->setIconSize(QSize(26, 26));
        checkBox_thick->setChecked(true);
        checkBox_lab_colors = new QCheckBox(tab_segmentation);
        checkBox_lab_colors->setObjectName(QString::fromUtf8("checkBox_lab_colors"));
        checkBox_lab_colors->setGeometry(QRect(30, 265, 151, 31));
        checkBox_lab_colors->setFocusPolicy(Qt::ClickFocus);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/icons/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox_lab_colors->setIcon(icon20);
        checkBox_lab_colors->setIconSize(QSize(24, 24));
        checkBox_lab_colors->setChecked(true);
        Tabs->addTab(tab_segmentation, icon7, QString());
        tab_labels = new QWidget();
        tab_labels->setObjectName(QString::fromUtf8("tab_labels"));
        button_undo = new QPushButton(tab_labels);
        button_undo->setObjectName(QString::fromUtf8("button_undo"));
        button_undo->setGeometry(QRect(167, 351, 151, 41));
        button_undo->setCursor(QCursor(Qt::PointingHandCursor));
        button_undo->setFocusPolicy(Qt::NoFocus);
        button_undo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"	font-size: 16px;\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        button_undo->setIcon(icon8);
        button_undo->setIconSize(QSize(32, 32));
        listWidget_labels = new QListWidget(tab_labels);
        listWidget_labels->setObjectName(QString::fromUtf8("listWidget_labels"));
        listWidget_labels->setGeometry(QRect(145, 81, 198, 255));
        listWidget_labels->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"	background-color: #fff;\n"
"}\n"
"QListWidget::item::selected {\n"
"	color:white;\n"
"	background-color:#202020;\n"
"	border: 3px double red;\n"
"}"));
        listWidget_labels->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget_labels->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_labels->setSelectionMode(QAbstractItemView::ExtendedSelection);
        listWidget_labels->setSelectionBehavior(QAbstractItemView::SelectItems);
        listWidget_labels->setViewMode(QListView::ListMode);
        listWidget_labels->setSelectionRectVisible(true);
        listWidget_labels->setSortingEnabled(true);
        frame_pick_colors = new QFrame(tab_labels);
        frame_pick_colors->setObjectName(QString::fromUtf8("frame_pick_colors"));
        frame_pick_colors->setGeometry(QRect(8, 81, 131, 321));
        frame_pick_colors->setFrameShape(QFrame::StyledPanel);
        frame_pick_colors->setFrameShadow(QFrame::Sunken);
        frame_pick_colors->setLineWidth(2);
        pushButton_color_red = new QPushButton(frame_pick_colors);
        pushButton_color_red->setObjectName(QString::fromUtf8("pushButton_color_red"));
        pushButton_color_red->setGeometry(QRect(87, 110, 36, 36));
        pushButton_color_red->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_red->setFocusPolicy(Qt::NoFocus);
        pushButton_color_red->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(255,0,0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_red->setIconSize(QSize(16, 16));
        pushButton_color_brown = new QPushButton(frame_pick_colors);
        pushButton_color_brown->setObjectName(QString::fromUtf8("pushButton_color_brown"));
        pushButton_color_brown->setGeometry(QRect(87, 150, 36, 36));
        pushButton_color_brown->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_brown->setFocusPolicy(Qt::NoFocus);
        pushButton_color_brown->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(128,0,0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_brown->setIconSize(QSize(16, 16));
        pushButton_color_orange = new QPushButton(frame_pick_colors);
        pushButton_color_orange->setObjectName(QString::fromUtf8("pushButton_color_orange"));
        pushButton_color_orange->setGeometry(QRect(7, 110, 36, 36));
        pushButton_color_orange->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_orange->setFocusPolicy(Qt::NoFocus);
        pushButton_color_orange->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(255,128,0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_orange->setIconSize(QSize(16, 16));
        pushButton_color_yellow = new QPushButton(frame_pick_colors);
        pushButton_color_yellow->setObjectName(QString::fromUtf8("pushButton_color_yellow"));
        pushButton_color_yellow->setGeometry(QRect(7, 70, 36, 36));
        pushButton_color_yellow->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_yellow->setFocusPolicy(Qt::NoFocus);
        pushButton_color_yellow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(255,255,0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_yellow->setIconSize(QSize(16, 16));
        pushButton_color_pick = new QPushButton(frame_pick_colors);
        pushButton_color_pick->setObjectName(QString::fromUtf8("pushButton_color_pick"));
        pushButton_color_pick->setGeometry(QRect(34, 10, 61, 51));
        pushButton_color_pick->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_pick->setFocusPolicy(Qt::NoFocus);
        pushButton_color_pick->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/icons/color.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_color_pick->setIcon(icon21);
        pushButton_color_pick->setIconSize(QSize(32, 32));
        pushButton_color_green = new QPushButton(frame_pick_colors);
        pushButton_color_green->setObjectName(QString::fromUtf8("pushButton_color_green"));
        pushButton_color_green->setGeometry(QRect(87, 70, 36, 36));
        pushButton_color_green->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_green->setFocusPolicy(Qt::NoFocus);
        pushButton_color_green->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(0,255,0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_green->setIconSize(QSize(16, 16));
        pushButton_color_olive = new QPushButton(frame_pick_colors);
        pushButton_color_olive->setObjectName(QString::fromUtf8("pushButton_color_olive"));
        pushButton_color_olive->setGeometry(QRect(7, 270, 36, 36));
        pushButton_color_olive->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_olive->setFocusPolicy(Qt::NoFocus);
        pushButton_color_olive->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(128,128,0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_olive->setIconSize(QSize(16, 16));
        pushButton_color_cyan = new QPushButton(frame_pick_colors);
        pushButton_color_cyan->setObjectName(QString::fromUtf8("pushButton_color_cyan"));
        pushButton_color_cyan->setGeometry(QRect(7, 190, 36, 36));
        pushButton_color_cyan->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_cyan->setFocusPolicy(Qt::NoFocus);
        pushButton_color_cyan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(0,255,255);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_cyan->setIconSize(QSize(16, 16));
        pushButton_color_emerald = new QPushButton(frame_pick_colors);
        pushButton_color_emerald->setObjectName(QString::fromUtf8("pushButton_color_emerald"));
        pushButton_color_emerald->setGeometry(QRect(47, 270, 36, 36));
        pushButton_color_emerald->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_emerald->setFocusPolicy(Qt::NoFocus);
        pushButton_color_emerald->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(0,128,128);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_emerald->setIconSize(QSize(16, 16));
        pushButton_color_blue = new QPushButton(frame_pick_colors);
        pushButton_color_blue->setObjectName(QString::fromUtf8("pushButton_color_blue"));
        pushButton_color_blue->setGeometry(QRect(87, 190, 36, 36));
        pushButton_color_blue->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_blue->setFocusPolicy(Qt::NoFocus);
        pushButton_color_blue->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(0,0,255);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_blue->setIconSize(QSize(16, 16));
        pushButton_color_navy = new QPushButton(frame_pick_colors);
        pushButton_color_navy->setObjectName(QString::fromUtf8("pushButton_color_navy"));
        pushButton_color_navy->setGeometry(QRect(87, 230, 36, 36));
        pushButton_color_navy->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_navy->setFocusPolicy(Qt::NoFocus);
        pushButton_color_navy->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(0,0,128);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_navy->setIconSize(QSize(16, 16));
        pushButton_color_magenta = new QPushButton(frame_pick_colors);
        pushButton_color_magenta->setObjectName(QString::fromUtf8("pushButton_color_magenta"));
        pushButton_color_magenta->setGeometry(QRect(7, 150, 36, 36));
        pushButton_color_magenta->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_magenta->setFocusPolicy(Qt::NoFocus);
        pushButton_color_magenta->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(255,0,255);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_magenta->setIconSize(QSize(16, 16));
        pushButton_color_purple = new QPushButton(frame_pick_colors);
        pushButton_color_purple->setObjectName(QString::fromUtf8("pushButton_color_purple"));
        pushButton_color_purple->setGeometry(QRect(47, 230, 36, 36));
        pushButton_color_purple->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_purple->setFocusPolicy(Qt::NoFocus);
        pushButton_color_purple->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(128,0,255);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_purple->setIconSize(QSize(16, 16));
        pushButton_color_lime = new QPushButton(frame_pick_colors);
        pushButton_color_lime->setObjectName(QString::fromUtf8("pushButton_color_lime"));
        pushButton_color_lime->setGeometry(QRect(47, 70, 36, 36));
        pushButton_color_lime->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_lime->setFocusPolicy(Qt::NoFocus);
        pushButton_color_lime->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(192,255,0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_lime->setIconSize(QSize(16, 16));
        pushButton_color_laurel = new QPushButton(frame_pick_colors);
        pushButton_color_laurel->setObjectName(QString::fromUtf8("pushButton_color_laurel"));
        pushButton_color_laurel->setGeometry(QRect(87, 270, 36, 36));
        pushButton_color_laurel->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_laurel->setFocusPolicy(Qt::NoFocus);
        pushButton_color_laurel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(0,128,0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_laurel->setIconSize(QSize(16, 16));
        pushButton_color_malibu = new QPushButton(frame_pick_colors);
        pushButton_color_malibu->setObjectName(QString::fromUtf8("pushButton_color_malibu"));
        pushButton_color_malibu->setGeometry(QRect(7, 230, 36, 36));
        pushButton_color_malibu->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_malibu->setFocusPolicy(Qt::NoFocus);
        pushButton_color_malibu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(128,128,255);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_malibu->setIconSize(QSize(16, 16));
        pushButton_color_violet = new QPushButton(frame_pick_colors);
        pushButton_color_violet->setObjectName(QString::fromUtf8("pushButton_color_violet"));
        pushButton_color_violet->setGeometry(QRect(47, 150, 36, 36));
        pushButton_color_violet->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_violet->setFocusPolicy(Qt::NoFocus);
        pushButton_color_violet->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(128,0,128);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_violet->setIconSize(QSize(16, 16));
        pushButton_color_rose = new QPushButton(frame_pick_colors);
        pushButton_color_rose->setObjectName(QString::fromUtf8("pushButton_color_rose"));
        pushButton_color_rose->setGeometry(QRect(47, 110, 36, 36));
        pushButton_color_rose->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_rose->setFocusPolicy(Qt::NoFocus);
        pushButton_color_rose->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(255,0,128);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_rose->setIconSize(QSize(16, 16));
        pushButton_color_azure = new QPushButton(frame_pick_colors);
        pushButton_color_azure->setObjectName(QString::fromUtf8("pushButton_color_azure"));
        pushButton_color_azure->setGeometry(QRect(47, 190, 36, 36));
        pushButton_color_azure->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_color_azure->setFocusPolicy(Qt::NoFocus);
        pushButton_color_azure->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(0,128,255);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_color_azure->setIconSize(QSize(16, 16));
        pushButton_label_delete = new QPushButton(tab_labels);
        pushButton_label_delete->setObjectName(QString::fromUtf8("pushButton_label_delete"));
        pushButton_label_delete->setGeometry(QRect(10, 8, 51, 34));
        pushButton_label_delete->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_label_delete->setFocusPolicy(Qt::NoFocus);
        pushButton_label_delete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/icons/delete.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_label_delete->setIcon(icon22);
        pushButton_label_delete->setIconSize(QSize(26, 26));
        pushButton_label_add = new QPushButton(tab_labels);
        pushButton_label_add->setObjectName(QString::fromUtf8("pushButton_label_add"));
        pushButton_label_add->setGeometry(QRect(140, 8, 51, 34));
        pushButton_label_add->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_label_add->setFocusPolicy(Qt::NoFocus);
        pushButton_label_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/icons/add.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_label_add->setIcon(icon23);
        pushButton_label_add->setIconSize(QSize(26, 26));
        pushButton_label_hide = new QPushButton(tab_labels);
        pushButton_label_hide->setObjectName(QString::fromUtf8("pushButton_label_hide"));
        pushButton_label_hide->setGeometry(QRect(76, 8, 51, 34));
        pushButton_label_hide->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_label_hide->setFocusPolicy(Qt::NoFocus);
        pushButton_label_hide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/icons/hide.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_label_hide->setIcon(icon24);
        pushButton_label_hide->setIconSize(QSize(28, 28));
        pushButton_label_draw = new QPushButton(tab_labels);
        pushButton_label_draw->setObjectName(QString::fromUtf8("pushButton_label_draw"));
        pushButton_label_draw->setGeometry(QRect(280, 8, 51, 34));
        pushButton_label_draw->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_label_draw->setFocusPolicy(Qt::NoFocus);
        pushButton_label_draw->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:checked {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/icons/label-new-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon25.addFile(QString::fromUtf8(":/icons/label-new.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_label_draw->setIcon(icon25);
        pushButton_label_draw->setIconSize(QSize(28, 28));
        pushButton_label_draw->setCheckable(true);
        pushButton_label_join = new QPushButton(tab_labels);
        pushButton_label_join->setObjectName(QString::fromUtf8("pushButton_label_join"));
        pushButton_label_join->setGeometry(QRect(210, 8, 51, 34));
        pushButton_label_join->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_label_join->setFocusPolicy(Qt::NoFocus);
        pushButton_label_join->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/icons/label-join.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_label_join->setIcon(icon26);
        pushButton_label_join->setIconSize(QSize(28, 28));
        label_color_icon = new QLabel(tab_labels);
        label_color_icon->setObjectName(QString::fromUtf8("label_color_icon"));
        label_color_icon->setGeometry(QRect(0, 46, 28, 31));
        label_color_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/edit.png")));
        label_color_icon->setScaledContents(true);
        label_color = new QLabel(tab_labels);
        label_color->setObjectName(QString::fromUtf8("label_color"));
        label_color->setGeometry(QRect(8, 50, 331, 25));
        label_color->setStyleSheet(QString::fromUtf8("background-color:rgb(255,0,0);border: 3px solid black;"));
        label_color->setAlignment(Qt::AlignCenter);
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/icons/label.png"), QSize(), QIcon::Normal, QIcon::On);
        Tabs->addTab(tab_labels, icon27, QString());
        button_undo->raise();
        listWidget_labels->raise();
        frame_pick_colors->raise();
        pushButton_label_delete->raise();
        pushButton_label_add->raise();
        pushButton_label_hide->raise();
        pushButton_label_draw->raise();
        pushButton_label_join->raise();
        label_color->raise();
        label_color_icon->raise();
        label_thumbnail = new QLabel(centralWidget);
        label_thumbnail->setObjectName(QString::fromUtf8("label_thumbnail"));
        label_thumbnail->setGeometry(QRect(20, 474, 351, 311));
        label_thumbnail->setMaximumSize(QSize(400, 400));
        label_thumbnail->setCursor(QCursor(Qt::CrossCursor));
        label_thumbnail->setMouseTracking(true);
        label_thumbnail->setFrameShape(QFrame::StyledPanel);
        label_thumbnail->setFrameShadow(QFrame::Sunken);
        label_thumbnail->setLineWidth(2);
        label_thumbnail->setAlignment(Qt::AlignCenter);
        frame_about = new QFrame(centralWidget);
        frame_about->setObjectName(QString::fromUtf8("frame_about"));
        frame_about->setGeometry(QRect(10, 967, 351, 71));
        frame_about->setFrameShape(QFrame::NoFrame);
        frame_about->setFrameShadow(QFrame::Raised);
        frame_zoom = new QFrame(centralWidget);
        frame_zoom->setObjectName(QString::fromUtf8("frame_zoom"));
        frame_zoom->setGeometry(QRect(390, 580, 111, 191));
        frame_zoom->setFrameShape(QFrame::StyledPanel);
        frame_zoom->setFrameShadow(QFrame::Sunken);
        frame_zoom->setLineWidth(2);
        pushButton_zoom_plus = new QPushButton(frame_zoom);
        pushButton_zoom_plus->setObjectName(QString::fromUtf8("pushButton_zoom_plus"));
        pushButton_zoom_plus->setGeometry(QRect(58, 127, 41, 41));
        pushButton_zoom_plus->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_zoom_plus->setFocusPolicy(Qt::NoFocus);
        pushButton_zoom_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/icons/zoom-plus.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_zoom_plus->setIcon(icon28);
        pushButton_zoom_plus->setIconSize(QSize(32, 32));
        pushButton_zoom_100 = new QPushButton(frame_zoom);
        pushButton_zoom_100->setObjectName(QString::fromUtf8("pushButton_zoom_100"));
        pushButton_zoom_100->setGeometry(QRect(10, 10, 81, 31));
        pushButton_zoom_100->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_zoom_100->setFocusPolicy(Qt::NoFocus);
        pushButton_zoom_100->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/icons/zoom-100.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_zoom_100->setIcon(icon29);
        pushButton_zoom_100->setIconSize(QSize(24, 24));
        pushButton_zoom_minus = new QPushButton(frame_zoom);
        pushButton_zoom_minus->setObjectName(QString::fromUtf8("pushButton_zoom_minus"));
        pushButton_zoom_minus->setGeometry(QRect(8, 127, 41, 41));
        pushButton_zoom_minus->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_zoom_minus->setFocusPolicy(Qt::NoFocus);
        pushButton_zoom_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/icons/zoom-minus.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_zoom_minus->setIcon(icon30);
        pushButton_zoom_minus->setIconSize(QSize(32, 32));
        pushButton_zoom_fit = new QPushButton(frame_zoom);
        pushButton_zoom_fit->setObjectName(QString::fromUtf8("pushButton_zoom_fit"));
        pushButton_zoom_fit->setGeometry(QRect(10, 50, 81, 31));
        pushButton_zoom_fit->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_zoom_fit->setFocusPolicy(Qt::NoFocus);
        pushButton_zoom_fit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/icons/zoom.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_zoom_fit->setIcon(icon31);
        pushButton_zoom_fit->setIconSize(QSize(24, 24));
        label_zoom = new QLabel(frame_zoom);
        label_zoom->setObjectName(QString::fromUtf8("label_zoom"));
        label_zoom->setGeometry(QRect(8, 88, 91, 31));
        label_zoom->setStyleSheet(QString::fromUtf8("background-color:rgb(64,64,64);border: 1px solid white;color:rgb(255,255,255);"));
        label_zoom->setFrameShape(QFrame::StyledPanel);
        label_zoom->setFrameShadow(QFrame::Sunken);
        label_zoom->setAlignment(Qt::AlignCenter);
        button_quit = new QPushButton(centralWidget);
        button_quit->setObjectName(QString::fromUtf8("button_quit"));
        button_quit->setGeometry(QRect(10, 820, 151, 91));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        button_quit->setFont(font1);
        button_quit->setCursor(QCursor(Qt::PointingHandCursor));
        button_quit->setFocusPolicy(Qt::NoFocus);
        button_quit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/icons/quit.png"), QSize(), QIcon::Normal, QIcon::On);
        button_quit->setIcon(icon32);
        button_quit->setIconSize(QSize(32, 32));
        frame_draw = new QFrame(centralWidget);
        frame_draw->setObjectName(QString::fromUtf8("frame_draw"));
        frame_draw->setGeometry(QRect(390, 410, 111, 171));
        frame_draw->setFrameShape(QFrame::StyledPanel);
        frame_draw->setFrameShadow(QFrame::Sunken);
        frame_draw->setLineWidth(2);
        label_draw_size = new QLabel(frame_draw);
        label_draw_size->setObjectName(QString::fromUtf8("label_draw_size"));
        label_draw_size->setGeometry(QRect(40, 6, 41, 17));
        label_draw_size->setStyleSheet(QString::fromUtf8("QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        label_draw_size->setFrameShape(QFrame::StyledPanel);
        label_draw_size->setFrameShadow(QFrame::Sunken);
        label_draw_size->setLineWidth(2);
        label_draw_size->setAlignment(Qt::AlignCenter);
        horizontalSlider_draw_size = new QSlider(frame_draw);
        horizontalSlider_draw_size->setObjectName(QString::fromUtf8("horizontalSlider_draw_size"));
        horizontalSlider_draw_size->setGeometry(QRect(10, 20, 91, 29));
        horizontalSlider_draw_size->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_draw_size->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_draw_size->setStyleSheet(QString::fromUtf8("QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        horizontalSlider_draw_size->setMinimum(0);
        horizontalSlider_draw_size->setMaximum(20);
        horizontalSlider_draw_size->setPageStep(1);
        horizontalSlider_draw_size->setValue(0);
        horizontalSlider_draw_size->setOrientation(Qt::Horizontal);
        horizontalSlider_draw_size->setTickPosition(QSlider::NoTicks);
        radioButton_draw_mask = new QRadioButton(frame_draw);
        radioButton_draw_mask->setObjectName(QString::fromUtf8("radioButton_draw_mask"));
        radioButton_draw_mask->setGeometry(QRect(25, 54, 81, 22));
        radioButton_draw_mask->setStyleSheet(QString::fromUtf8("QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        radioButton_draw_mask->setChecked(true);
        radioButton_draw_reject = new QRadioButton(frame_draw);
        radioButton_draw_reject->setObjectName(QString::fromUtf8("radioButton_draw_reject"));
        radioButton_draw_reject->setGeometry(QRect(25, 90, 81, 22));
        radioButton_draw_reject->setStyleSheet(QString::fromUtf8("QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        pushButton_draw_clear = new QPushButton(frame_draw);
        pushButton_draw_clear->setObjectName(QString::fromUtf8("pushButton_draw_clear"));
        pushButton_draw_clear->setGeometry(QRect(6, 120, 31, 34));
        pushButton_draw_clear->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_draw_clear->setFocusPolicy(Qt::NoFocus);
        pushButton_draw_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:checked {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/icons/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_draw_clear->setIcon(icon33);
        pushButton_draw_clear->setIconSize(QSize(24, 24));
        pushButton_draw_clear->setCheckable(false);
        pushButton_draw_grabcut = new QPushButton(frame_draw);
        pushButton_draw_grabcut->setObjectName(QString::fromUtf8("pushButton_draw_grabcut"));
        pushButton_draw_grabcut->setGeometry(QRect(40, 120, 31, 34));
        pushButton_draw_grabcut->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_draw_grabcut->setFocusPolicy(Qt::NoFocus);
        pushButton_draw_grabcut->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:checked {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_draw_grabcut->setIcon(icon34);
        pushButton_draw_grabcut->setIconSize(QSize(24, 24));
        pushButton_draw_grabcut->setCheckable(false);
        radioButton_draw_maybe = new QRadioButton(frame_draw);
        radioButton_draw_maybe->setObjectName(QString::fromUtf8("radioButton_draw_maybe"));
        radioButton_draw_maybe->setGeometry(QRect(25, 72, 81, 22));
        radioButton_draw_maybe->setStyleSheet(QString::fromUtf8("QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        label_draw_size_icon = new QLabel(frame_draw);
        label_draw_size_icon->setObjectName(QString::fromUtf8("label_draw_size_icon"));
        label_draw_size_icon->setGeometry(QRect(22, 2, 24, 24));
        label_draw_size_icon->setStyleSheet(QString::fromUtf8("QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        label_draw_size_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/thick.png")));
        label_draw_size_icon->setScaledContents(true);
        pushButton_draw_grabcut_iteration = new QPushButton(frame_draw);
        pushButton_draw_grabcut_iteration->setObjectName(QString::fromUtf8("pushButton_draw_grabcut_iteration"));
        pushButton_draw_grabcut_iteration->setGeometry(QRect(76, 120, 31, 34));
        pushButton_draw_grabcut_iteration->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_draw_grabcut_iteration->setFocusPolicy(Qt::NoFocus);
        pushButton_draw_grabcut_iteration->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:checked {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/icons/cut-plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_draw_grabcut_iteration->setIcon(icon35);
        pushButton_draw_grabcut_iteration->setIconSize(QSize(24, 24));
        pushButton_draw_grabcut_iteration->setCheckable(false);
        button_save_session = new QPushButton(centralWidget);
        button_save_session->setObjectName(QString::fromUtf8("button_save_session"));
        button_save_session->setGeometry(QRect(290, 820, 141, 91));
        button_save_session->setCursor(QCursor(Qt::PointingHandCursor));
        button_save_session->setFocusPolicy(Qt::NoFocus);
        button_save_session->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/icons/session-save.png"), QSize(), QIcon::Normal, QIcon::On);
        button_save_session->setIcon(icon36);
        button_save_session->setIconSize(QSize(32, 32));
        pushButton_psd = new QPushButton(centralWidget);
        pushButton_psd->setObjectName(QString::fromUtf8("pushButton_psd"));
        pushButton_psd->setGeometry(QRect(180, 870, 91, 41));
        pushButton_psd->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_psd->setFocusPolicy(Qt::NoFocus);
        pushButton_psd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/icons/photoshop.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_psd->setIcon(icon37);
        pushButton_psd->setIconSize(QSize(32, 32));
        pushButton_tif = new QPushButton(centralWidget);
        pushButton_tif->setObjectName(QString::fromUtf8("pushButton_tif"));
        pushButton_tif->setGeometry(QRect(180, 820, 91, 41));
        pushButton_tif->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_tif->setFocusPolicy(Qt::NoFocus);
        pushButton_tif->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFFFFF, stop: 1 #E0E0E0);\n"
"	border-radius: 10px;\n"
"	border: 2px outset #8f8f91;\n"
"	color rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px inset #8f8f91;\n"
"}\n"
"QToolTip {\n"
"    border:2px solid black;\n"
"	padding:5px;\n"
"	background-color:rgb(64,64,64);\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}"));
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/icons/tiff.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_tif->setIcon(icon38);
        pushButton_tif->setIconSize(QSize(32, 32));
        MainWindow->setCentralWidget(centralWidget);
        frame_draw->raise();
        frame_zoom->raise();
        label_segmentation->raise();
        Tabs->raise();
        frame_image_resolution->raise();
        frame_view_parameters->raise();
        label_filename->raise();
        horizontalScrollBar_segmentation->raise();
        verticalScrollBar_segmentation->raise();
        label_thumbnail->raise();
        frame_about->raise();
        button_quit->raise();
        button_save_session->raise();
        pushButton_psd->raise();
        pushButton_tif->raise();

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_connectivity, SIGNAL(valueChanged(int)), label_value_connectivity, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_iterations, SIGNAL(valueChanged(int)), label_value_iterations, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_region_size, SIGNAL(valueChanged(int)), label_value_region_size, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_ruler, SIGNAL(valueChanged(int)), label_value_ruler, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_num_superpixels, SIGNAL(valueChanged(int)), label_value_num_superpixels, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_num_levels, SIGNAL(valueChanged(int)), label_value_num_levels, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_prior, SIGNAL(valueChanged(int)), label_value_prior, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_num_histogram_bins, SIGNAL(valueChanged(int)), label_value_num_histogram_bins, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_luminance, SIGNAL(valueChanged(int)), label_luminance_value, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_chrominance, SIGNAL(valueChanged(int)), label_chrominance_value, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_draw_size, SIGNAL(valueChanged(int)), label_draw_size, SLOT(setNum(int)));

        comboBox_grid_color->setCurrentIndex(-1);
        Tabs->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MIni PixLab AI", nullptr));
#if QT_CONFIG(whatsthis)
        frame_view_parameters->setWhatsThis(QCoreApplication::translate("MainWindow", "Use this panel to show/hide layers, and adjust them", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        horizontalSlider_blend_mask->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        horizontalSlider_blend_mask->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Transparency of the mask.</p><p>Lower values = more transparent</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        checkBox_image->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        checkBox_image->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Display (or not) the image</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBox_image->setText(QCoreApplication::translate("MainWindow", "Image", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_mask->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        checkBox_mask->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Display (or not) the segmentation mask.</p><p>Change the blend factor to set the transparency</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBox_mask->setText(QCoreApplication::translate("MainWindow", " Mask", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_grid->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        checkBox_grid->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Display (or not) the superpixels boundaries.</p><p>The blend factor does not affect this mask, but you can change the grid color with the control just below.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBox_grid->setText(QCoreApplication::translate("MainWindow", " Grid", nullptr));
#if QT_CONFIG(tooltip)
        comboBox_grid_color->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        comboBox_grid_color->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Change the grid mask color to your liking</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        horizontalSlider_blend_image->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        horizontalSlider_blend_image->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Transparency of the image.</p><p>Lower values = more transparent</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        horizontalSlider_blend_grid->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        horizontalSlider_blend_grid->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Transparency of the grid.</p><p>Lower values = more transparent</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        checkBox_holes->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        checkBox_holes->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Display (or not) the pixels not pertaining to any label.</p><p>When activated, the number of unassigned pixels is displayed. You are finished when the count is 0</p><p>These &quot;holes&quot; in the mask appear in white when this option is set.</p><p>This option can make inconsistancies appear between the superpixels and the current labels, especially after having created a new label.</p><p>Hold the &lt;H&gt; key for several seconds to see a flashing indication of holes in the mask. It facilitates the lost pixels hunt</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBox_holes->setText(QCoreApplication::translate("MainWindow", " Holes", nullptr));
#if QT_CONFIG(tooltip)
        label_holes->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label_holes->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Number of unset pixels, which appear as white pixels when the Holes button is activated.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_holes->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_selection->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        checkBox_selection->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Display (or not) the selection mask.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBox_selection->setText(QCoreApplication::translate("MainWindow", " Select", nullptr));
#if QT_CONFIG(whatsthis)
        frame_image_resolution->setWhatsThis(QCoreApplication::translate("MainWindow", "Image size in pixels", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        label_image_icon->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label_image_icon->setWhatsThis(QCoreApplication::translate("MainWindow", "Image size in pixels", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_image_icon->setText(QString());
#if QT_CONFIG(tooltip)
        label_image_width->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label_image_width->setWhatsThis(QCoreApplication::translate("MainWindow", "Image width", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_image_width->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        label_image_height->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label_image_height->setWhatsThis(QCoreApplication::translate("MainWindow", "Image height", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_image_height->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(whatsthis)
        label_px->setWhatsThis(QCoreApplication::translate("MainWindow", "Image size in pixels", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_px->setText(QCoreApplication::translate("MainWindow", "px", nullptr));
#if QT_CONFIG(whatsthis)
        label_X->setWhatsThis(QCoreApplication::translate("MainWindow", "Image size in pixels", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_X->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
#if QT_CONFIG(tooltip)
        label_filename->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label_filename->setWhatsThis(QCoreApplication::translate("MainWindow", "Image file name", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_filename->setText(QCoreApplication::translate("MainWindow", "Image file", nullptr));
#if QT_CONFIG(whatsthis)
        horizontalScrollBar_segmentation->setWhatsThis(QCoreApplication::translate("MainWindow", "Navigate", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        verticalScrollBar_segmentation->setWhatsThis(QCoreApplication::translate("MainWindow", "Navigate", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_segmentation->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>The main area of this software: the segmentation viewport.</p><p>This is where you assign areas and draw custom labels</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_segmentation->setText(QCoreApplication::translate("MainWindow", "Segmentation not computed", nullptr));
#if QT_CONFIG(whatsthis)
        Tabs->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        tab_image->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        tab_image->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Tab Image:</p><p>Before anything else, load an image</p><p>You can then apply effects and filters on this image: tick the elements and set the parameters for each, then click on APPLY.</p><p>The effects are always applied on the ORIGINAL image, not the current one.</p><p>If you want to revert to the original image, click ORIGINAL</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        button_image->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        button_image->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Load the image to process.</p><p>It also resets the previously defined mask, grid and labels</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_image->setText(QCoreApplication::translate("MainWindow", "Load image", nullptr));
#if QT_CONFIG(tooltip)
        button_apply->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        button_apply->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Compute the segmentation.</p><p>After computation, use the &quot;labels&quot; tab to edit the labels</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_apply->setText(QCoreApplication::translate("MainWindow", "APPLY", nullptr));
#if QT_CONFIG(tooltip)
        button_original->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        button_original->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Undo last action.</p><p>Caution, it will only work once!</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_original->setText(QCoreApplication::translate("MainWindow", "Original", nullptr));
#if QT_CONFIG(whatsthis)
        frame_denoise->setWhatsThis(QCoreApplication::translate("MainWindow", "Use this panel to remove noise from the image", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_PSNR->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>PSNR: when you apply the effect, PSNR (Peak Signal to Noise Ratio) represents the noise difference between the original and the denoised image.</p><p><br/></p><p>The higher value the better, over 40dB is usally good enough for superpixels algorithms</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_PSNR->setText(QCoreApplication::translate("MainWindow", "PSNR:", nullptr));
#if QT_CONFIG(tooltip)
        horizontalSlider_luminance->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        horizontalSlider_luminance->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Noise is mostly found in dark areas with digital cameras, especially with high ISO values (over 800).</p><p>Bright areas are also affected, but in this case the noise is less perceptible by humans.</p><p>Try higher values of luminance to clean the image of unwanted brighter or darker pixels</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_chrominance->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Chrominance: noise in this case consists in color variations, for example orange and yellow spots in a red colored area.</p><p>Superpixel algorithms are less affected by chrominance than luminance</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_chrominance->setText(QCoreApplication::translate("MainWindow", "Chrominance", nullptr));
#if QT_CONFIG(tooltip)
        horizontalSlider_chrominance->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        horizontalSlider_chrominance->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Chrominance: noise in this case consists in color variations, for example orange and yellow spots in a red colored area.</p><p>Superpixel algorithms are less affected by chrominance than luminance</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        label_psnr->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label_psnr->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>PSNR: when you apply the effect, PSNR (Peak Signal to Noise Ratio) represents the noise difference between the original and the denoised image.</p><p><br/></p><p>The higher value the better, over 40dB is usally good enough for superpixels algorithms</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_psnr->setText(QString());
#if QT_CONFIG(tooltip)
        checkBox_denoise->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        checkBox_denoise->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Denoising - noise in images often interfere with the superpixels algorithms, the result is often indented in this case</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBox_denoise->setText(QCoreApplication::translate("MainWindow", "Denoise", nullptr));
#if QT_CONFIG(whatsthis)
        label_luminance->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Noise is mostly found in dark areas with digital cameras, especially with high ISO values (over 800).</p><p>Bright areas are also affected, but in this case the noise is less perceptible by humans.</p><p>Try higher values of luminance to clean the image of unwanted brighter or darker pixels</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_luminance->setText(QCoreApplication::translate("MainWindow", "Luminance", nullptr));
#if QT_CONFIG(whatsthis)
        label_luminance_value->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Noise is mostly found in dark areas with digital cameras, especially with high ISO values (over 800).</p><p>Bright areas are also affected, but in this case the noise is less perceptible by humans.</p><p>Try higher values of luminance to clean the image of unwanted brighter or darker pixels</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_luminance_value->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(whatsthis)
        label_chrominance_value->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Chrominance: noise in this case consists in color variations, for example orange and yellow spots in a red colored area.</p><p>Superpixel algorithms are less affected by chrominance than luminance</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_chrominance_value->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(whatsthis)
        frame_contours->setWhatsThis(QCoreApplication::translate("MainWindow", "Use this panel to draw contours on the image", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        spinBox_contours_thickness->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        spinBox_contours_thickness->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Contours Thickness: n pixels wide lines are drawn over the image</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        comboBox_contours_aperture->setItemText(0, QCoreApplication::translate("MainWindow", "3", nullptr));
        comboBox_contours_aperture->setItemText(1, QCoreApplication::translate("MainWindow", "5", nullptr));
        comboBox_contours_aperture->setItemText(2, QCoreApplication::translate("MainWindow", "7", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_contours_aperture->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        comboBox_contours_aperture->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Contours Aperture: aperture size for the Sobel operator.</p><p>In most cases you should leave it to 3 (minimum value)</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        checkBox_contours->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        checkBox_contours->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Apply an edge detector to the image before processing. It draws colored lines over the image, and so can help the superpixels algorithms defining the cells.</p><p>Results are often improved by a Gaussian blur first.</p><p><br/>* Sigma: threshold for the hysteresis procedure</p><p>* Aperture: aperture size for the Sobel operator</p><p>* Thickness: value in pixels, for the resulting lines drawn over the image <br/></p><p>The present alogorithm is <span style=\" font-style:italic;\">Canny Edge detector</span>, it was developed by John F. Canny in 1986. Also known to many as the <span style=\" font-style:italic;\">optimal detector</span>, Canny algorithm aims to satisfy three main criteria:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Low error rate:</span> meaning a good d"
                        "etection of only existent edges</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Good localization:</span> the distance between edge pixels detected and real edge pixels have to be minimized.</li><li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Minimal response:</span> only one detector response per edge</li></ul></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBox_contours->setText(QCoreApplication::translate("MainWindow", "Contours", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_contours_sigma->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        spinBox_contours_sigma->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Contours sigma (in percents): value between min and max of the threshold of hysteresis procedure</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        frame_filters->setWhatsThis(QCoreApplication::translate("MainWindow", "Several filters are available here", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        spinBox_color_balance_percent->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        spinBox_color_balance_percent->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Color balance percent: max variation in percents</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        checkBox_normalize->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        checkBox_normalize->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Normalize the image histogram before processing.</p><p>Image normalization changes the range of pixel intensity values, by stretching the histogram to the maximum values.</p><p>It is recommended for grayscale images, or color images with a limited number of colors</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBox_normalize->setText(QCoreApplication::translate("MainWindow", "Normalize", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_color_balance->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        checkBox_color_balance->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Color balance the image before processing.</p><p>Color balance (also called &quot;white balance&quot;) is the global adjustment of the intensities of the colors (typically red, green, and blue primary colors).</p><p>An important goal of this adjustment is to render specific colors \342\200\223 particularly neutral colors \342\200\223 correctly</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBox_color_balance->setText(QCoreApplication::translate("MainWindow", "Color Balance", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_gaussian_blur->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        checkBox_gaussian_blur->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Apply a gaussian blur to the image before processing often improves the results by lowering noise</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBox_gaussian_blur->setText(QCoreApplication::translate("MainWindow", "Gaussian blur", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_equalize->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        checkBox_equalize->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Equalize histogram of the image before processing: increases the global contrast of the image before processing.</p><p>It can improve many images, especially when the usable data is represented by close contrast values. Through this adjustment, the intensities can be better distributed on the histogram: this allows for areas of lower local contrast to gain a higher contrast. Histogram equalization accomplishes this by effectively spreading out the most frequent intensity values</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBox_equalize->setText(QCoreApplication::translate("MainWindow", "Equalize", nullptr));
#if QT_CONFIG(tooltip)
        button_load_session->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        button_load_session->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Load a previously saved session: image, mask, grid and labels (cells)</p><p>Useful if you want to finish a previous work, but it won't work until you have loaded the original image first.</p><p>Tip: you don't have to save the parameters to continue working with the cells.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_load_session->setText(QCoreApplication::translate("MainWindow", "Load session", nullptr));
        Tabs->setTabText(Tabs->indexOf(tab_image), QCoreApplication::translate("MainWindow", "Image", nullptr));
#if QT_CONFIG(whatsthis)
        tab_segmentation->setWhatsThis(QCoreApplication::translate("MainWindow", "This is where you apply a segmentation", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        button_compute->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        button_compute->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Compute the segmentation.</p><p>After computation, use the &quot;Labels&quot; tab to edit the mask</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_compute->setText(QCoreApplication::translate("MainWindow", "COMPUTE", nullptr));
#if QT_CONFIG(whatsthis)
        frame_lcd->setWhatsThis(QCoreApplication::translate("MainWindow", "Number of cells in the computed segmentation", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_cells->setWhatsThis(QCoreApplication::translate("MainWindow", "Number of cells in the computed segmentation", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_cells->setText(QString());
#if QT_CONFIG(tooltip)
        lcd_cells->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        lcd_cells->setWhatsThis(QCoreApplication::translate("MainWindow", "Number of cells in the computed segmentation", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_cells_text->setWhatsThis(QCoreApplication::translate("MainWindow", "Number of cells in the computed segmentation", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_cells_text->setText(QCoreApplication::translate("MainWindow", "cells", nullptr));
#if QT_CONFIG(tooltip)
        comboBox_algorithm->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        comboBox_algorithm->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Choose the algorithm variant to use: </p><p>* SLIC (Simple Linear Iterative Clustering) clusters pixels using pixel channels and image plane space to efficiently generate compact, nearly uniform superpixels</p><p>* SLICO (Zero parameter SLIC) optimizes SLIC, using adaptive compactness factor</p><p>* MSLIC (Manifold SLIC) optimizes SLIC using manifold methods resulting in more content-sensitive superpixels</p><p>* LSC (Linear Spectral Clustering) produces compact and uniform superpixels with low computational costs, and keeps global images properties</p><p>* SEEDS (Superpixels Extracted via Energy-Driven Sampling) uses an efficient hill-climbing algorithm to optimize the superpixels' energy function that is based on color histograms and a boundary term, producing smooth boundaries</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_algorithm->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Choose the algorithm variant to use: </p><p>* SLIC (Simple Linear Iterative Clustering) clusters pixels using pixel channels and image plane space to efficiently generate compact, nearly uniform superpixels</p><p>* SLICO (Zero parameter SLIC) optimizes SLIC, using adaptive compactness factor</p><p>* MSLIC (Manifold SLIC) optimizes SLIC using manifold methods resulting in more content-sensitive superpixels</p><p>* LSC (Linear Spectral Clustering) produces compact and uniform superpixels with low computational costs, and keeps global images properties</p><p>* SEEDS (Superpixels Extracted via Energy-Driven Sampling) uses an efficient hill-climbing algorithm to optimize the superpixels' energy function that is based on color histograms and a boundary term, producing smooth boundaries</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_algorithm->setText(QCoreApplication::translate("MainWindow", "Algorithm", nullptr));
#if QT_CONFIG(whatsthis)
        frame_slic->setWhatsThis(QCoreApplication::translate("MainWindow", "Parameters of current algorithm", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_region_size->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Average superpixel size measured in pixels</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_region_size->setText(QCoreApplication::translate("MainWindow", "Region size", nullptr));
#if QT_CONFIG(tooltip)
        horizontalSlider_iterations->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        horizontalSlider_iterations->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Higher number improves the result: the algorithms starts from a grid of superpixels and then refines the boundaries by proposing updates of edges boundaries</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        horizontalSlider_region_size->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        horizontalSlider_region_size->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Average superpixel size measured in pixels</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        horizontalSlider_ruler->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        horizontalSlider_ruler->setWhatsThis(QCoreApplication::translate("MainWindow", "Enforcement of superpixel smoothness factor of superpixel", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_connectivity->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Minimum element size in percents that should be absorbed into a bigger superpixel.</p><p>The function merges components that are too small, assigning the previously found adjacent label to this component</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_connectivity->setText(QCoreApplication::translate("MainWindow", "Min size", nullptr));
#if QT_CONFIG(whatsthis)
        label_iterations->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Higher number improves the result: the algorithms starts from a grid of superpixels and then refines the boundaries by proposing updates of edges boundaries</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_iterations->setText(QCoreApplication::translate("MainWindow", "Iterations", nullptr));
#if QT_CONFIG(tooltip)
        horizontalSlider_connectivity->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        horizontalSlider_connectivity->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Minimum element size in percents that should be absorbed into a bigger superpixel.</p><p>The function merges components that are too small, assigning the previously found adjacent label to this component</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_value_ruler->setWhatsThis(QCoreApplication::translate("MainWindow", "Enforcement of superpixel smoothness factor of superpixel", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_value_ruler->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
#if QT_CONFIG(whatsthis)
        label_value_region_size->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Average superpixel size measured in pixels</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_value_region_size->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
#if QT_CONFIG(whatsthis)
        label_ruler->setWhatsThis(QCoreApplication::translate("MainWindow", "Enforcement of superpixel smoothness factor of superpixel", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_ruler->setText(QCoreApplication::translate("MainWindow", "Ruler", nullptr));
#if QT_CONFIG(whatsthis)
        label_value_connectivity_percent->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Minimum element size in percents that should be absorbed into a bigger superpixel.</p><p>The function merges components that are too small, assigning the previously found adjacent label to this component</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_value_connectivity_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
#if QT_CONFIG(whatsthis)
        label_value_connectivity->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Minimum element size in percents that should be absorbed into a bigger superpixel.</p><p>The function merges components that are too small, assigning the previously found adjacent label to this component</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_value_connectivity->setText(QCoreApplication::translate("MainWindow", "25", nullptr));
#if QT_CONFIG(whatsthis)
        label_value_iterations->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Higher number improves the result: the algorithms starts from a grid of superpixels and then refines the boundaries by proposing updates of edges boundaries</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_value_iterations->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
#if QT_CONFIG(tooltip)
        doubleSpinBox_ratio->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        doubleSpinBox_ratio->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Enforcement of superpixel compactness factor</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_ratio->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Enforcement of superpixel compactness factor</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_ratio->setText(QCoreApplication::translate("MainWindow", "Ratio", nullptr));
#if QT_CONFIG(whatsthis)
        label_value_num_histogram_bins->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Number of histogram bins</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_value_num_histogram_bins->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(whatsthis)
        label_prior->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Enable 3x3 shape smoothing term if &gt;0.</p><p>A larger value leads to smoother shapes.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_prior->setText(QCoreApplication::translate("MainWindow", "Prior", nullptr));
#if QT_CONFIG(tooltip)
        horizontalSlider_prior->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        horizontalSlider_prior->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Enable 3x3 shape smoothing term if &gt;0.</p><p>A larger value leads to smoother shapes.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_value_num_levels->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Number of block levels. The more levels, the more accurate is the segmentation, but needs more memory and CPU time</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_value_num_levels->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(whatsthis)
        label_value_prior->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Enable 3x3 shape smoothing term if &gt;0.</p><p>A larger value leads to smoother shapes.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_value_prior->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(tooltip)
        horizontalSlider_num_levels->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        horizontalSlider_num_levels->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Number of block levels. The more levels, the more accurate is the segmentation, but needs more memory and CPU time</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_superpixels->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Desired number of superpixels. Note that the actual number may be smaller due to restrictions (depending on the image size and num_levels)</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_superpixels->setText(QCoreApplication::translate("MainWindow", "Superpixels", nullptr));
#if QT_CONFIG(whatsthis)
        label_value_num_superpixels->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Desired number of superpixels. Note that the actual number may be smaller due to restrictions (depending on the image size and num_levels)</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_value_num_superpixels->setText(QCoreApplication::translate("MainWindow", "1000", nullptr));
#if QT_CONFIG(tooltip)
        horizontalSlider_num_superpixels->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        horizontalSlider_num_superpixels->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Desired number of superpixels. Note that the actual number may be smaller due to restrictions (depending on the image size and num_levels)</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_levels->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Number of block levels. The more levels, the more accurate is the segmentation, but needs more memory and CPU time</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_levels->setText(QCoreApplication::translate("MainWindow", "Levels", nullptr));
#if QT_CONFIG(whatsthis)
        label_histograms->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Number of histogram bins</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_histograms->setText(QCoreApplication::translate("MainWindow", "Histograms", nullptr));
#if QT_CONFIG(tooltip)
        horizontalSlider_num_histogram_bins->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        horizontalSlider_num_histogram_bins->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Number of histogram bins</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        checkBox_double_step->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        checkBox_double_step->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>If set, iterate each block level twice for higher accuracy</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBox_double_step->setText(QCoreApplication::translate("MainWindow", "Double step", nullptr));
#if QT_CONFIG(tooltip)
        button_save_conf->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        button_save_conf->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Save parameters to a XML file</p><p><br/>It saves the parameters from the Image and Segmentation tabs</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_save_conf->setText(QCoreApplication::translate("MainWindow", " Save conf", nullptr));
#if QT_CONFIG(tooltip)
        button_load_conf->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        button_load_conf->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Retrieve parameters from a previously saved XML file</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_load_conf->setText(QCoreApplication::translate("MainWindow", " Load conf", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_thick->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        checkBox_thick->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Ticked: the computed grid is thicker, otherwise the border of the cells is only one pixel wide</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBox_thick->setText(QCoreApplication::translate("MainWindow", "Thick lines", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_lab_colors->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        checkBox_lab_colors->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Convert the image to LAB colors space: often improves the results.</p><p>If not set, HSV color space will be used instead</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBox_lab_colors->setText(QCoreApplication::translate("MainWindow", "LAB colors", nullptr));
        Tabs->setTabText(Tabs->indexOf(tab_segmentation), QCoreApplication::translate("MainWindow", "Segmentation", nullptr));
#if QT_CONFIG(whatsthis)
        tab_labels->setWhatsThis(QCoreApplication::translate("MainWindow", "Manage labels", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        button_undo->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        button_undo->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Undo last action, even in &quot;new cell&quot; mode.</p><p>Caution, it will only work once!</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_undo->setText(QCoreApplication::translate("MainWindow", "UNDO", nullptr));
#if QT_CONFIG(tooltip)
        listWidget_labels->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        listWidget_labels->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>The labels are listed here, in alphabetical order.</p><p><br/></p><p>You can select several labels by holding down the &lt;CTRL&gt; key, then clicking with the mouse</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        frame_pick_colors->setWhatsThis(QCoreApplication::translate("MainWindow", "Label color picker", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        pushButton_color_red->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_red->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_brown->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_brown->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_orange->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_orange->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_yellow->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_yellow->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_color_pick->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_color_pick->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_pick->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_green->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_green->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_olive->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_olive->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_cyan->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_cyan->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_emerald->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_emerald->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_blue->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_blue->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_navy->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_navy->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_magenta->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_magenta->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_purple->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_purple->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_lime->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_lime->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_laurel->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_laurel->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_malibu->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_malibu->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_violet->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_violet->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_rose->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_rose->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_color_azure->setWhatsThis(QCoreApplication::translate("MainWindow", "Color to use for the cells", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_color_azure->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_label_delete->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_label_delete->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Delete the selected label and all its colored cells in the mask.</p><p>If several labels are highlighted, the last selected will be considered</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_label_delete->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_label_add->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_label_add->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Add a new label with a default color.</p><p><br/></p><p>Don't forget to rename the new label (double-click on it), and to set a new color</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_label_add->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_label_hide->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_label_hide->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Hide the selected label.</p><p>Even if the cells become transparent in the mask, you can have them back by selecting a new color.</p><p>If several labels are highlighted, the last selected will be considered</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_label_hide->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_label_draw->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_label_draw->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Draw mode: add pixels to a new cell and also assign them to the current label. Useful if you want to complete a label, or want to redraw cells from scratch in a new label.</p><p>In this mode, you can draw over pixels you want to add to the current label.</p><p>You have to draw over the pixels you want to add:</p><p>* the cursor is now a cross, and all the other tabs and unwanted buttons are hidden until you apply the changes</p><p>* the white color is used for drawing (mask)</p><p>* other colors can be used, but only when you want to use the GrabCut algorithm - its button is on the right side panel that appears when the draw mode is activated</p><p>* click with the right and left mouse buttons to draw pixels: left for white, right for unset. You can maintain the click to draw several pixels in a free-style way</p><p>* choose the drawing thickness on the right side panel that appeared - you can hold down the C key to see the drawing circle - you can use the mouse buttons while doing this</"
                        "p><p>* the last set pixel can be the beginning of a line: press and hold the &lt;X&gt; key, then move the mouse. Release the &lt;X&gt; key, the line is drawn. The extremity of a new line becomes the next line origin. Click elsewhere with the mouse to set a new origin</p><p>* you can fill a closed area with the left (white) or right (unset) mouse button while holding down the &lt;CTRL&gt; key</p><p>* you can cancel the last action with the UNDO button (be careful, possible only once)</p><p>* finish by clicking again on the &quot;draw mode&quot; button to apply (or not) what you did. If you keep your changes, the pixels drawn in white will be added to a new cell, and also added to the current label, and the grid mask will be updated with the boundaries of what was drawn</p><p>* tip: try to only draw contigous areas, repeat the drawing process several times if needed</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_label_draw->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_label_join->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_label_join->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Join several labels.</p><p>Select the labels using the &lt;CTRL&gt; key, then press this button.</p><p>One of the selected labels becomes the new merged label. Its name will contain the orginal name + &quot; (joined) &quot;.</p><p>All the cells of the selected labels will get the merged label's color.</p><p>You can then rename thie joined label (double-click on it), and set a new color if you want.</p><p>Useful when you have defined a new cell, and want to integrate it to another label</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_label_join->setText(QString());
#if QT_CONFIG(whatsthis)
        label_color_icon->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Current label and used color to colorize the segmentation cells.</p><p>Click on the image:</p><p>* Left mouse button: set the cell color</p><p>* Right mouse button: delete (set to transparent)</p><p>* Drag the mouse while holding the mouse buttons to colorize several cells</p><p>* Use &lt;CTRL&gt; key + mouse click (left = color, right= delete) to fill a closed area. Be careful, one pixel missing and you have to use the Undo function! The fill is also stopped by already defined labels</p><p>* Use &lt;ALT&gt; key + left mouse button to select a label (or use the list on the left)</p><p>* Hold the middle button of the mouse or &lt;SPACE&gt; bar then move the mouse to navigate in the image when it is zoomed in</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_color_icon->setText(QString());
#if QT_CONFIG(tooltip)
        label_color->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label_color->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Current label and used color to colorize the segmentation cells.</p><p>Click on the image:</p><p>* Left mouse button: set the cell color</p><p>* Right mouse button: delete (set to transparent)</p><p>* Drag the mouse while holding the mouse buttons to colorize several cells</p><p>* Use &lt;CTRL&gt; key + mouse click (left = color, right= delete) to fill a closed area. Be careful, one pixel missing and you have to use the Undo function! The fill is also stopped by already defined labels</p><p>* Use &lt;ALT&gt; key + left mouse button to select a label (or use the list on the left)</p><p>* Hold the middle button of the mouse or &lt;SPACE&gt; bar then move the mouse to navigate in the image when it is zoomed in</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_color->setText(QCoreApplication::translate("MainWindow", "Label", nullptr));
        Tabs->setTabText(Tabs->indexOf(tab_labels), QCoreApplication::translate("MainWindow", "Labels", nullptr));
#if QT_CONFIG(tooltip)
        label_thumbnail->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label_thumbnail->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Image to process.</p><p>Click on it to set the viewport's center</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_thumbnail->setText(QCoreApplication::translate("MainWindow", "Image", nullptr));
#if QT_CONFIG(whatsthis)
        frame_zoom->setWhatsThis(QCoreApplication::translate("MainWindow", "This panel controls the zoom level of the image", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        pushButton_zoom_plus->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_zoom_plus->setWhatsThis(QCoreApplication::translate("MainWindow", "Zoom in", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_zoom_plus->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_zoom_100->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_zoom_100->setWhatsThis(QCoreApplication::translate("MainWindow", "1:1 zoom level", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_zoom_100->setText(QCoreApplication::translate("MainWindow", "1:1", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_zoom_minus->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_zoom_minus->setWhatsThis(QCoreApplication::translate("MainWindow", "Zoom out", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_zoom_minus->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_zoom_fit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_zoom_fit->setWhatsThis(QCoreApplication::translate("MainWindow", "Fit the image to the viewport", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_zoom_fit->setText(QCoreApplication::translate("MainWindow", "FIT", nullptr));
#if QT_CONFIG(tooltip)
        label_zoom->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label_zoom->setWhatsThis(QCoreApplication::translate("MainWindow", "Zoom level", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_zoom->setText(QCoreApplication::translate("MainWindow", "100%", nullptr));
#if QT_CONFIG(whatsthis)
        button_quit->setWhatsThis(QCoreApplication::translate("MainWindow", "This button has \"Quit\" on it, try it!", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_quit->setText(QCoreApplication::translate("MainWindow", " QUIT", nullptr));
#if QT_CONFIG(whatsthis)
        frame_draw->setWhatsThis(QCoreApplication::translate("MainWindow", "This panel only appears when you draw a custom label area", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        label_draw_size->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label_draw_size->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Drawing thickness</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_draw_size->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        horizontalSlider_draw_size->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        horizontalSlider_draw_size->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Drawing thickness</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        radioButton_draw_mask->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        radioButton_draw_mask->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Use this color to draw the new cell</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        radioButton_draw_mask->setText(QCoreApplication::translate("MainWindow", "Mas&k", nullptr));
#if QT_CONFIG(tooltip)
        radioButton_draw_reject->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        radioButton_draw_reject->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Use this color to draw the GrabCut &quot;reject&quot; zones</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        radioButton_draw_reject->setText(QCoreApplication::translate("MainWindow", "Re&ject", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_draw_clear->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_draw_clear->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Clear all you have drawn</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_draw_clear->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_draw_grabcut->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_draw_grabcut->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Apply the GrabCut algorithm with this button.</p><p><br/></p><p>While creating a new cell, you can use the GrabCut algorithm to select a zone.</p><p>GrabCut needs these colors to work:</p><p>- white: what you want to &quot;keep&quot;</p><p>- red: what you want to &quot;reject&quot;</p><p>- blue: let the algorithm decide - &quot;maybe&quot;</p><p>- what was not drawn will be set to &quot;reject&quot;</p><p><br/></p><p>To draw:</p><p>- choose which &quot;color&quot; you want to use (mask, reject, maybe)</p><p>- choose the thickness (0 to 20 pixels)</p><p>- left mouse button: draw</p><p>- right mouse button: erase</p><p>- CTRL key + mouse button: floodfill to draw or erase</p><p>- hold down X key to draw a line from the last drawn dot - release the key to set it</p><p>- hold down C key to see the drawing circle - you can use the mouse buttons while doing this </p><p><br/>When you are finished creating the cell, only the white drawings will be accounted for.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_draw_grabcut->setText(QString());
#if QT_CONFIG(tooltip)
        radioButton_draw_maybe->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        radioButton_draw_maybe->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Use this color to draw the GrabCut &quot;maybe&quot; zones</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        radioButton_draw_maybe->setText(QCoreApplication::translate("MainWindow", "&Maybe", nullptr));
#if QT_CONFIG(tooltip)
        label_draw_size_icon->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label_draw_size_icon->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Drawing thickness</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_draw_size_icon->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_draw_grabcut_iteration->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_draw_grabcut_iteration->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Refine the previous GrabCut execution.</p><p>If you complete the drawing, don't use this button again: use the GrabCut button one more time</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_draw_grabcut_iteration->setText(QString());
#if QT_CONFIG(tooltip)
        button_save_session->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        button_save_session->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Save the current session: image, mask, grid and labels (cells).</p><p>The parameters won't be saved, do this separately.</p><p>Useful if you want to finish a work later: retrieving a session will allow you to continue where you left it, without recomputing.</p><p>Image, mask, grid are saved to PNG image format.</p><p>Labels and parameters are saved in openCV XML/YAML format</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        button_save_session->setText(QCoreApplication::translate("MainWindow", "Save session", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_psd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_psd->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Save to a single Photoshop image (.psd) the processed image as &quot;background&quot;, and the labels masks as transparent &quot;layers&quot;. </p><p>    * Each layer is named using the label name</p><p>    * To edit a layer in Photoshop, you have to &quot;unlock&quot; it first</p><p>    * The saved PSD image is not compatible with Photoshop 7 and under, but is entirely compatible with The Gimp </p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_psd->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_tif->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_tif->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Save to a single Tiff image (.tif) the processed image and the labels masks as &quot;pages&quot;. </p><p>    * If you try to open the saved Tiff image with Photoshop (and most image tools), only the processed image will appear. Only a few image tools are able to read a multi-page Tiff image (e.g. XnViewMP)</p><p>    * Lyckily, an open-source solution exists: open the image file in &quot;The Gimp&quot;, select all pages as layers. Unfortunaltely, you will lose the labels names, the Tiff format does'nt enable this function</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_tif->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
