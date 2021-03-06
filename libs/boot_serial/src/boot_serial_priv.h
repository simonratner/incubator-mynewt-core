/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef __BOOTUTIL_SERIAL_PRIV_H__
#define __BOOTUTIL_SERIAL_PRIV_H__

/*
 * From shell.h
 */
#define SHELL_NLIP_PKT_START1   6
#define SHELL_NLIP_PKT_START2   9

/*
 * From newtmgr.h
 */
#define NMGR_ERR_EINVAL         3

#define NMGR_OP_READ            0
#define NMGR_OP_WRITE           2

#define NMGR_GROUP_ID_DEFAULT   0
#define NMGR_GROUP_ID_IMAGE     1

#define NMGR_ID_CONS_ECHO_CTRL  1
#define NMGR_ID_RESET           5

struct nmgr_hdr {
    uint8_t  nh_op;             /* NMGR_OP_XXX */
    uint8_t  nh_flags;
    uint16_t nh_len;            /* length of the payload */
    uint16_t nh_group;          /* NMGR_GROUP_XXX */
    uint8_t  nh_seq;            /* sequence number */
    uint8_t  nh_id;             /* message ID within group */
};

/*
 * From imgmgr.h
 */
#define IMGMGR_NMGR_OP_LIST             0
#define IMGMGR_NMGR_OP_UPLOAD           1


void boot_serial_input(char *buf, int len);

#endif /*  __BOOTUTIL_SERIAL_PRIV_H__ */
