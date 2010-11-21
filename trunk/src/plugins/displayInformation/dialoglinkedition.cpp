#include "dialoglinkedition.h"
#include "ui_dialoglinkedition.h"
#include <QFileInfo>

DialogLinkEdition::DialogLinkEdition(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLinkEdition)
{
    ui->setupUi(this);
    //Information extracted from Linux /etc/mimetype
    mimeType["ez"]="application/andrew-inset";
    mimeType["anx"]="application/annodex";
    mimeType["atom"]="application/atom+xml";
    mimeType["atomcat"]="application/atomcat+xml";
    mimeType["atomsrv"]="application/atomserv+xml";
    mimeType["lin"]="application/bbolin";
    mimeType["cap"]="application/cap";
    mimeType["cu"]="application/cu-seeme";
    mimeType["davmount"]="application/davmount+xml";
    mimeType["tsp"]="application/dsptype";
    mimeType["es"]="application/ecmascript";
    mimeType["spl"]="application/futuresplash";
    mimeType["hta"]="application/hta";
    mimeType["jar"]="application/java-archive";
    mimeType["ser"]="application/java-serialized-object";
    mimeType["class"]="application/java-vm";
    mimeType["js"]="application/javascript";
    mimeType["m3g"]="application/m3g";
    mimeType["hqx"]="application/mac-binhex40";
    mimeType["cpt"]="application/mac-compactpro";
    mimeType["nb"]="application/mathematica";
    mimeType["mdb"]="application/msaccess";
    mimeType["doc"]="application/msword";
    mimeType["mxf"]="application/mxf";
    mimeType["bin"]="application/octet-stream";
    mimeType["oda"]="application/oda";
    mimeType["ogx"]="application/ogg";
    mimeType["pdf"]="application/pdf";
    mimeType["key"]="application/pgp-keys";
    mimeType["pgp"]="application/pgp-signature";
    mimeType["prf"]="application/pics-rules";
    mimeType["ps"]="application/postscript";
    mimeType["rar"]="application/rar";
    mimeType["rdf"]="application/rdf+xml";
    mimeType["rss"]="application/rss+xml";
    mimeType["rtf"]="application/rtf";
    mimeType["smi"]="application/smil";
    mimeType["xhtml"]="application/xhtml+xml";
    mimeType["xml"]="application/xml";
    mimeType["xspf"]="application/xspf+xml";
    mimeType["zip"]="application/zip";
    mimeType["apk"]="application/vnd.android.package-archive";
    mimeType["cdy"]="application/vnd.cinderella";
    mimeType["kml"]="application/vnd.google-earth.kml+xml";
    mimeType["kmz"]="application/vnd.google-earth.kmz";
    mimeType["xul"]="application/vnd.mozilla.xul+xml";
    mimeType["xls"]="application/vnd.ms-excel";
    mimeType["cat"]="application/vnd.ms-pki.seccat";
    mimeType["stl"]="application/vnd.ms-pki.stl";
    mimeType["ppt"]="application/vnd.ms-powerpoint";
    mimeType["odc"]="application/vnd.oasis.opendocument.chart";
    mimeType["odb"]="application/vnd.oasis.opendocument.database";
    mimeType["odf"]="application/vnd.oasis.opendocument.formula";
    mimeType["odg"]="application/vnd.oasis.opendocument.graphics";
    mimeType["otg"]="application/vnd.oasis.opendocument.graphics-template";
    mimeType["odi"]="application/vnd.oasis.opendocument.image";
    mimeType["odp"]="application/vnd.oasis.opendocument.presentation";
    mimeType["otp"]="application/vnd.oasis.opendocument.presentation-template";
    mimeType["ods"]="application/vnd.oasis.opendocument.spreadsheet";
    mimeType["ots"]="application/vnd.oasis.opendocument.spreadsheet-template";
    mimeType["odt"]="application/vnd.oasis.opendocument.text";
    mimeType["odm"]="application/vnd.oasis.opendocument.text-master";
    mimeType["ott"]="application/vnd.oasis.opendocument.text-template";
    mimeType["oth"]="application/vnd.oasis.opendocument.text-web";
    mimeType["xlsx"]="application/vnd.openxmlformats-officedocument.spreadsheetml.sheet";
    mimeType["xltx"]="application/vnd.openxmlformats-officedocument.spreadsheetml.template";
    mimeType["pptx"]="application/vnd.openxmlformats-officedocument.presentationml.presentation";
    mimeType["ppsx"]="application/vnd.openxmlformats-officedocument.presentationml.slideshow";
    mimeType["potx"]="application/vnd.openxmlformats-officedocument.presentationml.template";
    mimeType["docx"]="application/vnd.openxmlformats-officedocument.wordprocessingml.document";
    mimeType["dotx"]="application/vnd.openxmlformats-officedocument.wordprocessingml.template";
    mimeType["cod"]="application/vnd.rim.cod";
    mimeType["mmf"]="application/vnd.smaf";
    mimeType["sdc"]="application/vnd.stardivision.calc";
    mimeType["sds"]="application/vnd.stardivision.chart";
    mimeType["sda"]="application/vnd.stardivision.draw";
    mimeType["sdd"]="application/vnd.stardivision.impress";
    mimeType["sdf"]="application/vnd.stardivision.math";
    mimeType["sdw"]="application/vnd.stardivision.writer";
    mimeType["sgl"]="application/vnd.stardivision.writer-global";
    mimeType["sxc"]="application/vnd.sun.xml.calc";
    mimeType["stc"]="application/vnd.sun.xml.calc.template";
    mimeType["sxd"]="application/vnd.sun.xml.draw";
    mimeType["std"]="application/vnd.sun.xml.draw.template";
    mimeType["sxi"]="application/vnd.sun.xml.impress";
    mimeType["sti"]="application/vnd.sun.xml.impress.template";
    mimeType["sxm"]="application/vnd.sun.xml.math";
    mimeType["sxw"]="application/vnd.sun.xml.writer";
    mimeType["sxg"]="application/vnd.sun.xml.writer.global";
    mimeType["stw"]="application/vnd.sun.xml.writer.template";
    mimeType["sis"]="application/vnd.symbian.install";
    mimeType["vsd"]="application/vnd.visio";
    mimeType["wbxml"]="application/vnd.wap.wbxml";
    mimeType["wmlc"]="application/vnd.wap.wmlc";
    mimeType["wmlsc"]="application/vnd.wap.wmlscriptc";
    mimeType["wpd"]="application/vnd.wordperfect";
    mimeType["wp5"]="application/vnd.wordperfect5.1";
    mimeType["wk"]="application/x-123";
    mimeType["7z"]="application/x-7z-compressed";
    mimeType["abw"]="application/x-abiword";
    mimeType["dmg"]="application/x-apple-diskimage";
    mimeType["bcpio"]="application/x-bcpio";
    mimeType["torrent"]="application/x-bittorrent";
    mimeType["cab"]="application/x-cab";
    mimeType["cbr"]="application/x-cbr";
    mimeType["cbz"]="application/x-cbz";
    mimeType["cdf"]="application/x-cdf";
    mimeType["vcd"]="application/x-cdlink";
    mimeType["pgn"]="application/x-chess-pgn";
    mimeType["cpio"]="application/x-cpio";
    mimeType["csh"]="application/x-csh";
    mimeType["deb"]="application/x-debian-package";
    mimeType["dcr"]="application/x-director";
    mimeType["dms"]="application/x-dms";
    mimeType["wad"]="application/x-doom";
    mimeType["dvi"]="application/x-dvi";
    mimeType["rhtml"]="application/x-httpd-eruby";
    mimeType["pfa"]="application/x-font";
    mimeType["mm"]="application/x-freemind";
    mimeType["spl"]="application/x-futuresplash";
    mimeType["gnumeric"]="application/x-gnumeric";
    mimeType["sgf"]="application/x-go-sgf";
    mimeType["gcf"]="application/x-graphing-calculator";
    mimeType["gtar"]="application/x-gtar";
    mimeType["hdf"]="application/x-hdf";
    mimeType["phtml"]="application/x-httpd-php";
    mimeType["phps"]="application/x-httpd-php-source";
    mimeType["php3"]="application/x-httpd-php3";
    mimeType["php3p"]="application/x-httpd-php3-preprocessed";
    mimeType["php4"]="application/x-httpd-php4";
    mimeType["php5"]="application/x-httpd-php5";
    mimeType["ica"]="application/x-ica";
    mimeType["info"]="application/x-info";
    mimeType["ins"]="application/x-internet-signup";
    mimeType["iii"]="application/x-iphone";
    mimeType["iso"]="application/x-iso9660-image";
    mimeType["jam"]="application/x-jam";
    mimeType["jnlp"]="application/x-java-jnlp-file";
    mimeType["jmz"]="application/x-jmol";
    mimeType["chrt"]="application/x-kchart";
    mimeType["kil"]="application/x-killustrator";
    mimeType["skp"]="application/x-koan";
    mimeType["kpr"]="application/x-kpresenter";
    mimeType["ksp"]="application/x-kspread";
    mimeType["kwd"]="application/x-kword";
    mimeType["latex"]="application/x-latex";
    mimeType["lha"]="application/x-lha";
    mimeType["lyx"]="application/x-lyx";
    mimeType["lzh"]="application/x-lzh";
    mimeType["lzx"]="application/x-lzx";
    mimeType["frm"]="application/x-maker";
    mimeType["mif"]="application/x-mif";
    mimeType["wmd"]="application/x-ms-wmd";
    mimeType["wmz"]="application/x-ms-wmz";
    mimeType["com"]="application/x-msdos-program";
    mimeType["msi"]="application/x-msi";
    mimeType["nc"]="application/x-netcdf";
    mimeType["pac"]="application/x-ns-proxy-autoconfig";
    mimeType["nwc"]="application/x-nwc";
    mimeType["o"]="application/x-object";
    mimeType["oza"]="application/x-oz-application";
    mimeType["p7r"]="application/x-pkcs7-certreqresp";
    mimeType["crl"]="application/x-pkcs7-crl";
    mimeType["pyc"]="application/x-python-code";
    mimeType["qgs"]="application/x-qgis";
    mimeType["qtl"]="application/x-quicktimeplayer";
    mimeType["rpm"]="application/x-redhat-package-manager";
    mimeType["rb"]="application/x-ruby";
    mimeType["sh"]="application/x-sh";
    mimeType["shar"]="application/x-shar";
    mimeType["swf"]="application/x-shockwave-flash";
    mimeType["scr"]="application/x-silverlight";
    mimeType["sit"]="application/x-stuffit";
    mimeType["sv4cpio"]="application/x-sv4cpio";
    mimeType["sv4crc"]="application/x-sv4crc";
    mimeType["tar"]="application/x-tar";
    mimeType["tcl"]="application/x-tcl";
    mimeType["gf"]="application/x-tex-gf";
    mimeType["pk"]="application/x-tex-pk";
    mimeType["texinfo"]="application/x-texinfo";
    mimeType["~"]="application/x-trash";
    mimeType["t"]="application/x-troff";
    mimeType["man"]="application/x-troff-man";
    mimeType["me"]="application/x-troff-me";
    mimeType["ms"]="application/x-troff-ms";
    mimeType["ustar"]="application/x-ustar";
    mimeType["src"]="application/x-wais-source";
    mimeType["wz"]="application/x-wingz";
    mimeType["crt"]="application/x-x509-ca-cert";
    mimeType["xcf"]="application/x-xcf";
    mimeType["fig"]="application/x-xfig";
    mimeType["xpi"]="application/x-xpinstall";
    mimeType["amr"]="audio/amr";
    mimeType["awb"]="audio/amr-wb";
    mimeType["amr"]="audio/amr";
    mimeType["awb"]="audio/amr-wb";
    mimeType["axa"]="audio/annodex";
    mimeType["au"]="audio/basic";
    mimeType["flac"]="audio/flac";
    mimeType["mid"]="audio/midi";
    mimeType["mpga"]="audio/mpeg";
    mimeType["m3u"]="audio/mpegurl";
    mimeType["oga"]="audio/ogg";
    mimeType["sid"]="audio/prs.sid";
    mimeType["aif"]="audio/x-aiff";
    mimeType["gsm"]="audio/x-gsm";
    mimeType["m3u"]="audio/x-mpegurl";
    mimeType["wma"]="audio/x-ms-wma";
    mimeType["wax"]="audio/x-ms-wax";
    mimeType["ra"]="audio/x-pn-realaudio";
    mimeType["ra"]="audio/x-realaudio";
    mimeType["pls"]="audio/x-scpls";
    mimeType["sd2"]="audio/x-sd2";
    mimeType["wav"]="audio/x-wav";
    mimeType["alc"]="chemical/x-alchemy";
    mimeType["cac"]="chemical/x-cache";
    mimeType["csf"]="chemical/x-cache-csf";
    mimeType["cbin"]="chemical/x-cactvs-binary";
    mimeType["cdx"]="chemical/x-cdx";
    mimeType["cer"]="chemical/x-cerius";
    mimeType["c3d"]="chemical/x-chem3d";
    mimeType["chm"]="chemical/x-chemdraw";
    mimeType["cif"]="chemical/x-cif";
    mimeType["cmdf"]="chemical/x-cmdf";
    mimeType["cml"]="chemical/x-cml";
    mimeType["cpa"]="chemical/x-compass";
    mimeType["bsd"]="chemical/x-crossfire";
    mimeType["csml"]="chemical/x-csml";
    mimeType["ctx"]="chemical/x-ctx";
    mimeType["cxf"]="chemical/x-cxf";
    mimeType["emb"]="chemical/x-embl-dl-nucleotide";
    mimeType["spc"]="chemical/x-galactic-spc";
    mimeType["inp"]="chemical/x-gamess-input";
    mimeType["fch"]="chemical/x-gaussian-checkpoint";
    mimeType["cub"]="chemical/x-gaussian-cube";
    mimeType["gau"]="chemical/x-gaussian-input";
    mimeType["gal"]="chemical/x-gaussian-log";
    mimeType["gcg"]="chemical/x-gcg8-sequence";
    mimeType["gen"]="chemical/x-genbank";
    mimeType["hin"]="chemical/x-hin";
    mimeType["istr"]="chemical/x-isostar";
    mimeType["jdx"]="chemical/x-jcamp-dx";
    mimeType["kin"]="chemical/x-kinemage";
    mimeType["mcm"]="chemical/x-macmolecule";
    mimeType["mmd"]="chemical/x-macromodel-input";
    mimeType["mol"]="chemical/x-mdl-molfile";
    mimeType["rd"]="chemical/x-mdl-rdfile";
    mimeType["rxn"]="chemical/x-mdl-rxnfile";
    mimeType["sd"]="chemical/x-mdl-sdfile";
    mimeType["tgf"]="chemical/x-mdl-tgf";
    mimeType["mcif"]="chemical/x-mmcif";
    mimeType["mol2"]="chemical/x-mol2";
    mimeType["b"]="chemical/x-molconn-Z";
    mimeType["gpt"]="chemical/x-mopac-graph";
    mimeType["mop"]="chemical/x-mopac-input";
    mimeType["moo"]="chemical/x-mopac-out";
    mimeType["mvb"]="chemical/x-mopac-vib";
    mimeType["asn"]="chemical/x-ncbi-asn1";
    mimeType["prt"]="chemical/x-ncbi-asn1-ascii";
    mimeType["val"]="chemical/x-ncbi-asn1-binary";
    mimeType["asn"]="chemical/x-ncbi-asn1-spec";
    mimeType["pdb"]="chemical/x-pdb";
    mimeType["ros"]="chemical/x-rosdal";
    mimeType["sw"]="chemical/x-swissprot";
    mimeType["vms"]="chemical/x-vamas-iso14976";
    mimeType["vmd"]="chemical/x-vmd";
    mimeType["xtel"]="chemical/x-xtel";
    mimeType["xyz"]="chemical/x-xyz";
    mimeType["gif"]="image/gif";
    mimeType["ief"]="image/ief";
    mimeType["jpeg"]="image/jpeg";
    mimeType["pcx"]="image/pcx";
    mimeType["png"]="image/png";
    mimeType["svg"]="image/svg+xml";
    mimeType["tiff"]="image/tiff";
    mimeType["djvu"]="image/vnd.djvu";
    mimeType["wbmp"]="image/vnd.wap.wbmp";
    mimeType["cr2"]="image/x-canon-cr2";
    mimeType["crw"]="image/x-canon-crw";
    mimeType["ras"]="image/x-cmu-raster";
    mimeType["cdr"]="image/x-coreldraw";
    mimeType["pat"]="image/x-coreldrawpattern";
    mimeType["cdt"]="image/x-coreldrawtemplate";
    mimeType["cpt"]="image/x-corelphotopaint";
    mimeType["erf"]="image/x-epson-erf";
    mimeType["ico"]="image/x-icon";
    mimeType["art"]="image/x-jg";
    mimeType["jng"]="image/x-jng";
    mimeType["bmp"]="image/x-ms-bmp";
    mimeType["nef"]="image/x-nikon-nef";
    mimeType["orf"]="image/x-olympus-orf";
    mimeType["psd"]="image/x-photoshop";
    mimeType["pnm"]="image/x-portable-anymap";
    mimeType["pbm"]="image/x-portable-bitmap";
    mimeType["pgm"]="image/x-portable-graymap";
    mimeType["ppm"]="image/x-portable-pixmap";
    mimeType["rgb"]="image/x-rgb";
    mimeType["xbm"]="image/x-xbitmap";
    mimeType["xpm"]="image/x-xpixmap";
    mimeType["xwd"]="image/x-xwindowdump";
    mimeType["eml"]="message/rfc822";
    mimeType["igs"]="model/iges";
    mimeType["msh"]="model/mesh";
    mimeType["wrl"]="model/vrml";
    mimeType["x3dv"]="model/x3d+vrml";
    mimeType["x3d"]="model/x3d+xml";
    mimeType["x3db"]="model/x3d+binary";
    mimeType["manifest"]="text/cache-manifest";
    mimeType["ics"]="text/calendar";
    mimeType["css"]="text/css";
    mimeType["csv"]="text/csv";
    mimeType["323"]="text/h323";
    mimeType["html"]="text/html";
    mimeType["uls"]="text/iuls";
    mimeType["mml"]="text/mathml";
    mimeType["asc"]="text/plain";
    mimeType["rtx"]="text/richtext";
    mimeType["sct"]="text/scriptlet";
    mimeType["tm"]="text/texmacs";
    mimeType["tsv"]="text/tab-separated-values";
    mimeType["jad"]="text/vnd.sun.j2me.app-descriptor";
    mimeType["wml"]="text/vnd.wap.wml";
    mimeType["wmls"]="text/vnd.wap.wmlscript";
    mimeType["bib"]="text/x-bibtex";
    mimeType["boo"]="text/x-boo";
    mimeType["h++"]="text/x-c++hdr";
    mimeType["c++"]="text/x-c++src";
    mimeType["h"]="text/x-chdr";
    mimeType["htc"]="text/x-component";
    mimeType["csh"]="text/x-csh";
    mimeType["c"]="text/x-csrc";
    mimeType["d"]="text/x-dsrc";
    mimeType["diff"]="text/x-diff";
    mimeType["hs"]="text/x-haskell";
    mimeType["java"]="text/x-java";
    mimeType["lhs"]="text/x-literate-haskell";
    mimeType["moc"]="text/x-moc";
    mimeType["p"]="text/x-pascal";
    mimeType["gcd"]="text/x-pcs-gcd";
    mimeType["pl"]="text/x-perl";
    mimeType["py"]="text/x-python";
    mimeType["scala"]="text/x-scala";
    mimeType["etx"]="text/x-setext";
    mimeType["sh"]="text/x-sh";
    mimeType["tcl"]="text/x-tcl";
    mimeType["tex"]="text/x-tex";
    mimeType["vcs"]="text/x-vcalendar";
    mimeType["vcf"]="text/x-vcard";
    mimeType["3gp"]="video/3gpp";
    mimeType["axv"]="video/annodex";
    mimeType["dl"]="video/dl";
    mimeType["dif"]="video/dv";
    mimeType["fli"]="video/fli";
    mimeType["gl"]="video/gl";
    mimeType["mpeg"]="video/mpeg";
    mimeType["mp4"]="video/mp4";
    mimeType["qt"]="video/quicktime";
    mimeType["ogv"]="video/ogg";
    mimeType["mxu"]="video/vnd.mpegurl";
    mimeType["flv"]="video/x-flv";
    mimeType["lsf"]="video/x-la-asf";
    mimeType["mng"]="video/x-mng";
    mimeType["asf"]="video/x-ms-asf";
    mimeType["wm"]="video/x-ms-wm";
    mimeType["wmv"]="video/x-ms-wmv";
    mimeType["wmx"]="video/x-ms-wmx";
    mimeType["wvx"]="video/x-ms-wvx";
    mimeType["avi"]="video/x-msvideo";
    mimeType["movie"]="video/x-sgi-movie";
    mimeType["mpv"]="video/x-matroska";
    mimeType["ice"]="x-conference/x-cooltalk";
    mimeType["sisx"]="x-epoc/x-sisx-app";
    mimeType["vrm"]="x-world/x-vrml";
}

DialogLinkEdition::~DialogLinkEdition()
{
    delete ui;
}

void DialogLinkEdition::init(QString text, QString url, QString mimetype)
{
    ui->lineEditText->setText(text);
    ui->lineEditURL->setText(url);
    ui->lineEditMimeType->setText(mimetype);
}

void DialogLinkEdition::on_buttonBox_accepted()
{
    text = ui->lineEditText->text();
    url = ui->lineEditURL->text();
    mimetype = ui->lineEditMimeType->text();
}

void DialogLinkEdition::on_toolButtonAutoCompleteMimeType_clicked()
{
    //Find mimetype based on extension
    QFileInfo fileinfo(ui->lineEditURL->text());
    QString extension = fileinfo.suffix();
    if (mimeType.contains(extension))
    {
       ui->lineEditMimeType->setText(mimeType[extension]);
    }
    else
    {
        ui->lineEditMimeType->setText("text/html");
    }
}