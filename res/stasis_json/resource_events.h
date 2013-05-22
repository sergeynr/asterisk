/*
 * Asterisk -- An open source telephony toolkit.
 *
 * Copyright (C) 2012 - 2013, Digium, Inc.
 *
 * David M. Lee, II <dlee@digium.com>
 *
 * See http://www.asterisk.org for more information about
 * the Asterisk project. Please do not directly contact
 * any of the maintainers of this project for assistance;
 * the project provides a web site, mailing lists and IRC
 * channels for your use.
 *
 * This program is free software, distributed under the terms of
 * the GNU General Public License Version 2. See the LICENSE file
 * at the top of the source tree.
 */

/*! \file
 *
 * \brief Generated file - declares stubs to be implemented in
 * res/stasis_json/resource_events.c
 *
 * WebSocket resource
 *
 * \author David M. Lee, II <dlee@digium.com>
 */

/*
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * !!!!!                               DO NOT EDIT                        !!!!!
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * This file is generated by a mustache template. Please see the original
 * template in rest-api-templates/stasis_http_resource.h.mustache
 */

#ifndef _ASTERISK_RESOURCE_EVENTS_H
#define _ASTERISK_RESOURCE_EVENTS_H

struct ast_channel_snapshot;
struct ast_bridge_snapshot;

/*!
 * \brief User-generated event with additional user-defined fields in the object.
 *
 * \param channel The channel that signaled the user event.
 * \param blob JSON blob containing the following parameters:
 * - eventname: string - The name of the user event. (required)
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_channel_userevent_create(
	struct ast_channel_snapshot *channel_snapshot,
	struct ast_json *blob
	);

/*!
 * \brief Notification that a bridge has been created.
 *
 * \param bridge The bridge to be used to generate this event
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_bridge_created_create(
	struct ast_bridge_snapshot *bridge_snapshot
	);

/*!
 * \brief Notification that a channel has been destroyed.
 *
 * \param channel The channel to be used to generate this event
 * \param blob JSON blob containing the following parameters:
 * - cause: integer - Integer representation of the cause of the hangup (required)
 * - cause_txt: string - Text representation of the cause of the hangup (required)
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_channel_destroyed_create(
	struct ast_channel_snapshot *channel_snapshot,
	struct ast_json *blob
	);

/*!
 * \brief Some part of channel state changed.
 *
 * \param channel The channel to be used to generate this event
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_channel_snapshot_create(
	struct ast_channel_snapshot *channel_snapshot
	);

/*!
 * \brief Channel changed Caller ID.
 *
 * \param channel The channel that changed Caller ID.
 * \param blob JSON blob containing the following parameters:
 * - caller_presentation_txt: string - The text representation of the Caller Presentation value. (required)
 * - caller_presentation: integer - The integer representation of the Caller Presentation value. (required)
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_channel_caller_id_create(
	struct ast_channel_snapshot *channel_snapshot,
	struct ast_json *blob
	);

/*!
 * \brief A hangup was requested on the channel.
 *
 * \param channel The channel on which the hangup was requested.
 * \param blob JSON blob containing the following parameters:
 * - soft: boolean - Whether the hangup request was a soft hangup request.
 * - cause: integer - Integer representation of the cause of the hangup.
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_channel_hangup_request_create(
	struct ast_channel_snapshot *channel_snapshot,
	struct ast_json *blob
	);

/*!
 * \brief Notification that a bridge has been destroyed.
 *
 * \param bridge The bridge to be used to generate this event
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_bridge_destroyed_create(
	struct ast_bridge_snapshot *bridge_snapshot
	);

/*!
 * \brief Notification that another WebSocket has taken over for an application.
 *
 * \param blob JSON blob containing the following parameters:
 * - application: string  (required)
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_application_replaced_create(
	struct ast_json *blob
	);

/*!
 * \brief Channel variable changed.
 *
 * \param channel The channel on which the variable was set.
 * \param blob JSON blob containing the following parameters:
 * - variable: string - The variable that changed. (required)
 * - value: string - The new value of the variable. (required)
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_channel_varset_create(
	struct ast_channel_snapshot *channel_snapshot,
	struct ast_json *blob
	);

/*!
 * \brief Notification that a channel has left a bridge.
 *
 * \param channel The channel to be used to generate this event
 * \param bridge The bridge to be used to generate this event
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_channel_left_bridge_create(
	struct ast_bridge_snapshot *bridge_snapshot,
	struct ast_channel_snapshot *channel_snapshot
	);

/*!
 * \brief Notification that a channel has been created.
 *
 * \param channel The channel to be used to generate this event
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_channel_created_create(
	struct ast_channel_snapshot *channel_snapshot
	);

/*!
 * \brief Notification that a channel has entered a Stasis appliction.
 *
 * \param channel The channel to be used to generate this event
 * \param blob JSON blob containing the following parameters:
 * - args: List[string] - Arguments to the application (required)
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_stasis_start_create(
	struct ast_channel_snapshot *channel_snapshot,
	struct ast_json *blob
	);

/*!
 * \brief Channel changed location in the dialplan.
 *
 * \param channel The channel that changed dialplan location.
 * \param blob JSON blob containing the following parameters:
 * - application: string - The application that the channel is currently in. (required)
 * - application_data: string - The data that was passed to the application when it was invoked. (required)
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_channel_dialplan_create(
	struct ast_channel_snapshot *channel_snapshot,
	struct ast_json *blob
	);

/*!
 * \brief Notification of a channel's state change.
 *
 * \param channel The channel to be used to generate this event
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_channel_state_change_create(
	struct ast_channel_snapshot *channel_snapshot
	);

/*!
 * \brief Notification that a channel has entered a bridge.
 *
 * \param channel The channel to be used to generate this event
 * \param bridge The bridge to be used to generate this event
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_channel_entered_bridge_create(
	struct ast_bridge_snapshot *bridge_snapshot,
	struct ast_channel_snapshot *channel_snapshot
	);

/*!
 * \brief DTMF received on a channel.
 *
 * \param channel The channel on which DTMF was received
 * \param blob JSON blob containing the following parameters:
 * - digit: string - DTMF digit received (0-9, A-E, # or *) (required)
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_channel_dtmf_received_create(
	struct ast_channel_snapshot *channel_snapshot,
	struct ast_json *blob
	);

/*!
 * \brief Notification that a channel has left a Stasis appliction.
 *
 * \param channel The channel to be used to generate this event
 *
 * \retval NULL on error
 * \retval JSON (ast_json) describing the event
 */
