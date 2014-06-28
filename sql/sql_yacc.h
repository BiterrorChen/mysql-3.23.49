typedef union {
  int  num;
  ulong ulong_num;
  ulonglong ulonglong_num;
  LEX_STRING lex_str;
  LEX_STRING *lex_str_ptr;
  LEX_SYMBOL symbol;
  Table_ident *table;
  char *simple_string;
  Item *item;
  List<Item> *item_list;
  List<String> *string_list;
  Key::Keytype key_type;
  enum db_type db_type;
  enum row_type row_type;
  enum enum_tx_isolation tx_isolation;
  String *string;
  key_part_spec *key_part;
  TABLE_LIST *table_list;
  udf_func *udf;
  interval_type interval;
  LEX_USER *lex_user;
  enum Item_udftype udf_type;
} YYSTYPE;
#define	END_OF_INPUT	257
#define	EQ	258
#define	EQUAL_SYM	259
#define	GE	260
#define	GT_SYM	261
#define	LE	262
#define	LT	263
#define	NE	264
#define	IS	265
#define	SHIFT_LEFT	266
#define	SHIFT_RIGHT	267
#define	SET_VAR	268
#define	AVG_SYM	269
#define	COUNT_SYM	270
#define	MAX_SYM	271
#define	MIN_SYM	272
#define	SUM_SYM	273
#define	STD_SYM	274
#define	ADD	275
#define	ALTER	276
#define	AFTER_SYM	277
#define	ANALYZE_SYM	278
#define	BEGIN_SYM	279
#define	CHANGE	280
#define	COMMENT_SYM	281
#define	COMMIT_SYM	282
#define	CREATE	283
#define	CROSS	284
#define	DELETE_SYM	285
#define	DO_SYM	286
#define	DROP	287
#define	INSERT	288
#define	FLUSH_SYM	289
#define	SELECT_SYM	290
#define	MASTER_SYM	291
#define	REPAIR	292
#define	RESET_SYM	293
#define	PURGE	294
#define	SLAVE	295
#define	START_SYM	296
#define	STOP_SYM	297
#define	TRUNCATE_SYM	298
#define	ROLLBACK_SYM	299
#define	OPTIMIZE	300
#define	SHOW	301
#define	UPDATE_SYM	302
#define	KILL_SYM	303
#define	LOAD	304
#define	LOCK_SYM	305
#define	LOCKS_SYM	306
#define	UNLOCK_SYM	307
#define	ACTION	308
#define	AGGREGATE_SYM	309
#define	ALL	310
#define	AND	311
#define	AS	312
#define	ASC	313
#define	AUTO_INC	314
#define	AUTOCOMMIT	315
#define	AVG_ROW_LENGTH	316
#define	BACKUP_SYM	317
#define	BERKELEY_DB_SYM	318
#define	BINARY	319
#define	BIT_SYM	320
#define	BOOL_SYM	321
#define	BOTH	322
#define	BY	323
#define	CASCADE	324
#define	CHECKSUM_SYM	325
#define	CHECK_SYM	326
#define	COMMITTED_SYM	327
#define	COLUMNS	328
#define	COLUMN_SYM	329
#define	CONCURRENT	330
#define	CONSTRAINT	331
#define	DATABASES	332
#define	DATA_SYM	333
#define	DEFAULT	334
#define	DELAYED_SYM	335
#define	DELAY_KEY_WRITE_SYM	336
#define	DESC	337
#define	DESCRIBE	338
#define	DISTINCT	339
#define	DYNAMIC_SYM	340
#define	ENCLOSED	341
#define	ESCAPED	342
#define	ESCAPE_SYM	343
#define	EXISTS	344
#define	EXTENDED_SYM	345
#define	FILE_SYM	346
#define	FIRST_SYM	347
#define	FIXED_SYM	348
#define	FLOAT_NUM	349
#define	FOREIGN	350
#define	FROM	351
#define	FULL	352
#define	FULLTEXT_SYM	353
#define	GEMINI_SYM	354
#define	GEMINI_SPIN_RETRIES	355
#define	GLOBAL_SYM	356
#define	GRANT	357
#define	GRANTS	358
#define	GREATEST_SYM	359
#define	GROUP	360
#define	HAVING	361
#define	HEAP_SYM	362
#define	HEX_NUM	363
#define	HIGH_PRIORITY	364
#define	HOSTS_SYM	365
#define	IDENT	366
#define	IGNORE_SYM	367
#define	INDEX	368
#define	INFILE	369
#define	INNER_SYM	370
#define	INNOBASE_SYM	371
#define	INTO	372
#define	IN_SYM	373
#define	ISOLATION	374
#define	ISAM_SYM	375
#define	JOIN_SYM	376
#define	KEYS	377
#define	KEY_SYM	378
#define	LEADING	379
#define	LEAST_SYM	380
#define	LEVEL_SYM	381
#define	LEX_HOSTNAME	382
#define	LIKE	383
#define	LINES	384
#define	LOCAL_SYM	385
#define	LOGS_SYM	386
#define	LONG_NUM	387
#define	LONG_SYM	388
#define	LOW_PRIORITY	389
#define	MASTER_HOST_SYM	390
#define	MASTER_USER_SYM	391
#define	MASTER_LOG_FILE_SYM	392
#define	MASTER_LOG_POS_SYM	393
#define	MASTER_PASSWORD_SYM	394
#define	MASTER_PORT_SYM	395
#define	MASTER_CONNECT_RETRY_SYM	396
#define	MATCH	397
#define	MAX_ROWS	398
#define	MEDIUM_SYM	399
#define	MERGE_SYM	400
#define	MIN_ROWS	401
#define	MYISAM_SYM	402
#define	NATIONAL_SYM	403
#define	NATURAL	404
#define	NCHAR_SYM	405
#define	NOT	406
#define	NO_SYM	407
#define	NULL_SYM	408
#define	NUM	409
#define	ON	410
#define	OPEN_SYM	411
#define	OPTION	412
#define	OPTIONALLY	413
#define	OR	414
#define	OR_OR_CONCAT	415
#define	ORDER_SYM	416
#define	OUTER	417
#define	OUTFILE	418
#define	DUMPFILE	419
#define	PACK_KEYS_SYM	420
#define	PARTIAL	421
#define	PRIMARY_SYM	422
#define	PRIVILEGES	423
#define	PROCESS	424
#define	PROCESSLIST_SYM	425
#define	RAID_0_SYM	426
#define	RAID_STRIPED_SYM	427
#define	RAID_TYPE	428
#define	RAID_CHUNKS	429
#define	RAID_CHUNKSIZE	430
#define	READ_SYM	431
#define	REAL_NUM	432
#define	REFERENCES	433
#define	REGEXP	434
#define	RELOAD	435
#define	RENAME	436
#define	REPEATABLE_SYM	437
#define	RESTORE_SYM	438
#define	RESTRICT	439
#define	REVOKE	440
#define	ROWS_SYM	441
#define	ROW_FORMAT_SYM	442
#define	ROW_SYM	443
#define	SET	444
#define	SERIALIZABLE_SYM	445
#define	SESSION_SYM	446
#define	SHUTDOWN	447
#define	STARTING	448
#define	STATUS_SYM	449
#define	STRAIGHT_JOIN	450
#define	TABLES	451
#define	TABLE_SYM	452
#define	TEMPORARY	453
#define	TERMINATED	454
#define	TEXT_STRING	455
#define	TO_SYM	456
#define	TRAILING	457
#define	TRANSACTION_SYM	458
#define	TYPE_SYM	459
#define	FUNC_ARG0	460
#define	FUNC_ARG1	461
#define	FUNC_ARG2	462
#define	FUNC_ARG3	463
#define	UDF_RETURNS_SYM	464
#define	UDF_SONAME_SYM	465
#define	UDF_SYM	466
#define	UNCOMMITTED_SYM	467
#define	UNION_SYM	468
#define	UNIQUE_SYM	469
#define	USAGE	470
#define	USE_SYM	471
#define	USING	472
#define	VALUES	473
#define	VARIABLES	474
#define	WHERE	475
#define	WITH	476
#define	WRITE_SYM	477
#define	COMPRESSED_SYM	478
#define	BIGINT	479
#define	BLOB_SYM	480
#define	CHAR_SYM	481
#define	CHANGED	482
#define	COALESCE	483
#define	DATETIME	484
#define	DATE_SYM	485
#define	DECIMAL_SYM	486
#define	DOUBLE_SYM	487
#define	ENUM	488
#define	FAST_SYM	489
#define	FLOAT_SYM	490
#define	INT_SYM	491
#define	LIMIT	492
#define	LONGBLOB	493
#define	LONGTEXT	494
#define	MEDIUMBLOB	495
#define	MEDIUMINT	496
#define	MEDIUMTEXT	497
#define	NUMERIC_SYM	498
#define	PRECISION	499
#define	QUICK	500
#define	REAL	501
#define	SMALLINT	502
#define	STRING_SYM	503
#define	TEXT_SYM	504
#define	TIMESTAMP	505
#define	TIME_SYM	506
#define	TINYBLOB	507
#define	TINYINT	508
#define	TINYTEXT	509
#define	UNSIGNED	510
#define	VARBINARY	511
#define	VARCHAR	512
#define	VARYING	513
#define	ZEROFILL	514
#define	AGAINST	515
#define	ATAN	516
#define	BETWEEN_SYM	517
#define	BIT_AND	518
#define	BIT_OR	519
#define	CASE_SYM	520
#define	CONCAT	521
#define	CONCAT_WS	522
#define	CURDATE	523
#define	CURTIME	524
#define	DATABASE	525
#define	DATE_ADD_INTERVAL	526
#define	DATE_SUB_INTERVAL	527
#define	DAY_HOUR_SYM	528
#define	DAY_MINUTE_SYM	529
#define	DAY_SECOND_SYM	530
#define	DAY_SYM	531
#define	DECODE_SYM	532
#define	ELSE	533
#define	ELT_FUNC	534
#define	ENCODE_SYM	535
#define	ENCRYPT	536
#define	EXPORT_SET	537
#define	EXTRACT_SYM	538
#define	FIELD_FUNC	539
#define	FORMAT_SYM	540
#define	FOR_SYM	541
#define	FROM_UNIXTIME	542
#define	GROUP_UNIQUE_USERS	543
#define	HOUR_MINUTE_SYM	544
#define	HOUR_SECOND_SYM	545
#define	HOUR_SYM	546
#define	IDENTIFIED_SYM	547
#define	IF	548
#define	INSERT_ID	549
#define	INTERVAL_SYM	550
#define	LAST_INSERT_ID	551
#define	LEFT	552
#define	LOCATE	553
#define	MAKE_SET_SYM	554
#define	MINUTE_SECOND_SYM	555
#define	MINUTE_SYM	556
#define	MODE_SYM	557
#define	MODIFY_SYM	558
#define	MONTH_SYM	559
#define	NOW_SYM	560
#define	PASSWORD	561
#define	POSITION_SYM	562
#define	PROCEDURE	563
#define	RAND	564
#define	REPLACE	565
#define	RIGHT	566
#define	ROUND	567
#define	SECOND_SYM	568
#define	SHARE_SYM	569
#define	SUBSTRING	570
#define	SUBSTRING_INDEX	571
#define	TRIM	572
#define	UDA_CHAR_SUM	573
#define	UDA_FLOAT_SUM	574
#define	UDA_INT_SUM	575
#define	UDF_CHAR_FUNC	576
#define	UDF_FLOAT_FUNC	577
#define	UDF_INT_FUNC	578
#define	UNIQUE_USERS	579
#define	UNIX_TIMESTAMP	580
#define	USER	581
#define	WEEK_SYM	582
#define	WHEN_SYM	583
#define	WORK_SYM	584
#define	YEAR_MONTH_SYM	585
#define	YEAR_SYM	586
#define	YEARWEEK	587
#define	BENCHMARK_SYM	588
#define	END	589
#define	THEN_SYM	590
#define	SQL_BIG_TABLES	591
#define	SQL_BIG_SELECTS	592
#define	SQL_SELECT_LIMIT	593
#define	SQL_MAX_JOIN_SIZE	594
#define	SQL_LOG_BIN	595
#define	SQL_LOG_OFF	596
#define	SQL_LOG_UPDATE	597
#define	SQL_LOW_PRIORITY_UPDATES	598
#define	SQL_SMALL_RESULT	599
#define	SQL_BIG_RESULT	600
#define	SQL_BUFFER_RESULT	601
#define	SQL_WARNINGS	602
#define	SQL_AUTO_IS_NULL	603
#define	SQL_SAFE_UPDATES	604
#define	SQL_QUOTE_SHOW_CREATE	605
#define	SQL_SLAVE_SKIP_COUNTER	606
#define	NEG	607
