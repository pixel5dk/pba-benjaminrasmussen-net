
BACKUP_DIR=/vagrant/drushdumps
NOW=$(shell date +%Y-%m-%d_%H-%M)
# DOMAIN=benjaminrasmussen.net
DB_NAME=d7_benjaminrasmussen
ADMIN_USER=root
ADMIN_PASSWORD=root
DRUSH_MAKEFILE=drush-make.make
INDEXES=default_node_index

default:

clean-contrib:
	rm -rf modules/contrib themes/contrib libraries

backup-db:
	drush sql-dump > $(BACKUP_DIR)/$(DB_NAME)_$(NOW).sql
	#mkdir -p $(BACKUP_DIR)
	#$(MYSQLDUMP) $(DB_NAME) | gzip > $(BACKUP_DIR)/$(DB_NAME)_$(NOW).sql.gz

drush-make:
	drush make --working-copy --no-core --contrib-destination=. -y $(DRUSH_MAKEFILE)

clear-cache:
	drush cc all

reset-admin-password:
	drush upwd $(ADMIN_USER) --password=$(ADMIN_PASSWORD)

disable-preprocess-css-js:
	drush vset -y preprocess_css 0
	drush vset -y preprocess_js 0

search-api-reindex:
	drush search-api-reindex $(INDEXES)
	drush search-api-index $(INDEXES)

#create-watchdog-table:
#	$(MYSQL) $(DB_NAME) -e "CREATE TABLE watchdog (wid int(11) NOT NULL AUTO_INCREMENT COMMENT 'Primary Key: Unique watchdog event ID.', uid int(11) NOT NULL DEFAULT '0' COMMENT 'The users.uid of the user who triggered the event.', type varchar(64) NOT NULL DEFAULT '' COMMENT 'Type of log message, for example \"user\" or \"page not found.\"', message longtext NOT NULL COMMENT 'Text of log message to be passed into the t() function.', variables longblob NOT NULL COMMENT 'Serialized array of variables that match the message string and that is passed into the t() function.', severity tinyint(3) unsigned NOT NULL DEFAULT '0' COMMENT 'The severity level of the event; ranges from 0 (Emergency) to 7 (Debug)', link varchar(255) DEFAULT '' COMMENT 'Link to view the result of the event.', location text NOT NULL COMMENT 'URL of the origin of the event.', referer text COMMENT 'URL of referring page.', hostname varchar(128) NOT NULL DEFAULT '' COMMENT 'Hostname of the user who triggered the event.', timestamp int(11) NOT NULL DEFAULT '0' COMMENT 'Unix timestamp of when event occurred.', PRIMARY KEY (wid), KEY type (type), KEY uid (uid), KEY severity (severity)) ENGINE=MyISAM AUTO_INCREMENT=5681 DEFAULT CHARSET=utf8 COMMENT='Table that contains logs of all system events.'"

setup: backup-db drush-make disable-preprocess-css-js reset-admin-password clear-cache