struct ast_json *stasis_json_event_stasis_end_create(
	struct ast_channel_snapshot *channel_snapshot
	);

/*
 * JSON models
 *
 * ChannelUserevent
 * - eventname: string (required)
 * BridgeCreated
 * ChannelDestroyed
 * - cause: integer (required)
 * - cause_txt: string (required)
 * ChannelSnapshot
 * ChannelCallerId
 * - caller_presentation_txt: string (required)
 * - caller_presentation: integer (required)
 * ChannelHangupRequest
 * - soft: boolean
 * - cause: integer
 * BridgeDestroyed
 * ApplicationReplaced
 * - application: string (required)
 * ChannelVarset
 * - variable: string (required)
 * - value: string (required)
 * ChannelLeftBridge
 * ChannelCreated
 * StasisStart
 * - args: List[string] (required)
 * ChannelDialplan
 * - application: string (required)
 * - application_data: string (required)
 * ChannelStateChange
 * ChannelEnteredBridge
 * ChannelDtmfReceived
 * - digit: string (required)
 * Event
 * - stasis_start: StasisStart
 * - channel_created: ChannelCreated
 * - channel_destroyed: ChannelDestroyed
 * - channel_entered_bridge: ChannelEnteredBridge
 * - channel_left_bridge: ChannelLeftBridge
 * - channel_dialplan: ChannelDialplan
 * - channel_varset: ChannelVarset
 * - application_replaced: ApplicationReplaced
 * - channel_state_change: ChannelStateChange
 * - bridge_created: BridgeCreated
 * - application: string (required)
 * - channel_hangup_request: ChannelHangupRequest
 * - channel_userevent: ChannelUserevent
 * - channel_snapshot: ChannelSnapshot
 * - channel_dtmf_received: ChannelDtmfReceived
 * - channel_caller_id: ChannelCallerId
 * - bridge_destroyed: BridgeDestroyed
 * - stasis_end: StasisEnd
 * StasisEnd
 */

#endif /* _ASTERISK_RESOURCE_EVENTS_H */