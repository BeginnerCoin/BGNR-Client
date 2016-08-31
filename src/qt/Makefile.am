include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = beginnercoin-qt
noinst_LIBRARIES = libbeginnercoinqt.a
SUBDIRS = . $(BUILD_TEST_QT)
DIST_SUBDIRS = . test

# beginnercoin qt core #
QT_TS = \
  locale/beginnercoin_ach.ts \
  locale/beginnercoin_af_ZA.ts \
  locale/beginnercoin_ar.ts \
  locale/beginnercoin_be_BY.ts \
  locale/beginnercoin_bg.ts \
  locale/beginnercoin_bs.ts \
  locale/beginnercoin_ca_ES.ts \
  locale/beginnercoin_ca.ts \
  locale/beginnercoin_ca@valencia.ts \
  locale/beginnercoin_cmn.ts \
  locale/beginnercoin_cs.ts \
  locale/beginnercoin_cy.ts \
  locale/beginnercoin_da.ts \
  locale/beginnercoin_de.ts \
  locale/beginnercoin_el_GR.ts \
  locale/beginnercoin_en.ts \
  locale/beginnercoin_eo.ts \
  locale/beginnercoin_es_CL.ts \
  locale/beginnercoin_es_DO.ts \
  locale/beginnercoin_es_MX.ts \
  locale/beginnercoin_es.ts \
  locale/beginnercoin_es_UY.ts \
  locale/beginnercoin_et.ts \
  locale/beginnercoin_eu_ES.ts \
  locale/beginnercoin_fa_IR.ts \
  locale/beginnercoin_fa.ts \
  locale/beginnercoin_fi.ts \
  locale/beginnercoin_fr_CA.ts \
  locale/beginnercoin_fr.ts \
  locale/beginnercoin_gl.ts \
  locale/beginnercoin_gu_IN.ts \
  locale/beginnercoin_he.ts \
  locale/beginnercoin_hi_IN.ts \
  locale/beginnercoin_hr.ts \
  locale/beginnercoin_hu.ts \
  locale/beginnercoin_id_ID.ts \
  locale/beginnercoin_it.ts \
  locale/beginnercoin_ja.ts \
  locale/beginnercoin_ka.ts \
  locale/beginnercoin_kk_KZ.ts \
  locale/beginnercoin_ko_KR.ts \
  locale/beginnercoin_ky.ts \
  locale/beginnercoin_la.ts \
  locale/beginnercoin_lt.ts \
  locale/beginnercoin_lv_LV.ts \
  locale/beginnercoin_mn.ts \
  locale/beginnercoin_ms_MY.ts \
  locale/beginnercoin_nb.ts \
  locale/beginnercoin_nl.ts \
  locale/beginnercoin_pam.ts \
  locale/beginnercoin_pl.ts \
  locale/beginnercoin_pt_BR.ts \
  locale/beginnercoin_pt_PT.ts \
  locale/beginnercoin_ro_RO.ts \
  locale/beginnercoin_ru.ts \
  locale/beginnercoin_sah.ts \
  locale/beginnercoin_sk.ts \
  locale/beginnercoin_sl_SI.ts \
  locale/beginnercoin_sq.ts \
  locale/beginnercoin_sr.ts \
  locale/beginnercoin_sv.ts \
  locale/beginnercoin_th_TH.ts \
  locale/beginnercoin_tr.ts \
  locale/beginnercoin_uk.ts \
  locale/beginnercoin_ur_PK.ts \
  locale/beginnercoin_uz@Cyrl.ts \
  locale/beginnercoin_vi.ts \
  locale/beginnercoin_vi_VN.ts \
  locale/beginnercoin_zh_CN.ts \
  locale/beginnercoin_zh_HK.ts \
  locale/beginnercoin_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_beginnercoinaddressvalidator.cpp \
  moc_beginnercoinamountfield.cpp \
  moc_beginnercoingui.cpp \
  moc_beginnercoinunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp

BEGINNERCOIN_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  beginnercoin.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_beginnercoin.cpp
QT_QRC = beginnercoin.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

BEGINNERCOIN_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  beginnercoinaddressvalidator.h \
  beginnercoinamountfield.h \
  beginnercoingui.h \
  beginnercoinunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h \
  winshutdownmonitor.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/beginnercoin.ico \
  res/icons/beginnercoin.png \
  res/icons/beginnercoin_testnet.ico \
  res/icons/beginnercoin_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

BEGINNERCOIN_QT_CPP = \
  beginnercoin.cpp \
  beginnercoinaddressvalidator.cpp \
  beginnercoinamountfield.cpp \
  beginnercoingui.cpp \
  beginnercoinunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp \
  winshutdownmonitor.cpp

if ENABLE_WALLET
BEGINNERCOIN_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  signverifymessagedialog.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

BEGINNERCOIN_RC = res/beginnercoin-qt-res.rc

libbeginnercoinqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libbeginnercoinqt_a_SOURCES = $(BEGINNERCOIN_QT_CPP) $(BEGINNERCOIN_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_libbeginnercoinqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libbeginnercoinqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# beginnercoin-qt binary #
beginnercoin_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
beginnercoin_qt_SOURCES = beginnercoin.cpp
if TARGET_DARWIN
  beginnercoin_qt_SOURCES += $(BEGINNERCOIN_MM)
endif
if TARGET_WINDOWS
  beginnercoin_qt_SOURCES += $(BEGINNERCOIN_RC)
endif
beginnercoin_qt_LDADD = libbeginnercoinqt.a $(LIBBEGINNERCOIN_SERVER)
if ENABLE_WALLET
beginnercoin_qt_LDADD += $(LIBBEGINNERCOIN_WALLET)
endif
beginnercoin_qt_LDADD += $(LIBBEGINNERCOIN_CLI) $(LIBBEGINNERCOIN_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
beginnercoin_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

beginnercoinstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/beginnercoinstrings.cpp

translate: beginnercoinstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(BEGINNERCOIN_QT_CPP) $(BEGINNERCOIN_QT_H) $(BEGINNERCOIN_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/beginnercoin_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name beginnercoin -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -e '/^\*\*.*Created:/d' $@ > $@.n && mv $@{.n,}
	$(SED) -e '/^\*\*.*by:/d' $@  > $@.n && mv $@{.n,}

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
