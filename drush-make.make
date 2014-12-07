; makefile for benjaminrasmussen.net

; define core version and drush make compatibility

core = 7.x
api = 2

; contrib modules
; Modules

projects[admin_menu][type] = "module"
projects[admin_menu][subdir] = "contrib"
projects[admin_menu][download][type] = "git"
projects[admin_menu][download][url] = "http://git.drupal.org/project/admin_menu.git"
projects[admin_menu][download][tag] = "7.x-3.0-rc4"

projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"
projects[ctools][download][type] = "git"
projects[ctools][download][url] = "http://git.drupal.org/project/ctools.git"
projects[ctools][download][tag] = "7.x-1.5"

projects[context][type] = "module"
projects[context][subdir] = "contrib"
projects[context][download][type] = "git"
projects[context][download][url] = "http://git.drupal.org/project/context.git"
projects[context][download][tag] = "7.x-3.3"

projects[devel][type] = "module"
projects[devel][subdir] = "contrib"
projects[devel][download][type] = "git"
projects[devel][download][url] = "http://git.drupal.org/project/devel.git"
projects[devel][download][tag] = "7.x-1.5"

projects[entity][type] = "module"
projects[entity][subdir] = "contrib"
projects[entity][download][type] = "git"
projects[entity][download][url] = "http://git.drupal.org/project/entity.git"
projects[entity][download][tag] = "7.x-1.5"

projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[features][download][type] = "git"
projects[features][download][url] = "http://git.drupal.org/project/features.git"
projects[features][download][tag] = "7.x-2.2"

projects[i18n][type] = "module"
projects[i18n][subdir] = "contrib"
projects[i18n][download][type] = "git"
projects[i18n][download][url] = "http://git.drupal.org/project/i18n.git"
projects[i18n][download][tag] = "7.x-1.11"

projects[panels][type] = "module"
projects[panels][subdir] = "contrib"
projects[panels][download][type] = "git"
projects[panels][download][url] = "http://git.drupal.org/project/panels.git"
projects[panels][download][tag] = "7.x-3.4"

projects[variable][type] = "module"
projects[variable][subdir] = "contrib"
projects[variable][download][type] = "git"
projects[variable][download][url] = "http://git.drupal.org/project/variable.git"
projects[variable][download][tag] = "7.x-2.5"

projects[views][type] = "module"
projects[views][subdir] = "contrib"
projects[views][download][type] = "git"
projects[views][download][url] = "http://git.drupal.org/project/views.git"
projects[views][download][tag] = "7.x-3.8"

projects[search_api][type] = "module"
projects[search_api][subdir] = "contrib"
projects[search_api][download][type] = "git"
projects[search_api][download][url] = "http://git.drupal.org/project/search_api.git"
projects[search_api][download][tag] = "7.x-1.13"

projects[search_api_db][type] = "module"
projects[search_api_db][subdir] = "contrib"
projects[search_api_db][download][type] = "git"
projects[search_api_db][download][url] = "http://git.drupal.org/project/search_api_db.git"
projects[search_api_db][download][tag] = "7.x-1.4"

; themes and related

projects[mothership][download][url] = http://git.drupal.org/project/mothership.git
projects[mothership][download][tag] = 7.x-2.10
projects[mothership][subdir] = contrib
projects[mothership][download][type] = git

; libraries

; libraries[ckeditor][destination] = "libraries"
; libraries[ckeditor][directory_name] = "ckeditor"
; libraries[ckeditor][download][type]= "get"
;libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6.1/ckeditor_3.6.6.1.tar.gz"
;libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.3.3/ckeditor_4.3.3_standard.zip"
; libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.3/ckeditor_4.3_full.zip"
