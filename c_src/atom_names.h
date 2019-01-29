// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// General
ATOM_MAP(ok);
ATOM_MAP(error);

ATOM_MAP(true);
ATOM_MAP(false);

ATOM_MAP(ready);

ATOM_MAP(not_found);

ATOM_MAP(erlfdb_future);
ATOM_MAP(erlfdb_cluster);
ATOM_MAP(erlfdb_database);
ATOM_MAP(erlfdb_transaction);

ATOM_MAP(invalid_future_type);


// Network Options
ATOM_MAP(local_address);
ATOM_MAP(cluster_file);
ATOM_MAP(trace_enable);
ATOM_MAP(trace_roll_size);
ATOM_MAP(trace_max_logs_size);
ATOM_MAP(trace_log_group);
ATOM_MAP(knob);
ATOM_MAP(tls_plugin);
ATOM_MAP(tls_cert_bytes);
ATOM_MAP(tls_cert_path);
ATOM_MAP(tls_key_bytes);
ATOM_MAP(tls_key_path);
ATOM_MAP(tls_verify_peers);
ATOM_MAP(buggify_enable);
ATOM_MAP(buggify_disable);
ATOM_MAP(buggify_section_activated_probability);
ATOM_MAP(buggify_section_fired_probability);
ATOM_MAP(tls_ca_bytes);
ATOM_MAP(tls_ca_path);
ATOM_MAP(tls_password);
ATOM_MAP(disable_multi_version_client_api);
ATOM_MAP(callbacks_on_external_threads);
ATOM_MAP(external_client_library);
ATOM_MAP(external_client_directory);
ATOM_MAP(disable_local_client);
ATOM_MAP(disable_client_statistics_logging);
ATOM_MAP(enable_slow_task_profiling);


// Cluster Options
// There aren't any...


// Database Options
ATOM_MAP(location_cache_size);
ATOM_MAP(max_watches);
ATOM_MAP(machine_id);
ATOM_MAP(datacenter_id);


// Transaction Options
ATOM_MAP(causal_write_risky);
ATOM_MAP(causal_read_risky);
ATOM_MAP(causal_read_disable);
ATOM_MAP(next_write_no_write_conflict_range);
ATOM_MAP(read_your_writes_disable);
ATOM_MAP(read_ahead_disable);
ATOM_MAP(durability_datacenter);
ATOM_MAP(durability_risky);
ATOM_MAP(durability_dev_null_is_web_scale);
ATOM_MAP(priority_system_immediate);
ATOM_MAP(priority_batch);
ATOM_MAP(initialize_new_database);
ATOM_MAP(access_system_keys);
ATOM_MAP(read_system_keys);
ATOM_MAP(debug_retry_logging);
ATOM_MAP(transaction_logging_enable);
ATOM_MAP(timeout);
ATOM_MAP(retry_limit);
ATOM_MAP(max_retry_delay);
ATOM_MAP(snapshot_ryw_enable);
ATOM_MAP(snapshot_ryw_disable);
ATOM_MAP(lock_aware);
ATOM_MAP(used_during_commit_protection_disable);
ATOM_MAP(read_lock_aware);
