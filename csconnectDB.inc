<?php

$cfgDB_HOST = "localhost"; //�D���W�٩�ip��}

//�D���}��s�u��port
$cfgDB_USERNAME = "root";  //�n�J�D���b��
$cfgDB_PASSWORD = "hokkaidou";  //�n�J�D���K�X
$cfgDB_NAME = "csdb"; //��Ʈw�W��

//�إ߸�Ʈw�s�u
$link = mysql_connect($cfgDB_HOST, $cfgDB_USERNAME, $cfgDB_PASSWORD) or die("Could not connect MySQL");

//��ܸ�Ʈw
mysql_select_db($cfgDB_NAME, $link) or die("Could not select database");

//�����奿�`���
mysql_query("SET NAMES 'utf8'"); 

?>