
extern zend_class_entry *phalcon_mvc_urlinterface_ce;

ZEPHIR_INIT_CLASS(Phalcon_Mvc_UrlInterface);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_mvc_urlinterface_get, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_mvc_urlinterface_get, 0, 0, IS_STRING, NULL, 0)
#endif
	ZEND_ARG_INFO(0, uri)
	ZEND_ARG_INFO(0, args)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, local, _IS_BOOL, 1)
#else
	ZEND_ARG_INFO(0, local)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_mvc_urlinterface_getbasepath, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_mvc_urlinterface_getbasepath, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_mvc_urlinterface_getbaseuri, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_mvc_urlinterface_getbaseuri, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_mvc_urlinterface_setbasepath, 0, 1, Phalcon\\Mvc\\UrlInterface, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_mvc_urlinterface_setbasepath, 0, 1, IS_OBJECT, "Phalcon\\Mvc\\UrlInterface", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, basePath, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, basePath)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_mvc_urlinterface_setbaseuri, 0, 1, Phalcon\\Mvc\\UrlInterface, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_mvc_urlinterface_setbaseuri, 0, 1, IS_OBJECT, "Phalcon\\Mvc\\UrlInterface", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, baseUri, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, baseUri)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_mvc_urlinterface_path, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_mvc_urlinterface_path, 0, 0, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
#else
	ZEND_ARG_INFO(0, path)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_mvc_urlinterface_method_entry) {
	PHP_ABSTRACT_ME(Phalcon_Mvc_UrlInterface, get, arginfo_phalcon_mvc_urlinterface_get)
	PHP_ABSTRACT_ME(Phalcon_Mvc_UrlInterface, getBasePath, arginfo_phalcon_mvc_urlinterface_getbasepath)
	PHP_ABSTRACT_ME(Phalcon_Mvc_UrlInterface, getBaseUri, arginfo_phalcon_mvc_urlinterface_getbaseuri)
	PHP_ABSTRACT_ME(Phalcon_Mvc_UrlInterface, setBasePath, arginfo_phalcon_mvc_urlinterface_setbasepath)
	PHP_ABSTRACT_ME(Phalcon_Mvc_UrlInterface, setBaseUri, arginfo_phalcon_mvc_urlinterface_setbaseuri)
	PHP_ABSTRACT_ME(Phalcon_Mvc_UrlInterface, path, arginfo_phalcon_mvc_urlinterface_path)
	PHP_FE_END
};
